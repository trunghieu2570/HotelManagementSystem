#include "createreservationdialog.h"
#include "ui_createreservationdialog.h"

CreateReservationDialog::CreateReservationDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateReservationDialog)
{
    ui->setupUi(this);
}

CreateReservationDialog::~CreateReservationDialog()
{
    delete ui;
}
