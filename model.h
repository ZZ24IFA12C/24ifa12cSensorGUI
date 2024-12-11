#ifndef MODEL_H
#define MODEL_H
#include "view.h"
#include "datagate.h"
#include <QVector>
#include <iostream>
using namespace std;

class Model
{
public:
    Model();
    void update(string);
    string getState();
    void setView(View* view);
protected:
    View *view;
    QVector <DataGate*> sensoren;

};

#endif // MODEL_H
