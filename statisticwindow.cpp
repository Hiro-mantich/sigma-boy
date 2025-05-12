#include "statisticwindow.h"
#include "ui_statisticwindow.h"
#include <QDialog>
#include <QSqlQuery> // Для QSqlQuery
#include <QSqlError> // Для QSqlError
#include <QMessageBox>
#include <QStringListModel>


StatisticWindow::StatisticWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::StatisticWindow)
{
    ui->setupUi(this);
    showRecords();
}

StatisticWindow::~StatisticWindow()
{
    delete ui;
}

void StatisticWindow::showRecords() {
    QStringList records;

    QSqlQuery query("SELECT title, MAX(work_weight) FROM exercise GROUP BY title ORDER BY title");
    while (query.next()) {
        QString title = query.value(0).toString();
        int weight = query.value(1).toInt();
        records << QString("%1 %2 кг").arg(title).arg(weight);
    }

    QStringListModel* model = new QStringListModel(records, this);
    ui->listView_statistic->setModel(model);
}
