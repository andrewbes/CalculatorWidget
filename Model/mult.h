#ifndef MULT_H
#define MULT_H

#include "expressioninterface.h"

#include <QObject>

class Mult : public QObject, ExpressionInterface
{
    Q_OBJECT
public:
    explicit Mult(QObject *parent = nullptr);

signals:

    // ExpressionInterface interface
private:
    void setVariables(QString variables) override;
    void calculate() override;
};

#endif // MULT_H
