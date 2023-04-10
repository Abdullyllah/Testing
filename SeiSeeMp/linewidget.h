#ifndef LINEWIDGET_H
#define LINEWIDGET_H

#include <QWidget>
#include <QPainter>

class LineWidget : public QWidget {
public:
    LineWidget(QWidget *parent = nullptr)
        : QWidget(parent)
    {
        setMinimumSize(200, 200);
    }

    void setLine(QPointF point1, QPointF point2) {
        m_point1 = point1;
        m_point2 = point2;
        update();
    }

protected:
    void paintEvent(QPaintEvent *event) override {
        Q_UNUSED(event)

        QPainter painter(this);
        painter.setPen(QPen(Qt::red, 2));
        painter.drawLine(m_point1, m_point2);
    }

private:
    QPointF m_point1, m_point2;
};

#endif // LINEWIDGET_H
