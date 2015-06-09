#include "coordinatesystem.h"

CoordinateSystem::CoordinateSystem(Repository* context, QObject *parent, QGraphicsScene* scene) //:
   //QGraphicsView(parent)
{
    this->context = context;
    this->scene = scene;
    this->zoom_factor = 10;
    setDragMode(RubberBandDrag);
    setRenderHint(QPainter::Antialiasing);
    this->SIZE = 600;
    drawCoordinateSystem(2*SIZE);

    connect(context,SIGNAL(send_point_to_painter(Point*)),this,SLOT(drawPoint(Point*)));
    connect(context,SIGNAL(send_line_to_painter(Line*,bool)),this,SLOT(drawLine(Line*,bool)));

}
void CoordinateSystem::zoom(int percent)
{
    scaleBy(percent);
}

void CoordinateSystem::drawCoordinateSystem(double width)
{
    QPen pen(QColor(100,100,100));
    lineGroup = new QGraphicsItemGroup();
    const int MaxX  = std::ceil(width/zoom_factor);
    const int MaxY = std::ceil(width/zoom_factor);
    QGraphicsLineItem* oy = new QGraphicsLineItem(-width/2,0,width/2,0);
    QGraphicsLineItem* ox = new QGraphicsLineItem(0,-width/2,0,width/2);
    ox->setPen(pen);
    ox->setZValue(-1000);
    oy->setPen(pen);
    oy->setZValue(-1000);
    lineGroup->addToGroup(ox);
    lineGroup->addToGroup(oy);
    for(int x=-MaxX/2;x<=MaxX/2;x++)
    {
        QGraphicsLineItem* item = new QGraphicsLineItem(x*zoom_factor,-2,x*zoom_factor,+2);
        item->setPen(pen);
        item->setZValue(-1000);
        lineGroup->addToGroup(item);
    }
    for(int y=-MaxY/2;y<=MaxY/2;y++)
    {
        QGraphicsLineItem* item = new QGraphicsLineItem(-2,y*zoom_factor,+2,y*zoom_factor);
        item->setPen(pen);
        item->setZValue(-1000);
        lineGroup->addToGroup(item);
    }
    lineGroup->setVisible(true);
    lineGroup->setFlag(QGraphicsItem::ItemIgnoresTransformations);
    this->scene->addItem(lineGroup);
}

void CoordinateSystem::scaleByInt(int factor)
{
    if(factor<100)
    scaleBy(factor);
}
double CoordinateSystem::transform_x(double x)
{
    return x*zoom_factor-2.5;
}
double CoordinateSystem::transform_y(double y)
{
    return (-y*zoom_factor-1);
}
void CoordinateSystem::drawLine(Point* first, Point* second)
{
    QGraphicsLineItem* sector = new QGraphicsLineItem(transform_x(first->x_coord),transform_y(first->y_coord),
                                                      transform_x(second->x_coord),transform_y(second->y_coord));
    this->scene->addItem(sector);
}
void CoordinateSystem::clear_scene()
{
    this->scene->clear();
    this->context->clear();
    drawCoordinateSystem(2*SIZE);
}

void CoordinateSystem::scaleBy(double factor)
{
        this->scene->clear();
        this->zoom_factor = factor;
        this->setSceneRect(-SIZE*factor,-SIZE*factor,2*SIZE*factor,2*SIZE*factor);
        drawCoordinateSystem(2*SIZE*factor);
        Point* curr = this->context->getCurrentPoint();
        if(curr!=NULL)
        {
           drawPoint(curr);
        }
        curr = this->context->getAuxiliaryPoints()[0];
        if(curr!=NULL)
        {
           drawPoint(curr);
        }
        curr = this->context->getAuxiliaryPoints()[1];
        if(curr!=NULL)
        {
           drawPoint(curr);
        }
        Line* current = this->context->getCurrentLine();
        if(current!=NULL)
        {
           drawLine(current,true);
        }
        current = this->context->getAuxiliaryLine();
        if(current!=NULL)
        {
           drawLine(current,true);
        }
        if(context->vertices[0]!=NULL&&context->vertices[1]!=NULL&&context->vertices[1]!=NULL)
        {
            drawLine(context->vertices[0],context->vertices[1]);
            drawLine(context->vertices[1],context->vertices[2]);
            drawLine(context->vertices[0],context->vertices[2]);
        }
}
void CoordinateSystem::drawPoint(Point* point1)
{
    double x = point1->x_coord;
    double y = point1->y_coord;
    QGraphicsEllipseItem* point = new QGraphicsEllipseItem(transform_x(x),transform_y(y),4,4);
    point->setData(0,2);
    this->scene->addItem(point);
}
void CoordinateSystem::drawLine(Line* line1, bool redraw)
{
    double a = line1->equation[0];
    double b = line1->equation[1];
    double c = line1->equation[2];
    double dim = SIZE;
    QGraphicsLineItem* line;
    if(redraw)
    {
        dim*=zoom_factor;
    }
    if(b==0)
    {
        if(a==0)
            return;
        double x0 = -c/a;
        line = new QGraphicsLineItem(transform_x(x0),-dim,transform_x(x0),dim);
        line->setData(0,1);
        this->scene->addItem(line);
        return;
    }
    if(a==0)
    {
        double y0 = -c/b;
        line = new QGraphicsLineItem(-dim,transform_y(y0),dim,transform_y(y0));
        this->scene->addItem(line);
        line->setData(0,1);
        return;
    }
    double top_x = transform_x((-c-b*std::ceil((-dim/zoom_factor)))/a);
    double bottom_x = transform_x((-c-b*std::ceil((dim/zoom_factor)))/a);
    double left_y = transform_x((-c-a*std::ceil((-dim/zoom_factor)))/b);
    double right_y = transform_x((-c-a*std::ceil((dim/zoom_factor)))/b);
    if(top_x>=-dim&&top_x<=dim&&bottom_x<=dim&&bottom_x>=-dim)
    {
        line = new QGraphicsLineItem(top_x,dim,bottom_x,-dim);
        this->scene->addItem(line);
        line->setData(0,1);
        return;
    }
    line = new QGraphicsLineItem(-dim,-left_y,dim,-right_y);
    this->scene->addItem(line);
    line->setData(0,1);
}

CoordinateSystem::~CoordinateSystem()
{
    delete lineGroup;
}
