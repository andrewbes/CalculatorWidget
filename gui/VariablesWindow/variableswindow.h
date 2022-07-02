#ifndef VARIABLESWINDOW_H
#define VARIABLESWINDOW_H

#include "variablesviewmodel.h"

#include <QWidget>

namespace Ui {
class VariablesWindow;
}

class VariablesWindow : public QWidget
{
    Q_OBJECT

public:
    explicit VariablesWindow(QWidget *parent = nullptr);
    ~VariablesWindow();

     void configureWith(VariablesViewModel* viewModel);

private:
    Ui::VariablesWindow *ui;
    VariablesViewModel* viewModel;
};

#endif // VARIABLESWINDOW_H
