#ifndef ADDLINEDIALOG_H
#define ADDLINEDIALOG_H

#include "geometryproject.h"
#include "repository.h"
class AddLineDialog : public QDialog
{
    Q_OBJECT
public:
    explicit AddLineDialog(QWidget *parent = 0);
    ~AddLineDialog();
    AddLineDialog(Repository* rep, QWidget *parent=0);

signals:
    void add_line(double a, double b, double c);
    void add_line(double a, double b, double c,std::string name);

public slots:
    void enable_name(int state);
    void process_input();

private:
    QLabel* a_label;
    QLabel* b_label;
    QLabel* c_label;
    QLineEdit* a_text_box;
    QLineEdit* b_text_box;
    QLineEdit* c_text_box;
    QLineEdit* line_name_tb;
    QCheckBox* has_name_box;
    QPushButton* enter_button;
    QPushButton* quit_button;
};

#endif // ADDLINEDIALOG_H
