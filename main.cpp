#include "controller.h"
#include "model.h"
#include "view.h"
#include "myview1.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Controller *c = new Controller;
    Model *m = new Model;
    View *v = new MyView1;

    c->setView(v);
    c->setModel(m);
    m->setView(v);
    v->setModel(m);
    v->setController(c);



    return a.exec();
}
