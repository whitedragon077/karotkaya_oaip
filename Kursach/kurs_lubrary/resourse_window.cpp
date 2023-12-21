#include "resourse_window.h"
#include "ui_resourse_window.h"


resourse_window::resourse_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::resourse_window)
{

    ui->setupUi(this);

    QString filebookPath = "D:/KURSOVOI/library/files/books.txt";
    loadDataFromFile(filebookPath);

    QString filemultiPath = "D:/KURSOVOI/library/files/multimedia.txt";
    loadmultiDataFromFile(filemultiPath);

    QString filecomicPath = "D:/KURSOVOI/library/files/comic.txt";
    loadComicDataFromFile(filecomicPath);

    connect(ui->booklist, &QListWidget::itemClicked, this, &resourse_window::on_listWidget_itemClicked);
    connect(ui->multimedialist, &QListWidget::itemClicked, this, &resourse_window::on_multiWidget_itemClicked);
    connect(ui->comiclist, &QListWidget::itemClicked, this, &resourse_window::on_comicWidget_itemClicked);
    connect(ui->searchBookLine, &QLineEdit::textChanged, this, &resourse_window::on_searchBookLine_textChanged);
    connect(ui->LineMultimedia, &QLineEdit::textChanged, this, &resourse_window::on_searchMultimediaLine_textChanged);
    connect(ui->LineComic, &QLineEdit::textChanged, this, &resourse_window::on_searchComicLine_textChanged);
}

resourse_window::~resourse_window()
{
    delete ui;
}

void resourse_window::on_add_book_clicked()
{

 bool cancel;
    QString name = QInputDialog::getText(this, "Введите название книги", "Название:", QLineEdit::Normal, "", &cancel);

    if (cancel) {
        QString writer = QInputDialog::getText(this, "Введите автора книги", "Автор:", QLineEdit::Normal, "", &cancel);

        if (cancel) {
            QString genre = QInputDialog::getText(this, "Введите жанр книги", "Жанр:", QLineEdit::Normal, "", &cancel);

            if (cancel) {
            int number = QInputDialog::getInt(this, "Введите номер книги", "Номер:", 0, 0, INT_MAX, 1, &cancel);


            if (cancel) {
                QString language = QInputDialog::getText(this, "Введите язык, на котором написана книга", "Язык:", QLineEdit::Normal, "", &cancel);

                if (cancel) {
                    QString borrowed = QInputDialog::getText(this, "Введите статус книги : арендована или не арендована", "Статус:", QLineEdit::Normal, "", &cancel);

                if (cancel) {
                    QString price = QInputDialog::getText(this, "Введите цену книги", "Цена:", QLineEdit::Normal, "", &cancel);

                    if (cancel) {
                        int publicationYear = QInputDialog::getInt(this, "Введите год издания книги", "Год издания:", 0, 0, INT_MAX, 1, &cancel);

            if (cancel) {
            int Inventorynumber = QInputDialog::getInt(this, "Введите инвентарный номер книги", "Инвентарный номер:", 0, 0, INT_MAX, 1, &cancel);

            if (cancel) {
                Book* book = new Book;
                book->setName(name);
                book->setWriter(writer);
                book->setGenre(genre);
                book->setNumber(number);
                book->setLanguage(language);
                book->setBorrowed(borrowed);
                book->setPrice(price);
                book->setPublicationYear(publicationYear);
                book->setInventoryNumber(Inventorynumber);

                bool ok;
                int isbn = QInputDialog::getInt(this, "Характеристики книги", "ISBN:", 0, 0, INT_MAX, 1, &ok);
                if (ok) {
                    int pageAmount = QInputDialog::getInt(this, "Характеристики книги", "Количество страниц:", 0, 0, INT_MAX, 1, &ok);
                    if (ok) {
                        QString bookCover = QInputDialog::getText(this, "Характеристики книги", "Тип обложки:", QLineEdit::Normal, "", &ok);
                        if (ok) {
                            QString hasIllustration = QInputDialog::getText(this, "Характеристики книги", "Наличие иллюстраций:", QLineEdit::Normal, "", &ok);
                            if (ok) {
                                book->setIsbn(isbn);
                                book->setPageAmount(pageAmount);
                                book->setBookCover(bookCover);
                                book->setHasIllustration(hasIllustration);

                                books.push_back(book);

                                QListWidgetItem* item = new QListWidgetItem;
                                item->setText(book->getName());
                                item->setData(Qt::UserRole, QVariant::fromValue<Book*>(book));
                                ui->booklist->addItem(item);


                                QString filePath = "D:/KURSOVOI/library/files/books.txt";
                                savebookDataToFile(filePath);
                             }
                        }
                    }
                }
            }

                             }
                           }
                        }
                    }
                }
            }
        }
    }
}

