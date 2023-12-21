#include "resourse.h"

Resourse::Resourse()
{
    Name = "";
    Number= 0;
    Author = "";
    Genre = "";
    Language = "";
    Borrowed = "";
    Price = "";
    PublicationYear = 0;
    InventoryNumber = 0;
}


void Resourse::setName(QString Name)
{
    this->Name=Name;
}

QString Resourse::getName()
{
    return Name;
}

void Resourse::setNumber(int Number)
{
    this->Number = Number;
}

int Resourse::getNumber()
{
    return Number;
}

void Resourse::setAuthor(QString Author)
{
    this->Author=Author;
}

QString Resourse::getAuthor()
{
    return Author;
}

void Resourse::setGenre(QString Genre)
{
    this->Genre=Genre;
}

QString Resourse::getGenre()
{
    return Genre;
}

void Resourse::setLanguage(QString Language)
{
    this->Language=Language;
}

QString Resourse::getLanguage()
{
    return Language;
}

void Resourse::setPublicationYear(int PublicationYear)
{
    this->PublicationYear = PublicationYear;
}

int Resourse::getPublicationYear()
{
    return PublicationYear;
}

void Resourse::setBorrowed(QString Borrowed)
{
    this->Borrowed=Borrowed;
}

QString Resourse::getBorrowed()
{
    return Borrowed;
}


void Resourse::setPrice(QString Price)
{
    this->Price = Price;
}

QString Resourse::getPrice()
{
    return Price;
}

void Resourse::setInventoryNumber (int InventoryNumber)
{
    this->InventoryNumber=InventoryNumber;
}

int Resourse::getInventoryNumber()
{
    return InventoryNumber;
}

