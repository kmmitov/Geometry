#include "Point.h"
#include "Line.h"

Point::Point()
{
    this->x_coord=0;
    this->y_coord=0;
}

Point::Point(double x, double y)
{
    this->x_coord = x;
    this->y_coord = y;
    this->name = "";
}

Point::Point(double _x, double _y, std::string _name)
    :x_coord(_x), y_coord(_y), name(_name)
    {

    }

Point::Point(const Point& other)
{
    this->x_coord = other.x_coord;
    this->y_coord = other.y_coord;
}

Point& Point::operator=(const Point& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    this->x_coord = rhs.x_coord;
    this->y_coord = rhs.y_coord;
    return *this;
}

double Point::calculate_val(double * coeffs)
{
    return coeffs[0]*this->x_coord+coeffs[1]*this->y_coord+coeffs[2];
}


