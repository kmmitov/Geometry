#ifndef LINEBYPOINTSDIALOG_H
#define LINEBYPOINTSDIALOG_H

#include "geometryproject.h"
#include "repository.h"


class LineByPointsDialog : public QDialog
{
    Q_OBJECT
public:
    explicit LineByPointsDialog(QWidget *parent = 0);
    LineByPointsDialog(Repository* context, QWidget *parent=0);
    Repository* context;
    ~LineByPointsDialog();
signals:
    void send_info(Point*, Point*);
public slots:
    void process_input();
    void enable_point_1_selection(int);
    void enable_point_2_selection(int);
    void new_point_1();
    void new_point_2();
    void select_point(int index);
private:
    QLabel* first_point;
    QLabel* second_point;
    QRadioButton* no_name_point_1;
    QRadioButton* has_name_point_1;
    QPushButton* add_new_point_1;
    QComboBox* point_choice_1;
    QRadioButton* no_name_point_2;
    QRadioButton* has_name_point_2;
    QPushButton* add_new_point_2;
    QComboBox* point_choice_2;
    QPushButton* enter_btn;
    QPushButton* quit_btn;

};

#endif // LINEBYPOINTSDIALOG_H
