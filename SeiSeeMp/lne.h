#ifndef LNE_H
#define LNE_H
#include <QGraphicsScene>
#include <QGraphicsLineItem>

#include <QDialog>

namespace Ui {
class lne;
}

class lne : public QDialog
{
    Q_OBJECT

public:
    explicit lne(QWidget *parent = nullptr);
    ~lne();

private:
    Ui::lne *ui;
    QGraphicsScene *scene;
};

#endif // LNE_H
