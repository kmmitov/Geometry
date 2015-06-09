#include "addpointdialog.h"

AddPointDialog::AddPointDialog(Repository* context, QWidget *parent) :
    QDialog(parent)
{
    x_label = new QLabel("Enter x coordinate: ");
    x_text_box = new QLineEdit();
    x_label->setBuddy(x_text_box);

    y_label = new QLabel("Enter y coordinate: ");
    y_text_box = new QLineEdit();
    y_label->setBuddy(y_text_box);

    has_name_box = new QCheckBox("Do you wish to give the point a name?");
    point_name_tb = new QLineEdit();
    point_name_tb->setEnabled(false);\

    enter_button = new QPushButton("Enter");
    enter_button->setDefault(true);
    quit_button = new QPushButton("Exit without changes");

    connect(has_name_box,SIGNAL(stateChanged(int)),this,SLOT(enable_name(int)));
    connect(quit_button,SIGNAL(clicked()),this,SLOT(close()));
    connect(enter_button,SIGNAL(clicked()),this,SLOT(process_input()));

    QHBoxLayout* main_layout = new QHBoxLayout();
    QVBoxLayout* left_l = new QVBoxLayout();
    QVBoxLayout* right_l = new QVBoxLayout();

    left_l->addWidget(x_label);
    left_l->addWidget(y_label);
    left_l->addWidget(has_name_box);
    left_l->addWidget(enter_button);

    right_l->addWidget(x_text_box);
    right_l->addWidget(y_text_box);
    right_l->addWidget(point_name_tb);
    right_l->addWidget(quit_button);

    main_layout->addLayout(left_l);
    main_layout->addLayout(right_l);
    setLayout(main_layout);

    connect(this, SIGNAL(add_point(double,double)),context,SLOT(add_point(double,double)));
    connect(this,SIGNAL(add_point(double,double,std::string)),context,SLOT(add_point(double,double,std::string)));

    setWindowTitle("Add a point");
    setFixedHeight(sizeHint().height());


}

void AddPointDialog::enable_name(int state)
{
    if(state==2)
    {
        point_name_tb->setEnabled(true);
    }
}

void AddPointDialog::process_input()
{
    double x = x_text_box->text().toDouble();
    double y = y_text_box->text().toDouble();
    if(has_name_box->isChecked())
    {
        std::string name = point_name_tb->text().toStdString();
        emit add_point(x,y,name);
    }
    else
    {
        emit add_point(x,y);
    }
    close();
}

AddPointDialog::~AddPointDialog()
{
    delete x_label;
    delete y_label;
    delete x_text_box;
    delete y_text_box;
    delete point_name_tb;
    delete has_name_box;
    delete enter_button;
    delete quit_button;
}
