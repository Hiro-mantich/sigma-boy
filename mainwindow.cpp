#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


// Создание записи о тренировке
bool addTrainingRecord(const QString& date, const QString& trainingType, const QString& description, const QString& exerciseComplex){
    QSqlQuery query;

    // Подготовка SQL-запроса для вставки данных
    query.prepare("INSERT INTO trainings (date, training_type, description, exercise_complex) "
                  "VALUES (:date, :training_type, :description, :exercise_complex)");

    // Привязка значений к параметрам
    query.bindValue(":date", date);
    query.bindValue(":training_type", trainingType);
    query.bindValue(":description", description);
    query.bindValue(":exercise_complex", exerciseComplex);

    // Выполнение запроса
    if (!query.exec()) {
        qCritical() << "Ошибка при добавлении записи в базу данных:" << query.lastError().text();
        return false;
    }

    qDebug() << "Запись успешно добавлена.";
    return true;
}

void MainWindow::on_pushButton_clicked() // Обработчик события + (создание записи о тренировке)
{
    // Получаем данные из текстовых полей
    QString date = ui->lineEditDate->text();
    QString trainingType = ui->lineEditType->text();
    QString description = ui->lineEditDescription->text();
    QString exerciseComplex = ui->lineEditExercises->text();

    // Вызываем функцию для добавления записи в базу данных
    bool success = addTrainingRecord(date, trainingType, description, exerciseComplex);

    // Отображаем сообщение об успехе или ошибке
    if (success) {
        QMessageBox::information(this, "Успех", "Запись о тренировке добавлена!");
    } else {
        QMessageBox::warning(this, "Ошибка", "Не удалось добавить запись в базу данных.");
    }
}


