#ifndef LINEINFO_H
#define LINEINFO_H

#include "geometryproject.h"
#include "repository.h"


class LineInfo : public QWidget
{
    Q_OBJECT
public:
    explicit LineInfo(QWidget *parent = 0);
    LineInfo(Repository* context,QWidget* parent=0);
    ~LineInfo();
signals:
    void line_changed();
public slots:
    void update_a();
    void update_b();
    void update_c();
    void update_name();
    void update();
    void update(int index);
private:
    QLabel* line_info;
    QLabel* a_label;
    QLineEdit* a_tb;
    QLabel* b_label;
    QLineEdit* b_tb;
    QLabel* c_label;
    QLineEdit* c_tb;
    QLabel* name_label;
    QLineEdit* name_tb;
    QLabel* equation_label;
    QLabel* equation_tb;
    Repository* context;
};

#endif // LINEINFO_H
