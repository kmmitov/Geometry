#ifndef PERPENDICULARDIALOG_H
#define PERPENDICULARDIALOG_H
#include "geometryproject.h"
#include "repository.h"


class PerpendicularDialog : public QDialog
{
    Q_OBJECT
public:
    explicit PerpendicularDialog(QWidget *parent = 0);
    PerpendicularDialog(Repository* context, QWidget *parent=0);
    ~PerpendicularDialog();
signals:
    void find_perpendicular(Point*, Line*);
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

#endif // PERPENDICULARDIALOG_H
