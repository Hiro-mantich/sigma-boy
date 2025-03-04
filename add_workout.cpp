#include "add_workout.h"
#include "ui_add_workout.h"
#include <QSqlQuery> // Для QSqlQuery
#include <QSqlError> // Для QSqlError
#include <QMessageBox>
#include "insert_complex.h"


add_workout::add_workout(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::add_workout)
{
    ui->setupUi(this);
}

add_workout::~add_workout()
{
    delete ui;
}

// Создание записи о тренировке
bool addTrainingRecord(const QString& date, const QString& description, const QString& exercises){
    QSqlQuery query;

    // Подготовка SQL-запроса для вставки данных
    query.prepare("INSERT INTO trainings (date, description, exercises) "
                  "VALUES (:date, :description, :exercises)");

    // Привязка значений к параметрам
    query.bindValue(":date", date);
    query.bindValue(":description", description);
    query.bindValue(":exercises", exercises);





    // Выполнение запроса
    if(!query.exec()){
        qDebug() << "Ошибка при добавлении записи: " << query.lastError();
        return false;
    }
    return true;
}

void add_workout::on_pushButton_clicked() // Обработчик события + (создание записи о тренировке)
{
    // Получаем данные из текстовых полей
    QString date = ui->dateEdit->text();
    QString description = ui->lineEdit_Description->text();
    QString exercises = ui->lineEdit_2->text();

    // Вызываем функцию для добавления записи в базу данных
    bool success = addTrainingRecord(date, description, exercises);

    // Отображаем сообщение об успехе или ошибке
    if (success) {
        QMessageBox::information(this, "Успех", "Запись о тренировке добавлена!");
    } else {
        QMessageBox::warning(this, "Ошибка", "Не удалось добавить запись в базу данных.");
    }
}

void add_workout::on_pushButton_2_clicked()
{
    insert_complex window;
    window.setModal(true);
    window.exec();

}

