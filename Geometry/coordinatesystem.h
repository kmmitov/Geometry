#ifndef COORDINATESYSTEM_H
#define COORDINATESYSTEM_H

#include "geometryproject.h"
#include "repository.h"

class CoordinateSystem : public QGraphicsView
{
    Q_OBJECT
public:
    explicit CoordinateSystem(QObject *parent = 0);
    CoordinateSystem(Repository* context,QObject *parent, QGraphicsScene* scene);
    ~CoordinateSystem();
signals:

public slots:
    void zoom(int step);
    void scaleByInt(int factor);
    void drawPoint(Point*);
    void drawLine(Line* line, bool redraw);
    void drawLine(Point*,Point*);
    void clear_scene();
private:
    QGraphicsScene* scene;
    Repository* context;
    void scaleBy(double factor);
    void drawCoordinateSystem(double size);
    double zoom_factor;
    double SIZE;
    double transform_x(double x);
    double transform_y(double y);
    QGraphicsItemGroup* lineGroup;
};

#endif // COORDINATESYSTEM_H
