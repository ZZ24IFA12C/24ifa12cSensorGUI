#include "controller.h"

Controller::Controller() {}

void Controller::action(string str)
{

}

void Controller::setView(View *view)
{
    this->view = view;
}

void Controller::setModel(Model *model)
{
    this->model = model;
}
