#ifndef MYVIEW1_H
#define MYVIEW1_H

#include <QObject>
#include "view.h"
#include "widget.h"

class MyView1 : public View
{
     Q_OBJECT
public:
    MyView1();
    void update();
    void notify();
public slots:
    void addSensor();
private:
    Widget *widget;
};

#endif // MYVIEW1_H
