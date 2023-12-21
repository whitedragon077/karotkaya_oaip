#include "comic.h"

Comic::Comic()
{
    Artist = "";
    Series = "";
    VolumeNumber =0;
}

void Comic::setArtist(QString Artist)
{
    this->Artist=Artist;
}

QString Comic::getArtist()
{
    return Artist;
}

void Comic::setSeries(QString Series)
{
    this->Series=Series;
}

QString Comic::getSeries()
{
    return Series;
}

void Comic::setVolumeNumber(int VolumeNumber)
{
    this-> VolumeNumber = VolumeNumber;
}

int Comic::getVolumeNumber()
{
    return VolumeNumber;
}

