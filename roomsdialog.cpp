#include "roomsdialog.h"
#include "roomsqlmodel.h"
#include "ui_roomsdialog.h"

RoomsDialog::RoomsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RoomsDialog)
{
    ui->setupUi(this);
    RoomSqlModel *model = new RoomSqlModel;
    model->populate();
    ui->tableView->setModel(model);
    ui->tableView->show();
}

RoomsDialog::~RoomsDialog()
{
    delete ui;
}
