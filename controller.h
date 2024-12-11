#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "view.h"
#include <iostream>
using namespace std;

class View;
class Model;
class Controller
{
public:
    Controller();
    void action(string);
    void setView(View* view);
    void setModel(Model* model);
private:
    View *view;
    Model *model;
};

#endif // CONTROLLER_H
