#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "expressioninterface.h"
#include <QObject>

class Expression : public QObject, ExpressionInterface
{
    Q_OBJECT
public:
    explicit Expression(QObject *parent = nullptr);

signals:


    // ExpressionInterface interface
private:
    void setVariables(QString variables) override;
    void calculate() override;
};

#endif // EXPRESSION_H
