#include "mainwindow.h"
#include "statisticwindow.h"
#include "./ui_mainwindow.h"
#include "add_workout.h" // Инклюд окна

#include <QSqlQuery> // Для QSqlQuery
#include <QSqlError> // Для QSqlError
#include <QStandardItemModel>
#include <QMessageBox>  // Для отображения описания

#include "cardwidget.h"

#include <QTextCharFormat>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    //CardWidget *card = new CardWidget(45,"Заголовок", "Описание", this);
    //connect(card, &CardWidget::requestListViewUpdate, this, &MainWindow::ListViewUpdate);
    // Создаём item
    QListWidgetItem *item = new QListWidgetItem(ui->listWidget_notes);
    //item->setSizeHint(card->sizeHint());

    // Привязываем виджет к item
    ui->listWidget_notes->addItem(item);
    //ui->listWidget_notes->setItemWidget(item, card);



    ui->calendarWidget->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader); // отключить отображение номеров недель в QCalendarWidget


    // Загружаем данные из базы данных
    loadTrainingsFromDB();
    updateCalendarTraining();

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

void MainWindow::updateCalendarTraining(){ // Функция по окрашиванию дней в календаре в зависимости от типа тренировки
    ui->calendarWidget->setDateTextFormat(QDate(), QTextCharFormat()); // Cнимаем все подсветки: необязательно, но иногда нужно
    QSqlQuery query("SELECT date, description FROM trainings");
    while (query.next()) {
        //QString rawDate = query.value("date").toString();
        //QDate date = QDate::fromString(rawDate, "dd.MM.yyyy");
        QString rawDate = query.value("date").toString();
        QDate date = query.value("date").toDate();
        if (!date.isValid()) continue;
        QString desc = query.value("description").toString().toLower().trimmed();

        QColor color;
        if (desc == "сплит (спина + бицепс)")
            color = QColor(50, 205, 50);      // Ярко-зелёный (LimeGreen)
        else if (desc == "сплит (грудь + трицепс)")
            color = QColor(30, 144, 255);     // Ярко-синий (DodgerBlue)
        else if (desc == "сплит (ноги)")
            color = QColor(255, 215, 0);      // Золотой (Gold)
        else if (desc == "кардио")
            color = QColor(255, 105, 180);    // Ярко-розовый (HotPink)
        else if (desc == "фулбади")
            color = QColor(147, 112, 219);    // Средне-фиолетовый (MediumPurple)
        else
            continue;
        QTextCharFormat fmt;
        fmt.setBackground(color);
        ui->calendarWidget->setDateTextFormat(date, fmt);
    }
}

void MainWindow::loadTrainingsFromDB() {
    QSqlQuery query;

    QString filtr = ui->comboBox_Filtr->currentText();

    // Определяем запрос в зависимости от выбранного фильтра
    if (filtr == "↕ Все") {
        query.prepare("SELECT id, date, exercises, description FROM trainings ORDER BY date ASC");
    }
    else if (filtr == "↓ Будущие") {
        query.prepare("SELECT id, date, exercises, description FROM trainings "
                      "WHERE date >= DATE('now') ORDER BY date ASC");
    }
    else if (filtr == "↑ Прошедшие") {
        query.prepare("SELECT id, date, exercises, description FROM trainings "
                      "WHERE date < DATE('now') ORDER BY date DESC");
    }


    if (!query.exec()) {
        qDebug() << "Ошибка при запросе к базе данных: " << query.lastError();
        return;
    }

    ui->listWidget_notes->clear();

    while (query.next()) {
        int id = query.value("id").toInt();
        QString title = query.value("exercises").toString();
        QString date = query.value("date").toString();
        QString baseDescription = query.value("description").toString();
        title += " (" + date + ", "+baseDescription+ ")";

        // Подзапрос в таблицу `exercise` для этого тренинга
        QSqlQuery exerciseQuery;
        exerciseQuery.prepare("SELECT title, group_muscle,work_weight, numb_try, numb_repit FROM exercise WHERE training_id = :id");
        exerciseQuery.bindValue(":id", id);

        QStringList exerciseDescriptions;

        if (!exerciseQuery.exec()) {
            qDebug() << "Ошибка при запросе к exercise: " << exerciseQuery.lastError();
        } else {
            while (exerciseQuery.next()) {
                QString titleEx = exerciseQuery.value("title").toString();
                QString group = exerciseQuery.value("group_muscle").toString();
                double work_weight = exerciseQuery.value("work_weight").toDouble();
                int tries = exerciseQuery.value("numb_try").toInt();
                int reps = exerciseQuery.value("numb_repit").toInt();

                QString line = QString(" %1 (%2) — %5кг — %3x%4")
                                   .arg(titleEx).arg(group).arg(tries).arg(reps).arg(work_weight);
                exerciseDescriptions << line;
            }
        }

        //QString line = ex.title + " (" + ex.group_muscle + ") — " +
         //              QString::number(ex.numb_try) + "x" + QString::number(ex.numb_repit)


        // Формируем итоговое описание
        QString Description ="Упражнения:\n" + exerciseDescriptions.join("\n");

        // Создание карточки
        CardWidget *card = new CardWidget(id, title, Description, this);
        connect(card, &CardWidget::requestListViewUpdate, this, &MainWindow::ListViewUpdate);

        QListWidgetItem *item = new QListWidgetItem(ui->listWidget_notes);
        item->setSizeHint(card->sizeHint());
        ui->listWidget_notes->addItem(item);
        ui->listWidget_notes->setItemWidget(item, card);

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
    updateCalendarTraining();
}

void MainWindow::ListViewUpdate(){

    qDebug()<<"Тут нет ошибки";
    loadTrainingsFromDB();  // Перезагрузить данные после добавления новой записи
    updateCalendarTraining();
}

void MainWindow::on_pushButton_checkStatistic_clicked() // ОТкрытие окна со статистикой
{
    StatisticWindow window;
    window.setModal(true);
    window.exec();
}

// Перезагрузить данные после смены фильтра
void MainWindow::on_comboBox_Filtr_currentIndexChanged(int index)
{
    loadTrainingsFromDB();
}

