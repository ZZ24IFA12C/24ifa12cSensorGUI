#include "widget.h"
#include "temperatursensor.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    TemperaturSensor *t = new TemperaturSensor;
    w.setDataGate(t);

    w.show();
    return a.exec();
}
