#ifndef COORDINATOR_H
#define COORDINATOR_H

#include <QDebug>
#include <QObject>

class Coordinator
{
public:
    virtual void start() = 0;
    virtual void closeWindow() = 0;
    virtual  ~Coordinator(){};
};

#endif // COORDINATOR_H
