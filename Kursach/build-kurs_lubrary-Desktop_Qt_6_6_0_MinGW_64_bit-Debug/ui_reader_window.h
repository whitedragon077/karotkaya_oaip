/********************************************************************************
** Form generated from reading UI file 'reader_window.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READER_WINDOW_H
#define UI_READER_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reader_window
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QListWidget *readerlist;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QListWidget *readerparam;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QListWidget *borrowedlist;
    QPushButton *addreader;
    QPushButton *deletereader;
    QPushButton *addresourse;
    QPushButton *deleteresourse;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *searchReader;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QListWidget *borrowedparam;

    void setupUi(QDialog *reader_window)
    {
        if (reader_window->objectName().isEmpty())
            reader_window->setObjectName("reader_window");
        reader_window->resize(859, 618);
        scrollArea = new QScrollArea(reader_window);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(20, 40, 411, 231));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 409, 229));
        readerlist = new QListWidget(scrollAreaWidgetContents);
        readerlist->setObjectName("readerlist");
        readerlist->setGeometry(QRect(0, 0, 411, 231));
        scrollArea->setWidget(scrollAreaWidgetContents);
        scrollArea_2 = new QScrollArea(reader_window);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setGeometry(QRect(450, 40, 391, 231));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 389, 229));
        readerparam = new QListWidget(scrollAreaWidgetContents_2);
        readerparam->setObjectName("readerparam");
        readerparam->setGeometry(QRect(0, 0, 441, 241));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        scrollArea_3 = new QScrollArea(reader_window);
        scrollArea_3->setObjectName("scrollArea_3");
        scrollArea_3->setGeometry(QRect(20, 310, 411, 221));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 409, 219));
        borrowedlist = new QListWidget(scrollAreaWidgetContents_3);
        borrowedlist->setObjectName("borrowedlist");
        borrowedlist->setGeometry(QRect(0, 0, 411, 221));
        scrollArea_3->setWidget(scrollAreaWidgetContents_3);
        addreader = new QPushButton(reader_window);
        addreader->setObjectName("addreader");
        addreader->setGeometry(QRect(70, 540, 121, 61));
        deletereader = new QPushButton(reader_window);
        deletereader->setObjectName("deletereader");
        deletereader->setGeometry(QRect(230, 540, 121, 61));
        addresourse = new QPushButton(reader_window);
        addresourse->setObjectName("addresourse");
        addresourse->setGeometry(QRect(470, 540, 121, 61));
        deleteresourse = new QPushButton(reader_window);
        deleteresourse->setObjectName("deleteresourse");
        deleteresourse->setGeometry(QRect(620, 540, 121, 61));
        label = new QLabel(reader_window);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 101, 31));
        label_2 = new QLabel(reader_window);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(460, 0, 151, 31));
        label_3 = new QLabel(reader_window);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 280, 151, 16));
        searchReader = new QLineEdit(reader_window);
        searchReader->setObjectName("searchReader");
        searchReader->setGeometry(QRect(180, 10, 251, 24));
        scrollArea_4 = new QScrollArea(reader_window);
        scrollArea_4->setObjectName("scrollArea_4");
        scrollArea_4->setGeometry(QRect(450, 310, 391, 221));
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName("scrollAreaWidgetContents_4");
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 389, 219));
        borrowedparam = new QListWidget(scrollAreaWidgetContents_4);
        borrowedparam->setObjectName("borrowedparam");
        borrowedparam->setGeometry(QRect(0, 0, 391, 221));
        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        retranslateUi(reader_window);

        QMetaObject::connectSlotsByName(reader_window);
    } // setupUi

    void retranslateUi(QDialog *reader_window)
    {
        reader_window->setWindowTitle(QCoreApplication::translate("reader_window", "Dialog", nullptr));
        addreader->setText(QCoreApplication::translate("reader_window", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\207\320\270\321\202\320\260\321\202\320\265\320\273\321\217", nullptr));
        deletereader->setText(QCoreApplication::translate("reader_window", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\207\320\270\321\202\320\260\321\202\320\265\320\273\321\217", nullptr));
        addresourse->setText(QCoreApplication::translate("reader_window", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\200\320\265\321\201\321\203\321\200\321\201", nullptr));
        deleteresourse->setText(QCoreApplication::translate("reader_window", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\200\320\265\321\201\321\203\321\200\321\201", nullptr));
        label->setText(QCoreApplication::translate("reader_window", "\320\247\320\270\321\202\320\260\321\202\320\265\320\273\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("reader_window", "\320\232\320\276\320\275\321\202\320\260\320\272\321\202\320\275\320\260\321\217 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("reader_window", "\320\220\321\200\320\265\320\275\320\264\320\276\320\262\320\260\320\275\320\275\321\213\320\265 \321\200\320\265\321\201\321\203\321\200\321\201\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reader_window: public Ui_reader_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READER_WINDOW_H
