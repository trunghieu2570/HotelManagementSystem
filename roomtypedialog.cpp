#include "roomtypedialog.h"
#include "ui_roomtypedialog.h"

RoomTypeDialog::RoomTypeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RoomTypeDialog)
{
    ui->setupUi(this);

    RoomTypeSqlModel *model = new RoomTypeSqlModel;
    model->populate();
    ui->tableView->setModel(model);
    ui->tableView->show();
}

RoomTypeDialog::~RoomTypeDialog()
{
    delete ui;
}
