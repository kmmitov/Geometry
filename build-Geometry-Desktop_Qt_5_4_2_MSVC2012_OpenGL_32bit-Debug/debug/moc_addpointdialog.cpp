/****************************************************************************
** Meta object code from reading C++ file 'addpointdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Geometry/addpointdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addpointdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddPointDialog_t {
    QByteArrayData data[10];
    char stringdata[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddPointDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddPointDialog_t qt_meta_stringdata_AddPointDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AddPointDialog"
QT_MOC_LITERAL(1, 15, 9), // "add_point"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 1), // "x"
QT_MOC_LITERAL(4, 28, 1), // "y"
QT_MOC_LITERAL(5, 30, 11), // "std::string"
QT_MOC_LITERAL(6, 42, 4), // "name"
QT_MOC_LITERAL(7, 47, 11), // "enable_name"
QT_MOC_LITERAL(8, 59, 5), // "state"
QT_MOC_LITERAL(9, 65, 13) // "process_input"

    },
    "AddPointDialog\0add_point\0\0x\0y\0std::string\0"
    "name\0enable_name\0state\0process_input"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddPointDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       1,    3,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   46,    2, 0x0a /* Public */,
       9,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, 0x80000000 | 5,    3,    4,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,

       0        // eod
};

void AddPointDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddPointDialog *_t = static_cast<AddPointDialog *>(_o);
        switch (_id) {
        case 0: _t->add_point((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->add_point((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< std::string(*)>(_a[3]))); break;
        case 2: _t->enable_name((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->process_input(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AddPointDialog::*_t)(double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddPointDialog::add_point)) {
                *result = 0;
            }
        }
        {
            typedef void (AddPointDialog::*_t)(double , double , std::string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddPointDialog::add_point)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject AddPointDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddPointDialog.data,
      qt_meta_data_AddPointDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AddPointDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddPointDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AddPointDialog.stringdata))
        return static_cast<void*>(const_cast< AddPointDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddPointDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void AddPointDialog::add_point(double _t1, double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AddPointDialog::add_point(double _t1, double _t2, std::string _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE