#include "controller.h"
#include "model.h"
Controller::Controller() {}

void Controller::action(string str)
{
    model->update(str);
}

void Controller::setView(View *view)
{
    this->view = view;
}

void Controller::setModel(Model *model)
{
    this->model = model;
}
