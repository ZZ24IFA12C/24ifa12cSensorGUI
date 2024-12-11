#include "model.h"
#include "temperatursensor.h"
#include <QDebug>
Model::Model() {}

void Model::update(string str)
{
    if( str == "ADDTEMP" )
    {
        sensoren.append(new TemperaturSensor);
    }
    qDebug()<< sensoren.front()->getSensorType();
}

string Model::getState()
{
    return "TODO";
}

void Model::setView(View* view)
{
    this->view = view;
}
