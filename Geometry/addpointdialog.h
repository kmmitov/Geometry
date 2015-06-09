#ifndef ADDPOINTDIALOG_H
#define ADDPOINTDIALOG_H

#include "geometryproject.h"
#include "repository.h"
class AddPointDialog : public QDialog
{
    Q_OBJECT
public:
    AddPointDialog(Repository* context, QWidget *parent=0);
    ~AddPointDialog();

signals:
    void add_point(double x, double y);
    void add_point(double x, double y, std::string name);

public slots:
    void enable_name(int state);
    void process_input();



private:
    QLabel* x_label;
    QLabel* y_label;
    QLineEdit* x_text_box;
    QLineEdit* y_text_box;
    QLineEdit* point_name_tb;
    QCheckBox* has_name_box;
    QPushButton* enter_button;
    QPushButton* quit_button;

};

#endif // ADDPOINTDIALOG_H
