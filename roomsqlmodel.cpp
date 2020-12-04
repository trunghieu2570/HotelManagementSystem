#include "roomsqlmodel.h"

RoomSqlModel::RoomSqlModel(QObject *parent)
    : QSqlQueryModel(parent)
{
}

QVariant RoomSqlModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole)
    {
        if (orientation == Qt::Horizontal)
        {
            switch (section) {
            case 0:
                return tr("Id");
            case 1:
                return tr("Name");
            case 2:
                return tr("Type");
            default:
                return QVariant();
            }
        }
    }
    return QVariant();
}

void RoomSqlModel::populate()
{
    setQuery("SELECT r.Id, r.Name, rt.Name FROM [dbo].[Room] r JOIN [dbo].RoomType rt ON r.RoomTypeId = rt.Id");
}
