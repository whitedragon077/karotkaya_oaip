#include "reader_window.h"
#include "ui_reader_window.h"

reader_window::reader_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reader_window)
{
    ui->setupUi(this);

    connect(ui->readerlist, &QListWidget::itemClicked, this, &reader_window::on_listWidget_itemClicked);
}

reader_window::~reader_window()
{
    delete ui;
}

void reader_window::on_addreader_clicked()
{
 bool cancel;
    QString name = QInputDialog::getText(this, "Введите имя читателя", "Имя:", QLineEdit::Normal, "", &cancel);
    if (cancel) {
        QString lastName = QInputDialog::getText(this, "Введите фамилию читателя", "Фамилия:", QLineEdit::Normal, "", &cancel);

        if (cancel) {
            QString secondName = QInputDialog::getText(this, "Введите отчество читателя", "Отчество:", QLineEdit::Normal, "", &cancel);

            if (cancel) {
                QString address = QInputDialog::getText(this, "Введите адрес читателя", "Адрес:", QLineEdit::Normal, "", &cancel);

                if (cancel) {
                    int teleNumber = QInputDialog::getInt(this, "Введите номер телефона читателя", "Номер телефона:", 0, 0, INT_MAX, 1, &cancel);

                    if (cancel) {
                        QString passportNumber = QInputDialog::getText(this, "Введите номер паспорта читателя", "Номер паспорта:", QLineEdit::Normal, "", &cancel);

                        if (cancel) {
                            ReaderList* reader = new ReaderList;
                            reader->setName(name);
                            reader->setLastName(lastName);
                            reader->setSecondName(secondName);
                            reader->setAdress(address);
                            reader->setTeleNumber(teleNumber);
                            reader->setPasportNumber(passportNumber);

                            readers.push_back(reader);

                            QListWidgetItem* item = new QListWidgetItem;
                            item->setText(reader->getName());
                            item->setData(Qt::UserRole, QVariant::fromValue<ReaderList*>(reader));
                            ui->readerlist->addItem(item);

                            saveReaderDataToFile("readers.txt");

                        }
                    }
                }
            }
        }
    }
}



void reader_window::on_deletereader_clicked()
{

    QListWidgetItem* selectedItem = ui->readerlist->currentItem();
    if (selectedItem) {
        int index = ui->readerlist->row(selectedItem);

        delete ui->readerlist->takeItem(index);

        ReaderList* reader = readers[index];
        readers.erase(readers.begin() + index);


        delete reader;
    }
}



void reader_window::on_searchReader_textChanged(const QString &text)
{

        ui->readerlist->clear();

            if (text.isEmpty()) {
            for (ReaderList* reader : readers) {
                QListWidgetItem* item = new QListWidgetItem;
                item->setText(reader->getName());
                item->setData(Qt::UserRole, QVariant::fromValue<ReaderList*>(reader));
                ui->readerlist->addItem(item);
            }
        } else {
            for (ReaderList* reader : readers) {
                if (reader->getName().contains(text, Qt::CaseInsensitive)) {
                    QListWidgetItem* item = new QListWidgetItem;
                    item->setText(reader->getName());
                    item->setData(Qt::UserRole, QVariant::fromValue<ReaderList*>(reader));
                    ui->readerlist->addItem(item);
                }
            }
        }
}

void reader_window::saveReaderDataToFile(const QString& filePath)
{

            QFile file(filePath);
            if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
                QTextStream out(&file);
                for (const auto& reader : readers) {
                    out << reader->getName() << ";"
                        << reader->getLastName() << ";"
                        << reader->getSecondName() << ";"
                        << reader->getAdress() << ";"
                        << reader->getTeleNumber() << ";"
                        << reader->getPasportNumber() << ";";

                    // Записываем взятые книги для читателя
                    const std::vector<Book*>& borrowedBooks = reader->getBorrowedBooks();
                    for (const auto& book : borrowedBooks) {
                out << book->getName() << ",";
                    }
                    out << "\n";
                }
                file.close();
            }

}

void reader_window::removeLineFromFile(const QString& filePath, int lineNumberToRemove)
{
        QFile file(filePath);
        if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
            qDebug() << "Failed to open the file:" << filePath;
            return;
        }

        QTextStream stream(&file);
        QStringList updatedLines;

        int lineNumber = 1;
        while (!stream.atEnd()) {
            QString line = stream.readLine();
            if (lineNumber != lineNumberToRemove) {
                updatedLines.append(line);
            }
            lineNumber++;
        }

        file.resize(0);

        for (const QString& line : updatedLines) {
            stream << line << Qt::endl;
        }

        file.close();
}

void reader_window::on_listWidget_itemClicked(QListWidgetItem* item)
{
        ReaderList* reader = item->data(Qt::UserRole).value<ReaderList*>();

ui->readerparam->clear();

if (reader != nullptr) {

    QString paramInfo = "Имя: " + reader->getName() + "\n";
    paramInfo += "Фамилия: " + reader->getLastName() + "\n";
    paramInfo += "Отчество: " + reader->getSecondName() + "\n";
    paramInfo += "Адрес: " + reader->getAdress() + "\n";
    paramInfo += "Номер телефона: " + QString::number(reader->getTeleNumber()) + "\n";
    paramInfo += "Номер паспорта: " + reader->getPasportNumber() + "\n";

    ui->readerparam->addItem(paramInfo);
}
}

