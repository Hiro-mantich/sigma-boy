#ifndef ADD_WORKOUT_H
#define ADD_WORKOUT_H
#include "insert_complex.h"

#include <QDialog>
#include <QStringListModel>

namespace Ui {
class add_workout;
}

class add_workout : public QDialog
{
    Q_OBJECT

public:
    explicit add_workout(QWidget *parent = nullptr);
    ~add_workout();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::add_workout *ui;
    insert_complex* exerciseWindow = nullptr; // Объявление указателя на insert_complex
    QStringListModel* exerciseModel = nullptr;

    struct ExerciseData {
        QString title;
        QString group_muscle;
        int numb_try;
        int numb_repit;
    };

public slots:
    void slotExerciseAdd(const QString& title,
                         const QString& group_muscle,
                         int numb_try,
                         int numb_repit);




private:
QVector<ExerciseData> exerciseList; // список всех упражнений до сохранения
 int out_id = -1; // сюда сохраним ID тренировки
};

#endif // ADD_WORKOUT_H
