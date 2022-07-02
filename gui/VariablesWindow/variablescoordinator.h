#ifndef VARIABLESCOORDINATOR_H
#define VARIABLESCOORDINATOR_H

#include <QObject>
#include <coordinator.h>

class VariablesCoordinatorTransition {
    public: virtual QWidget* parentWidget() = 0;
};

class VariablesWindow;
class VariablesCoordinator : public QObject, Coordinator
{
    Q_OBJECT

    VariablesCoordinatorTransition* transition;
    VariablesWindow* window;

public:
    explicit VariablesCoordinator(VariablesCoordinatorTransition* transition, QObject *parent = nullptr)
        :QObject{parent},
         transition{transition}{}

signals:
    // Coordinator interface
public:
    void start() override;
    void closeWindow() override;

private:
    void createVariablesWindow();
};



#endif // VARIABLESCOORDINATOR_H
