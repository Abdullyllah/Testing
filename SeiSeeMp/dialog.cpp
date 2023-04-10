#include "dialog.h"
#include "ui_dialog.h"
#include <QtWidgets>
#include <QRadioButton>
#include <QListWidgetItem>
#include <QAbstractButton>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);




}

Dialog::~Dialog()
{
    delete ui;
}







