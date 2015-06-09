#ifndef CHECKPOINTDIALOG_H
#define CHECKPOINTDIALOG_H

#include "geometryproject.h"
#include "repository.h"
class CheckPointDialog : public QDialog
{
    Q_OBJECT
public:
    explicit CheckPointDialog(QWidget *parent = 0);
    ~CheckPointDialog();
    CheckPointDialog(Repository* context, QWidget *parent=0);

signals:
    void check_point_on_line(Point*, Line*);

public slots:
    void process_input();
    void enable_point_selection(int);
    void enable_line_selection(int);
    void new_point();
    void new_line();
    void select_point(int index);
    void select_line(int index);
private:
    QLabel* point_label;
    QLabel* line_label;
    QRadioButton* no_name_point;
    QRadioButton* has_name_point;
    QPushButton* add_point_now;
    QComboBox* point_choice;
    QRadioButton* no_name_line;
    QRadioButton* has_name_line;
    QPushButton* add_line_now;
    QComboBox* line_choice;
    QPushButton* enter_btn;
    QPushButton* quit_btn;
    Repository* context;
};

#endif // CHECKPOINTDIALOG_H
