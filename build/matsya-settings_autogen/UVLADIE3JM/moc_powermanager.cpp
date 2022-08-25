/****************************************************************************
** Meta object code from reading C++ file 'powermanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/powermanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'powermanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PowerManager_t {
    QByteArrayData data[12];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PowerManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PowerManager_t qt_meta_stringdata_PowerManager = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PowerManager"
QT_MOC_LITERAL(1, 13, 11), // "modeChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 15), // "idleTimeChanged"
QT_MOC_LITERAL(4, 42, 20), // "hibernateTimeChanged"
QT_MOC_LITERAL(5, 63, 28), // "sleepWhenClosedScreenChanged"
QT_MOC_LITERAL(6, 92, 27), // "lockWhenClosedScreenChanged"
QT_MOC_LITERAL(7, 120, 4), // "mode"
QT_MOC_LITERAL(8, 125, 8), // "idleTime"
QT_MOC_LITERAL(9, 134, 13), // "hibernateTime"
QT_MOC_LITERAL(10, 148, 21), // "sleepWhenClosedScreen"
QT_MOC_LITERAL(11, 170, 20) // "lockWhenClosedScreen"

    },
    "PowerManager\0modeChanged\0\0idleTimeChanged\0"
    "hibernateTimeChanged\0sleepWhenClosedScreenChanged\0"
    "lockWhenClosedScreenChanged\0mode\0"
    "idleTime\0hibernateTime\0sleepWhenClosedScreen\0"
    "lockWhenClosedScreen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PowerManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Int, 0x00495103,
       8, QMetaType::Int, 0x00495103,
       9, QMetaType::Int, 0x00495103,
      10, QMetaType::Bool, 0x00495103,
      11, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void PowerManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PowerManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->modeChanged(); break;
        case 1: _t->idleTimeChanged(); break;
        case 2: _t->hibernateTimeChanged(); break;
        case 3: _t->sleepWhenClosedScreenChanged(); break;
        case 4: _t->lockWhenClosedScreenChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PowerManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PowerManager::modeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PowerManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PowerManager::idleTimeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PowerManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PowerManager::hibernateTimeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PowerManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PowerManager::sleepWhenClosedScreenChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PowerManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PowerManager::lockWhenClosedScreenChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PowerManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->mode(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->idleTime(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->hibernateTime(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->sleepWhenClosedScreen(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->lockWhenClosedScreen(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PowerManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMode(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setIdleTime(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setHibernateTime(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setSleepWhenClosedScreen(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setLockWhenClosedScreen(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PowerManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PowerManager.data,
    qt_meta_data_PowerManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PowerManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PowerManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PowerManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PowerManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
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
void PowerManager::modeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PowerManager::idleTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PowerManager::hibernateTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PowerManager::sleepWhenClosedScreenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PowerManager::lockWhenClosedScreenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
