#ifndef READERLIST_H
#define READERLIST_H

#include <QString>
#include "book.h"
#include <vector>

class ReaderList
{
private:

    QString Name;
    QString LastName;
    QString SecondName;
    QString Adress;
    int TeleNumber;
    QString PasportNumber;
    std::vector<Book*> BorrowedBooks;

public:
    ReaderList();

    void setName (QString Name);
    QString getName();

    void setLastName(QString LastName);
    QString getLastName();

    void setSecondName(QString SecondName);
    QString getSecondName();

    void setAdress(QString Adress);
    QString getAdress();

    void setTeleNumber(int TeleNumber);
    int getTeleNumber();

    void setPasportNumber(QString PasportNumber);
    QString getPasportNumber();


    void addBorrowedBook(Book* book);
    void setBorrowedBooks(const std::vector<Book*>& books);
    std::vector<Book*> getBorrowedBooks() const;


};

#endif // READERLIST_H