void resourse_window::on_button_close_clicked()
{
        close();
}


void resourse_window::on_listWidget_itemClicked(QListWidgetItem *item)
{
    Book* book = item->data(Qt::UserRole).value<Book*>();

    ui->List_param->clear();

    if (book != nullptr) {

        QString paramInfo = "Название: " + book->getName() + "\n";
        paramInfo += "Писатель: " + book->getWriter() + "\n";
        paramInfo += "Жанр: " + book->getGenre() + "\n";
        paramInfo += "Номер: " + QString::number(book->getNumber()) + "\n";
        paramInfo += "ISBN: " + QString::number(book->getIsbn()) + "\n";
        paramInfo += "Количество страниц: " + QString::number(book->getPageAmount()) + "\n";
        paramInfo += "Тип обложки: " + book->getBookCover() + "\n";
        paramInfo += "Наличие иллюстраций: " + book->getHasIllustration() + "\n";
        paramInfo += "Язык: " + book->getLanguage() + "\n";
        paramInfo += "Аренда книги: " + book->getBorrowed() + "\n";
        paramInfo += "Цена книги: " + book->getPrice() + "\n";
        paramInfo += "Год издания: " + QString::number(book->getPublicationYear()) + "\n";
        paramInfo += "Инвентарный номер: " + QString::number(book->getInventoryNumber()) + "\n";

        ui->List_param->addItem(paramInfo);
    }
}

void resourse_window::loadDataFromFile(const QString& filePath)
{
        QFile file(filePath);

        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
                          QTextStream in(&file);

                          while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList data = line.split(";");

            if (data.size() == 13) {
                Book* book = new Book;
                book->setName(data[0]);
                book->setWriter(data[1]);
                book->setGenre(data[2]);
                book->setNumber(data[3].toInt());
                book->setIsbn(data[4].toInt());
                book->setPageAmount(data[5].toInt());
                book->setBookCover(data[6]);
                book->setHasIllustration(data[7]);
                book->setLanguage(data[8]);
                book->setBorrowed(data[9]);
                book->setPrice(data[10]);
                book->setPublicationYear(data[11].toInt());
                book->setInventoryNumber(data[12].toInt());

                books.push_back(book);

                QListWidgetItem* item = new QListWidgetItem;
                item->setText(book->getName());
                item->setData(Qt::UserRole, QVariant::fromValue<Book*>(book));
                ui->booklist->addItem(item);
            }
                          }

                          file.close();
        }
}


void resourse_window::on_delete_book_clicked()
{
        QListWidgetItem* selectedItem = ui->booklist->currentItem();
        if (selectedItem != nullptr) {
          int index = ui->booklist->row(selectedItem);
          Book* book = books[index];

          QString filePath = "D:/KURSOVOI/library/files/books.txt";
          removeLineFromFile(filePath, index + 1);

          delete book;
          ui->List_param->clear();
          books.erase(books.begin() + index);
          delete selectedItem;

        for (int i = index; i < ui->booklist->count(); ++i) {
            QListWidgetItem* item = ui->booklist->item(i);
            if (item != nullptr) {
                Book* updatedBook = item->data(Qt::UserRole).value<Book*>();
                QString updatedText = QString::number(i + 1) + ". " + updatedBook->getName();
                item->setText(updatedText);

                delete updatedBook;
                }
            }
        }
}



