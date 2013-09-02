#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QStackedWidget *stack = ui->tabWidget->findChild<QStackedWidget *>();
    stack->setStyleSheet("background-color: rgba(0, 0, 0, 0)");
    stack->setAttribute(Qt::WA_TranslucentBackground);
}

MainWindow::~MainWindow()
{
    delete ui;
}
