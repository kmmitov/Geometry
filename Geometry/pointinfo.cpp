#include "pointinfo.h"

PointInfo::PointInfo(Repository* context, QWidget *parent) :
    QWidget(parent)
{
    this->context = context;
    point_info = new QLabel("Current point information");

    x_label = new QLabel("Value of x coordinate: ");
    x_tb = new QLineEdit();
    x_tb->setEnabled(false);

    y_label = new QLabel("Value of y coordinate: ");
    y_tb = new QLineEdit();
    y_tb->setEnabled(false);

    name_label = new QLabel("Point name: ");
    name_tb = new QLineEdit();
    name_tb->setEnabled(false);

    connect(x_tb,SIGNAL(editingFinished()),this,SLOT(update_x()));
    connect(y_tb,SIGNAL(editingFinished()),this,SLOT(update_y()));
    connect(name_tb,SIGNAL(editingFinished()),this,SLOT(update_name()));

    QGridLayout* mainLayout = new QGridLayout();
    mainLayout->addWidget(point_info,0,0,1,2);
    mainLayout->addWidget(x_label,1,0);
    mainLayout->addWidget(x_tb,1,1);
    mainLayout->addWidget(y_label,2,0);
    mainLayout->addWidget(y_tb,2,1);
    mainLayout->addWidget(name_label,3,0);
    mainLayout->addWidget(name_tb,3,1);
    setLayout(mainLayout);

    connect(context,SIGNAL(current_point_changed()),this,SLOT(update()));
    connect(this,SIGNAL(point_changed()),context,SLOT(update_point_info()));

    setFixedSize(sizeHint());
}

void PointInfo::update()
{
    Point* p = this->context->getCurrentPoint();
    if(p!=NULL)
    {
        QString x = QString::number(p->x_coord);
        QString y = QString::number(p->y_coord);
        QString name;
        if(p->name!="")
        {
            name = QString::fromStdString(p->name);
        }
        else
        {
            name = tr("(%1,%2)").arg(p->x_coord).arg(p->y_coord);
        }
        x_tb->setEnabled(true);
        x_tb->setText(x);
        y_tb->setEnabled(true);
        y_tb->setText(y);
        name_tb->setEnabled(true);
        name_tb->setText(name);
    }
}


void PointInfo::update_x()
{
    bool f = false;
    bool* ok = &f;
    double new_x = x_tb->text().toDouble(ok);
    if(*ok)
    {
        Point* p = this->context->getCurrentPoint();
        if(p!=NULL)
        {
            if(p->x_coord!=new_x)
            {
                p->x_coord = new_x;
                emit point_changed();
            }
        }

    }
}
void PointInfo::update_y()
{
    bool f = false;
    bool* ok = &f;
    double new_y = y_tb->text().toDouble(ok);
    if(*ok)
    {
        Point* p = this->context->getCurrentPoint();
        if(p!=NULL)
        {
            if(p->y_coord!=new_y)
            {
                p->y_coord = new_y;
                emit point_changed();
            }
        }
    }
}
void PointInfo::update_name()
{
    std::string new_name = name_tb->text().toStdString();
    Point* p = this->context->getCurrentPoint();
    if(p!=NULL)
    {
        if(p->name!=new_name)
        {
            p->name= new_name;
            emit point_changed();
        }
    }

}

PointInfo::~PointInfo()
{
    delete point_info;
    delete x_label;
    delete x_tb;
    delete y_label;
    delete y_tb;
    delete name_label;
    delete name_tb;
}