void resourse_window::on_searchBookLine_textChanged(const QString &text)
{
        ui->booklist->clear();

        if (text.isEmpty())
        {
            for(Book* book : books)
            {
            QListWidgetItem* item = new QListWidgetItem;
            item->setText(book->getName());
            item->setData(Qt::UserRole, QVariant::fromValue<Book*>(book));
            ui->booklist->addItem(item);
            }

        }
        else
        {
            for(Book* book:books)
            {
            if(book->getName().contains(text, Qt::CaseInsensitive))
              {
                QListWidgetItem* item = new QListWidgetItem;
                item->setText(book->getName());
                item->setData(Qt::UserRole, QVariant::fromValue<Book*>(book));
                ui->booklist->addItem(item);
              }
            }
        }

}

void resourse_window::savebookDataToFile(const QString &filePath)
{
        QFile file(filePath);

        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&file);

            for (const auto& book : books) {
              out << book->getName() << ";";
              out << book->getWriter() << ";";
              out << book->getGenre() << ";";
              out << book->getNumber() << ";";
              out << book->getIsbn() << ";";
              out << book->getPageAmount() << ";";
              out << book->getBookCover() << ";";
              out << book->getHasIllustration() << ";";
              out<<book->getLanguage() << ";";
              out<<book->getBorrowed() << ";";
              out<<book->getPrice()<<";";
              out << book->getPublicationYear() << ";";
              out << book->getInventoryNumber() << "\n";
            }

            file.close();
        }
}

void resourse_window::removeLineFromFile(const QString& filePath, int lineNumberToRemove)
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

