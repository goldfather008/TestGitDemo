#include "accountui.h"
#include "ui_accountui.h"
#include <QFile>
#include <QTextStream>
#include "json/json.h"
#include <QDebug>

AccountUI::AccountUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AccountUI)
{
    ui->setupUi(this);
    //联网获得数据
    QFile f("../mobike/account.json");
    f.open(QFile::ReadOnly);
    QTextStream stream(&f);
    stream.setCodec("UTF-8");
    QString str = stream.readAll();
    std::string strValue = str.toStdString();
    Json::Reader reader;
    Json::Value value;
    //json解析
    if (reader.parse(strValue, value))
     {
        std::string out = value["username"].asString();
        QString out2 = QString::fromStdString(out);
        ui->lb_username->setText(out2);

        out = value["cardID"].asString();
        out2 = QString::fromStdString(out);
        ui->lb_cardid->setText(out2);

        out = value["monney"].asString();
        out2 = QString::fromStdString(out);
        ui->lb_monney->setText(out2);

        out = value["state"].asString();
        out2 = QString::fromStdString(out);
        ui->lb_state->setText(out2);
     }
}

AccountUI::~AccountUI()
{
    delete ui;
}

void AccountUI::on_pushButton_clicked()
{
    this->close();
}
