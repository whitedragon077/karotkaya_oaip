#ifndef RESOURSE_H
#define RESOURSE_H

#include <QString>

class Resourse
{
private:

    QString Name;
    int Number;
    QString Author;
    QString Genre;
    QString Language;
    QString Borrowed;
    QString Price;
    int PublicationYear;
    int InventoryNumber;

public:
    Resourse();

    void setName(QString Name);
    QString getName();

    void setNumber(int Number);
    int getNumber ();

    void setAuthor(QString Author);
    QString getAuthor();

    void setGenre(QString Genre);
    QString getGenre();

    void setLanguage(QString Language);
    QString getLanguage();

    void setBorrowed(QString Borrowed);
    QString getBorrowed();

    void setPrice(QString Price);
    QString getPrice();

    void setPublicationYear(int PublicationYear);
    int getPublicationYear();

    void setInventoryNumber (int Inventorynumber);
    int getInventoryNumber();



};

#endif // RESOURSE_H
