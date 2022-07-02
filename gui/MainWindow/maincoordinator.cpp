#include "maincoordinator.h"
#include "mainwindow.h"

#include <variablescoordinator.h>


MainCoordinator::MainCoordinator(QObject *parent)
    : QObject{parent},
      window{new MainWindow}
{
   window->configureWith(new MainViewModel(this));
}

MainCoordinator::~MainCoordinator()
{

}

void MainCoordinator::closeWindow()
{
    window->close();
}

void MainCoordinator::showVariableWindow()
{
    VariablesCoordinator* coordinator = new VariablesCoordinator(this);
    coordinator->start();
}

QWidget *MainCoordinator::parentWidget()
{
    return window;
}

void MainCoordinator::start()
{
   window->show();
}
