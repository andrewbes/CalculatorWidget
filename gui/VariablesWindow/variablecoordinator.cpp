#include "variablescoordinator.h"
#include "variablesviewmodel.h"
#include "variableswindow.h"


void VariablesCoordinator::start()
{
    createVariablesWindow();
}

 void VariablesCoordinator::closeWindow()
{

 }

 void VariablesCoordinator::createVariablesWindow()
 {
     window = new VariablesWindow();
     window->configureWith(new VariablesViewModel(this));
     window->setWindowModality(Qt::ApplicationModal);
     window->move(this->transition->parentWidget()->geometry().center() - window->rect().center());
     window->show();
 }
