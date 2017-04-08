#include "stationui.h"
#include "ui_stationui.h"

StationUI::StationUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StationUI)
{
    ui->setupUi(this);
}

StationUI::~StationUI()
{
    delete ui;
}

void StationUI::on_pushButton_clicked()
{
    this->close();
}
