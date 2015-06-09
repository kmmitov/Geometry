#include "repository.h"

Repository::Repository(QObject *parent) :
    QObject(parent)
{
    this->points = *(new std::vector<Point*>());
    this->lines = *(new std::vector<Line*>());
    this->current_line = NULL;
    this->current_point = NULL;
    this->auxiliary_points[0] = NULL;
    this->auxiliary_points[1] = NULL;
    this->auxiliary_line = NULL;
    this->vertices[0]=NULL;
    this->vertices[1]=NULL;
    this->vertices[2]=NULL;
}

void Repository::addCurrentPoint(Point * point)
{
    if(this->current_point!=NULL)
    {
        if(this->auxiliary_points[0]!=NULL)
        {
            this->auxiliary_points[1] = this->auxiliary_points[0];
        }
        this->auxiliary_points[0] = this->current_point;
    }
    this->current_point = point;
    emit current_point_changed();
    emit send_point_to_painter(point);
}

void Repository::addCurrentLine(Line * line)
{
    if(line->name=="")
    {
        std::string name = "Line ";
        name.append(QString::number(this->lines.size()+1).toStdString());
        line->name = name;
    }
    if(this->current_line!=NULL)
    {
        this->auxiliary_line = this->current_line;
    }
    this->current_line = line;
    emit current_line_changed();
    emit send_line_to_painter(line,false);
}

Line* Repository::getAuxiliaryLine()
{
    return this->auxiliary_line;
}

Point** Repository::getAuxiliaryPoints()
{
    return this->auxiliary_points;
}

Line* Repository::getCurrentLine()
{
    return this->current_line;
}

Point* Repository::getCurrentPoint()
{
    return this->current_point;
}

Line* Repository::find_perpendicular_line(Point* p, Line* l)
{
    double pequation[3];
    pequation[0] = l->equation[1];
    pequation[1] = -(l->equation[0]);
    pequation[2] = l->equation[0]*p->y_coord - l->equation[1]*p->x_coord;
    Line* line = new Line(pequation);
    this->lines.push_back(line);
    this->addCurrentLine(line);
    emit give_equation(pequation);
    return line;
}

Line* Repository::get_perpendicular(Point* p, Line* l)
{
    double pequation[3];
    pequation[0] = l->equation[1];
    pequation[1] = -(l->equation[0]);
    pequation[2] = l->equation[0]*p->y_coord - l->equation[1]*p->x_coord;
    Line* line = new Line(pequation);
    this->lines.push_back(line);
    this->addCurrentLine(line);
    return line;
}

Point* Repository::find_intersection(Line* first, Line* second)
{
    double det = first->equation[0]*second->equation[1] - first->equation[1]*second->equation[0];
    if(fabs(det)<eps)
    {
        emit give_point(NULL);
        return NULL;
    }
    else
    {
        double det1 = (-first->equation[2])*second->equation[1] - first->equation[1]*(-second->equation[2]);
        double det2 = first->equation[0]*(-second->equation[2]) + first->equation[2]*second->equation[0];
        double x = det1/det;
        double y = det2/det;
        Point* crossp = new Point(x,y);
        this->addCurrentPoint(crossp);
        this->points.push_back(crossp);
        emit give_point(crossp);
        return crossp;
    }
}

Line* Repository::find_parallel_line(Point* p, Line* l)
{
    double pequation[3];
    pequation[0] = l->equation[0];
    pequation[1] = l->equation[1];
    pequation[2] = -(l->equation[0]*p->x_coord+l->equation[1]*p->y_coord);
    Line* parallel = new Line(pequation);
    this->lines.push_back(parallel);
    this->addCurrentLine(parallel);
    emit give_equation(pequation);
    return parallel;
}

