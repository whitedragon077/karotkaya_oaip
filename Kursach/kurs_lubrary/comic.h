#ifndef COMIC_H
#define COMIC_H

#include <QString>
#include "resourse.h"

class Comic: public Resourse
{
private:
    QString Artist;
    QString Series;
    int VolumeNumber;

public:
    Comic();

    void setArtist(QString Artist);
    QString getArtist();

    void setSeries(QString Series);
    QString getSeries();

    void setVolumeNumber(int VolumeNumber);
    int getVolumeNumber();

};

#endif // COMIC_H
