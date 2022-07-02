#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <QObject>

class ExpressionInterface{
    virtual void setVariables(QString variables) = 0;
    virtual void calculate() = 0;
};

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
