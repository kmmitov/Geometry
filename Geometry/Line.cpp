#include "Line.h"

Line::Line()
{
    //ctor
}

Line::Line(double *equation)
{
    this->equation[0] = equation[0];
    this->equation[1] = equation[1];
    this->equation[2] = equation[2];
    this->name="";
}

Line::Line(double *equation, std::string n)
{
    this->equation[0] = equation[0];
    this->equation[1] = equation[1];
    this->equation[2] = equation[2];
    this->name = n;
}

Line::~Line()
{
    delete equation;
}

Line::Line(const Line& other)
{
    for(int i=0;i<3;i++)
    {
        this->equation[i] = other.equation[i];
    }
}

Line& Line::operator=(const Line& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    for(int i=0;i<3;i++)
    {
        this->equation[i] = rhs.equation[i];
    }
    return *this;
}

bool Line::is_point_on_Line(Point * point, const double precision)
{
    return (point->calculate_val(this->equation)<precision);
}
