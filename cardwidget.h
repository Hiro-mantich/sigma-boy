#ifndef CARDWIDGET_H
#define CARDWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPropertyAnimation>
#include <QEasingCurve>
#include <QPropertyAnimation>

class CardWidget : public QWidget {
    Q_OBJECT
    Q_PROPERTY(int minimumHeight READ minimumHeight WRITE setMinimumHeight)  // Свойство для анимации

public:
    explicit CardWidget(const int& id, const QString &title, const QString &description, QWidget *parent = nullptr);

    void setExpanded(bool expanded);  // Объявляем метод setExpanded
    QSize sizeHint() const override;  // Объявляем метод sizeHint для фиксированного размера

signals:
    void descriptionRequested(const QString &description);  // Сигнал для открытия описания
    void sizeChanged();  // сигнал для изменнеия размера
    void requestListViewUpdate(); // Сигнал для обновления списка тренировок (listview)


private slots:
    void onCheckButtonClicked();  // Слот для обработки нажатия на кнопку
    void onDeleteButtonClicked(); // Слот для обработки нажатия на кнопку

private:
    QLabel *titleLabel;
    QLabel *descriptionLabel;
    QPushButton *checkButton;
    QPushButton *deleteButton;
    QString description;  // Храним описание карточки
    bool isExpanded;  // Флаг для отслеживания состояния карточки
    QHBoxLayout *mainLayout;  // Основной layout
    QPropertyAnimation *animation;  // Анимация
    int recordId;
};

#endif // CARDWIDGET_H
