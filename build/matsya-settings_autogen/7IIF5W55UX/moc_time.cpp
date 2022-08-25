/****************************************************************************
** Meta object code from reading C++ file 'time.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/datetime/time.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'time.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Time_t {
    QByteArrayData data[11];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Time_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Time_t qt_meta_stringdata_Time = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Time"
QT_MOC_LITERAL(1, 5, 13), // "useNtpChanged"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 18), // "currentTimeChanged"
QT_MOC_LITERAL(4, 39, 18), // "currentDateChanged"
QT_MOC_LITERAL(5, 58, 17), // "twentyFourChanged"
QT_MOC_LITERAL(6, 76, 4), // "save"
QT_MOC_LITERAL(7, 81, 6), // "useNtp"
QT_MOC_LITERAL(8, 88, 11), // "currentTime"
QT_MOC_LITERAL(9, 100, 11), // "currentDate"
QT_MOC_LITERAL(10, 112, 10) // "twentyFour"

    },
    "Time\0useNtpChanged\0\0currentTimeChanged\0"
    "currentDateChanged\0twentyFourChanged\0"
    "save\0useNtp\0currentTime\0currentDate\0"
    "twentyFour"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Time[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    0,   43,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00495103,
       8, QMetaType::QTime, 0x00495103,
       9, QMetaType::QDate, 0x00495103,
      10, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void Time::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Time *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->useNtpChanged(); break;
        case 1: _t->currentTimeChanged(); break;
        case 2: _t->currentDateChanged(); break;
        case 3: _t->twentyFourChanged(); break;
        case 4: _t->save(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Time::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Time::useNtpChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Time::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Time::currentTimeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Time::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Time::currentDateChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Time::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Time::twentyFourChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Time *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->useNtp(); break;
        case 1: *reinterpret_cast< QTime*>(_v) = _t->currentTime(); break;
        case 2: *reinterpret_cast< QDate*>(_v) = _t->currentDate(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->twentyFour(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Time *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUseNtp(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setCurrentTime(*reinterpret_cast< QTime*>(_v)); break;
        case 2: _t->setCurrentDate(*reinterpret_cast< QDate*>(_v)); break;
        case 3: _t->setTwentyFour(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Time::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Time.data,
    qt_meta_data_Time,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Time::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Time::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Time.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Time::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Time::useNtpChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Time::currentTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Time::currentDateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Time::twentyFourChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
