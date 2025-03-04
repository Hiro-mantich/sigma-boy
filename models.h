#ifndef MODELS_H
#define MODELS_H

#include <QAbstractListModel>
#include <QStringList>

class models: public QAbstractListModel {
    Q_OBJECT

public:
    explicit models(QObject *parent = nullptr);

    // Переопределение методов QAbstractListModel
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

    // Метод для добавления данных
    void addItem(const QString &item);

private:
    QStringList m_data;  // Список данных
};

#endif // MODELS_H
