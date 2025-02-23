#ifndef ADD_WORKOUT_H
#define ADD_WORKOUT_H

#include <QDialog>

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

private:
    Ui::add_workout *ui;
};

#endif // ADD_WORKOUT_H
