
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "carddelegate.h"
#include "add_workout.h" // Инклюд окна
#include <QSqlQuery> // Для QSqlQuery
#include <QSqlError> // Для QSqlError
#include <QStandardItemModel>
#include <QMessageBox>  // Для отображения описания
#include "cardwidget.h"  // Добавьте эту строку

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    CardWidget *card = new CardWidget("Заголовок", "Описание", this);

    // Создаём item
    QListWidgetItem *item = new QListWidgetItem(ui->listWidget_notes);
    item->setSizeHint(card->sizeHint());

    // Привязываем виджет к item
    ui->listWidget_notes->addItem(item);
    ui->listWidget_notes->setItemWidget(item, card);


    // Загружаем данные из базы данных
    loadTrainingsFromDB();

/*
    // Настройки для listView_note
    ui->listView_note->setSpacing(10);
    ui->listView_note->setViewMode(QListView::IconMode);

    // Установка делегата для кастомного отображения
    ui->listView_note->setItemDelegate(new CardDelegate(this));
*/

    // Соединяем сигнал clicked с вашим слотом onCardClicked
    //connect(ui->listView_note, &QListView::clicked, this, &MainWindow::onCardClicked);

    ui->listWidget_notes->setSpacing(10);
    ui->listWidget_notes->setResizeMode(QListView::Adjust);
    ui->listWidget_notes->setSelectionMode(QAbstractItemView::NoSelection);
    ui->listWidget_notes->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
}

MainWindow::~MainWindow()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    delete ui;
    // model очищается автоматически благодаря своей привязке к родительскому объекту
}


void MainWindow::addTestCard() {
    // Создаем тестовые данные
    QString testDate = "01.01.2025";
    QString testDescription = "Тестовое описание";

    // Создаем элемент модели
    QStandardItem *item = new QStandardItem(testDate);
    item->setData(testDescription, Qt::UserRole + 1);

    // Добавляем элемент в модель
    model->appendRow(item);

    // Связываем модель с видом
    ui->listView_note->setModel(model);

    qDebug() << "Тестовая карточка добавлена!";
}

void MainWindow::loadTrainingsFromDB() {
    QSqlQuery query("SELECT exercises, description FROM trainings");

    if (!query.exec()) {
        qDebug() << "Ошибка при запросе к базе данных: " << query.lastError();
        return;
    }

    ui->listWidget_notes->clear();  // Очищаем список перед добавлением

    while (query.next()) {
        QString title = query.value("exercises").toString();
        QString description = query.value("description").toString();

        // Создаём карточку
        CardWidget *card = new CardWidget(title, description, this);

        QListWidgetItem *item = new QListWidgetItem(ui->listWidget_notes);
        item->setSizeHint(card->sizeHint());

        ui->listWidget_notes->addItem(item);
        ui->listWidget_notes->setItemWidget(item, card);

        // Обновляем размер при раскрытии
        connect(card, &CardWidget::sizeChanged, this, [=]() {
            item->setSizeHint(card->sizeHint());
        });
    }
}


void MainWindow::on_pushButton_addnote_clicked()
{
    add_workout window;
    window.setModal(true);
    window.exec();

    loadTrainingsFromDB();  // Перезагрузить данные после добавления новой записи
}




