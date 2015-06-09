#ifndef PARALLELDIALOG_H
#define PARALLELDIALOG_H
#include "geometryproject.h"
#include "repository.h"


class ParallelDialog : public QDialog
{
    Q_OBJECT
public:
    explicit ParallelDialog(QWidget *parent = 0);
    ParallelDialog(Repository* context, QWidget *parent=0);
    ~ParallelDialog();
signals:
    void find_parallel(Point*, Line*);
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

#endif // PARALLELDIALOG_H
