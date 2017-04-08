#include "widget.h"
#include "ui_widget.h"
#include "accountui.h"
#include "bikeui.h"
#include "stationui.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    AccountUI *accountUI = new AccountUI(this);
    accountUI->exec();
}

void Widget::on_pushButton_2_clicked()
{
    BikeUI *bikeUI = new BikeUI(this);
    bikeUI->exec();
}

void Widget::on_pushButton_3_clicked()
{
    StationUI *stationUI = new StationUI(this);
    stationUI->exec();
}
