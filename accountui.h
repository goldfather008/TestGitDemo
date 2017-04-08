#ifndef ACCOUNTUI_H
#define ACCOUNTUI_H

#include <QDialog>

namespace Ui {
class AccountUI;
}

class AccountUI : public QDialog
{
    Q_OBJECT

public:
    explicit AccountUI(QWidget *parent = 0);
    ~AccountUI();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AccountUI *ui;
};

#endif // ACCOUNTUI_H
