#ifndef BIKEUI_H
#define BIKEUI_H

#include <QDialog>

namespace Ui {
class BikeUI;
}

class BikeUI : public QDialog
{
    Q_OBJECT

public:
    explicit BikeUI(QWidget *parent = 0);
    ~BikeUI();

private slots:
    void on_pushButton_clicked();

private:
    Ui::BikeUI *ui;
};

#endif // BIKEUI_H
