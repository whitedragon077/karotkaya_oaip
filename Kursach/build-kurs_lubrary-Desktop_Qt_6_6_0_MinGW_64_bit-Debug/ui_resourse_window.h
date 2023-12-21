/********************************************************************************
** Form generated from reading UI file 'resourse_window.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESOURSE_WINDOW_H
#define UI_RESOURSE_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_resourse_window
{
public:
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QPushButton *add_multi;
    QPushButton *button_close;
    QLabel *label_2;
    QPushButton *add_book;
    QPushButton *delet_comic;
    QLineEdit *searchBookLine;
    QLineEdit *LineMultimedia;
    QLabel *label_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QListWidget *booklist;
    QLabel *label;
    QLineEdit *LineComic;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_5;
    QListWidget *List_param;
    QScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_7;
    QListWidget *comic_param;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_6;
    QListWidget *multimedia_param;
    QPushButton *delet_multi;
    QPushButton *addcomic;
    QPushButton *delete_book;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_3;
    QListWidget *multimedialist;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_4;
    QListWidget *comiclist;

    void setupUi(QDialog *resourse_window)
    {
        if (resourse_window->objectName().isEmpty())
            resourse_window->setObjectName("resourse_window");
        resourse_window->resize(923, 690);
        widget = new QWidget(resourse_window);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 100, 30));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");

        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        gridLayout = new QGridLayout(resourse_window);
        gridLayout->setObjectName("gridLayout");
        add_multi = new QPushButton(resourse_window);
        add_multi->setObjectName("add_multi");

        gridLayout->addWidget(add_multi, 7, 3, 1, 1);

        button_close = new QPushButton(resourse_window);
        button_close->setObjectName("button_close");

        gridLayout->addWidget(button_close, 9, 5, 1, 1);

        label_2 = new QLabel(resourse_window);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 3, 1, 1);

        add_book = new QPushButton(resourse_window);
        add_book->setObjectName("add_book");

        gridLayout->addWidget(add_book, 7, 0, 1, 1);

        delet_comic = new QPushButton(resourse_window);
        delet_comic->setObjectName("delet_comic");

        gridLayout->addWidget(delet_comic, 8, 5, 1, 1);

        searchBookLine = new QLineEdit(resourse_window);
        searchBookLine->setObjectName("searchBookLine");

        gridLayout->addWidget(searchBookLine, 1, 0, 1, 1);

        LineMultimedia = new QLineEdit(resourse_window);
        LineMultimedia->setObjectName("LineMultimedia");

        gridLayout->addWidget(LineMultimedia, 1, 3, 1, 1);

        label_3 = new QLabel(resourse_window);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 5, 1, 1);

        scrollArea = new QScrollArea(resourse_window);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 282, 263));
        booklist = new QListWidget(scrollAreaWidgetContents_2);
        booklist->setObjectName("booklist");
        booklist->setGeometry(QRect(0, 0, 282, 264));
        scrollArea->setWidget(scrollAreaWidgetContents_2);

        gridLayout->addWidget(scrollArea, 2, 0, 2, 1);

        label = new QLabel(resourse_window);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        LineComic = new QLineEdit(resourse_window);
        LineComic->setObjectName("LineComic");

        gridLayout->addWidget(LineComic, 1, 5, 1, 1);

        scrollArea_4 = new QScrollArea(resourse_window);
        scrollArea_4->setObjectName("scrollArea_4");
        scrollArea_4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName("scrollAreaWidgetContents_5");
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 282, 257));
        List_param = new QListWidget(scrollAreaWidgetContents_5);
        List_param->setObjectName("List_param");
        List_param->setGeometry(QRect(0, 0, 281, 261));
        scrollArea_4->setWidget(scrollAreaWidgetContents_5);

        gridLayout->addWidget(scrollArea_4, 5, 0, 2, 1);

        scrollArea_6 = new QScrollArea(resourse_window);
        scrollArea_6->setObjectName("scrollArea_6");
        scrollArea_6->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName("scrollAreaWidgetContents_7");
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 282, 257));
        comic_param = new QListWidget(scrollAreaWidgetContents_7);
        comic_param->setObjectName("comic_param");
        comic_param->setGeometry(QRect(-5, 0, 287, 259));
        scrollArea_6->setWidget(scrollAreaWidgetContents_7);

        gridLayout->addWidget(scrollArea_6, 5, 5, 1, 1);

        scrollArea_5 = new QScrollArea(resourse_window);
        scrollArea_5->setObjectName("scrollArea_5");
        scrollArea_5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName("scrollAreaWidgetContents_6");
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 281, 257));
        multimedia_param = new QListWidget(scrollAreaWidgetContents_6);
        multimedia_param->setObjectName("multimedia_param");
        multimedia_param->setGeometry(QRect(0, 0, 281, 259));
        scrollArea_5->setWidget(scrollAreaWidgetContents_6);

        gridLayout->addWidget(scrollArea_5, 5, 3, 1, 1);

        delet_multi = new QPushButton(resourse_window);
        delet_multi->setObjectName("delet_multi");

        gridLayout->addWidget(delet_multi, 8, 3, 1, 1);

        addcomic = new QPushButton(resourse_window);
        addcomic->setObjectName("addcomic");

        gridLayout->addWidget(addcomic, 7, 5, 1, 1);

        delete_book = new QPushButton(resourse_window);
        delete_book->setObjectName("delete_book");

        gridLayout->addWidget(delete_book, 8, 0, 1, 1);

        scrollArea_2 = new QScrollArea(resourse_window);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 281, 263));
        multimedialist = new QListWidget(scrollAreaWidgetContents_3);
        multimedialist->setObjectName("multimedialist");
        multimedialist->setGeometry(QRect(0, -4, 281, 271));
        scrollArea_2->setWidget(scrollAreaWidgetContents_3);

        gridLayout->addWidget(scrollArea_2, 2, 3, 3, 1);

        scrollArea_3 = new QScrollArea(resourse_window);
        scrollArea_3->setObjectName("scrollArea_3");
        scrollArea_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName("scrollAreaWidgetContents_4");
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 282, 257));
        comiclist = new QListWidget(scrollAreaWidgetContents_4);
        comiclist->setObjectName("comiclist");
        comiclist->setGeometry(QRect(0, 0, 281, 259));
        scrollArea_3->setWidget(scrollAreaWidgetContents_4);

        gridLayout->addWidget(scrollArea_3, 3, 5, 1, 1);


        retranslateUi(resourse_window);

        QMetaObject::connectSlotsByName(resourse_window);
    } // setupUi

    void retranslateUi(QDialog *resourse_window)
    {
        resourse_window->setWindowTitle(QCoreApplication::translate("resourse_window", "Dialog", nullptr));
        add_multi->setText(QCoreApplication::translate("resourse_window", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        button_close->setText(QCoreApplication::translate("resourse_window", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\276\320\272\320\275\320\276", nullptr));
        label_2->setText(QCoreApplication::translate("resourse_window", "\320\234\321\203\320\273\321\214\321\202\320\270\320\274\320\265\320\264\320\270\320\260", nullptr));
        add_book->setText(QCoreApplication::translate("resourse_window", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        delet_comic->setText(QCoreApplication::translate("resourse_window", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("resourse_window", "\320\232\320\276\320\274\320\270\320\272\321\201\321\213", nullptr));
        label->setText(QCoreApplication::translate("resourse_window", "\320\232\320\275\320\270\320\263\320\270", nullptr));
        LineComic->setText(QString());
        delet_multi->setText(QCoreApplication::translate("resourse_window", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        addcomic->setText(QCoreApplication::translate("resourse_window", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        delete_book->setText(QCoreApplication::translate("resourse_window", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class resourse_window: public Ui_resourse_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESOURSE_WINDOW_H
