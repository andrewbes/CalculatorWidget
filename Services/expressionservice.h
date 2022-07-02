#ifndef EXPRESSIONSERVICE_H
#define EXPRESSIONSERVICE_H

#include <QObject>
#include <expression.h>

class ExpressionService : public QObject
{
    Q_OBJECT

    Expression* model;

    explicit ExpressionService(QObject *parent = nullptr);

    public: static ExpressionService shared;

signals:

};

#endif // EXPRESSIONSERVICE_H
