#include <QWidget>
#include <QSlider>
#include <QSpinBox>
#include <QHBoxLayout>
#include <QApplication>
#include "addpointdialog.h"
#include "addlinedialog.h"
#include "checkpointdialog.h"
#include "linebypointsdialog.h"
#include "maindrawingwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainDrawingWindow* window = new MainDrawingWindow(new Repository());
    window->show();

    return a.exec();
}
