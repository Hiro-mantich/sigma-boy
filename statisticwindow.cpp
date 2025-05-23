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
    showNumberTrainings();
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

void StatisticWindow::showNumberTrainings()
{
    QSqlQuery query(R"(
        SELECT
            COUNT(*) AS total_count,
            COUNT(CASE WHEN date >= DATE('now', '-1 year') THEN 1 END) AS last_year_count,
            COUNT(CASE WHEN date >= DATE('now', '-14 day') THEN 1 END) AS last_2_weeks_count
        FROM trainings
    )");

    if (query.next()) {
        int two_weeks = query.value(2).toInt();
        int year = query.value(1).toInt();
        int total = query.value(0).toInt();



        // Вывод
        //if (two_weeks >=6)
        ui->label_two_weeks->setText(QString("%1").arg(two_weeks));

        ui->label_year->setText(QString("%1").arg(year));
        ui->label_all_times->setText(QString("%1").arg(total));
    }
}
