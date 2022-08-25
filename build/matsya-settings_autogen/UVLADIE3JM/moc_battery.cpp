/****************************************************************************
** Meta object code from reading C++ file 'battery.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/battery.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'battery.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Battery_t {
    QByteArrayData data[31];
    char stringdata0[400];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Battery_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Battery_t qt_meta_stringdata_Battery = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Battery"
QT_MOC_LITERAL(1, 8, 12), // "validChanged"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 18), // "chargeStateChanged"
QT_MOC_LITERAL(4, 41, 20), // "chargePercentChanged"
QT_MOC_LITERAL(5, 62, 15), // "capacityChanged"
QT_MOC_LITERAL(6, 78, 20), // "remainingTimeChanged"
QT_MOC_LITERAL(7, 99, 4), // "time"
QT_MOC_LITERAL(8, 104, 16), // "onBatteryChanged"
QT_MOC_LITERAL(9, 121, 25), // "lastChargedPercentChanged"
QT_MOC_LITERAL(10, 147, 10), // "udiChanged"
QT_MOC_LITERAL(11, 158, 19), // "onPropertiesChanged"
QT_MOC_LITERAL(12, 178, 9), // "ifaceName"
QT_MOC_LITERAL(13, 188, 12), // "changedProps"
QT_MOC_LITERAL(14, 201, 16), // "invalidatedProps"
QT_MOC_LITERAL(15, 218, 7), // "refresh"
QT_MOC_LITERAL(16, 226, 10), // "getHistory"
QT_MOC_LITERAL(17, 237, 8), // "timespan"
QT_MOC_LITERAL(18, 246, 10), // "resolution"
QT_MOC_LITERAL(19, 257, 17), // "setPercentEnabled"
QT_MOC_LITERAL(20, 275, 5), // "value"
QT_MOC_LITERAL(21, 281, 9), // "available"
QT_MOC_LITERAL(22, 291, 11), // "chargeState"
QT_MOC_LITERAL(23, 303, 13), // "chargePercent"
QT_MOC_LITERAL(24, 317, 18), // "lastChargedPercent"
QT_MOC_LITERAL(25, 336, 15), // "lastChargedTime"
QT_MOC_LITERAL(26, 352, 8), // "capacity"
QT_MOC_LITERAL(27, 361, 12), // "statusString"
QT_MOC_LITERAL(28, 374, 9), // "onBattery"
QT_MOC_LITERAL(29, 384, 3), // "udi"
QT_MOC_LITERAL(30, 388, 11) // "showPercent"

    },
    "Battery\0validChanged\0\0chargeStateChanged\0"
    "chargePercentChanged\0capacityChanged\0"
    "remainingTimeChanged\0time\0onBatteryChanged\0"
    "lastChargedPercentChanged\0udiChanged\0"
    "onPropertiesChanged\0ifaceName\0"
    "changedProps\0invalidatedProps\0refresh\0"
    "getHistory\0timespan\0resolution\0"
    "setPercentEnabled\0value\0available\0"
    "chargeState\0chargePercent\0lastChargedPercent\0"
    "lastChargedTime\0capacity\0statusString\0"
    "onBattery\0udi\0showPercent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Battery[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
      10,  106, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    1,   75,    2, 0x06 /* Public */,
       4,    1,   78,    2, 0x06 /* Public */,
       5,    1,   81,    2, 0x06 /* Public */,
       6,    1,   84,    2, 0x06 /* Public */,
       8,    0,   87,    2, 0x06 /* Public */,
       9,    0,   88,    2, 0x06 /* Public */,
      10,    0,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    3,   90,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      15,    0,   97,    2, 0x02 /* Public */,
      16,    2,   98,    2, 0x02 /* Public */,
      19,    1,  103,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::LongLong,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap, QMetaType::QStringList,   12,   13,   14,

 // methods: parameters
    QMetaType::Void,
    QMetaType::QVariantList, QMetaType::Int, QMetaType::Int,   17,   18,
    QMetaType::Void, QMetaType::Bool,   20,

 // properties: name, type, flags
      21, QMetaType::Bool, 0x00495001,
      22, QMetaType::Int, 0x00495001,
      23, QMetaType::Int, 0x00495001,
      24, QMetaType::Int, 0x00495001,
      25, QMetaType::QString, 0x00495001,
      26, QMetaType::Int, 0x00495001,
      27, QMetaType::QString, 0x00495001,
      28, QMetaType::Bool, 0x00495001,
      29, QMetaType::QString, 0x00495001,
      30, QMetaType::Bool, 0x00095401,

 // properties: notify_signal_id
       0,
       1,
       2,
       6,
       6,
       3,
       4,
       5,
       7,
       0,

       0        // eod
};

void Battery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Battery *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->validChanged(); break;
        case 1: _t->chargeStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->chargePercentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->capacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->remainingTimeChanged((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 5: _t->onBatteryChanged(); break;
        case 6: _t->lastChargedPercentChanged(); break;
        case 7: _t->udiChanged(); break;
        case 8: _t->onPropertiesChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 9: _t->refresh(); break;
        case 10: { QVariantList _r = _t->getHistory((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->setPercentEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Battery::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::validChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Battery::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::chargeStateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Battery::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::chargePercentChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Battery::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::capacityChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Battery::*)(qlonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::remainingTimeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Battery::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::onBatteryChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Battery::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::lastChargedPercentChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Battery::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::udiChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Battery *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->available(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->chargeState(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->chargePercent(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->lastChargedPercent(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->lastChargedTime(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->capacity(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->statusString(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->onBattery(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->udi(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->showPercent(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Battery::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Battery.data,
    qt_meta_data_Battery,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Battery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Battery::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Battery.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Battery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Battery::validChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Battery::chargeStateChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Battery::chargePercentChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Battery::capacityChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Battery::remainingTimeChanged(qlonglong _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Battery::onBatteryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Battery::lastChargedPercentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Battery::udiChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
