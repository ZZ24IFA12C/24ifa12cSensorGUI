#include "myview1.h"
#include "ui_widget.h"
MyView1::MyView1()
{
    widget = new Widget;
    widget->show();
}

void MyView1::update()
{

}

void MyView1::notify()
{

}

void MyView1::addSensor()
{
    string str;
    if(widget->ui->btnTemperatur->isChecked())
        str = "ADDTEMP";

    controller->action(str);
}
