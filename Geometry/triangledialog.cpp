#include "triangledialog.h"
#include "addpointdialog.h"
#include "maindrawingwindow.h"

TriangleDialog::TriangleDialog(Repository* context,int state ,QWidget *parent) :
    QDialog(parent)
{
    this->context = context;
    this->state = state;
    this->parentQ = parent;
    this->correction = NULL;
    pthird = new QLabel("Info of vertex opposing line in question:");
    no_name_point_3 = new QRadioButton("Enter info about new point:");
    has_name_point_3 = new QRadioButton("Select point from named ones: ");
    QButtonGroup* point_3_group = new QButtonGroup();
    point_3_group->addButton(no_name_point_3,0);
    point_3_group->addButton(has_name_point_3,1);
    add_new_point_3 = new QPushButton("Add point");
    add_new_point_3->setEnabled(false);
    point_choice_3 = new QComboBox();
    point_choice_3->setEnabled(false);

    psecond = new QLabel("Info of second vertex: ");
    no_name_point_2 = new QRadioButton("Enter info about new point:");
    has_name_point_2 = new QRadioButton("Select point from named ones: ");
    QButtonGroup* point_2_group = new QButtonGroup();
    point_2_group->addButton(no_name_point_2,0);
    point_2_group->addButton(has_name_point_2,1);
    add_new_point_2 = new QPushButton("Add point");
    add_new_point_2->setEnabled(false);
    point_choice_2 = new QComboBox();
    point_choice_2->setEnabled(false);

    pfirst = new QLabel("Info of first vertex: ");
    no_name_point_1 = new QRadioButton("Enter info about new point:");
    has_name_point_1 = new QRadioButton("Select point from named ones: ");
    QButtonGroup* point_1_group = new QButtonGroup();
    point_1_group->addButton(no_name_point_1,0);
    point_1_group->addButton(has_name_point_1,1);
    add_new_point_1 = new QPushButton("Add point");
    add_new_point_1->setEnabled(false);
    point_choice_1 = new QComboBox();
    point_choice_1->setEnabled(false);
    unsigned size = this->context->points.size();
    for(unsigned i=0;i<size;i++)
    {
        point_choice_1->addItem(QString::fromStdString(context->points[i]->name));
        point_choice_2->addItem(QString::fromStdString(context->points[i]->name));
        point_choice_3->addItem(QString::fromStdString(context->points[i]->name));
    }

    quit_btn = new QPushButton("Cancel");
    if(state==1)
    {
        enter_btn = new QPushButton("Get equation of height: ");
        setWindowTitle("Calculate height: ");
    }
    else if(state==2)
    {
        enter_btn = new QPushButton("Get equation of bisector: ");
        setWindowTitle("Calculate bisector: ");
    }
    else
    {
        enter_btn = new QPushButton("Get equation of median: ");
        setWindowTitle("Calculate median: ");
    }
    enter_btn->setDefault(true);

    connect(point_1_group,SIGNAL(buttonClicked(int)),this,SLOT(enable_point_1_selection(int)));
    connect(point_2_group,SIGNAL(buttonClicked(int)),this,SLOT(enable_point_2_selection(int)));
    connect(point_3_group,SIGNAL(buttonClicked(int)),this,SLOT(enable_point_3_selection(int)));
    connect(enter_btn,SIGNAL(clicked()),this,SLOT(process_input()));
    connect(quit_btn,SIGNAL(clicked()),this,SLOT(close()));
    connect(add_new_point_1,SIGNAL(clicked()),this,SLOT(new_point()));
    connect(add_new_point_2,SIGNAL(clicked()),this,SLOT(new_point()));
    connect(add_new_point_3,SIGNAL(clicked()),this,SLOT(new_point()));

    QGridLayout* layout = new QGridLayout();
    layout->addWidget(pfirst,0,0,1,2);
    layout->addWidget(no_name_point_1,1,0,1,1);
    layout->addWidget(has_name_point_1,2,0,1,1);
    layout->addWidget(add_new_point_1,1,1,1,1);
    layout->addWidget(point_choice_1,2,1,1,1);
    layout->addWidget(psecond,3,0,1,2);
    layout->addWidget(no_name_point_2,4,0,1,1);
    layout->addWidget(has_name_point_2,5,0,1,1);
    layout->addWidget(add_new_point_2,4,1,1,1);
    layout->addWidget(point_choice_2,5,1,1,1);
    layout->addWidget(pthird,6,0,1,2);
    layout->addWidget(no_name_point_3,7,0,1,1);
    layout->addWidget(has_name_point_3,8,0,1,1);
    layout->addWidget(add_new_point_3,7,1,1,1);
    layout->addWidget(point_choice_3,8,1,1,1);
    layout->addWidget(enter_btn,9,0,1,1);
    layout->addWidget(quit_btn,9,1,1,1);
    setLayout(layout);

    connect(this,SIGNAL(send_height(Point*,Point*,Point*)),context,SLOT(calc_height(Point*,Point*,Point*)));
    connect(this,SIGNAL(send_bipolar(Point*,Point*,Point*)),context,SLOT(calc_bisector(Point*,Point*,Point*)));
    connect(this,SIGNAL(send_median(Point*,Point*,Point*)),context,SLOT(calc_median(Point*,Point*,Point*)));
}

