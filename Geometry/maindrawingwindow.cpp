#include "maindrawingwindow.h"
const int SIZE=600;
const int SL=100;
const int MARGIN=100;
MainDrawingWindow::MainDrawingWindow(Repository* context, QWidget *parent) :
    QMainWindow(parent)
{
    this->context = context;

    createActions();
    createMenus();
    createDockWidgets();
    createCentralWidget();
    connect(context,SIGNAL(answer_question(bool)),this,SLOT(show_answer_as_dialog(bool)));
    connect(context,SIGNAL(give_equation(double*)),this,SLOT(show_equation(double*)));
    connect(context,SIGNAL(give_point(Point*)),this,SLOT(show_point(Point*)));


    setWindowTitle("Geometry Calculator");
}

void MainDrawingWindow::createActions()
{
    newPointAction = new QAction(tr("New Point"),this);
    connect(newPointAction,SIGNAL(triggered()),this,SLOT(addPoint()));

    newLineAction = new QAction(tr("New Line"),this);
    connect(newLineAction,SIGNAL(triggered()),this,SLOT(addLine()));

    checkAction = new QAction(tr("If point is on line"),this);
    connect(checkAction,SIGNAL(triggered()),this,SLOT(check()));

    generateEquationAction = new QAction(tr("Equation by points"),this);
    connect(generateEquationAction,SIGNAL(triggered()),this,SLOT(getEquation()));

    generateIntersectionAction = new QAction(tr("Intersection point"),this);
    connect(generateIntersectionAction,SIGNAL(triggered()),this,SLOT(getIntersection()));

    parallelAction = new QAction(tr("Parallel line through point"),this);
    connect(parallelAction,SIGNAL(triggered()),this,SLOT(getParallel()));

    perpendicularAction = new QAction(tr("Perpendicular line through point"),this);
    connect(perpendicularAction,SIGNAL(triggered()),this,SLOT(getPerpendicular()));

    medianAction = new QAction(tr("Calculate median"),this);
    connect(medianAction,SIGNAL(triggered()),this,SLOT(getMedian()));

    heightAction = new QAction(tr("Calculate height"),this);
    connect(heightAction,SIGNAL(triggered()),this,SLOT(getHeight()));

    bisectorAction = new QAction(tr("Calculate bisector"),this);
    connect(bisectorAction,SIGNAL(triggered()),this,SLOT(getBisector()));

}

void MainDrawingWindow::createDockWidgets()
{
    QDockWidget* dock1 = new QDockWidget("Current point",this);
    dock1->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
    pointInfo = new PointInfo(this->context,dock1);
    dock1->setWidget(pointInfo);
    addDockWidget(Qt::RightDockWidgetArea,dock1,Qt::Vertical);

    QDockWidget* dock2 = new QDockWidget("Current line",this);
    dock2->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
    lineInfo = new LineInfo(this->context,dock2);
    dock2->setWidget(lineInfo);
    addDockWidget(Qt::RightDockWidgetArea,dock2,Qt::Vertical);

    QDockWidget* dock3 = new QDockWidget("All points",this);
    dock3->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
    pointList = new QListWidget();
    dock3->setWidget(pointList);
    addDockWidget(Qt::LeftDockWidgetArea,dock3,Qt::Vertical);

    QDockWidget* dock4 = new QDockWidget("All lines",this);
    dock4->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
    lineList = new QListWidget();
    dock4->setWidget(lineList);
    addDockWidget(Qt::LeftDockWidgetArea,dock4,Qt::Vertical);

    QDockWidget* dock5 = new QDockWidget("Answer to last query",this);
    dock5->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
    status = new QLabel("");
    status->setFont(QFont("Verdana",16,1));
    status->setContentsMargins(5,5,5,5);
    dock5->setWidget(status);
    addDockWidget(Qt::RightDockWidgetArea,dock5,Qt::Vertical);

    QDockWidget* dock6 = new QDockWidget(this);
    dock6->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
    clear_btn = new QPushButton("Clear drawing area");
    dock6->setWidget(clear_btn);
    addDockWidget(Qt::RightDockWidgetArea,dock6,Qt::Vertical);

    connect(context,SIGNAL(current_point_changed()),this,SLOT(populatePointList()));
    connect(context,SIGNAL(current_line_changed()),this,SLOT(populateLineList()));
    connect(pointList,SIGNAL(currentItemChanged(QListWidgetItem*,QListWidgetItem*)),this,SLOT(pselectionChanged(QListWidgetItem*,QListWidgetItem*)));
    connect(lineList,SIGNAL(currentItemChanged(QListWidgetItem*,QListWidgetItem*)),this,SLOT(lselectionChanged(QListWidgetItem*,QListWidgetItem*)));

}
void MainDrawingWindow::populatePointList()
{
    pointList->clear();
    unsigned size = this->context->points.size();
    Point* curr=0;
    for(unsigned i=0;i<size;i++)
    {
        curr = this->context->points[i];
        if(curr!=NULL)
        {
                QString text = tr("(%1,%2)").arg(curr->x_coord).arg(curr->y_coord);
                QListWidgetItem *item = new QListWidgetItem(text,this->pointList);
                item->setData(Qt::UserRole,i);
        }
    }

}

