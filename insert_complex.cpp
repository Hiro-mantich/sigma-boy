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
/*
// Создание записи о тренировке
bool addExerciseRecord1(const QString& title, const QString& group_muscle,int work_weight, int numb_try, int numb_repit, int training_id){
    QSqlQuery query;

    // Подготовка SQL-запроса для вставки данных
    query.prepare("INSERT INTO exercise (title, group_muscle, work_weight, numb_try, numb_repit, training_id) "
                  "VALUES (:title, :group_muscle,:work_weight, :numb_try, :numb_repit, :training_id)");

    // Привязка значений к параметрам
    query.bindValue(":title", title);
    query.bindValue(":group_muscle", group_muscle);
    query.bindValue(":work_weight", work_weight);
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
*/
void insert_complex::on_pushButton_add_clicked()
{
    // Получаем данные из текстовых полей
    QString title = ui->lineEdit_title->text();
    QString group_muscle = ui->lineEdit_group_muscle->text();
    int work_weight = ui->lineEdit_work_weight->text().toInt();
    int numb_try = ui->lineEdit_numb_try->text().toInt();
    int numb_repit = ui->lineEdit_numb_repit->text().toInt();

    // Проверка данных
    if(title.isEmpty() || group_muscle.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Заполните все поля");
        return;
    }

    // Отправляем данные через сигнал
    emit signalExerciseAdd(title, group_muscle,work_weight, numb_try, numb_repit);

    // Закрываем окно
    accept();


    //}
}

