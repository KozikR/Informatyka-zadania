#include "ByteConverter.h"
#include <iostream>

ByteConverter::ByteConverter(QObject*)
{

}

void ByteConverter::setDec(const QString& a)
{
    bool ok;
    int n = a.toInt(&ok, 10);
    if(ok)
    {
        emit hexChanged(QString::number(n,16));
        emit binChanged(QString::number(n,2));
    }
}

void ByteConverter::setHex(const QString& a)
{
    bool ok;
    int n = a.toInt(&ok, 16);
    if(ok)
    {
        emit decChanged(QString::number(n,10));
        emit binChanged(QString::number(n,2));
    }
}

void ByteConverter::setBin(const QString& a)
{
    bool ok;
    int n = a.toInt(&ok, 2);
    if(ok)
    {
        emit decChanged(QString::number(n,10));
        emit hexChanged(QString::number(n,16));
    }
}