void MainDrawingWindow::populateLineList()
{
    lineList->clear();
    unsigned size = this->context->lines.size();
    Line* curr=0;
    for(unsigned i=0;i<size;i++)
    {
        curr = this->context->lines[i];
        if(curr!=NULL)
        {
                QString text = tr("(%1)*x+(%2)*y+(%3)=0").arg(curr->equation[0]).arg(curr->equation[1]).arg(curr->equation[2]);
                QListWidgetItem *item = new QListWidgetItem(text,this->lineList);
                item->setData(Qt::UserRole,i);
        }
    }

}

void MainDrawingWindow::createMenus()
{
    addMenu = menuBar()->addMenu(tr("Add"));
    addMenu->addAction(newPointAction);
    addMenu->addAction(newLineAction);

    generateMenu = menuBar()->addMenu(tr("Check"));
    generateMenu->addAction(checkAction);
    generateMenu->addAction(generateEquationAction);
    generateMenu->addAction(generateIntersectionAction);

    calculateMenu = menuBar()->addMenu(tr("Find"));
    calculateMenu->addAction(parallelAction);
    calculateMenu->addAction(perpendicularAction);

    triangleMenu = menuBar()->addMenu(tr("Triangle Functions"));
    triangleMenu->addAction(medianAction);
    triangleMenu->addAction(heightAction);
    triangleMenu->addAction(bisectorAction);
}
void MainDrawingWindow::addPoint()
{
    addPDialog = new AddPointDialog(this->context,this);
    addPDialog->show();
}
void MainDrawingWindow::addLine()
{
    addLDialog = new AddLineDialog(this->context,this);
    addLDialog->show();

}
void MainDrawingWindow::check()
{
    checkDialog = new CheckPointDialog(this->context,this);
    checkDialog->show();

}
void MainDrawingWindow::getEquation()
{
    equationDialog = new LineByPointsDialog(this->context,this);
    equationDialog->show();

}
void MainDrawingWindow::getIntersection()
{
    intersectDialog = new IntersectionDialog(this->context,this);
    intersectDialog->show();

}
void MainDrawingWindow::getParallel()
{
    parallelDialog = new ParallelDialog(this->context,this);
    parallelDialog->show();

}
void MainDrawingWindow::getPerpendicular()
{
    perpendDialog = new PerpendicularDialog(this->context,this);
    perpendDialog->show();

}
void MainDrawingWindow::getMedian()
{
    triangleDialog = new TriangleDialog(this->context,3,this);
    triangleDialog->show();

}
void MainDrawingWindow::getHeight()
{
    triangleDialog = new TriangleDialog(this->context,1,this);
    triangleDialog->show();

}
void MainDrawingWindow::getBisector()
{
    triangleDialog = new TriangleDialog(this->context,2,this);
    triangleDialog->show();

}

void MainDrawingWindow::show_answer_as_dialog(bool yes)
{
    if(yes)
    {
        QMessageBox* yes = new QMessageBox(QMessageBox::Information, QString("Answer"),QString("Yes"));
        yes->setMinimumHeight(60);
        yes->setMinimumWidth(180);
        yes->show();
        status->setText(status->text()+"Yes\n");
    }
    else
    {
        QMessageBox* no = new QMessageBox(QMessageBox::Information, QString("Answer"),QString("No"));
        no->setMinimumHeight(60);
        no->setMinimumWidth(180);
        status->setText(status->text()+"No\n");
        no->show();
    }
}

