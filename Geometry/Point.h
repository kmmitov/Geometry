#ifndef POINT_H
#define POINT_H
#include <string>
#include <Line.h>
#include "geometryproject.h"
class Point
{

    public:
        Point();
        Point(double, double);
        Point(double, double, std::string);
        Point(const Point& other);
        Point& operator=(const Point& other);
        double x_coord;
        double y_coord;
        double calculate_val(double * coefficients);
        std::string name;
    protected:
    private:

};

#endif // POINT_H
