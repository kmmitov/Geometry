/****************************************************************************
** Meta object code from reading C++ file 'maindrawingwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Geometry/maindrawingwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maindrawingwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainDrawingWindow_t {
    QByteArrayData data[27];
    char stringdata[345];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainDrawingWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainDrawingWindow_t qt_meta_stringdata_MainDrawingWindow = {
    {
QT_MOC_LITERAL(0, 0, 17), // "MainDrawingWindow"
QT_MOC_LITERAL(1, 18, 22), // "send_sector_to_painter"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 6), // "Point*"
QT_MOC_LITERAL(4, 49, 21), // "show_answer_as_dialog"
QT_MOC_LITERAL(5, 71, 13), // "show_equation"
QT_MOC_LITERAL(6, 85, 7), // "double*"
QT_MOC_LITERAL(7, 93, 8), // "equation"
QT_MOC_LITERAL(8, 102, 10), // "show_point"
QT_MOC_LITERAL(9, 113, 5), // "point"
QT_MOC_LITERAL(10, 119, 17), // "populatePointList"
QT_MOC_LITERAL(11, 137, 16), // "populateLineList"
QT_MOC_LITERAL(12, 154, 17), // "pselectionChanged"
QT_MOC_LITERAL(13, 172, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(14, 189, 17), // "lselectionChanged"
QT_MOC_LITERAL(15, 207, 13), // "createActions"
QT_MOC_LITERAL(16, 221, 11), // "createMenus"
QT_MOC_LITERAL(17, 233, 8), // "addPoint"
QT_MOC_LITERAL(18, 242, 7), // "addLine"
QT_MOC_LITERAL(19, 250, 5), // "check"
QT_MOC_LITERAL(20, 256, 11), // "getEquation"
QT_MOC_LITERAL(21, 268, 15), // "getIntersection"
QT_MOC_LITERAL(22, 284, 11), // "getParallel"
QT_MOC_LITERAL(23, 296, 16), // "getPerpendicular"
QT_MOC_LITERAL(24, 313, 9), // "getMedian"
QT_MOC_LITERAL(25, 323, 9), // "getHeight"
QT_MOC_LITERAL(26, 333, 11) // "getBisector"

    },
    "MainDrawingWindow\0send_sector_to_painter\0"
    "\0Point*\0show_answer_as_dialog\0"
    "show_equation\0double*\0equation\0"
    "show_point\0point\0populatePointList\0"
    "populateLineList\0pselectionChanged\0"
    "QListWidgetItem*\0lselectionChanged\0"
    "createActions\0createMenus\0addPoint\0"
    "addLine\0check\0getEquation\0getIntersection\0"
    "getParallel\0getPerpendicular\0getMedian\0"
    "getHeight\0getBisector"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainDrawingWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  114,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,  119,    2, 0x0a /* Public */,
       5,    1,  122,    2, 0x0a /* Public */,
       8,    1,  125,    2, 0x0a /* Public */,
      10,    0,  128,    2, 0x0a /* Public */,
      11,    0,  129,    2, 0x0a /* Public */,
      12,    2,  130,    2, 0x0a /* Public */,
      14,    2,  135,    2, 0x0a /* Public */,
      15,    0,  140,    2, 0x08 /* Private */,
      16,    0,  141,    2, 0x08 /* Private */,
      17,    0,  142,    2, 0x08 /* Private */,
      18,    0,  143,    2, 0x08 /* Private */,
      19,    0,  144,    2, 0x08 /* Private */,
      20,    0,  145,    2, 0x08 /* Private */,
      21,    0,  146,    2, 0x08 /* Private */,
      22,    0,  147,    2, 0x08 /* Private */,
      23,    0,  148,    2, 0x08 /* Private */,
      24,    0,  149,    2, 0x08 /* Private */,
      25,    0,  150,    2, 0x08 /* Private */,
      26,    0,  151,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 3,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 13,    2,    2,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 13,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainDrawingWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainDrawingWindow *_t = static_cast<MainDrawingWindow *>(_o);
        switch (_id) {
        case 0: _t->send_sector_to_painter((*reinterpret_cast< Point*(*)>(_a[1])),(*reinterpret_cast< Point*(*)>(_a[2]))); break;
        case 1: _t->show_answer_as_dialog((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->show_equation((*reinterpret_cast< double*(*)>(_a[1]))); break;
        case 3: _t->show_point((*reinterpret_cast< Point*(*)>(_a[1]))); break;
        case 4: _t->populatePointList(); break;
        case 5: _t->populateLineList(); break;
        case 6: _t->pselectionChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 7: _t->lselectionChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 8: _t->createActions(); break;
        case 9: _t->createMenus(); break;
        case 10: _t->addPoint(); break;
        case 11: _t->addLine(); break;
        case 12: _t->check(); break;
        case 13: _t->getEquation(); break;
        case 14: _t->getIntersection(); break;
        case 15: _t->getParallel(); break;
        case 16: _t->getPerpendicular(); break;
        case 17: _t->getMedian(); break;
        case 18: _t->getHeight(); break;
        case 19: _t->getBisector(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainDrawingWindow::*_t)(Point * , Point * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainDrawingWindow::send_sector_to_painter)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject MainDrawingWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainDrawingWindow.data,
      qt_meta_data_MainDrawingWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainDrawingWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainDrawingWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainDrawingWindow.stringdata))
        return static_cast<void*>(const_cast< MainDrawingWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainDrawingWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void MainDrawingWindow::send_sector_to_painter(Point * _t1, Point * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
