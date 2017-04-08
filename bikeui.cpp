#include "bikeui.h"
#include "ui_bikeui.h"

BikeUI::BikeUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BikeUI)
{
    ui->setupUi(this);
}

BikeUI::~BikeUI()
{
    delete ui;
}

void BikeUI::on_pushButton_clicked()
{
    this->close();
}
