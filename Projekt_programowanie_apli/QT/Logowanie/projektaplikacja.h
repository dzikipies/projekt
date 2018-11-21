#ifndef PROJEKTAPLIKACJA_H
#define PROJEKTAPLIKACJA_H

#include <QDialog>

namespace Ui {
class projektaplikacja;
}

class projektaplikacja : public QDialog
{
    Q_OBJECT

public:
    explicit projektaplikacja(QWidget *parent = nullptr);
    ~projektaplikacja();

private:
    Ui::projektaplikacja *ui;
};

#endif // PROJEKTAPLIKACJA_H
