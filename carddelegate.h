#ifndef CARDDELEGATE_H
#define CARDDELEGATE_H

#include <QStyledItemDelegate>

class CardDelegate : public QStyledItemDelegate {
    Q_OBJECT

public:
    explicit CardDelegate(QObject *parent = nullptr);

    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
    QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const override;
};

#endif // CARDDDELEGATE_H
