#include "maincoordinator.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainCoordinator coordinator;
    coordinator.start();
    return a.exec();
}
