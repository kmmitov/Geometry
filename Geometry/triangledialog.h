#ifndef TRIANGLEDIALOG_H
#define TRIANGLEDIALOG_H

#include "geometryproject.h"
#include "repository.h"


class TriangleDialog : public QDialog
{
    Q_OBJECT
public:
    explicit TriangleDialog(QWidget *parent = 0);
    TriangleDialog(Repository* context, int mode, QWidget* parent);
    ~TriangleDialog();
signals:
    void send_height(Point*,Point*,Point*);
    void send_median(Point*,Point*,Point*);
    void send_bipolar(Point*, Point*, Point*);

public slots:
    void process_input();
    void enable_point_1_selection(int);
    void enable_point_2_selection(int);
    void enable_point_3_selection(int);
    void new_point();
    void select_point(int index);
private:
    QLabel* pfirst;
    QLabel* psecond;
    QLabel* pthird;
    QRadioButton* no_name_point_1;
    QRadioButton* has_name_point_1;
    QComboBox* point_choice_1;
    QPushButton* add_new_point_1;
    QRadioButton* no_name_point_2;
    QRadioButton* has_name_point_2;
    QComboBox* point_choice_2;
    QPushButton* add_new_point_2;
    QRadioButton* no_name_point_3;
    QRadioButton* has_name_point_3;
    QComboBox* point_choice_3;
    QPushButton* add_new_point_3;
    QPushButton* enter_btn;
    QPushButton* quit_btn;
    Repository* context;
    QWidget* parentQ;
    Point* correction;
    int state;
};

#endif // TRIANGLEDIALOG_H
