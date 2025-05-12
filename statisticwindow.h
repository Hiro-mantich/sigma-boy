#ifndef STATISTICWINDOW_H
#define STATISTICWINDOW_H

#include <QWidget>
#include <QDialog>

namespace Ui {
class StatisticWindow;
}

class StatisticWindow : public QDialog
{
    Q_OBJECT

public:
    explicit StatisticWindow(QWidget *parent = nullptr);
    ~StatisticWindow();

private:
    Ui::StatisticWindow *ui;
    void showRecords();
};

#endif // STATISTICWINDOW_H
