#include "expressionservice.h"

ExpressionService::ExpressionService(QObject *parent)
    : QObject{parent}
{
    this->model = new Expression;
}
