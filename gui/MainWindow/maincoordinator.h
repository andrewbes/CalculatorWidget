#ifndef MAINCOORDINATOR_H
#define MAINCOORDINATOR_H

#include "coordinator.h"

#include <variablescoordinator.h>

class MainWindow;
class MainCoordinator : public QObject, Coordinator, VariablesCoordinatorTransition
{
    Q_OBJECT

    MainWindow* window;

public:
    explicit MainCoordinator(QObject *parent = nullptr);
    ~MainCoordinator();

signals:
    // Coordinator interface
public:
    void start() override;
    void closeWindow() override;
    void showVariableWindow();

    // VariablesCoordinatorTransition interface

    QWidget *parentWidget() override;
};



#endif // MAINCOORDINATOR_H
