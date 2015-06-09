#ifndef INTERSECTIONDIALOG_H
#define INTERSECTIONDIALOG_H

#include "geometryproject.h"
#include "repository.h"


class IntersectionDialog : public QDialog
{
    Q_OBJECT
public:
    explicit IntersectionDialog(QWidget *parent = 0);
    IntersectionDialog(Repository* context, QWidget* parent=0);
    ~IntersectionDialog();
signals:
    void send_info(Line*, Line*);
public slots:
    void process_input();
    void enable_line_1_selection(int);
    void enable_line_2_selection(int);
    void new_line();
    void select_line(int index);
private:
    QLabel* first_line;
    QLabel* second_line;
    QRadioButton* no_name_line_1;
    QRadioButton* has_name_line_1;
    QPushButton* add_new_line_1;
    QComboBox* line_choice_1;
    QRadioButton* no_name_line_2;
    QRadioButton* has_name_line_2;
    QPushButton* add_new_line_2;
    QComboBox* line_choice_2;
    QPushButton* enter_btn;
    QPushButton* quit_btn;
    Repository* context;
};

#endif // INTERSECTIONDIALOG_H
