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
    exerciseModel = new QStringListModel(this);
    ui->listView_exercises->setModel(exerciseModel);

}

add_workout::~add_workout()
{
    delete ui;
}


// Создание записи о тренировке
int addTrainingRecord(const QString& date, const QString& description, const QString& exercises){
    QSqlQuery query;

    query.prepare("INSERT INTO trainings (date, description, exercises) "
                  "VALUES (:date, :description, :exercises)");
    query.bindValue(":date", date);
    query.bindValue(":description", description);
    query.bindValue(":exercises", exercises);

    if(!query.exec()){
        qDebug() << "Ошибка при добавлении записи: " << query.lastError();
        return -1;
    }

    return query.lastInsertId().toInt(); // возвращаем ID
}

// Создание записи об упражнении
bool addExerciseRecord(const QString& title, const QString& group_muscle, int numb_try, int numb_repit, int training_id){
    QSqlQuery query;

    // Подготовка SQL-запроса для вставки данных
    query.prepare("INSERT INTO exercise (title, group_muscle, numb_try, numb_repit, training_id) "
                  "VALUES (:title, :group_muscle, :numb_try, :numb_repit, :training_id)");

    // Привязка значений к параметрам
    query.bindValue(":title", title);
    query.bindValue(":group_muscle", group_muscle);
    query.bindValue(":numb_try", numb_try);
    query.bindValue(":numb_repit", numb_repit);
    query.bindValue(":training_id", training_id);

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

    /*
    // Вызываем функцию для добавления записи в базу данных
    bool success = addTrainingRecord(date, description, exercises);

    // Отображаем сообщение об успехе или ошибке
    if (success) {
        QMessageBox::information(this, "Успех", "Запись о тренировке добавлена!");
    } else {
        QMessageBox::warning(this, "Ошибка", "Не удалось добавить запись в базу данных.");
    }

    // Добавление связанных данных об упражнениях
    */
    int newId = addTrainingRecord(date, description, exercises);

    if (newId != -1) {
        out_id = newId;
        QMessageBox::information(this, "Успех", "Запись о тренировке добавлена!");
    } else {
        QMessageBox::warning(this, "Ошибка", "Не удалось добавить запись в базу данных.");
        return;
    }

    for (const auto& ex : exerciseList) {
        bool exSaved = addExerciseRecord(ex.title, ex.group_muscle, ex.numb_try, ex.numb_repit, out_id);
        if (!exSaved) {
            QMessageBox::warning(this, "Ошибка", "Не удалось сохранить одно из упражнений.");
            return;
        }
    }

    // Закрываем окно
    accept();

}

void add_workout::on_pushButton_2_clicked()
{
    exerciseWindow = new insert_complex(this);  // создаём с родителем
    connect(exerciseWindow, &insert_complex::signalExerciseAdd, this, &add_workout::slotExerciseAdd);
    exerciseWindow->setModal(true);
    exerciseWindow->exec();

}

void add_workout::slotExerciseAdd(const QString &title, const QString &group_muscle, int numb_try, int numb_repit) // Слот для принятия данных из insert_complex
{
    ExerciseData data{title, group_muscle, numb_try, numb_repit};
    exerciseList.append(data);

    // Обновляем отображение на форме
    QStringList list;
    for (const auto& ex : exerciseList) {
        QString line = ex.title + " (" + ex.group_muscle + ") — " +
                       QString::number(ex.numb_try) + "x" + QString::number(ex.numb_repit);
        list << line;
    }
    exerciseModel->setStringList(list);
}

