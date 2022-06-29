#include "maincoordinator.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainCoordinator* coordinator = new MainCoordinator;
    coordinator->start();
    return a.exec();
}
