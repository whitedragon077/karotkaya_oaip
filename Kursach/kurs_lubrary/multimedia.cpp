#include "multimedia.h"

Multimedia::Multimedia()
{
    Format = "";
    Quality = "";
    FileSize = "";
    Resolution = "";
}

void Multimedia::setFormat(QString Format)
{
    this->Format = Format;
}

QString Multimedia::getFormat()
{
    return Format;
}

void Multimedia::setQuality(QString Quality)
{
    this->Quality=Quality;
}

QString Multimedia::getQuality()
{
    return Quality;
}

void Multimedia::setFileSize(QString FileSize)
{
    this->FileSize=FileSize;
}

QString Multimedia::getFileSize()
{
    return FileSize;
}

void Multimedia::setResolution(QString Resolution)
{
    this->Resolution=Resolution;
}

QString Multimedia::getResolution()
{
    return Resolution;
}

