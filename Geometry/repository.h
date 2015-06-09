#ifndef REPOSITORY_H
#define REPOSITORY_H
#include <vector>
#include "geometryproject.h"


const double eps = 0.000001;
class Repository : public QObject
{
    Q_OBJECT
friend class AddPointDialog;
public:
    explicit Repository(QObject *parent = 0);
    ~Repository();
    std::vector<Line*> lines;
    std::vector<Point*> points;
    //Point * vertices;

    Point* find_point_by_name(std::string name);
    Point* get_middle(Point*,Point*);
    Line* get_perpendicular(Point*,Line*);
    Line* get_by_equation(Point*,Point*);
    void addCurrentPoint(Point*);
    void addCurrentLine(Line*);
    Line* getCurrentLine();
    Point* getCurrentPoint();
    Line* getAuxiliaryLine();
    Point** getAuxiliaryPoints();
    Point* vertices[3];
    void clear();
signals:
    void answer_question(bool);
    void give_equation(double * equation);
    void give_point(Point*);
    void send_point_to_painter(Point*);
    void send_line_to_painter(Line*,bool);
    void current_point_changed();
    void current_line_changed();
public slots:
    void add_line(double, double, double, std::string);
    void add_line(double, double, double);
    void add_point(double, double, std::string);
    void add_point(double,double);
    void is_point_on_line(Point*, Line*);
    Line* generate_equation(Point*, Point*);
    Line* find_parallel_line(Point*, Line*);
    Line* find_perpendicular_line(Point*, Line*);
    Point* find_intersection(Line*, Line*);
    Line* calc_height(Point*,Point*,Point*);
    Line* calc_bisector(Point*,Point*,Point*);
    Line* calc_median(Point *, Point *, Point *);
    void update_point_info();
    void update_line_info();
private:
    Point* current_point;
    Point* auxiliary_points[2];
    Line* current_line;
    Line* auxiliary_line;
};

#endif // REPOSITORY_H
