#ifndef ROOMSQLMODEL_H
#define ROOMSQLMODEL_H


#include <QSqlQueryModel>
#include <QSqlRecord>

class RoomSqlModel : public QSqlQueryModel
{
    Q_OBJECT

public:
    explicit RoomSqlModel(QObject *parent = nullptr);
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;
    void populate();
private:
};

#endif // ROOMSQLMODEL_H
