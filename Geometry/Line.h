#ifndef LINE_H
#define LINE_H
class Point;
#include "geometryproject.h"
class Line
{
    public:
        Line();
        Line(double * equation);
        Line(double * equation, std::string);
        virtual ~Line();
        Line(const Line& other);
        Line& operator=(const Line& other);
        double equation[3];
        std::string name;
        bool is_point_on_Line(Point*, const double);
    protected:
    private:

};

#endif // LINE_H
