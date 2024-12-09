#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->btnBeenden, SIGNAL( clicked() ), this, SLOT( beenden()) );
    connect(ui->btnAction, SIGNAL( clicked() ), this, SLOT( action()) );
}

Widget::~Widget()
{
    delete ui;
}

void Widget::setDataGate(DataGate *dG)
{
    this->dG = dG;
}

void Widget::beenden()
{
    this->close();
}

void Widget::action()
{
    QString str = QString::fromStdString(dG->getSensorType());
    ui->edtEingabe->setText(str);

    double werte[10] = {0};
    dG->fetchData(werte);
    QString num;
    for(int i = 0; i < 10; i++ )
        ui->edtAusgabe->append(num.setNum( werte[i] ));

}
