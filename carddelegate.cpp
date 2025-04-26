
#include "carddelegate.h"
#include "cardwidget.h"
#include <QWidget>
#include <QPainter>
#include <QApplication>

CardDelegate::CardDelegate(QObject *parent) : QStyledItemDelegate(parent) {}

void CardDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    if (!index.isValid())
        return;

    // Получаем данные для отображения
    QString title = index.data(Qt::DisplayRole).toString();
    QString description = index.data(Qt::UserRole + 1).toString();
    bool isExpanded = index.data(Qt::UserRole + 2).toBool();

    // Создаем виджет CardWidget и настраиваем его
    CardWidget widget(title, description, nullptr);  // Передаем нужные параметры
    widget.setExpanded(isExpanded);

    // Специальные настройки для рисования
    painter->save();
    painter->translate(option.rect.topLeft());
    widget.resize(option.rect.size());
    widget.render(painter, QPoint(), QRegion(), QWidget::DrawChildren);
    painter->restore();
}

QSize CardDelegate::sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    // Создаем временный виджет CardWidget для вычисления размера
    QString title = index.data(Qt::DisplayRole).toString();
    QString description = index.data(Qt::UserRole + 1).toString();
    bool isExpanded = index.data(Qt::UserRole + 2).toBool();

    CardWidget widget(title, description, nullptr);  // Передаем нужные параметры
    widget.setExpanded(isExpanded);
    return widget.sizeHint();
}
