#include "readerlist.h"

ReaderList::ReaderList()
{
    Name = "" ;
    LastName = "";
    SecondName = "";
    Adress = "";
    TeleNumber = 0;
    PasportNumber = "";
}


void ReaderList::setName (QString Name)
{
    this->Name=Name;
}

QString ReaderList::getName()
{
    return Name;
}

void ReaderList::setLastName(QString LastName)
{
    this->LastName=LastName;
}

QString ReaderList::getLastName()
{
    return LastName;
}

void ReaderList::setSecondName(QString SecondName)
{
    this->SecondName=SecondName;
}

QString ReaderList::getSecondName()
{
    return SecondName;
}

void ReaderList::setAdress(QString Adress)
{
    this->Adress=Adress;
}

QString ReaderList::getAdress()
{
    return Adress;
}

void ReaderList::setTeleNumber(int TeleNumber)
{
    this->TeleNumber=TeleNumber;
}

int ReaderList::getTeleNumber()
{
    return TeleNumber;
}

void ReaderList::setPasportNumber(QString PasportNumber)
{
    this->PasportNumber=PasportNumber;
}

QString ReaderList::getPasportNumber()
{
    return PasportNumber;
}


void ReaderList::setBorrowedBooks(const std::vector<Book*>& books)
{
    BorrowedBooks = books;
}

void ReaderList::addBorrowedBook(Book* book)
{
    BorrowedBooks.push_back(book);
}

std::vector<Book*> ReaderList::getBorrowedBooks() const {
    return BorrowedBooks;
}
