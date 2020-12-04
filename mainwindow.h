#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlQueryModel>
#include "clientsqlmodel.h"
#include <QHostInfo>
#include "roomtypedialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void gotoReservationPage();
    void gotoClientPage();
    void gotoRoomCalendarPage();
    void openRoomTypeDialog();
    void openRoomsDialog();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
