#include "roomtypesqlmodel.h"

RoomTypeSqlModel::RoomTypeSqlModel(QObject *parent)
    : QSqlQueryModel(parent)
{
}

QVariant RoomTypeSqlModel::headerData(int section, Qt::Orientation orientation, int role) const
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
                return tr("Beds");
            case 3:
                return tr("Slots");
            case 4:
                return tr("Price");
            case 5:
                return tr("Surcharge");
            default:
                return QVariant();
            }
        }
    }
    return QVariant();
}

void RoomTypeSqlModel::populate()
{
    setQuery("SELECT [Id], [Name], [Beds], [Slots], [Price], [Surcharge] FROM RoomType");
}
