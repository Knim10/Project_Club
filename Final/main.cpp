/*
** isaac coddington 11/29/25 1-430pm, 830-12 = 7hours starting project, ui layout, creating signal and slots, initial function creation
** isaac coddington 11/30/25 1-5 8-1230am = 9.5hours in depth working on functions, troubleshooting unintended behavior, creating the charsheet window and more troubleshooting / testing
** isaac coddington 12/1/25 2 hours manual testing, cleaning up my comments, writing the readme
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


