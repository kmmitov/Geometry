/****************************************************************************
** Meta object code from reading C++ file 'intersectiondialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Geometry/intersectiondialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'intersectiondialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_IntersectionDialog_t {
    QByteArrayData data[10];
    char stringdata[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IntersectionDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IntersectionDialog_t qt_meta_stringdata_IntersectionDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "IntersectionDialog"
QT_MOC_LITERAL(1, 19, 9), // "send_info"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "Line*"
QT_MOC_LITERAL(4, 36, 13), // "process_input"
QT_MOC_LITERAL(5, 50, 23), // "enable_line_1_selection"
QT_MOC_LITERAL(6, 74, 23), // "enable_line_2_selection"
QT_MOC_LITERAL(7, 98, 8), // "new_line"
QT_MOC_LITERAL(8, 107, 11), // "select_line"
QT_MOC_LITERAL(9, 119, 5) // "index"

    },
    "IntersectionDialog\0send_info\0\0Line*\0"
    "process_input\0enable_line_1_selection\0"
    "enable_line_2_selection\0new_line\0"
    "select_line\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IntersectionDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   49,    2, 0x0a /* Public */,
       5,    1,   50,    2, 0x0a /* Public */,
       6,    1,   53,    2, 0x0a /* Public */,
       7,    0,   56,    2, 0x0a /* Public */,
       8,    1,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void IntersectionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IntersectionDialog *_t = static_cast<IntersectionDialog *>(_o);
        switch (_id) {
        case 0: _t->send_info((*reinterpret_cast< Line*(*)>(_a[1])),(*reinterpret_cast< Line*(*)>(_a[2]))); break;
        case 1: _t->process_input(); break;
        case 2: _t->enable_line_1_selection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->enable_line_2_selection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->new_line(); break;
        case 5: _t->select_line((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (IntersectionDialog::*_t)(Line * , Line * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IntersectionDialog::send_info)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject IntersectionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_IntersectionDialog.data,
      qt_meta_data_IntersectionDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *IntersectionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IntersectionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_IntersectionDialog.stringdata))
        return static_cast<void*>(const_cast< IntersectionDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int IntersectionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void IntersectionDialog::send_info(Line * _t1, Line * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
