#include "intersectiondialog.h"
#include "addlinedialog.h"
IntersectionDialog::IntersectionDialog(Repository* context, QWidget *parent) :
    QDialog(parent)
{
    this->context = context;
    first_line = new QLabel("Line 1 info: ");

    no_name_line_1 = new QRadioButton("Enter new line: ");
    has_name_line_1 = new QRadioButton("Choose line from list: ");
    QButtonGroup* line_group_1 = new QButtonGroup();
    line_group_1->addButton(no_name_line_1,0);
    line_group_1->addButton(has_name_line_1,1);

    add_new_line_1 = new QPushButton("Add the line");
    add_new_line_1->setEnabled(false);

    line_choice_1 = new QComboBox();
    line_choice_1->setEnabled(false);

    second_line = new QLabel("line 1 info: ");

    no_name_line_2 = new QRadioButton("Enter new line: ");
    has_name_line_2 = new QRadioButton("Choose line from list: ");
    QButtonGroup* line_group_2 = new QButtonGroup();
    line_group_2->addButton(no_name_line_2,0);
    line_group_2->addButton(has_name_line_2,1);

    add_new_line_2 = new QPushButton("Add the line");
    add_new_line_2->setEnabled(false);

    line_choice_2 = new QComboBox();
    line_choice_2->setEnabled(false);

    enter_btn = new QPushButton("Generate equation");
    enter_btn->setDefault(true);
    quit_btn = new QPushButton("Cancel");

    unsigned size = this->context->lines.size();
    for(unsigned i=0;i<size;i++)
    {
        line_choice_1->addItem(QString::fromStdString(context->lines[i]->name));
        line_choice_2->addItem(QString::fromStdString(context->lines[i]->name));
    }

    connect(line_group_1,SIGNAL(buttonClicked(int)),this,SLOT(enable_line_1_selection(int)));
    connect(line_group_2,SIGNAL(buttonClicked(int)),this,SLOT(enable_line_2_selection(int)));
    connect(enter_btn,SIGNAL(clicked()),this,SLOT(process_input()));
    connect(quit_btn,SIGNAL(clicked()),this,SLOT(close()));
    connect(add_new_line_1,SIGNAL(clicked()),this,SLOT(new_line()));
    connect(add_new_line_2,SIGNAL(clicked()),this,SLOT(new_line()));

    QGridLayout* layout = new QGridLayout();
    layout->addWidget(first_line,0,0,1,2);
    layout->addWidget(no_name_line_1,1,0,1,1);
    layout->addWidget(has_name_line_1,2,0,1,1);
    layout->addWidget(add_new_line_1,1,1,1,1);
    layout->addWidget(line_choice_1,2,1,1,1);
    layout->addWidget(second_line,3,0,1,2);
    layout->addWidget(no_name_line_2,4,0,1,1);
    layout->addWidget(has_name_line_2,5,0,1,1);
    layout->addWidget(add_new_line_2,4,1,1,1);
    layout->addWidget(line_choice_2,5,1,1,1);
    layout->addWidget(enter_btn,6,0,1,1);
    layout->addWidget(quit_btn,6,1,1,1);
    setLayout(layout);

    connect(this,SIGNAL(send_info(Line*,Line*)),context,SLOT(find_intersection(Line*,Line*)));
    setWindowTitle("Generate point by lines");
}
void IntersectionDialog::enable_line_1_selection(int id)
{
    if(id==0)
    {
        add_new_line_1->setEnabled(true);
        line_choice_1->setEnabled(false);
    }
    else if(id==1)
    {
        add_new_line_1->setEnabled(false);
        line_choice_1->setEnabled(true);
    }
}
void IntersectionDialog::enable_line_2_selection(int id)
{
    if(id==0)
    {
        add_new_line_2->setEnabled(true);
        line_choice_2->setEnabled(false);
    }
    else if(id==1)
    {
        add_new_line_2->setEnabled(false);
        line_choice_2->setEnabled(true);
    }
}

void IntersectionDialog::new_line()
{
    AddLineDialog* dialog = new AddLineDialog(context, this);
    dialog->show();

}
void IntersectionDialog::select_line(int index)
{
    if(index>-1)
    {
        Line* line = new Line(*this->context->lines[index]);
        this->context->addCurrentLine(line);
    }
}
void IntersectionDialog::process_input()
{
    if(has_name_line_1->isChecked())
    {
        int index = line_choice_1->currentIndex();
        select_line(index);
    }
    if(has_name_line_2->isChecked())
    {
        int index = line_choice_2->currentIndex();
        select_line(index);
    }


    Line* first = this->context->getCurrentLine();
    Line* second = this->context->getAuxiliaryLine();
    if(first!=NULL&&second!=NULL)
    {
        emit send_info(first,second);
    }
    close();
}

IntersectionDialog::~IntersectionDialog()
{
    delete first_line;
    delete second_line;
    delete no_name_line_1;
    delete has_name_line_1;
    delete add_new_line_1;
    delete line_choice_1;
    delete no_name_line_2;
    delete has_name_line_2;
    delete add_new_line_2;
    delete line_choice_2;
    delete enter_btn;
    delete quit_btn;

}
