#ifndef RESOURSE_WINDOW_H
#define RESOURSE_WINDOW_H

#include <QListWidget>
#include <QDialog>
#include <vector>
#include <QLabel>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QScrollBar>
#include "book.h"
#include "multimedia.h"
#include "comic.h"
#include <algorithm>



namespace Ui {
class resourse_window;
}

class resourse_window : public QDialog
{
    Q_OBJECT

public:
    explicit resourse_window(QWidget *parent = nullptr);
    ~resourse_window();

    void loadDataFromFile(const QString& filePath);
    void savebookDataToFile(const QString &filePath);
    void removeLineFromFile(const QString& filePath, int lineNumberToRemove);
    void saveMultimediaDataToFile(const QString &filePath);
    void loadmultiDataFromFile(const QString& filePath);
    void saveComicDataToFile(const QString& filePath);
    void loadComicDataFromFile(const QString& filePath);


signals:
    void windowOpen();
    void resourceSelected();


private slots:
    void on_add_book_clicked();
    void on_button_close_clicked();
    void on_listWidget_itemClicked(QListWidgetItem *item);
    void on_multiWidget_itemClicked(QListWidgetItem *item);
    void on_delete_book_clicked();
    void on_searchBookLine_textChanged(const QString &text);
    void on_searchMultimediaLine_textChanged(const QString &text);
    void on_comicWidget_itemClicked(QListWidgetItem* item);
    void on_searchComicLine_textChanged(const QString& text);

    void on_add_multi_clicked();

    void on_delet_multi_clicked();

    void on_addcomic_clicked();

    void on_delet_comic_clicked();

private:
    Ui::resourse_window *ui;
    std::vector<Book*> books;
    QLineEdit* searchBookLine;
    std::vector<Multimedia*> multis;
    std::vector<Comic*> comics;
};

#endif // RESOURSE_WINDOW_H