void TriangleDialog::enable_point_1_selection(int id)
{
    if(id==0)
    {
        add_new_point_1->setEnabled(true);
        point_choice_1->setEnabled(false);
    }
    else if(id==1)
    {
        add_new_point_1->setEnabled(false);
        point_choice_1->setEnabled(true);
    }
}


void TriangleDialog::enable_point_2_selection(int id)
{
    if(id==0)
    {
        add_new_point_2->setEnabled(true);
        point_choice_2->setEnabled(false);
    }
    else if(id==1)
    {
        add_new_point_2->setEnabled(false);
        point_choice_2->setEnabled(true);
    }
}
void TriangleDialog::enable_point_3_selection(int id)
{
    if(id==0)
    {
        add_new_point_3->setEnabled(true);
        point_choice_3->setEnabled(false);
    }
    else if(id==1)
    {
        add_new_point_3->setEnabled(false);
        point_choice_3->setEnabled(true);
    }
}
void TriangleDialog::new_point()
{
    AddPointDialog* dialog = new AddPointDialog(context, this);
    dialog->show();

}
void TriangleDialog::select_point(int index)
{
    if(index>-1)
    {
        this->context->addCurrentPoint(this->context->points[index]);
    }
}
void TriangleDialog::process_input()
{
    if(has_name_point_1->isChecked())
    {
        int index = point_choice_1->currentIndex();
        select_point(index);
    }
    if(has_name_point_2->isChecked())
    {
        int index = point_choice_2->currentIndex();
        select_point(index);
    }
    if(has_name_point_3->isChecked())
    {
        int index = point_choice_3->currentIndex();
        select_point(index);
    }
    else
    {
        if(has_name_point_2->isChecked())
        {
            if(has_name_point_1->isChecked())
            {
                this->correction = this->context->getAuxiliaryPoints()[1];
                this->context->addCurrentPoint(this->correction);
            }
            else
            {
                Point* first = this->context->getAuxiliaryPoints()[1];
                Point* other = this->context->getCurrentPoint();
                this->correction = this->context->getAuxiliaryPoints()[0];
                this->context->addCurrentPoint(first);
                this->context->addCurrentPoint(other);
                this->context->addCurrentPoint(this->correction);

            }
        }
        else if(has_name_point_1->isChecked())
        {

            Point* first = this->context->getAuxiliaryPoints()[1];
            Point* other = this->context->getCurrentPoint();
            this->correction = this->context->getAuxiliaryPoints()[0];
            this->context->addCurrentPoint(first);
            this->context->addCurrentPoint(other);
            this->context->addCurrentPoint(this->correction);
        }
    }

    Point* first = this->context->getCurrentPoint();
    Point* second = this->context->getAuxiliaryPoints()[0];
    Point* third = this->context->getAuxiliaryPoints()[1];
    MainDrawingWindow* par = (MainDrawingWindow*)this->parentQ;
    emit par->send_sector_to_painter(first,second);
    emit par->send_sector_to_painter(third,second);
    emit par->send_sector_to_painter(first,third);

    if(first!=NULL&&second!=NULL&&third!=NULL)
    {
        if(state==1) emit send_height(first,second,third);
        else if(state==2) emit send_bipolar(first,second,third);
        else emit send_median(first,second,third);
    }
    close();
}

TriangleDialog::~TriangleDialog()
{
    delete pfirst;
    delete psecond;
    delete pthird;
    delete no_name_point_1;
    delete has_name_point_1;
    delete point_choice_1;
    delete add_new_point_1;
    delete no_name_point_2;
    delete has_name_point_2;
    delete point_choice_2;
    delete add_new_point_2;
    delete no_name_point_3;
    delete has_name_point_3;
    delete point_choice_3;
    delete add_new_point_3;
    delete enter_btn;
    delete quit_btn;
}