void MainDrawingWindow::show_equation(double *equation)
{
    static int counter=0;
    QString display;
    if(equation[0]==0&&equation[1]==0&&equation[2]==0)
    {
        display = "The points match!\n";
    }
    else
    {
        display = tr("%1*x+%2*y+%3=0\n").arg(equation[0]).arg(equation[1]).arg(equation[2]);
    }

    QMessageBox* mb = new QMessageBox(QMessageBox::Information, QString("Desired equation"),display);
    mb->setMinimumHeight(60);
    mb->setMinimumWidth(180);
    status->setText(status->text()+display);
    counter++;
    if(counter>10)
        status->setText("");
    mb->show();

}

void MainDrawingWindow::show_point(Point* point)
{
    QString display;
    if(point==NULL)
    {
        display = "No single such point exists! The lines match or are parallel!\n";
    }
    else
    {
        display = tr("The two lines meet at point (%1,%2)\n").arg(point->x_coord).arg(point->y_coord);
    }
    QMessageBox* mb = new QMessageBox(QMessageBox::Information, QString("Intersection point"),display);
    mb->setMinimumHeight(60);
    mb->setMinimumWidth(180);
    status->setText(status->text()+display);
    mb->show();
}
void MainDrawingWindow::pselectionChanged(QListWidgetItem *curr, QListWidgetItem *prev)
{
    if(curr)
    {
        int index = curr->data(Qt::UserRole).toInt();
        if(index>-1)
        {
            this->context->addCurrentPoint(this->context->points[index]);
        }
    }
}
void MainDrawingWindow::lselectionChanged(QListWidgetItem *curr, QListWidgetItem *prev)
{
    if(curr)
    {
        int index = curr->data(Qt::UserRole).toInt();
        if(index>-1)
        {
            this->context->addCurrentLine(this->context->lines[index]);
        }
    }
}
void MainDrawingWindow::createCentralWidget()
{
    central = new QWidget();
    central->setMinimumWidth(700);
    central->setMinimumHeight(SIZE);
    QHBoxLayout* lay = new QHBoxLayout();
    QVBoxLayout* right = new QVBoxLayout();
    slider = new QSlider(central);
    slider->setMinimum(10);
    slider->setMaximum(100);
    slider->setValue(10);
    spinbox = new QSpinBox();
    spinbox->setMinimum(7);
    spinbox->setMaximum(100);
    spinbox->setValue(1);
    right->addWidget(slider);
    right->addWidget(spinbox);

    scene = new QGraphicsScene(central);
    scene->setSceneRect(-SIZE,-SIZE,2*SIZE,2*SIZE);
    coord = new CoordinateSystem(this->context,central,scene);
    coord->setScene(scene);

    connect(slider,SIGNAL(valueChanged(int)),coord,SLOT(zoom(int)));
    connect(spinbox,SIGNAL(valueChanged(int)),coord,SLOT(scaleByInt(int)));
    connect(this,SIGNAL(send_sector_to_painter(Point*,Point*)),coord,SLOT(drawLine(Point*,Point*)));
    connect(clear_btn,SIGNAL(clicked()),coord,SLOT(clear_scene()));

    lay->addLayout(right);
    lay->addWidget(coord);
    central->setLayout(lay);
    setCentralWidget(central);
}

MainDrawingWindow::~MainDrawingWindow()
{
    delete addMenu;
    delete generateMenu;
    delete calculateMenu;
    delete triangleMenu;

    delete newPointAction;
    delete newLineAction;
    delete checkAction;
    delete generateEquationAction;
    delete generateIntersectionAction;
    delete parallelAction;
    delete perpendicularAction;
    delete medianAction;
    delete heightAction;
    delete bisectorAction;

    delete addPDialog;
    delete addLDialog;
    delete checkDialog;
    delete intersectDialog;
    delete equationDialog;
    delete parallelDialog;
    delete perpendDialog;
    delete triangleDialog;

    delete pointInfo;
    delete lineInfo;
    delete pointList;
    delete lineList;

    delete slider;
    delete spinbox;

    delete scene;
    delete coord;

    delete central;

    delete status;
    delete clear_btn;
}
