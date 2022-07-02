#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "mainviewmodel.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void configureWith(MainViewModel* viewModel);

private slots:
    void on_btnVariable_clicked();
//
private:
    Ui::MainWindow *ui;
    MainViewModel* viewModel;
};
#endif // MAINWINDOW_H
