#include "mainwindow.h"
#include "roomsdialog.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC3");

    QString connectString = "Driver={SQL Server Native Client 11.0};";                     // Driver is now {SQL Server Native Client 11.0}
    connectString.append("Server=lpc:"+QHostInfo::localHostName()+"\\SQLEXPRESS;");   // Hostname,SQL-Server Instance
    connectString.append("Database=HOTEL_DATABASE; Trusted_Connection=Yes;");  // Schema
    //connectString.append("Uid=SQLUSER;");           // User
    //connectString.append("Pwd=SQLPASS;");           // Pass

    db.setDatabaseName(connectString);
    bool ok = db.open();
    if (ok)
    {
        ClientSqlModel *model = new ClientSqlModel;
        model->populate();
        ui->clientTableView->setModel(model);
        ui->clientTableView->show();
    }

    connect(ui->actionReservations, &QAction::triggered, this, &MainWindow::gotoReservationPage);
    connect(ui->actionClients, &QAction::triggered, this, &MainWindow::gotoClientPage);
    connect(ui->actionRooms_Calendar, &QAction::triggered, this, &MainWindow::gotoRoomCalendarPage);
    connect(ui->actionRoom_types, &QAction::triggered, this, &MainWindow::openRoomTypeDialog);
    connect(ui->actionRooms, &QAction::triggered, this, &MainWindow::openRoomsDialog);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::gotoReservationPage()
{
    ui->stackedWidget->setCurrentWidget(ui->reservationPage);
}

void MainWindow::gotoClientPage()
{
    ui->stackedWidget->setCurrentWidget(ui->clientsPage);
}

void MainWindow::gotoRoomCalendarPage()
{
    ui->stackedWidget->setCurrentWidget(ui->calendarPage);
}

void MainWindow::openRoomTypeDialog()
{
    RoomTypeDialog *d = new RoomTypeDialog();
    d->exec();
}

void MainWindow::openRoomsDialog()
{
    RoomsDialog *d = new RoomsDialog();
    d->exec();
}

