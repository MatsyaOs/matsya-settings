/****************************************************************************
** Meta object code from reading C++ file 'touchpad.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/touchpad.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'touchpad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Touchpad_t {
    QByteArrayData data[11];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Touchpad_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Touchpad_t qt_meta_stringdata_Touchpad = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Touchpad"
QT_MOC_LITERAL(1, 9, 14), // "enabledChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 17), // "tapToClickChanged"
QT_MOC_LITERAL(4, 43, 26), // "pointerAccelerationChanged"
QT_MOC_LITERAL(5, 70, 20), // "naturalScrollChanged"
QT_MOC_LITERAL(6, 91, 9), // "available"
QT_MOC_LITERAL(7, 101, 7), // "enabled"
QT_MOC_LITERAL(8, 109, 10), // "tapToClick"
QT_MOC_LITERAL(9, 120, 13), // "naturalScroll"
QT_MOC_LITERAL(10, 134, 19) // "pointerAcceleration"

    },
    "Touchpad\0enabledChanged\0\0tapToClickChanged\0"
    "pointerAccelerationChanged\0"
    "naturalScrollChanged\0available\0enabled\0"
    "tapToClick\0naturalScroll\0pointerAcceleration"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Touchpad[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       5,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::Bool, 0x00095401,
       7, QMetaType::Bool, 0x00495103,
       8, QMetaType::Bool, 0x00495103,
       9, QMetaType::Bool, 0x00495103,
      10, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       1,
       3,
       2,

       0        // eod
};

void Touchpad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Touchpad *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->enabledChanged(); break;
        case 1: _t->tapToClickChanged(); break;
        case 2: _t->pointerAccelerationChanged(); break;
        case 3: _t->naturalScrollChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Touchpad::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Touchpad::enabledChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Touchpad::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Touchpad::tapToClickChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Touchpad::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Touchpad::pointerAccelerationChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Touchpad::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Touchpad::naturalScrollChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Touchpad *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->available(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->enabled(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->tapToClick(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->naturalScroll(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->pointerAcceleration(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Touchpad *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setTapToClick(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setNaturalScroll(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setPointerAcceleration(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Touchpad::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Touchpad.data,
    qt_meta_data_Touchpad,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Touchpad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Touchpad::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Touchpad.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Touchpad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Touchpad::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Touchpad::tapToClickChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Touchpad::pointerAccelerationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Touchpad::naturalScrollChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
