#include <QCoreApplication>
#include <QDebug>
#include "animal.h"

//Global memory
QString animal::name = "";

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    animal cat(&a, "kitty");
    animal dog(&a, "fido");
    animal person(&a, "Bryan");


    qInfo() << "Cat name = " << cat.name;

    return a.exec();
}
