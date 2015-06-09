/****************************************************************************
** Meta object code from reading C++ file 'repository.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Geometry/repository.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'repository.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Repository_t {
    QByteArrayData data[26];
    char stringdata[369];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Repository_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Repository_t qt_meta_stringdata_Repository = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Repository"
QT_MOC_LITERAL(1, 11, 15), // "answer_question"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 13), // "give_equation"
QT_MOC_LITERAL(4, 42, 7), // "double*"
QT_MOC_LITERAL(5, 50, 8), // "equation"
QT_MOC_LITERAL(6, 59, 10), // "give_point"
QT_MOC_LITERAL(7, 70, 6), // "Point*"
QT_MOC_LITERAL(8, 77, 21), // "send_point_to_painter"
QT_MOC_LITERAL(9, 99, 20), // "send_line_to_painter"
QT_MOC_LITERAL(10, 120, 5), // "Line*"
QT_MOC_LITERAL(11, 126, 21), // "current_point_changed"
QT_MOC_LITERAL(12, 148, 20), // "current_line_changed"
QT_MOC_LITERAL(13, 169, 8), // "add_line"
QT_MOC_LITERAL(14, 178, 11), // "std::string"
QT_MOC_LITERAL(15, 190, 9), // "add_point"
QT_MOC_LITERAL(16, 200, 16), // "is_point_on_line"
QT_MOC_LITERAL(17, 217, 17), // "generate_equation"
QT_MOC_LITERAL(18, 235, 18), // "find_parallel_line"
QT_MOC_LITERAL(19, 254, 23), // "find_perpendicular_line"
QT_MOC_LITERAL(20, 278, 17), // "find_intersection"
QT_MOC_LITERAL(21, 296, 11), // "calc_height"
QT_MOC_LITERAL(22, 308, 13), // "calc_bisector"
QT_MOC_LITERAL(23, 322, 11), // "calc_median"
QT_MOC_LITERAL(24, 334, 17), // "update_point_info"
QT_MOC_LITERAL(25, 352, 16) // "update_line_info"

    },
    "Repository\0answer_question\0\0give_equation\0"
    "double*\0equation\0give_point\0Point*\0"
    "send_point_to_painter\0send_line_to_painter\0"
    "Line*\0current_point_changed\0"
    "current_line_changed\0add_line\0std::string\0"
    "add_point\0is_point_on_line\0generate_equation\0"
    "find_parallel_line\0find_perpendicular_line\0"
    "find_intersection\0calc_height\0"
    "calc_bisector\0calc_median\0update_point_info\0"
    "update_line_info"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Repository[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x06 /* Public */,
       3,    1,  122,    2, 0x06 /* Public */,
       6,    1,  125,    2, 0x06 /* Public */,
       8,    1,  128,    2, 0x06 /* Public */,
       9,    2,  131,    2, 0x06 /* Public */,
      11,    0,  136,    2, 0x06 /* Public */,
      12,    0,  137,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    4,  138,    2, 0x0a /* Public */,
      13,    3,  147,    2, 0x0a /* Public */,
      15,    3,  154,    2, 0x0a /* Public */,
      15,    2,  161,    2, 0x0a /* Public */,
      16,    2,  166,    2, 0x0a /* Public */,
      17,    2,  171,    2, 0x0a /* Public */,
      18,    2,  176,    2, 0x0a /* Public */,
      19,    2,  181,    2, 0x0a /* Public */,
      20,    2,  186,    2, 0x0a /* Public */,
      21,    3,  191,    2, 0x0a /* Public */,
      22,    3,  198,    2, 0x0a /* Public */,
      23,    3,  205,    2, 0x0a /* Public */,
      24,    0,  212,    2, 0x0a /* Public */,
      25,    0,  213,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Bool,    2,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, 0x80000000 | 14,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, 0x80000000 | 14,    2,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    2,    2,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 10,    2,    2,
    0x80000000 | 10, 0x80000000 | 7, 0x80000000 | 7,    2,    2,
    0x80000000 | 10, 0x80000000 | 7, 0x80000000 | 10,    2,    2,
    0x80000000 | 10, 0x80000000 | 7, 0x80000000 | 10,    2,    2,
    0x80000000 | 7, 0x80000000 | 10, 0x80000000 | 10,    2,    2,
    0x80000000 | 10, 0x80000000 | 7, 0x80000000 | 7, 0x80000000 | 7,    2,    2,    2,
    0x80000000 | 10, 0x80000000 | 7, 0x80000000 | 7, 0x80000000 | 7,    2,    2,    2,
    0x80000000 | 10, 0x80000000 | 7, 0x80000000 | 7, 0x80000000 | 7,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Repository::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Repository *_t = static_cast<Repository *>(_o);
        switch (_id) {
        case 0: _t->answer_question((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->give_equation((*reinterpret_cast< double*(*)>(_a[1]))); break;
        case 2: _t->give_point((*reinterpret_cast< Point*(*)>(_a[1]))); break;
        case 3: _t->send_point_to_painter((*reinterpret_cast< Point*(*)>(_a[1]))); break;
        case 4: _t->send_line_to_painter((*reinterpret_cast< Line*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->current_point_changed(); break;
        case 6: _t->current_line_changed(); break;
        case 7: _t->add_line((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< std::string(*)>(_a[4]))); break;
        case 8: _t->add_line((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 9: _t->add_point((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< std::string(*)>(_a[3]))); break;
        case 10: _t->add_point((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 11: _t->is_point_on_line((*reinterpret_cast< Point*(*)>(_a[1])),(*reinterpret_cast< Line*(*)>(_a[2]))); break;
        case 12: { Line* _r = _t->generate_equation((*reinterpret_cast< Point*(*)>(_a[1])),(*reinterpret_cast< Point*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Line**>(_a[0]) = _r; }  break;
        case 13: { Line* _r = _t->find_parallel_line((*reinterpret_cast< Point*(*)>(_a[1])),(*reinterpret_cast< Line*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Line**>(_a[0]) = _r; }  break;
        case 14: { Line* _r = _t->find_perpendicular_line((*reinterpret_cast< Point*(*)>(_a[1])),(*reinterpret_cast< Line*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Line**>(_a[0]) = _r; }  break;
        case 15: { Point* _r = _t->find_intersection((*reinterpret_cast< Line*(*)>(_a[1])),(*reinterpret_cast< Line*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Point**>(_a[0]) = _r; }  break;
        case 16: { Line* _r = _t->calc_height((*reinterpret_cast< Point*(*)>(_a[1])),(*reinterpret_cast< Point*(*)>(_a[2])),(*reinterpret_cast< Point*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< Line**>(_a[0]) = _r; }  break;
        case 17: { Line* _r = _t->calc_bisector((*reinterpret_cast< Point*(*)>(_a[1])),(*reinterpret_cast< Point*(*)>(_a[2])),(*reinterpret_cast< Point*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< Line**>(_a[0]) = _r; }  break;
        case 18: { Line* _r = _t->calc_median((*reinterpret_cast< Point*(*)>(_a[1])),(*reinterpret_cast< Point*(*)>(_a[2])),(*reinterpret_cast< Point*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< Line**>(_a[0]) = _r; }  break;
        case 19: _t->update_point_info(); break;
        case 20: _t->update_line_info(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Repository::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Repository::answer_question)) {
                *result = 0;
            }
        }
        {
            typedef void (Repository::*_t)(double * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Repository::give_equation)) {
                *result = 1;
            }
        }
        {
            typedef void (Repository::*_t)(Point * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Repository::give_point)) {
                *result = 2;
            }
        }
        {
            typedef void (Repository::*_t)(Point * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Repository::send_point_to_painter)) {
                *result = 3;
            }
        }
        {
            typedef void (Repository::*_t)(Line * , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Repository::send_line_to_painter)) {
                *result = 4;
            }
        }
        {
            typedef void (Repository::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Repository::current_point_changed)) {
                *result = 5;
            }
        }
        {
            typedef void (Repository::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Repository::current_line_changed)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject Repository::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Repository.data,
      qt_meta_data_Repository,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Repository::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Repository::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Repository.stringdata))
        return static_cast<void*>(const_cast< Repository*>(this));
    return QObject::qt_metacast(_clname);
}

int Repository::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void Repository::answer_question(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Repository::give_equation(double * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Repository::give_point(Point * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Repository::send_point_to_painter(Point * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Repository::send_line_to_painter(Line * _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Repository::current_point_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void Repository::current_line_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
