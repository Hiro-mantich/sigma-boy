#include "insert_complex.h"
#include "ui_insert_complex.h"
#include <QSqlQuery> // Для QSqlQuery
#include <QSqlError> // Для QSqlError"
#include <QMessageBox> // Для "Отображаем сообщение об успехе или ошибке"
insert_complex::insert_complex(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::insert_complex)
{
    ui->setupUi(this);
}

insert_complex::~insert_complex()
{
    delete ui;
}

// Создание записи о тренировке
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


void insert_complex::on_pushButton_add_clicked()
{
    // Получаем данные из текстовых полей
    QString title = ui->lineEdit_title->text();
    QString group_muscle = ui->lineEdit_group_muscle->text();
    QString numb_try_str = ui->lineEdit_numb_try->text();
    QString numb_repit_str = ui->lineEdit_numb_repit->text();

    int numb_try = numb_try_str.toInt();  // Преобразование из кустринг в инт
    int numb_repit = numb_repit_str.toInt();  // Преобразование

    int training_id = 0;

    // Вызываем функцию для добавления записи в базу данных
    bool success = addExerciseRecord(title, group_muscle, numb_try, numb_repit, training_id);

    // Отображаем сообщение об успехе или ошибке
    if (success) {
        QMessageBox::information(this, "Успех", "Запись о тренировке добавлена!");
    } else {
        QMessageBox::warning(this, "Ошибка", "Не удалось добавить запись в базу данных.");
    }
}

