#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "resourse_window.h"
#include "reader_window.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    resourse_window* ResourseWindow;
    reader_window* ReaderWindow;

    private slots:
    void on_Button_close_prog_clicked();
        void on_butt_resourse_clicked();

    void on_reader_button_clicked();
};
#endif // MAINWINDOW_H