void resourse_window::on_add_multi_clicked()
{
 bool cancel;
    QString name = QInputDialog::getText(this, "Введите название ресурса", "Название:", QLineEdit::Normal, "", &cancel);

    if (cancel) {
        QString author = QInputDialog::getText(this, "Введите автора ресурса", "Автор:", QLineEdit::Normal, "", &cancel);

        if (cancel) {
            QString genre = QInputDialog::getText(this, "Введите жанр ресурса", "Жанр:", QLineEdit::Normal, "", &cancel);

            if (cancel) {
                int number = QInputDialog::getInt(this, "Введите номер ресурса", "Номер:", 0, 0, INT_MAX, 1, &cancel);

                if (cancel) {
                    QString language = QInputDialog::getText(this, "Введите язык, на котором написан ресурс", "Язык:", QLineEdit::Normal, "", &cancel);

                    if (cancel) {
                        QString borrowed = QInputDialog::getText(this, "Введите статус ресурса : арендован или не арендован", "Статус:", QLineEdit::Normal, "", &cancel);

                        if (cancel) {
                            QString price = QInputDialog::getText(this, "Введите цену ресурса", "Цена:", QLineEdit::Normal, "", &cancel);

                            if (cancel) {
                                int publicationYear = QInputDialog::getInt(this, "Введите год издания ресурса", "Год издания:", 0, 0, INT_MAX, 1, &cancel);

                                if (cancel) {
                                    int inventoryNumber = QInputDialog::getInt(this, "Введите инвентарный номер ресурса", "Инвентарный номер:", 0, 0, INT_MAX, 1, &cancel);

                                    if (cancel) {
                                        Multimedia* multimedia = new Multimedia;
                                        multimedia->setName(name);
                                        multimedia->setAuthor(author);
                                        multimedia->setGenre(genre);
                                        multimedia->setNumber(number);
                                        multimedia->setLanguage(language);
                                        multimedia->setBorrowed(borrowed);
                                        multimedia->setPrice(price);
                                        multimedia->setPublicationYear(publicationYear);
                                        multimedia->setInventoryNumber(inventoryNumber);

                                        bool ok;
                                        QString format = QInputDialog::getText(this, "Характеристики ресурса", "Формат:", QLineEdit::Normal, "", &ok);

                                                if (ok) {
                                                    QString resolution = QInputDialog::getText(this, "Характеристики ресурса", "Разрешение:", QLineEdit::Normal, "", &ok);

                                                    if (ok) {
                                                        multimedia->setFormat(format);

                                                        multimedia->setResolution(resolution);

                                                        multis.push_back(multimedia);

                                                        QListWidgetItem* item = new QListWidgetItem;
                                                        item->setText(multimedia->getName());
                                                        item->setData(Qt::UserRole, QVariant::fromValue<Multimedia*>(multimedia));
                                                        ui->multimedialist->addItem(item);

                                                        QString filePath = "D:/KURSOVOI/library/files/multimedia.txt";
                                                        saveMultimediaDataToFile(filePath);


                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void resourse_window::saveMultimediaDataToFile(const QString &filePath)
{
    QFile file(filePath);

    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);

        for (const auto& multimedia : multis) {
            out << multimedia->getName() << ";";
            out << multimedia->getAuthor() << ";";
            out << multimedia->getGenre() << ";";
            out << multimedia->getNumber() << ";";
            out << multimedia->getFormat() << ";";
            out << multimedia->getResolution() << ";";
            out << multimedia->getLanguage() << ";";
            out << multimedia->getBorrowed() << ";";
            out << multimedia->getPrice() << ";";
            out << multimedia->getPublicationYear() << ";";
            out << multimedia->getInventoryNumber() << "\n";
        }

        file.close();
    }
}

void resourse_window::on_multiWidget_itemClicked(QListWidgetItem *item)
{
    Multimedia* multimedia = item->data(Qt::UserRole).value<Multimedia*>();

    ui->multimedia_param->clear();

    if (multimedia != nullptr) {
        QString paramInfo = "Название: " + multimedia->getName() + "\n";
        paramInfo += "Автор: " + multimedia->getAuthor() + "\n";
        paramInfo += "Жанр: " + multimedia->getGenre() + "\n";
        paramInfo += "Номер: " + QString::number(multimedia->getNumber()) + "\n";
        paramInfo += "Формат: " + multimedia->getFormat() + "\n";
        paramInfo += "Разрешение: " + multimedia->getResolution() + "\n";
        paramInfo += "Язык: " + multimedia->getLanguage() + "\n";
        paramInfo += "Аренда ресурса: " + multimedia->getBorrowed() + "\n";
        paramInfo += "Цена ресурса: " + multimedia->getPrice() + "\n";
        paramInfo += "Год издания: " + QString::number(multimedia->getPublicationYear()) + "\n";
        paramInfo += "Инвентарный номер: " + QString::number(multimedia->getInventoryNumber()) + "\n";

        ui->multimedia_param->addItem(paramInfo);
    }
}



void resourse_window::on_delet_multi_clicked()
{
    QListWidgetItem* selectedItem = ui->multimedialist->currentItem();
    if (selectedItem != nullptr) {
        int index = ui->multimedialist->row(selectedItem);
        Multimedia* multimedia = multis[index];

        QString filePath = "D:/KURSOVOI/library/files/multimedia.txt";
        removeLineFromFile(filePath, index + 1);

        delete multimedia;
        ui->multimedia_param->clear();
        multis.erase(multis.begin() + index);
        delete selectedItem;

        for (int i = index; i < ui->multimedialist->count(); ++i) {
            QListWidgetItem* item = ui->multimedialist->item(i);
            if (item != nullptr) {
                Multimedia* updatedMultimedia = item->data(Qt::UserRole).value<Multimedia*>();
                QString updatedText = QString::number(i + 1) + ". " + updatedMultimedia->getName();
                item->setText(updatedText);

                delete updatedMultimedia;
            }
        }
    }
}

void resourse_window::on_searchMultimediaLine_textChanged(const QString &text)
{
    ui->multimedialist->clear();

    if (text.isEmpty()) {
        for (Multimedia* multimedia : multis) {
            QListWidgetItem* item = new QListWidgetItem;
            item->setText(multimedia->getName());
            item->setData(Qt::UserRole, QVariant::fromValue<Multimedia*>(multimedia));
            ui->multimedialist->addItem(item);
        }
    }
    else {
        for (Multimedia* multimedia : multis) {
            if (multimedia->getName().contains(text, Qt::CaseInsensitive)) {
                QListWidgetItem* item = new QListWidgetItem;
                item->setText(multimedia->getName());
                item->setData(Qt::UserRole, QVariant::fromValue<Multimedia*>(multimedia));
                ui->multimedialist->addItem(item);
            }
        }
    }
}

void resourse_window::loadmultiDataFromFile(const QString& filePath)
{
    QFile file(filePath);

        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);

        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList data = line.split(";");

            if (data.size() == 11) {
                Multimedia* multimedia = new Multimedia;
                multimedia->setName(data[0]);
                multimedia->setAuthor(data[1]);
                multimedia->setGenre(data[2]);
                multimedia->setNumber(data[3].toInt());
                multimedia->setFormat(data[4]);
                multimedia->setResolution(data[5]);
                multimedia->setLanguage(data[6]);
                multimedia->setBorrowed(data[7]);
                multimedia->setPrice(data[8]);
                multimedia->setPublicationYear(data[9].toInt());
                multimedia->setInventoryNumber(data[10].toInt());


                multis.push_back(multimedia);

                QListWidgetItem* item = new QListWidgetItem;
                item->setText(multimedia->getName());
                item->setData(Qt::UserRole, QVariant::fromValue<Multimedia*>(multimedia));
                ui->multimedialist->addItem(item);
            }
        }

        file.close();
    }
}

void resourse_window::on_addcomic_clicked()
{
    bool cancel;
    QString name = QInputDialog::getText(this, "Введите название ресурса", "Название:", QLineEdit::Normal, "", &cancel);

        if (cancel) {
            QString genre = QInputDialog::getText(this, "Введите жанр ресурса", "Жанр:", QLineEdit::Normal, "", &cancel);

            if (cancel) {
                int number = QInputDialog::getInt(this, "Введите номер ресурса", "Номер:", 0, 0, INT_MAX, 1, &cancel);

                if (cancel) {
                    QString language = QInputDialog::getText(this, "Введите язык, на котором написан ресурс", "Язык:", QLineEdit::Normal, "", &cancel);

                    if (cancel) {
                        QString borrowed = QInputDialog::getText(this, "Введите статус ресурса: арендован или не арендован", "Статус:", QLineEdit::Normal, "", &cancel);

                        if (cancel) {
                            QString price = QInputDialog::getText(this, "Введите цену ресурса", "Цена:", QLineEdit::Normal, "", &cancel);

                            if (cancel) {
                                int publicationYear = QInputDialog::getInt(this, "Введите год издания ресурса", "Год издания:", 0, 0, INT_MAX, 1, &cancel);

                                if (cancel) {
                                    int inventoryNumber = QInputDialog::getInt(this, "Введите инвентарный номер ресурса", "Инвентарный номер:", 0, 0, INT_MAX, 1, &cancel);

                                    if (cancel) {
                                        Comic* comic = new Comic;
                                        comic->setName(name);
                                        comic->setGenre(genre);
                                        comic->setNumber(number);
                                        comic->setLanguage(language);
                                        comic->setBorrowed(borrowed);
                                        comic->setPrice(price);
                                        comic->setPublicationYear(publicationYear);
                                        comic->setInventoryNumber(inventoryNumber);

                                        QString artist = QInputDialog::getText(this, "Введите художника комикса", "Художник:", QLineEdit::Normal, "", &cancel);

                                        if (cancel) {
                                            QString series = QInputDialog::getText(this, "Введите серию комикса", "Серия:", QLineEdit::Normal, "", &cancel);

                                            if (cancel) {
                                                int volumeNumber = QInputDialog::getInt(this, "Введите номер тома комикса", "Номер тома:", 0, 0, INT_MAX, 1, &cancel);

                                                if (cancel) {
                                                    comic->setArtist(artist);
                                                    comic->setSeries(series);
                                                    comic->setVolumeNumber(volumeNumber);

                                                    comics.push_back(comic);

                                                    QListWidgetItem* item = new QListWidgetItem;
                                                    item->setText(comic->getName());
                                                    item->setData(Qt::UserRole, QVariant::fromValue<Comic*>(comic));
                                                    ui->comiclist->addItem(item);

                                                    // Сортировка элементов списка по имени
                                                    ui->comiclist->sortItems();

                                                    QString filePath = "D:/KURSOVOI/library/files/comic.txt";
                                                    saveComicDataToFile(filePath);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }


void resourse_window::on_delet_comic_clicked()
{
        QListWidgetItem* selectedItem = ui->comiclist->currentItem();
        if (selectedItem != nullptr) {
            int index = ui->comiclist->row(selectedItem);
            Comic* comic = comics[index];

            QString filePath = "D:/KURSOVOI/library/files/multimedia.txt";
            removeLineFromFile(filePath, index + 1);

            delete comic;
            ui->comic_param->clear();
            comics.erase(comics.begin() + index);
            delete selectedItem;

            for (int i = index; i < ui->comiclist->count(); ++i) {
                QListWidgetItem* item = ui->comiclist->item(i);
                if (item != nullptr) {
                    Comic* updatedComic = item->data(Qt::UserRole).value<Comic*>();
                    QString updatedText = QString::number(i + 1) + ". " + updatedComic->getName();
                    item->setText(updatedText);

                    delete updatedComic;
                }
            }
        }
}

void resourse_window::saveComicDataToFile(const QString& filePath)
{
        QFile file(filePath);

        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&file);

            for (const auto& comic : comics) {
                out << comic->getName() << ";";
                out << comic->getGenre() << ";";
                out << comic->getNumber() << ";";
                out << comic->getLanguage() << ";";
                out << comic->getBorrowed() << ";";
                out << comic->getPrice() << ";";
                out << comic->getPublicationYear() << ";";
                out << comic->getInventoryNumber() << ";";
                out << comic->getArtist() << ";";
                out << comic->getSeries() << ";";
                out << comic->getVolumeNumber() << "\n";
            }

            file.close();
        }
}

void resourse_window::on_comicWidget_itemClicked(QListWidgetItem* item)
{
    Comic* comic = item->data(Qt::UserRole).value<Comic*>();

    ui->comic_param->clear();

    if (comic != nullptr) {
        QString paramInfo = "Название: " + comic->getName() + "\n";
        paramInfo += "Жанр: " + comic->getGenre() + "\n";
        paramInfo += "Номер: " + QString::number(comic->getNumber()) + "\n";
        paramInfo += "Язык: " + comic->getLanguage() + "\n";
        paramInfo += "Аренда ресурса: " + comic->getBorrowed() + "\n";
        paramInfo += "Цена ресурса: " + comic->getPrice() + "\n";
        paramInfo += "Год издания: " + QString::number(comic->getPublicationYear()) + "\n";
        paramInfo += "Инвентарный номер: " + QString::number(comic->getInventoryNumber()) + "\n";
        paramInfo += "Художник: " + comic->getArtist() + "\n";
        paramInfo += "Серия: " + comic->getSeries() + "\n";
        paramInfo += "Номер тома: " + QString::number(comic->getVolumeNumber()) + "\n";

        ui->comic_param->addItem(paramInfo);
    }
}

void resourse_window::on_searchComicLine_textChanged(const QString& text)
{
    ui->comiclist->clear();

    if (text.isEmpty()) {
        for (Comic* comic : comics) {
                QListWidgetItem* item = new QListWidgetItem;
                item->setText(comic->getName());
                item->setData(Qt::UserRole, QVariant::fromValue<Comic*>(comic));
                ui->comiclist->addItem(item);
        }
    } else {
        for (Comic* comic : comics) {
                if (comic->getName().contains(text, Qt::CaseInsensitive)) {
                    QListWidgetItem* item = new QListWidgetItem;
                    item->setText(comic->getName());
                    item->setData(Qt::UserRole, QVariant::fromValue<Comic*>(comic));
                    ui->comiclist->addItem(item);
                }
        }
    }
}

void resourse_window::loadComicDataFromFile(const QString& filePath)
{
    QFile file(filePath);

    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);

        while (!in.atEnd()) {
                QString line = in.readLine();
                QStringList data = line.split(";");

                if (data.size() == 11) {
                    Comic* comic = new Comic;
                    comic->setName(data[0]);
                    comic->setGenre(data[1]);
                    comic->setNumber(data[2].toInt());
                    comic->setLanguage(data[3]);
                    comic->setBorrowed(data[4]);
                    comic->setPrice(data[5]);
                    comic->setPublicationYear(data[6].toInt());
                    comic->setInventoryNumber(data[7].toInt());
                    comic->setArtist(data[8]);
                    comic->setSeries(data[9]);
                    comic->setVolumeNumber(data[10].toInt());

                    comics.push_back(comic);

                    QListWidgetItem* item = new QListWidgetItem;
                    item->setText(comic->getName());
                    item->setData(Qt::UserRole, QVariant::fromValue<Comic*>(comic));
                    ui->comiclist->addItem(item);
                }
        }
    }
}

