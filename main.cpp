#include "mainfile1.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainFile1 w;
    w.show();
    return a.exec();
}
