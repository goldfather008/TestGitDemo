#ifndef STATIONUI_H
#define STATIONUI_H

#include <QDialog>

namespace Ui {
class StationUI;
}

class StationUI : public QDialog
{
    Q_OBJECT

public:
    explicit StationUI(QWidget *parent = 0);
    ~StationUI();

private slots:
    void on_pushButton_clicked();

private:
    Ui::StationUI *ui;
};

#endif // STATIONUI_H
