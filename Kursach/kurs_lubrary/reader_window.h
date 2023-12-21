#ifndef READER_WINDOW_H
#define READER_WINDOW_H

#include <QListWidget>
#include <QDialog>
#include <vector>
#include <QLabel>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QScrollBar>
#include <QDialog>
#include <QVBoxLayout>
#include <QCompleter>
#include "readerlist.h"

namespace Ui {
class reader_window;
}

class reader_window : public QDialog
{
    Q_OBJECT

public:
    explicit reader_window(QWidget *parent = nullptr);
    ~reader_window();
    void saveReaderDataToFile(const QString& filePath);
    void removeLineFromFile(const QString& filePath, int lineNumberToRemove);
    void setBorrowedBooks(const QVector<Book*>& books);
    std::vector<Book*> loadAvailableBooksFromFile(const QString& filePath);
    void loadReaderDataFromFile(const QString& filePath);



signals:
    void readerOpen();

private slots:
    void on_addreader_clicked();

    void on_deletereader_clicked();

    void on_searchReader_textChanged(const QString &text);

    void on_listWidget_itemClicked(QListWidgetItem* item);

    void on_addresourse_clicked();

    void on_deleteresourse_clicked();

private:
    Ui::reader_window *ui;
    std::vector<ReaderList*> readers;
};

#endif // READER_WINDOW_H
