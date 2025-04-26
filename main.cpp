#include "mainwindow.h"

#include <QApplication>
#include <QVariant> //QVariant позволяет работать с данными разных типов, таких как строки, числа, даты и т. д., в одном и том же контейнере

#include <QSqlQuery> // add sqlite3
#include <QSqlDatabase>
#include <QSqlError>



int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    // Создание базы данных SQLite
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("trainings.db");

    if (!db.open()) {
        qCritical() << "Ошибка при открытии базы данных:" << db.lastError().text();
        return -1;
    }
    else
        qDebug() << "Тут все гуд. Есть подключение в main";

    // Создание таблицы
    QSqlQuery query;
    // Создание таблицы trainings
    QString createTrainingsTableQuery = R"(
    CREATE TABLE IF NOT EXISTS trainings (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        date TEXT,
        description TEXT,
        exercises TEXT
    )
    )";

    if (!query.exec(createTrainingsTableQuery)) {
        qCritical() << "Ошибка при создании таблицы trainings:" << query.lastError().text();
        return -1;
    }

    // Создание таблицы exercise
    QString createExerciseTableQuery = R"(
    CREATE TABLE IF NOT EXISTS exercise (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        title TEXT,
        group_muscle TEXT,
        numb_try INTEGER,
        numb_repit INTEGER,
        training_id INTEGER,  -- Поле для связи с таблицей trainings
        FOREIGN KEY (training_id) REFERENCES trainings(id) ON DELETE CASCADE
    )
    )";

    if (!query.exec(createExerciseTableQuery)) {
        qCritical() << "Ошибка при создании таблицы exercise:" << query.lastError().text();
        return -1;
    }

    qDebug() << "База данных и таблицы успешно созданы.";

    MainWindow w;
    w.show();

    return a.exec();


}
