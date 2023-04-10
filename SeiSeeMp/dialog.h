#ifndef DIALOG_H
#define DIALOG_H

#include "qlistwidget.h"
#include <QDialog>
#include <QRadioButton>
#include <QListWidgetItem>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:



private:
    Ui::Dialog *ui;
};


#endif // DIALOG_H
