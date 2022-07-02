#ifndef EXPRESSIONSERVICE_H
#define EXPRESSIONSERVICE_H

#include <QObject>

class ExpressionService : public QObject
{
    Q_OBJECT
public:
    explicit ExpressionService(QObject *parent = nullptr);

signals:

};

#endif // EXPRESSIONSERVICE_H
