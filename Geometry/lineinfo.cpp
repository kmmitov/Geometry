#include "lineinfo.h"

LineInfo::LineInfo(Repository* context, QWidget *parent) :
    QWidget(parent)
{
    this->context = context;
    line_info = new QLabel("Current line information");

    a_label = new QLabel("Value of A constant: ");
    a_tb = new QLineEdit();
    a_tb->setEnabled(false);

    b_label = new QLabel("Value of B constant: ");
    b_tb = new QLineEdit();
    b_tb->setEnabled(false);

    c_label = new QLabel("Value of C constant: ");
    c_tb = new QLineEdit();
    c_tb->setEnabled(false);

    name_label = new QLabel("Line name: ");
    name_tb = new QLineEdit();
    name_tb->setEnabled(false);

    equation_label = new QLabel("Equation: ");
    equation_tb = new QLabel("");

    connect(a_tb,SIGNAL(editingFinished()),this,SLOT(update_a()));
    connect(b_tb,SIGNAL(editingFinished()),this,SLOT(update_b()));
    connect(c_tb,SIGNAL(editingFinished()),this,SLOT(update_c()));
    connect(name_tb,SIGNAL(editingFinished()),this,SLOT(update_name()));

    QGridLayout* mainLayout = new QGridLayout();
    mainLayout->addWidget(line_info,0,0,1,2);
    mainLayout->addWidget(a_label,1,0);
    mainLayout->addWidget(a_tb,1,1);
    mainLayout->addWidget(b_label,2,0);
    mainLayout->addWidget(b_tb,2,1);
    mainLayout->addWidget(c_label,3,0);
    mainLayout->addWidget(c_tb,3,1);
    mainLayout->addWidget(name_label,4,0);
    mainLayout->addWidget(name_tb,4,1);
    mainLayout->addWidget(equation_label,5,0);
    mainLayout->addWidget(equation_tb,5,1);
    setLayout(mainLayout);

    connect(context,SIGNAL(current_line_changed()),this,SLOT(update()));
    connect(this,SIGNAL(line_changed()),context,SLOT(update_line_info()));

    setFixedSize(sizeHint());
}
void LineInfo::update(int index)
{
    Line* line = this->context->getCurrentLine();
    if(line!=NULL)
    {
        double val;
        bool f = false;
        bool* ok = &f;
        if(index==0)
        {
            val = a_tb->text().toDouble(ok);
        }
        else if(index==1)
        {
            val = b_tb->text().toDouble(ok);
        }
        else if(index==2)
        {
            val = c_tb->text().toDouble(ok);
        }
        if(line->equation[index] != val)
        {
            line->equation[index]=val;
            emit line_changed();
        }
    }
}
void LineInfo::update_a()
{
    update(0);
}
void LineInfo::update_b()
{
    update(1);
}
void LineInfo::update_c()
{
    update(2);
}
void LineInfo::update()
{
    Line* l = this->context->getCurrentLine();
    if(l!=NULL)
    {
        QString a = QString::number(l->equation[0]);
        QString b = QString::number(l->equation[1]);
        QString c = QString::number(l->equation[2]);
        QString name;
        if(l->name!="")
        {
            name = QString::fromStdString(l->name);
        }
        else
        {
            name = "Not specified";
        }
        a_tb->setEnabled(true);
        a_tb->setText(a);
        b_tb->setEnabled(true);
        b_tb->setText(b);
        c_tb->setEnabled(true);
        c_tb->setText(c);
        name_tb->setEnabled(true);
        name_tb->setText(name);
        QString eq = tr("(%1)*x+(%2)*y+(%3)=0").arg(l->equation[0])
                .arg(l->equation[1])
                .arg(l->equation[2]);
        equation_tb->setText(eq);
    }
}
void LineInfo::update_name()
{
    std::string new_name = name_tb->text().toStdString();
    Line* l = this->context->getCurrentLine();
    if(l!=NULL)
    {
        if(l->name!=new_name)
        {
            l->name= new_name;
            emit line_changed();
        }
    }
}


LineInfo::~LineInfo()
{
    delete line_info;
    delete a_label;
    delete a_tb;
    delete b_label;
    delete b_tb;
    delete c_label;
    delete c_tb;
    delete name_label;
    delete name_tb;
    delete equation_label;
    delete equation_tb;
}
