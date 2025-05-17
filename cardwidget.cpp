#include "cardwidget.h"

#include <QDebug>
#include <QGraphicsDropShadowEffect>
#include <QPropertyAnimation>
#include <QParallelAnimationGroup>
#include <QSqlQuery> // Для QSqlQuery
#include <QSqlError> // Для QSqlError
#include <iostream>
#include <QMessageBox>

CardWidget::CardWidget(const int &recordId, const QString &title, const QString &description, QWidget *parent)
    : QWidget(parent),
    recordId(recordId),  // Инициализация члена класса из параметра конструктора
    isExpanded(false) {

    setFixedWidth(475);
    setStyleSheet("background-color: white; border-radius: 12px;");
    //setStyleSheet("QWidget { background-color: white; border-radius: 12px; }");

    // Мягкая тень
    //QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect(this);
    //shadow->setBlurRadius(10.0);
    //shadow->setOffset(0, 3);
    //shadow->setColor(QColor(0, 0, 0, 50));
    //setGraphicsEffect(shadow);

    // Layout'ы
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->setContentsMargins(0, 0, 25, 15);
    mainLayout->setSpacing(5);

    QHBoxLayout *headerLayout = new QHBoxLayout();
    headerLayout->setContentsMargins(0, 0, 0, 0);

    titleLabel = new QLabel(title, this);
    titleLabel->setStyleSheet("font-weight: bold; font-size: 20px;");
    titleLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);

    // Кнопка открытия
    checkButton = new QPushButton(">", this);
    checkButton->setFixedSize(30, 30);
    //checkButton->setStyleSheet(
    //    "QPushButton { border: none; background-color: #f0f0f0; border-radius: 12px; }"
    //    "QPushButton:hover { background-color: #e0e0e0; }"
    //    );
    checkButton->setStyleSheet(
        "QPushButton {"
        "    background-color: #9CCC65;"  // Основной салатовый
        "    border: 2px solid #8BC34A;"  // Темно-салатовая граница
        "    border-radius: 8px;"
        "    color: white;"
        "    font-size: 20px;"          // Размер текста
        "    font-weight: bold;"

        "}"
        "QPushButton:hover {"
        "    background-color: #AED581;"  // Светло-салатовый при наведении
        "    border-color: #9CCC65;"
        "}"
        "QPushButton:pressed {"
        "    background-color: #7CB342;"  // Темно-салатовый при нажатии
        "    border-color: #689F38;"
        "}"
        );

    // Кнопка удаления
    deleteButton = new QPushButton("X", this);
    deleteButton->setFixedSize(30, 30);
    //deleteButton->setStyleSheet(
    //    "QPushButton { border: none; background-color: #f0f0f0; border-radius: 12px; }"
    //    "QPushButton:hover { background-color: #e0e0e0; }"
    //   );

    deleteButton->setStyleSheet(
        "QPushButton {"
        "    background-color: #9CCC65;"  // Основной салатовый
        "    border: 2px solid #8BC34A;"  // Темно-салатовая граница
        "    border-radius: 8px;"
        "    color: white;"
        "    font-size: 20px;"          // Размер текста
        "    font-weight: bold;"

        "}"
        "QPushButton:hover {"
        "    background-color: #AED581;"  // Светло-салатовый при наведении
        "    border-color: #9CCC65;"
        "}"
        "QPushButton:pressed {"
        "    background-color: #7CB342;"  // Темно-салатовый при нажатии
        "    border-color: #689F38;"
        "}"
        );

    connect(checkButton, &QPushButton::clicked, this, &CardWidget::onCheckButtonClicked);

    connect(deleteButton, &QPushButton::clicked, this, &CardWidget::onDeleteButtonClicked);

    headerLayout->addWidget(titleLabel);
    headerLayout->addStretch();
    headerLayout->addWidget(checkButton);

    // Кнопка удаления записи
    headerLayout->addWidget(deleteButton);


    descriptionLabel = new QLabel(description, this);
    descriptionLabel->setStyleSheet("font-size: 14px; color: #333;");
    descriptionLabel->setWordWrap(true);
    descriptionLabel->setVisible(false);

    mainLayout->addLayout(headerLayout);
    mainLayout->addWidget(descriptionLabel);

    // Начальная высота
    resize(450, 80);
    setMinimumHeight(80);
    setMaximumHeight(160);

}

