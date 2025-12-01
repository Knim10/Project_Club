/*
** isaac coddington 11/29/25 1-430pm, 830-12 = 7hours
** isaac coddington 11/30/25 1-5 8-1230am = 9.5hours
*/
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

