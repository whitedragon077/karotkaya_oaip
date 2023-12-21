#ifndef BOOK_H
#define BOOK_H

#include "resourse.h"
#include <QString>
#include <QInputDialog>

class Book: public Resourse,  public QWidget
{
private:
    int Isbn;
    int PageAmount;
    QString Writer;
    QString BookCover;
    QString HasIllustration;


public:
    Book();

    void setIsbn(int Isbn);
    int getIsbn();

    void setPageAmount (int PageAmount);
    int getPageAmount();

    void setWriter(QString Writer);
    QString getWriter();

    void setBookCover(QString BookCover);
    QString getBookCover();

    void setHasIllustration(QString HasIllustration);
    QString getHasIllustration();





};

#endif // BOOK_H
