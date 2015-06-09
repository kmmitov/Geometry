#ifndef POINTINFO_H
#define POINTINFO_H

#include "geometryproject.h"
#include "repository.h"

class PointInfo : public QWidget
{
    Q_OBJECT
public:
    explicit PointInfo(QWidget *parent = 0);
    PointInfo(Repository* context,QWidget *parent=0);
    ~PointInfo();
signals:
    void point_changed();
public slots:
    void update_x();
    void update_y();
    void update_name();
    void update();
private:
    QLabel* point_info;
    QLabel* x_label;
    QLineEdit* x_tb;
    QLabel* y_label;
    QLineEdit* y_tb;
    QLabel* name_label;
    QLineEdit* name_tb;
    Repository* context;
};

#endif // POINTINFO_H