std::vector<Book*> reader_window::loadAvailableBooksFromFile(const QString& filePath)

{
std::vector<Book*> availableBooks;


QFile file(filePath);
if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
    QTextStream in(&file);
    while (!in.atEnd()) {
                QString line = in.readLine();
                QStringList bookData = line.split(';');

                if (bookData.size() == 13) {
                Book* book = new Book;
                book->setName(bookData[0]);
                book->setWriter(bookData[1]);
                book->setGenre(bookData[2]);
                book->setNumber(bookData[3].toInt());
                book->setIsbn(bookData[4].toInt());
                book->setPageAmount(bookData[5].toInt());
                book->setBookCover(bookData[6]);
                book->setHasIllustration(bookData[7]);
                book->setLanguage(bookData[8]);
                book->setBorrowed(bookData[9]);
                book->setPrice(bookData[10]);
                book->setPublicationYear(bookData[11].toInt());
                book->setInventoryNumber(bookData[12].toInt());

                availableBooks.push_back(book);
                }
    }

    file.close();
}

return availableBooks;
}


void reader_window::on_addresourse_clicked()
{
QListWidgetItem* selectedReaderItem = ui->readerlist->currentItem();
    if (selectedReaderItem) {
        ReaderList* reader = selectedReaderItem->data(Qt::UserRole).value<ReaderList*>();

        QDialog dialog(this);
        QVBoxLayout layout(&dialog);
        QLabel titleLabel("Введите название или номер книги:", &dialog);
        QLineEdit inputLineEdit(&dialog);
        QPushButton addButton("Добавить", &dialog);
        layout.addWidget(&titleLabel);
        layout.addWidget(&inputLineEdit);
        layout.addWidget(&addButton);

        QObject::connect(&addButton, &QPushButton::clicked, [&]() {
            QString inputText = inputLineEdit.text();

            QString filePath = "D:/KURSOVOI/library/files/books.txt";
            std::vector<Book*> availableBooks = loadAvailableBooksFromFile(filePath);

            Book* selectedBook = nullptr;
            for (const auto& book : availableBooks) {
                if (book->getName() == inputText || QString::number(book->getNumber()) == inputText) {
                    selectedBook = book;
                    break;
                }
            }

            if (selectedBook) {
                reader->addBorrowedBook(selectedBook);
                selectedBook->setBorrowed("арендована");

                QListWidgetItem* borrowedItem = new QListWidgetItem;
                borrowedItem->setText(selectedBook->getName());
                borrowedItem->setData(Qt::UserRole, QVariant::fromValue<Book*>(selectedBook));
                ui->borrowedlist->addItem(borrowedItem);

                QString borrowedParam = "Название: " + selectedBook->getName() + "\n";
                borrowedParam += "Автор: " + selectedBook->getWriter()+"\n";
                borrowedParam += "Год публикации: " + QString::number(selectedBook->getPublicationYear()) + "\n";
                borrowedParam += " номер: " + QString::number(selectedBook->getNumber()) + "\n";

                ui->borrowedparam->addItem(borrowedParam);
            } else {
                QMessageBox::information(this, "Ошибка", "Выбранная книга не существует.");
            }

            dialog.close();
        });

        dialog.exec();
    } else {
        QMessageBox::information(this, "Ошибка", "Не выбран читатель.");
    }
}


void reader_window::on_deleteresourse_clicked()
{

}

void reader_window::loadReaderDataFromFile(const QString& filePath)
{
    QFile file(filePath);

    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);

        while (!in.atEnd()) {
                QString line = in.readLine();
                QStringList data = line.split(";");

                if (data.size() == 5) {

                ReaderList* reader = new ReaderList;
                reader->setName(data[0]);
                reader->setLastName(data[1]);
                reader->setAdress(data[2]);
                reader->setTeleNumber(data[3].toInt());
                reader->setPasportNumber(data[4]);

                // Get the borrowed books data
                QStringList borrowedBooksData = data[5].split(",");
                for (const QString& bookData : borrowedBooksData) {
                    QStringList bookInfo = bookData.split(":");
                    if (bookInfo.size() == 1) {
                        QString bookName = bookInfo[0];


                        // Create a new BorrowedBook object
                        Book* borrowedBook = new Book;
                        borrowedBook->setName(bookName);

                        // Add the borrowed book to the reader's list of borrowed books
                        reader->addBorrowedBook(borrowedBook);
                    }
                }

                // Add the reader to the list
                readers.push_back(reader);

                // Add the reader's name to the list widget
                QListWidgetItem* item = new QListWidgetItem;
                item->setText(reader->getName());
                item->setData(Qt::UserRole, QVariant::fromValue<ReaderList*>(reader));
                ui->readerlist->addItem(item);
                }
        }
    }
}

