#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QSqlQuery> // Для QSqlQuery
#include <QSqlError> // Для QSqlError
#include "add_workout.h" //инклуд окна
#include "models.h"
#include <QStandardItemModel>
#include "carddelegate.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , model(new models(this))  // Создаем модель
{
    ui->setupUi(this);


    // Создаем модель
    QStandardItemModel *model = new QStandardItemModel(this);

    // Добавляем данные в модель
    QStandardItem *item1 = new QStandardItem("Заголовок 1");
    item1->setData("Описание 1", Qt::UserRole + 1);  // Дополнительные данные
    model->appendRow(item1);

    QStandardItem *item2 = new QStandardItem("Заголовок 2");
    item2->setData("Описание 2", Qt::UserRole + 1);
    model->appendRow(item2);

    QStandardItem *item3 = new QStandardItem("Заголовок 3");
    item3->setData("Описание 3", Qt::UserRole + 1);
    model->appendRow(item3);

    QStandardItem *item4 = new QStandardItem("Заголовок 4");
    item4->setData("Описание 4", Qt::UserRole + 1);
    model->appendRow(item4);

    // Устанавливаем модель и делегат в QListView
    ui->listView_note->setModel(model);
    ui->listView_note->setItemDelegate(new CardDelegate(this));

    ui->listView_note->setSpacing(10);  // Устанавливаем отступ в 10 пикселей

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_addnote_clicked()
{
    add_workout window;
    window.setModal(true);
    window.exec();

    // Пример добавления новой строки после закрытия окна
    model->addItem("Новая строка");
}

