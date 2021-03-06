#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "projektaplikacja.h"
#include <QDebug>
#include <QtSql>
#include <QFileInfo>
#include <QSqlQuery>
#include <QSqlQueryModel>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_login_clicked();

    void on_pushButton_bez_clicked();

private:
    Ui::MainWindow *ui;
    projektaplikacja *ProjektAplikacja;
    QSqlDatabase db;
};

#endif // MAINWINDOW_H
