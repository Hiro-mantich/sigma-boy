#ifndef CARDWIDGET_H
#define CARDWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>

class CardWidget :public QWidget {
    Q_OBJECT

public:
    explicit CardWidget(const QString &title, const QString &description, QWidget *parent = nullptr);

private:
    QLabel *titleLabel;
    QLabel *descriptionLabel;
};

#endif // CARDWIDGET_H
