#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ResourseWindow = new resourse_window();
    ReaderWindow = new reader_window();
    connect(ResourseWindow, &resourse_window::windowOpen, this, &MainWindow::show);
    connect(ReaderWindow, &reader_window::readerOpen, this, &MainWindow::show);
}



MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Button_close_prog_clicked()
{
    close();
}



void MainWindow::on_butt_resourse_clicked()
{
    ResourseWindow->show();
}



void MainWindow::on_reader_button_clicked()
{
    ReaderWindow->show();
}

