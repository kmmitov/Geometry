#ifndef MAINDRAWINGWINDOW_H
#define MAINDRAWINGWINDOW_H
#include "geometryproject.h"
#include "maindrawingwindow.h"
#include "repository.h"
#include "checkpointdialog.h"
#include "Point.h"
#include "addpointdialog.h"
#include "addlinedialog.h"
#include "intersectiondialog.h"
#include "linebypointsdialog.h"
#include "paralleldialog.h"
#include "perpendiculardialog.h"
#include "triangledialog.h"
#include "pointinfo.h"
#include "lineinfo.h"
#include "coordinatesystem.h"
#include "Line.h"
class MainDrawingWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainDrawingWindow(QWidget *parent = 0);
    MainDrawingWindow(Repository* context, QWidget* parent=0);
    ~MainDrawingWindow();
    Repository* context;

signals:
    void send_sector_to_painter(Point*,Point*);
public slots:
    void show_answer_as_dialog(bool);
    void show_equation(double * equation);
    void show_point(Point* point);
    void populatePointList();
    void populateLineList();
    void pselectionChanged(QListWidgetItem*,QListWidgetItem*);
    void lselectionChanged(QListWidgetItem*,QListWidgetItem*);
private slots:
    void createActions();
    void createMenus();
    void addPoint();
    void addLine();
    void check();
    void getEquation();
    void getIntersection();
    void getParallel();
    void getPerpendicular();
    void getMedian();
    void getHeight();
    void getBisector();
private:
    QMenu* addMenu;
    QMenu* generateMenu;
    QMenu* calculateMenu;
    QMenu* triangleMenu;

    QAction* newPointAction;
    QAction* newLineAction;
    QAction* checkAction;
    QAction* generateEquationAction;
    QAction* generateIntersectionAction;
    QAction* parallelAction;
    QAction* perpendicularAction;
    QAction* medianAction;
    QAction* heightAction;
    QAction* bisectorAction;

    AddPointDialog* addPDialog;
    AddLineDialog* addLDialog;
    CheckPointDialog* checkDialog;
    IntersectionDialog* intersectDialog;
    LineByPointsDialog* equationDialog;
    ParallelDialog* parallelDialog;
    PerpendicularDialog* perpendDialog;
    TriangleDialog* triangleDialog;

    QWidget* pointInfo;
    QWidget* lineInfo;
    QListWidget* pointList;
    QListWidget* lineList;

    QSlider* slider;
    QSpinBox* spinbox;

    QWidget* central;

    QGraphicsScene* scene;
    CoordinateSystem* coord;

    QLabel* status;
    QPushButton* clear_btn;
    void createDockWidgets();
    void createCentralWidget();
};
#endif // MAINDRAWINGWINDOW_H
