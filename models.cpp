//Файл описания модели, для вывода в listview
#include "models.h"

models::models(QObject *parent)
    : QAbstractListModel(parent) {}

int models::rowCount(const QModelIndex &parent) const {
    Q_UNUSED(parent);
    return m_data.size();
}

QVariant models::data(const QModelIndex &index, int role) const {
    if (!index.isValid() || index.row() >= m_data.size())
        return QVariant();

    if (role == Qt::DisplayRole)
        return m_data.at(index.row());

    return QVariant();
}

void models::addItem(const QString &item) {
    beginInsertRows(QModelIndex(), m_data.size(), m_data.size());  // Уведомляем о добавлении строки
    m_data.append(item);  // Добавляем элемент в список
    endInsertRows();  // Завершаем вставку
}
