/****************************************************************************
** Meta object code from reading C++ file 'about.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/about.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'about.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_About_t {
    QByteArrayData data[14];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_About_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_About_t qt_meta_stringdata_About = {
    {
QT_MOC_LITERAL(0, 0, 5), // "About"
QT_MOC_LITERAL(1, 6, 11), // "openUpdator"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 12), // "isCutefishOS"
QT_MOC_LITERAL(4, 32, 7), // "version"
QT_MOC_LITERAL(5, 40, 6), // "osName"
QT_MOC_LITERAL(6, 47, 12), // "architecture"
QT_MOC_LITERAL(7, 60, 13), // "kernelVersion"
QT_MOC_LITERAL(8, 74, 8), // "hostname"
QT_MOC_LITERAL(9, 83, 8), // "userName"
QT_MOC_LITERAL(10, 92, 10), // "memorySize"
QT_MOC_LITERAL(11, 103, 17), // "prettyProductName"
QT_MOC_LITERAL(12, 121, 15), // "internalStorage"
QT_MOC_LITERAL(13, 137, 7) // "cpuInfo"

    },
    "About\0openUpdator\0\0isCutefishOS\0version\0"
    "osName\0architecture\0kernelVersion\0"
    "hostname\0userName\0memorySize\0"
    "prettyProductName\0internalStorage\0"
    "cpuInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_About[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      11,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00095401,
       4, QMetaType::QString, 0x00095401,
       5, QMetaType::QString, 0x00095401,
       6, QMetaType::QString, 0x00095401,
       7, QMetaType::QString, 0x00095401,
       8, QMetaType::QString, 0x00095401,
       9, QMetaType::QString, 0x00095401,
      10, QMetaType::QString, 0x00095401,
      11, QMetaType::QString, 0x00095401,
      12, QMetaType::QString, 0x00095401,
      13, QMetaType::QString, 0x00095401,

       0        // eod
};

void About::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<About *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openUpdator(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<About *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isCutefishOS(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->version(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->osName(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->architecture(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->kernelVersion(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->hostname(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->userName(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->memorySize(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->prettyProductName(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->internalStorage(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->cpuInfo(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject About::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_About.data,
    qt_meta_data_About,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *About::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *About::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_About.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int About::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
