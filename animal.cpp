#include "animal.h"

animal::animal(QObject *parent, QString name) : QObject(parent)
{
    animal::name = name;
    qInfo() << "Name changed in " << this << " = " << animal::name;
}
