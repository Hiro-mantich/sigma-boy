#ifndef INSERT_COMPLEX_H
#define INSERT_COMPLEX_H

#include <QDialog>

namespace Ui {
class insert_complex;
}

class insert_complex : public QDialog
{
    Q_OBJECT

public:
    explicit insert_complex(QWidget *parent = nullptr);
    ~insert_complex();

signals:  // Секция для сигналов
    void signalExerciseAdd(const QString& title,
                       const QString& group_muscle,
                       int numb_try,
                       int numb_repit);

private slots:
    void on_pushButton_add_clicked();

private:
    Ui::insert_complex *ui;

};

#endif // INSERT_COMPLEX_H
