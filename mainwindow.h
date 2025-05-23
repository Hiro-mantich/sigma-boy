#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include "models.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_addnote_clicked();

    void on_pushButton_checkStatistic_clicked();

    void on_comboBox_Filtr_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
    //models *model;

    QStandardItemModel *model; // Указатель на QStandardItemModel

    void addTestCard();

public:   void loadTrainingsFromDB();
    void updateCalendarTraining();
public slots:
    void ListViewUpdate();
};
#endif // MAINWINDOW_H
