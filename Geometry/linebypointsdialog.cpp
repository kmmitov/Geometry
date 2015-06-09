#include "linebypointsdialog.h"
#include "addpointdialog.h"

LineByPointsDialog::LineByPointsDialog(Repository* context, QWidget *parent) :
    QDialog(parent)
{
    this->context = context;
    first_point = new QLabel("Point 1 info: ");

    no_name_point_1 = new QRadioButton("Enter new point: ");
    has_name_point_1 = new QRadioButton("Choose point from list: ");
    QButtonGroup* point_group_1 = new QButtonGroup();
    point_group_1->addButton(no_name_point_1,0);
    point_group_1->addButton(has_name_point_1,1);

    add_new_point_1 = new QPushButton("Add the point");
    add_new_point_1->setEnabled(false);

    point_choice_1 = new QComboBox();
    point_choice_1->setEnabled(false);

    second_point = new QLabel("Point 1 info: ");

    no_name_point_2 = new QRadioButton("Enter new point: ");
    has_name_point_2 = new QRadioButton("Choose point from list: ");
    QButtonGroup* point_group_2 = new QButtonGroup();
    point_group_2->addButton(no_name_point_2,0);
    point_group_2->addButton(has_name_point_2,1);

    add_new_point_2 = new QPushButton("Add the point");
    add_new_point_2->setEnabled(false);

    point_choice_2 = new QComboBox();
    point_choice_2->setEnabled(false);

    enter_btn = new QPushButton("Generate equation");
    enter_btn->setDefault(true);
    quit_btn = new QPushButton("Cancel");

    unsigned size = this->context->points.size();
    for(unsigned i=0;i<size;i++)
    {
        point_choice_1->addItem(QString::fromStdString(context->points[i]->name));
        point_choice_2->addItem(QString::fromStdString(context->points[i]->name));
    }

    connect(point_group_1,SIGNAL(buttonClicked(int)),this,SLOT(enable_point_1_selection(int)));
    connect(point_group_2,SIGNAL(buttonClicked(int)),this,SLOT(enable_point_2_selection(int)));
    connect(enter_btn,SIGNAL(clicked()),this,SLOT(process_input()));
    connect(quit_btn,SIGNAL(clicked()),this,SLOT(close()));
    connect(add_new_point_1,SIGNAL(clicked()),this,SLOT(new_point_1()));
    connect(add_new_point_2,SIGNAL(clicked()),this,SLOT(new_point_2()));


    QGridLayout* layout = new QGridLayout();
    layout->addWidget(first_point,0,0,1,2);
    layout->addWidget(no_name_point_1,1,0,1,1);
    layout->addWidget(has_name_point_1,2,0,1,1);
    layout->addWidget(add_new_point_1,1,1,1,1);
    layout->addWidget(point_choice_1,2,1,1,1);
    layout->addWidget(second_point,3,0,1,2);
    layout->addWidget(no_name_point_2,4,0,1,1);
    layout->addWidget(has_name_point_2,5,0,1,1);
    layout->addWidget(add_new_point_2,4,1,1,1);
    layout->addWidget(point_choice_2,5,1,1,1);
    layout->addWidget(enter_btn,6,0,1,1);
    layout->addWidget(quit_btn,6,1,1,1);
    setLayout(layout);

    connect(this,SIGNAL(send_info(Point*,Point*)),context,SLOT(generate_equation(Point*,Point*)));
    setWindowTitle("Generate line by points");
}

void LineByPointsDialog::enable_point_1_selection(int id)
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
void LineByPointsDialog::enable_point_2_selection(int id)
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
void LineByPointsDialog::new_point_1()
{
    AddPointDialog* dialog = new AddPointDialog(context, this);
    dialog->show();

}
void LineByPointsDialog::new_point_2()
{
    AddPointDialog* dialog = new AddPointDialog(context, this);
    dialog->show();

}
void LineByPointsDialog::select_point(int index)
{
    if(index>-1)
    {

        this->context->addCurrentPoint(this->context->points[index]);
    }
}
void LineByPointsDialog::process_input()
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

    Point* first = this->context->getCurrentPoint();
    Point* second = this->context->getAuxiliaryPoints()[0];
    if(first!=NULL&&second!=NULL)
    {
        emit send_info(first,second);
    }
    close();
}

LineByPointsDialog::~LineByPointsDialog()
{
    delete first_point;
    delete second_point;
    delete no_name_point_1;
    delete has_name_point_1;
    delete add_new_point_1;
    delete point_choice_1;
    delete no_name_point_2;
    delete has_name_point_2;
    delete add_new_point_2;
    delete point_choice_2;
    delete enter_btn;
    delete quit_btn;
}