Line* Repository::generate_equation(Point* first, Point* second)
{
    double equation[3];
    equation[0] = second->y_coord-first->y_coord;
    equation[1] = first->x_coord - second->x_coord;
    equation[2] = -first->x_coord*second->y_coord + second->x_coord*first->y_coord;

    emit give_equation(equation);
    Line* new_line = new Line(equation);
    this->lines.push_back(new_line);
    this->addCurrentLine(new_line);
    return new_line;
}
Line* Repository::get_by_equation(Point* first, Point* second)
{
    double equation[3];
    equation[0] = second->y_coord-first->y_coord;
    equation[1] = first->x_coord - second->x_coord;
    equation[2] = -first->x_coord*second->y_coord + second->x_coord*first->y_coord;
    Line* new_line = new Line(equation);
    return new_line;
}



void Repository::is_point_on_line(Point* point, Line* line)
{
    emit answer_question(line->is_point_on_Line(point,0.000001));
}

Point* Repository::find_point_by_name(std::string name)
{
    unsigned len = this->points.size();
    for(unsigned i=0;i<len;i++)
        if(this->points[i]->name==name)
            return this->points[i];
    return NULL;
}

void Repository::add_line(double a, double b, double c, std::string name)
{
    double coeffs[3];
    coeffs[0]=a;
    coeffs[1]=b;
    coeffs[2]=c;
    Line* new_line = new Line(coeffs,name);
    this->lines.push_back(new_line);
    this->addCurrentLine(new_line);
}

void Repository::update_line_info()
{
    emit current_line_changed();
}

void Repository::update_point_info()
{
    emit current_point_changed();
}

void Repository::add_line(double a, double b, double c)
{
    double coeffs[3];
    coeffs[0]=a;
    coeffs[1]=b;
    coeffs[2]=c;
    std::string name = "Line ";
    name.append(QString::number(this->lines.size()+1).toStdString());
    Line* new_line = new Line(coeffs,name);
    this->lines.push_back(new_line);
    this->addCurrentLine(new_line);
}

void Repository::add_point(double x, double y, std::string name)
{
    Point* new_point = new Point(x,y,name);
    this->points.push_back(new_point);
    this->addCurrentPoint(new_point);

}
void Repository::add_point(double x, double y)
{
    QString name = tr("(%1,%2)").arg(x).arg(y);
    Point* new_point = new Point(x,y,name.toStdString());
    this->points.push_back(new_point);
    this->addCurrentPoint(new_point);
}

Line* Repository::calc_height(Point *first, Point *second, Point *third)
{
    this->vertices[0]=first;
    this->vertices[1]=second;
    this->vertices[2]=third;
    Line* side = get_by_equation(second,third);
    Line* height = get_perpendicular(first,side);
    emit give_equation(height->equation);
    this->lines.push_back(height);
    this->addCurrentLine(height);
    return height;
}

Point* Repository::get_middle(Point* first, Point* second)
{
    double x = (first->x_coord+second->x_coord)/2;
    double y = (first->y_coord+second->y_coord)/2;
    Point* point = new Point(x,y);
    return point;
}

Line* Repository::calc_bisector(Point *first, Point *second, Point *third)
{
    this->vertices[0]=first;
    this->vertices[1]=second;
    this->vertices[2]=third;
    Point* middle = get_middle(second,third);
    Line* side = get_by_equation(second,third);
    Line* bisector = get_perpendicular(middle,side);
    this->lines.push_back(bisector);
    this->addCurrentLine(bisector);
    emit give_equation(bisector->equation);
    return bisector;
}

Line* Repository::calc_median(Point *first, Point *second, Point *third)
{
    this->vertices[0]=first;
    this->vertices[1]=second;
    this->vertices[2]=third;
    Point* middle = get_middle(second,third);
    Line* median = get_by_equation(first,middle);
    this->lines.push_back(median);
    this->addCurrentLine(median);
    emit give_equation(median->equation);
    return median;
}
void Repository::clear()
{
    this->current_line = NULL;
    this->auxiliary_line = NULL;
    this->current_point = NULL;
    this->auxiliary_points[0]=NULL;
    this->auxiliary_points[1]=NULL;
}

Repository::~Repository()
{
    for(int i=0; i < lines.size();i++)
        delete lines[i];

    for(int i=0; i < points.size();i++)
        delete points[i];
}
