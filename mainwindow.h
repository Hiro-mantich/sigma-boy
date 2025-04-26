#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "models.h"
#include <QStandardItemModel>

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
    //void onCardClicked(const QModelIndex &index);  // Объявляем слот


private:
    Ui::MainWindow *ui;
    //models *model;

    QStandardItemModel *model; // Указатель на QStandardItemModel

    void addTestCard();

public:   void loadTrainingsFromDB();
    void updateCalendarTraining();
};
#endif // MAINWINDOW_H
