#include "mainviewmodel.h"

MainViewModel::MainViewModel(MainCoordinator* coordinator)
    : QObject{coordinator},
      coordinator{coordinator}{
}

void MainViewModel::on_btnVariable_clicked()
{
    coordinator->showVariableWindow();
}
