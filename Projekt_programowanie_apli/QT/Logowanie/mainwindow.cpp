#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <qpixmap.h>
#include <QSqlQueryModel>
#include <QSqlQuery>
#define Path_to_DB "C:/Users/pitek/Desktop/Pulpit/Projekt_programowanie_apli/Bazy_danych/danelogowania.sql"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
/*
    mojaBaza = QSqlDatabase::addDatabase("QMYSQL");
    mojaBaza.setDatabaseName(Path_to_DB);
    QFileInfo checkFile(Path_to_DB);
*/
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
      db.setHostName("127.0.0.1");
      db.setDatabaseName("projektlogowanie");
      db.setUserName("root");
      db.setPassword("");
      db.open();


        if(db.open())
        {
            ui->label_status->setText("Połączno z bazą danych xdddd");
        }

        else
        {
            ui->label_status->setText("Problem z otwarciem bazy danych huehue");
        }



  /*  else
    {
        ui->label_status->setText("Brak połączenia z plikiem SQL");
    }

    QPixmap pix("C:/Users/pitek/Desktop/Pulpit/Projekt_programowanie_apli/waluty.jpg");
    int w = ui->label_zdjecie->width();
    int h = ui->label_zdjecie->height();
    ui->label_zdjecie->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
*/
}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::on_pushButton_login_clicked()
{
    QString login = ui->lineEdit_login->text();
    QString haslo = ui->lineEdit_haslo->text();

    QSqlQuery result;
    /*
            if(result.exec("SELECT login, haslo, rola FROM danelogowania WHERE login=\'" + login +
                            "\' AND haslo=\'" + haslo + "\'"))*/

    if(result.exec("SELECT * FROM danelogowania"))
            {
               if(result.next())
               {
                QString wiadomosc = "Witaj " + result.value(2).toString();
                QMessageBox::information(this, "Alert", wiadomosc);
                hide();
                ProjektAplikacja = new projektaplikacja(this);
                ProjektAplikacja->show();
               }
            }

            else
            {
               QMessageBox::information(this, "Alert", "Błędny login lub hasło. Coś poszło nie tak....");
            }


    if(login == "login" && haslo == "haslo")
    {

    }

    else
    {
        QMessageBox::information(this, "Login", "Login i hasło nie są poprawne!!!");
    }
}

void MainWindow::on_pushButton_bez_clicked()
{

}
