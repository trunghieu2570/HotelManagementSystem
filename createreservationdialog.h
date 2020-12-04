#ifndef CREATERESERVATIONDIALOG_H
#define CREATERESERVATIONDIALOG_H

#include <QDialog>

namespace Ui {
class CreateReservationDialog;
}

class CreateReservationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CreateReservationDialog(QWidget *parent = nullptr);
    ~CreateReservationDialog();

private:
    Ui::CreateReservationDialog *ui;
};

#endif // CREATERESERVATIONDIALOG_H
