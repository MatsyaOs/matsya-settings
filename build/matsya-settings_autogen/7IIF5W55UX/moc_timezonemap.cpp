/****************************************************************************
** Meta object code from reading C++ file 'timezonemap.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/datetime/timezonemap.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'timezonemap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TimeZoneMap_t {
    QByteArrayData data[15];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TimeZoneMap_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TimeZoneMap_t qt_meta_stringdata_TimeZoneMap = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TimeZoneMap"
QT_MOC_LITERAL(1, 12, 20), // "availableListChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 22), // "currentTimeZoneChanged"
QT_MOC_LITERAL(4, 57, 7), // "clicked"
QT_MOC_LITERAL(5, 65, 1), // "x"
QT_MOC_LITERAL(6, 67, 1), // "y"
QT_MOC_LITERAL(7, 69, 5), // "width"
QT_MOC_LITERAL(8, 75, 6), // "height"
QT_MOC_LITERAL(9, 82, 11), // "setTimeZone"
QT_MOC_LITERAL(10, 94, 5), // "value"
QT_MOC_LITERAL(11, 100, 18), // "localeTimeZoneName"
QT_MOC_LITERAL(12, 119, 8), // "timeZone"
QT_MOC_LITERAL(13, 128, 13), // "availableList"
QT_MOC_LITERAL(14, 142, 15) // "currentTimeZone"

    },
    "TimeZoneMap\0availableListChanged\0\0"
    "currentTimeZoneChanged\0clicked\0x\0y\0"
    "width\0height\0setTimeZone\0value\0"
    "localeTimeZoneName\0timeZone\0availableList\0"
    "currentTimeZone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TimeZoneMap[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    4,   41,    2, 0x02 /* Public */,
       9,    1,   50,    2, 0x02 /* Public */,
      11,    1,   53,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::QString, QMetaType::QString,   12,

 // properties: name, type, flags
      13, QMetaType::QStringList, 0x00495001,
      14, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void TimeZoneMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TimeZoneMap *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->availableListChanged(); break;
        case 1: _t->currentTimeZoneChanged(); break;
        case 2: _t->clicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 3: _t->setTimeZone((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: { QString _r = _t->localeTimeZoneName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TimeZoneMap::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimeZoneMap::availableListChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TimeZoneMap::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimeZoneMap::currentTimeZoneChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TimeZoneMap *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->availableList(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->currentTimeZone(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject TimeZoneMap::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TimeZoneMap.data,
    qt_meta_data_TimeZoneMap,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TimeZoneMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TimeZoneMap::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TimeZoneMap.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TimeZoneMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TimeZoneMap::availableListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TimeZoneMap::currentTimeZoneChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
