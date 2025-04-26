#include "cardwidget.h"
#include <QDebug>
#include <QGraphicsDropShadowEffect>
#include <QPropertyAnimation>
#include <QParallelAnimationGroup>

CardWidget::CardWidget(const QString &title, const QString &description, QWidget *parent)
    : QWidget(parent), isExpanded(false) {

    setFixedWidth(490);
    setStyleSheet("background-color: white; border-radius: 12px;");

    // Мягкая тень
    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect(this);
    shadow->setBlurRadius(10.0);
    shadow->setOffset(0, 3);
    shadow->setColor(QColor(0, 0, 0, 50));
    setGraphicsEffect(shadow);

    // Layout'ы
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->setContentsMargins(15, 15, 15, 15);
    mainLayout->setSpacing(0);

    QHBoxLayout *headerLayout = new QHBoxLayout();
    headerLayout->setContentsMargins(0, 0, 0, 0);

    titleLabel = new QLabel(title, this);
    titleLabel->setStyleSheet("font-weight: bold; font-size: 16px;");
    titleLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);

    checkButton = new QPushButton(">", this);
    checkButton->setFixedSize(24, 24);
    checkButton->setStyleSheet(
        "QPushButton { border: none; background-color: #f0f0f0; border-radius: 12px; }"
        "QPushButton:hover { background-color: #e0e0e0; }"
        );

    connect(checkButton, &QPushButton::clicked, this, &CardWidget::onCheckButtonClicked);

    headerLayout->addWidget(titleLabel);
    headerLayout->addStretch();
    headerLayout->addWidget(checkButton);

    descriptionLabel = new QLabel(description, this);
    descriptionLabel->setStyleSheet("font-size: 14px; color: #333;");
    descriptionLabel->setWordWrap(true);
    descriptionLabel->setVisible(false);

    mainLayout->addLayout(headerLayout);
    mainLayout->addWidget(descriptionLabel);

    // Начальная высота
    resize(490, 80);
    setMinimumHeight(80);
    setMaximumHeight(160);
}

void CardWidget::onCheckButtonClicked() {
    setExpanded(!isExpanded);
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
    return QSize(490, isExpanded ? 160 : 80);
}
