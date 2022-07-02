#ifndef MAINVIEWMODEL_H
#define MAINVIEWMODEL_H

#include "maincoordinator.h"

class MainViewModel : public QObject
{
    Q_OBJECT
public:
    explicit MainViewModel(MainCoordinator* coordinator = nullptr);
    void on_btnVariable_clicked();
private:
    MainCoordinator* coordinator;

};

#endif // MAINVIEWMODEL_H
