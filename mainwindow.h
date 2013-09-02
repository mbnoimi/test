#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_verticalScrollBar_valueChanged(int value);

    void on_verticalScrollBar_sliderMoved(int position);

    void on_listWidget_viewportEntered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
