#include "perpendiculardialog.h"
#include "paralleldialog.h"
#include "addpointdialog.h"
#include "addlinedialog.h"

PerpendicularDialog::PerpendicularDialog(Repository* context, QWidget *parent) :
    QDialog(parent)
{
    this->context = context;
    point_label = new QLabel("Point info: ");

    no_name_point = new QRadioButton("Enter new point: ");
    has_name_point = new QRadioButton("Choose point from list: ");
    QButtonGroup* point_group = new QButtonGroup();
    point_group->addButton(no_name_point,0);
    point_group->addButton(has_name_point,1);

    add_point_now = new QPushButton("Add the point");
    add_point_now->setEnabled(false);

    point_choice = new QComboBox();
    point_choice->setEnabled(false);
    unsigned size = this->context->points.size();
    for(unsigned i=0;i<size;i++)
    {
        point_choice->addItem(QString::fromStdString(context->points[i]->name));
    }

    line_label = new QLabel("Line info: ");

    no_name_line = new QRadioButton("Enter new line by equation: ");
    has_name_line = new QRadioButton("Choose line from list: ");
    QButtonGroup* line_group = new QButtonGroup();
    line_group->addButton(no_name_line,0);
    line_group->addButton(has_name_line,1);

    add_line_now = new QPushButton("Add the line");
    add_line_now->setEnabled(false);

    line_choice = new QComboBox();
    line_choice->setEnabled(false);
    size = this->context->lines.size();
    for(unsigned i=0;i<size;i++)
    {
       line_choice->addItem(QString::fromStdString(context->lines[i]->name));
    }

    enter_btn = new QPushButton("Generate line equation");
    enter_btn->setDefault(true);
    quit_btn = new QPushButton("Cancel");

    connect(point_group,SIGNAL(buttonClicked(int)),this,SLOT(enable_point_selection(int)));
    connect(line_group,SIGNAL(buttonClicked(int)),this,SLOT(enable_line_selection(int)));
    connect(enter_btn,SIGNAL(clicked()),this,SLOT(process_input()));
    connect(quit_btn,SIGNAL(clicked()),this,SLOT(close()));
    connect(add_point_now,SIGNAL(clicked()),this,SLOT(new_point()));
    connect(add_line_now,SIGNAL(clicked()),this,SLOT(new_line()));

    QGridLayout* layout = new QGridLayout();
    layout->addWidget(point_label,0,0,1,2);
    layout->addWidget(no_name_point,1,0,1,1);
    layout->addWidget(has_name_point,2,0,1,1);
    layout->addWidget(add_point_now,1,1,1,1);
    layout->addWidget(point_choice,2,1,1,1);
    layout->addWidget(line_label,3,0,1,2);
    layout->addWidget(no_name_line,4,0,1,1);
    layout->addWidget(has_name_line,5,0,1,1);
    layout->addWidget(add_line_now,4,1,1,1);
    layout->addWidget(line_choice,5,1,1,1);
    layout->addWidget(enter_btn,6,0,1,1);
    layout->addWidget(quit_btn,6,1,1,1);
    setLayout(layout);

    connect(this,SIGNAL(find_perpendicular(Point*,Line*)),context,SLOT(find_perpendicular_line(Point*,Line*)));

    setWindowTitle("Generate perpendicular line through point");
}

void PerpendicularDialog::enable_line_selection(int id)
{
    if(id==0)
    {
        add_line_now->setEnabled(true);
        line_choice->setEnabled(false);
    }
    else if(id==1)
    {
        add_line_now->setEnabled(false);
        line_choice->setEnabled(true);
        this->context->addCurrentLine(this->context->lines[0]);
    }
}
void PerpendicularDialog::enable_point_selection(int id)
{
    if(id==0)
    {
        add_point_now->setEnabled(true);
        point_choice->setEnabled(false);
    }
    else if(id==1)
    {
        add_point_now->setEnabled(false);
        point_choice->setEnabled(true);
        this->context->addCurrentPoint(this->context->points[0]);
    }
}

void PerpendicularDialog::new_line()
{
    AddLineDialog* dialog = new AddLineDialog(context, this);
    dialog->show();

}

void PerpendicularDialog::new_point()
{
    AddPointDialog* dialog = new AddPointDialog(context, this);
    dialog->show();

}

void PerpendicularDialog::select_line(int index)
{
    if(index>-1)
    {
        this->context->addCurrentLine(this->context->lines[index]);
    }
}

void PerpendicularDialog::select_point(int index)
{
    if(index>-1)
    {
        this->context->addCurrentPoint(this->context->points[index]);
    }
}

void PerpendicularDialog::process_input()
{
    if(has_name_line->isChecked())
    {
        int index = line_choice->currentIndex();
        select_line(index);
    }
    if(has_name_point->isChecked())
    {
        int index = point_choice->currentIndex();
        select_point(index);
    }

    Line* line = context->getCurrentLine();
    Point* point = context->getCurrentPoint();
    if(line!=NULL&&point!=NULL)
    {
        emit find_perpendicular(point,line);
    }
    close();
}

PerpendicularDialog::~PerpendicularDialog()
{
    delete point_label;
    delete line_label;
    delete no_name_point;
    delete has_name_point;
    delete add_point_now;
    delete point_choice;
    delete no_name_line;
    delete has_name_line;
    delete add_line_now;
    delete line_choice;
    delete enter_btn;
    delete quit_btn;
}
