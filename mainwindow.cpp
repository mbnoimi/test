#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->verticalScrollBar->setRange(0, ui->listWidget->count());
    qDebug() << "First is visible? " << ui->listWidget->item(0)->isHidden();
    qDebug() << "Last is visible? " << ui->listWidget->item(ui->listWidget->count()-1)->isHidden();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_verticalScrollBar_valueChanged(int value)
{
    ui->listWidget->setCurrentRow(value);
}

void MainWindow::on_verticalScrollBar_sliderMoved(int position)
{

}

void MainWindow::on_listWidget_viewportEntered()
{
    ui->statusBar->showMessage("Saw ya!", 10);
}
