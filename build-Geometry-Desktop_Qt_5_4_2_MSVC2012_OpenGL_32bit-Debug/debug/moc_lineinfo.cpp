/****************************************************************************
** Meta object code from reading C++ file 'lineinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Geometry/lineinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lineinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LineInfo_t {
    QByteArrayData data[9];
    char stringdata[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LineInfo_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LineInfo_t qt_meta_stringdata_LineInfo = {
    {
QT_MOC_LITERAL(0, 0, 8), // "LineInfo"
QT_MOC_LITERAL(1, 9, 12), // "line_changed"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "update_a"
QT_MOC_LITERAL(4, 32, 8), // "update_b"
QT_MOC_LITERAL(5, 41, 8), // "update_c"
QT_MOC_LITERAL(6, 50, 11), // "update_name"
QT_MOC_LITERAL(7, 62, 6), // "update"
QT_MOC_LITERAL(8, 69, 5) // "index"

    },
    "LineInfo\0line_changed\0\0update_a\0"
    "update_b\0update_c\0update_name\0update\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LineInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       7,    1,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void LineInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LineInfo *_t = static_cast<LineInfo *>(_o);
        switch (_id) {
        case 0: _t->line_changed(); break;
        case 1: _t->update_a(); break;
        case 2: _t->update_b(); break;
        case 3: _t->update_c(); break;
        case 4: _t->update_name(); break;
        case 5: _t->update(); break;
        case 6: _t->update((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LineInfo::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LineInfo::line_changed)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject LineInfo::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LineInfo.data,
      qt_meta_data_LineInfo,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LineInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LineInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LineInfo.stringdata))
        return static_cast<void*>(const_cast< LineInfo*>(this));
    return QWidget::qt_metacast(_clname);
}

int LineInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void LineInfo::line_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
