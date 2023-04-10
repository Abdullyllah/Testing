#include "lne.h"
#include "ui_lne.h"
#include <QGraphicsScene>
#include <QGraphicsLineItem>
#include <QPointF>
#include <QtCore/qmath.h>



lne::lne(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::lne)

{
    ui->setupUi(this);

    // Create a QGraphicsScene object and set it as the scene for the QGraphicsView widget
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    // Define the start and end points of the line
    QPointF startPoint(0, 0);
    QPointF endPoint(499454.5, 2921359.2);

    // Calculate the length of the line and the number of segments to divide it into
    qreal length = QLineF(startPoint, endPoint).length();
    int numSegments = 10; // Change this to adjust the number of segments

    // Calculate the length of each segment
    qreal segmentLength = length / numSegments;

    // Calculate the angle of the line
    qreal angle = QLineF(startPoint, endPoint).angle();

    // Draw the segments
    for (int i = 0; i < numSegments; i++) {
        qreal segmentStart = i * segmentLength;
        qreal segmentEnd = (i + 1) * segmentLength;

        // Calculate the start and end points of the segment
        QPointF segmentStartPoint = startPoint + QPointF(qCos(angle + segmentStart) * segmentStart, qSin(angle + segmentStart) * segmentStart);
        QPointF segmentEndPoint = startPoint + QPointF(qCos(angle + segmentEnd) * segmentEnd, qSin(angle + segmentEnd) * segmentEnd);


        // Create a QGraphicsLineItem object for the segment and add it to the scene
        QGraphicsLineItem *segment = new QGraphicsLineItem(segmentStartPoint.x(), segmentStartPoint.y(), segmentEndPoint.x(), segmentEndPoint.y());
        scene->addItem(segment);
    }

}

lne::~lne()
{
    delete ui;
}
