#include "mainwindow.h"

#include <QApplication>
#include <QVariant> //QVariant позволяет работать с данными разных типов, таких как строки, числа, даты и т. д., в одном и том же контейнере

#include <QSqlQuery> // add sqlite3
#include <QSqlDatabase>
#include <QSqlError>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    // Создание базы данных SQLite
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("trainings.db");

    if (!db.open()) {
        qCritical() << "Ошибка при открытии базы данных:" << db.lastError().text();
        return -1;
    }

    // Создание таблицы
    QSqlQuery query;
    QString createTableQuery = R"(
        CREATE TABLE IF NOT EXISTS trainings (
            date TEXT,
            description TEXT,
            exercises TEXT
        )
    )";

    if (!query.exec(createTableQuery)) {
        qCritical() << "Ошибка при создании таблицы:" << query.lastError().text();
        return -1;
    }

    qDebug() << "База данных и таблица успешно созданы.";

    return a.exec();
}