void CardWidget::onCheckButtonClicked() {
    setExpanded(!isExpanded);
}

void CardWidget::onDeleteButtonClicked() {
    // Стиль окна удалить тренировку или нет?
    QMessageBox msgBox;
    msgBox.setWindowTitle("Удаление тренировки");
    msgBox.setText("Вы действительно хотите удалить запись о тренировке?");

    // Создаём кнопки
    QPushButton* yesBtn = msgBox.addButton("Да", QMessageBox::YesRole);
    QPushButton* noBtn = msgBox.addButton("Нет", QMessageBox::NoRole);

    // GREEN BUTTON (ДА)
    yesBtn->setStyleSheet("QPushButton {"
                          "background-color: #4CAF50;"
                          "border: 2px solid #388E3C;"
                          "border-radius: 8px;"
                          "color: white;"
                          "font-size: 24px;"
                          "font-weight: bold;"
                          "min-width: 40px;"
                          "min-height: 40px;"
                          "padding: 0px;"
                          "margin: 2px;"
                          "}"
                          "QPushButton:hover {"
                          "background-color: #66BB6A;"
                          "border-color: #4CAF50;"
                          "}"
                          "QPushButton:pressed {"
                          "background-color: #2E7D32;"
                          "border-color: #1B5E20;"
                          "}"
                          );

    // GRAY BUTTON (НЕТ)
    noBtn->setStyleSheet("QPushButton {"
                         "background-color: #EEEEEE;"
                         "border: 2px solid #BDBDBD;"
                         "border-radius: 8px;"
                         "color: #444;"
                         "font-size: 24px;"
                         "font-weight: bold;"
                         "min-width: 40px;"
                         "min-height: 40px;"
                         "padding: 0px;"
                         "margin: 2px;"
                         "}"
                         "QPushButton:hover {"
                         "background-color: #CCCCCC;"
                         "border-color: #888888;"
                         "}"
                         "QPushButton:pressed {"
                         "background-color: #B0B0B0;"
                         "border-color: #333333;"
                         "}"
                         );

    // Стилизация диалога (фон, шрифт)
    msgBox.setStyleSheet("QMessageBox { background-color: #f8f8f8; font-size: 24px; }");

    msgBox.exec();

    if (msgBox.clickedButton() == yesBtn) {
    QSqlQuery query;

    QSqlQuery pragmaQuery; // Для каскадного удаления записей
    pragmaQuery.exec("PRAGMA foreign_keys = ON;");

    query.prepare("DELETE FROM trainings WHERE id = :id");
    query.bindValue(":id", recordId);  // 'recordid' - это переменная `CardWidget`

    //qDebug() << recordId;
    if (!query.exec()) {
        qDebug() << "Ошибка при удалении записи: " << query.lastError();
        return; // В случае ошибки просто вручную обработаем её
    }

    // Если запись успешно удалена, скрыть или удалить виджет
    emit requestListViewUpdate(); // Использование сигнала
    this->hide(); // Или используйте `deleteLater()` для удаления виджета
    }
}


void CardWidget::setExpanded(bool expanded) {
    isExpanded = expanded;

    checkButton->setText(expanded ? "v" : ">");

    // Устанавливаем видимость в зависимости от состояния
    descriptionLabel->setVisible(expanded);

    QSize startSize = size();
    QSize endSize = expanded ? QSize(490, 160) : QSize(490, 80);

    // Анимация размера
    QPropertyAnimation *sizeAnim = new QPropertyAnimation(this, "size");
    sizeAnim->setDuration(300);
    sizeAnim->setStartValue(startSize);
    sizeAnim->setEndValue(endSize);
    sizeAnim->setEasingCurve(QEasingCurve::InOutQuad);

    sizeAnim->start(QAbstractAnimation::DeleteWhenStopped);

    emit sizeChanged();  // Уведомим, что размер изменился

}

QSize CardWidget::sizeHint() const {
    return QSize(480, isExpanded ? 160 : 80);
}
