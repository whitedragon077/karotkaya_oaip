#include "book.h"

Book::Book()
{
    Isbn = 0;
    PageAmount = 0;
    Writer = "";
    BookCover = "";
    HasIllustration = "";
}

void Book::setIsbn(int Isbn)
{
    this->Isbn=Isbn;
}

int Book::getIsbn()
{
    return Isbn;
}

void Book::setPageAmount (int PageAmount)
{
    this->PageAmount = PageAmount;
}

int Book::getPageAmount()
{
    return PageAmount;
}

void Book::setWriter(QString Writer)
{
    this->Writer=Writer;
}

QString Book::getWriter()
{
    return Writer;
}

void Book::setBookCover(QString BookCover)
{
    this->BookCover=BookCover;
}

QString Book::getBookCover()
{
    return BookCover;
}

void Book::setHasIllustration(QString HasIllustration)
{
    this->HasIllustration=HasIllustration;
}

QString Book::getHasIllustration()
{
    return HasIllustration;
}




