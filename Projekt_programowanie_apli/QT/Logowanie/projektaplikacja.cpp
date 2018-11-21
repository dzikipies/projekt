#include "projektaplikacja.h"
#include "ui_projektaplikacja.h"

projektaplikacja::projektaplikacja(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::projektaplikacja)
{
    ui->setupUi(this);
}

projektaplikacja::~projektaplikacja()
{
    delete ui;
}
