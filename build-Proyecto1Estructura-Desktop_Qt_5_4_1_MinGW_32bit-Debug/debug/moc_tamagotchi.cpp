/****************************************************************************
** Meta object code from reading C++ file 'tamagotchi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Proyecto1Estructura/tamagotchi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tamagotchi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Tamagotchi_t {
    QByteArrayData data[6];
    char stringdata[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tamagotchi_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tamagotchi_t qt_meta_stringdata_Tamagotchi = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Tamagotchi"
QT_MOC_LITERAL(1, 11, 17), // "on_ComerB_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 18), // "on_DormirB_clicked"
QT_MOC_LITERAL(4, 49, 19), // "on_HigieneB_clicked"
QT_MOC_LITERAL(5, 69, 17) // "on_SaludB_clicked"

    },
    "Tamagotchi\0on_ComerB_clicked\0\0"
    "on_DormirB_clicked\0on_HigieneB_clicked\0"
    "on_SaludB_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tamagotchi[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Tamagotchi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Tamagotchi *_t = static_cast<Tamagotchi *>(_o);
        switch (_id) {
        case 0: _t->on_ComerB_clicked(); break;
        case 1: _t->on_DormirB_clicked(); break;
        case 2: _t->on_HigieneB_clicked(); break;
        case 3: _t->on_SaludB_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Tamagotchi::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Tamagotchi.data,
      qt_meta_data_Tamagotchi,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Tamagotchi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tamagotchi::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Tamagotchi.stringdata))
        return static_cast<void*>(const_cast< Tamagotchi*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Tamagotchi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
