#include "carddelegate.h"

#include "cardwidget.h"
#include <QPainter>

CardDelegate::CardDelegate(QObject *parent)
    : QStyledItemDelegate(parent) {}

void CardDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const {
    QString title = index.data(Qt::DisplayRole).toString();
    QString description = index.data(Qt::UserRole + 1).toString();

    CardWidget cardWidget(title, description);
    cardWidget.resize(option.rect.size());

    painter->save();
    painter->translate(option.rect.topLeft());
    cardWidget.render(painter);
    painter->restore();
}

QSize CardDelegate::sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const {
    Q_UNUSED(option);
    Q_UNUSED(index);
    return QSize(200, 100);  // Размер карточки
}
