#include "addlinedialog.h"
AddLineDialog::AddLineDialog(Repository* context, QWidget *parent)
        :QDialog(parent)
{
    a_label = new QLabel("Enter coefficient A: ");
    a_text_box = new QLineEdit();
    a_label->setBuddy(a_text_box);

    b_label = new QLabel("Enter coefficient B: ");
    b_text_box = new QLineEdit();
    b_label->setBuddy(b_text_box);

    c_label = new QLabel("Enter coefficient C: ");
    c_text_box = new QLineEdit();
    c_label->setBuddy(c_text_box);

    has_name_box = new QCheckBox("Do you wish to give the line a name?");
    line_name_tb = new QLineEdit();
    line_name_tb->setEnabled(false);\

    enter_button = new QPushButton("Enter");
    enter_button->setDefault(true);
    quit_button = new QPushButton("Exit without changes");

    connect(has_name_box,SIGNAL(stateChanged(int)),this,SLOT(enable_name(int)));
    connect(quit_button,SIGNAL(clicked()),this,SLOT(close()));
    connect(enter_button,SIGNAL(clicked()),this,SLOT(process_input()));

    QHBoxLayout* main_layout = new QHBoxLayout();
    QVBoxLayout* left_l = new QVBoxLayout();
    QVBoxLayout* right_l = new QVBoxLayout();

    left_l->addWidget(a_label);
    left_l->addWidget(b_label);
    left_l->addWidget(c_label);
    left_l->addWidget(has_name_box);
    left_l->addWidget(enter_button);

    right_l->addWidget(a_text_box);
    right_l->addWidget(b_text_box);
    right_l->addWidget(c_text_box);
    right_l->addWidget(line_name_tb);
    right_l->addWidget(quit_button);

    main_layout->addLayout(left_l);
    main_layout->addLayout(right_l);
    setLayout(main_layout);

    connect(this,SIGNAL(add_line(double,double,double)),context,SLOT(add_line(double,double,double)));
    connect(this,SIGNAL(add_line(double,double,double,std::string)),context,SLOT(add_line(double,double,double,std::string)));

    setWindowTitle("Add a line");
    setFixedHeight(sizeHint().height());
}
void AddLineDialog::enable_name(int state)
{
    if(state==2)
    {
        line_name_tb->setEnabled(true);
    }
    else
    {
        line_name_tb->setEnabled(false);
    }
}
void AddLineDialog::process_input()
{
    double a = a_text_box->text().toDouble();
    double b = b_text_box->text().toDouble();
    double c = c_text_box->text().toDouble();
    if(has_name_box->isChecked())
    {
        std::string name = line_name_tb->text().toStdString();
        emit add_line(a,b,c,name);
    }
    else
    {
        emit add_line(a,b,c);
    }
    close();
}

AddLineDialog::~AddLineDialog()
{
    delete a_label;
    delete b_label;
    delete c_label;
    delete a_text_box;
    delete b_text_box;
    delete c_text_box;
    delete line_name_tb;
    delete has_name_box;
    delete enter_button;
    delete quit_button;
}
