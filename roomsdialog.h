#ifndef ROOMSDIALOG_H
#define ROOMSDIALOG_H

#include <QDialog>

namespace Ui {
class RoomsDialog;
}

class RoomsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RoomsDialog(QWidget *parent = nullptr);
    ~RoomsDialog();

private:
    Ui::RoomsDialog *ui;
};

#endif // ROOMSDIALOG_H
