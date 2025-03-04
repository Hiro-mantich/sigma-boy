#include "cardwidget.h"

CardWidget::CardWidget (const QString &title, const QString &description, QWidget *parent)
    : QWidget(parent) {
    QVBoxLayout *layout = new QVBoxLayout(this);

    titleLabel = new QLabel(title, this);
    titleLabel->setStyleSheet("font-weight: bold; font-size: 16px;");

    descriptionLabel = new QLabel(description, this);
    descriptionLabel->setStyleSheet("font-size: 14px;");

    layout->addWidget(titleLabel);
    layout->addWidget(descriptionLabel);

    setLayout(layout);
}
