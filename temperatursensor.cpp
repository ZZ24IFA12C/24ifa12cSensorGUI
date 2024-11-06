#include "temperatursensor.h"

TemperaturSensor::TemperaturSensor()
{
    srand(time(NULL));
    for(int i = 0 ; i < 10 ; i++)
        werte[i] = (-400 + rand() % 1001) / 10.0;
}

string TemperaturSensor::getSensorType()
{
    return "Temperatur";
}

void TemperaturSensor::fetchData(double d[])
{
    for(int i = 0 ; i < 10 ; i++)
        d[i] = werte[i];
}

int TemperaturSensor::dataSize()
{
    return 10;
}
