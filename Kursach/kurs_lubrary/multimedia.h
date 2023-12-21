#ifndef MULTIMEDIA_H
#define MULTIMEDIA_H

#include "resourse.h"
#include <QString>

class Multimedia: public Resourse
{
private:

    QString Format;
    QString Quality;
    QString FileSize;
    QString Resolution;

public:
    Multimedia();

    void setFormat(QString Format);
    QString getFormat();

    void setQuality(QString Quality);
    QString getQuality();

    void setFileSize(QString FileSize);
    QString getFileSize();

    void setResolution(QString Resolution);
    QString getResolution();


};

#endif // MULTIMEDIA_H
