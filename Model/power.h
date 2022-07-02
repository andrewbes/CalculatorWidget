#ifndef POWER_H
#define POWER_H

#include "expressioninterface.h"

#include <QObject>

class Power : public QObject, ExpressionInterface
{
    Q_OBJECT
public:
    explicit Power(QObject *parent = nullptr);

signals:

    // ExpressionInterface interface
private:
    void setVariables(QString variables) override;
    void calculate() override;
};

#endif // POWER_H
