#include "model.h"
#include "temperatursensor.h"
Model::Model() {}

void Model::update(string str)
{
    if( str == "ADDTEMP" )
    {
        sensoren.append(new TemperaturSensor);
    }
}

string Model::getState()
{
    return "TODO";
}

void Model::setView(View* view)
{
    this->view = view;
}
