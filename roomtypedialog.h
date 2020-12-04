#ifndef ROOMTYPEDIALOG_H
#define ROOMTYPEDIALOG_H

#include <QDialog>
#include "roomtypesqlmodel.h"

namespace Ui {
class RoomTypeDialog;
}

class RoomTypeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RoomTypeDialog(QWidget *parent = nullptr);
    ~RoomTypeDialog();

private:
    Ui::RoomTypeDialog *ui;
};

#endif // ROOMTYPEDIALOG_H
