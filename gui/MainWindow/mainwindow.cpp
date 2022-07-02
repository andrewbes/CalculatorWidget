#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::configureWith(MainViewModel *viewModel)
{
    this->viewModel = viewModel;
}

//
void MainWindow::on_btnVariable_clicked()
{
    this->viewModel->on_btnVariable_clicked();
}

