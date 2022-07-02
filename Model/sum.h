#ifndef SUM_H
#define SUM_H

#include "expressioninterface.h"

#include <QObject>

class Sum : public QObject, ExpressionInterface
{
    Q_OBJECT
public:
    explicit Sum(QObject *parent = nullptr);

signals:

    // ExpressionInterface interface
private:
    void setVariables(QString variables) override;
    void calculate() override;
};

#endif // SUM_H
