#ifndef EXPRESSIONINTERFACE_H
#define EXPRESSIONINTERFACE_H

#include <qstring.h>


class ExpressionInterface{
    virtual void setVariables(QString variables) = 0;
    virtual void calculate() = 0;
};

#endif // EXPRESSIONINTERFACE_H
