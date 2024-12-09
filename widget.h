#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "datagate.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void setDataGate(DataGate* dG);

public slots:
    void beenden();
    void action();

private:
    Ui::Widget *ui;
    DataGate *dG;
};
#endif // WIDGET_H
