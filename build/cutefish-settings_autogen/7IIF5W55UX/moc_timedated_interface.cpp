/****************************************************************************
** Meta object code from reading C++ file 'timedated_interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/datetime/timedated_interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'timedated_interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OrgFreedesktopTimedate1Interface_t {
    QByteArrayData data[17];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OrgFreedesktopTimedate1Interface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OrgFreedesktopTimedate1Interface_t qt_meta_stringdata_OrgFreedesktopTimedate1Interface = {
    {
QT_MOC_LITERAL(0, 0, 32), // "OrgFreedesktopTimedate1Interface"
QT_MOC_LITERAL(1, 33, 11), // "SetLocalRTC"
QT_MOC_LITERAL(2, 45, 19), // "QDBusPendingReply<>"
QT_MOC_LITERAL(3, 65, 0), // ""
QT_MOC_LITERAL(4, 66, 3), // "in0"
QT_MOC_LITERAL(5, 70, 3), // "in1"
QT_MOC_LITERAL(6, 74, 3), // "in2"
QT_MOC_LITERAL(7, 78, 6), // "SetNTP"
QT_MOC_LITERAL(8, 85, 7), // "SetTime"
QT_MOC_LITERAL(9, 93, 11), // "SetTimezone"
QT_MOC_LITERAL(10, 105, 6), // "CanNTP"
QT_MOC_LITERAL(11, 112, 8), // "LocalRTC"
QT_MOC_LITERAL(12, 121, 3), // "NTP"
QT_MOC_LITERAL(13, 125, 15), // "NTPSynchronized"
QT_MOC_LITERAL(14, 141, 11), // "RTCTimeUSec"
QT_MOC_LITERAL(15, 153, 8), // "TimeUSec"
QT_MOC_LITERAL(16, 162, 8) // "Timezone"

    },
    "OrgFreedesktopTimedate1Interface\0"
    "SetLocalRTC\0QDBusPendingReply<>\0\0in0\0"
    "in1\0in2\0SetNTP\0SetTime\0SetTimezone\0"
    "CanNTP\0LocalRTC\0NTP\0NTPSynchronized\0"
    "RTCTimeUSec\0TimeUSec\0Timezone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OrgFreedesktopTimedate1Interface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       7,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   34,    3, 0x0a /* Public */,
       7,    2,   41,    3, 0x0a /* Public */,
       8,    3,   46,    3, 0x0a /* Public */,
       9,    2,   53,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,    4,    5,    6,
    0x80000000 | 2, QMetaType::Bool, QMetaType::Bool,    4,    5,
    0x80000000 | 2, QMetaType::LongLong, QMetaType::Bool, QMetaType::Bool,    4,    5,    6,
    0x80000000 | 2, QMetaType::QString, QMetaType::Bool,    4,    5,

 // properties: name, type, flags
      10, QMetaType::Bool, 0x00095001,
      11, QMetaType::Bool, 0x00095001,
      12, QMetaType::Bool, 0x00095001,
      13, QMetaType::Bool, 0x00095001,
      14, QMetaType::ULongLong, 0x00095001,
      15, QMetaType::ULongLong, 0x00095001,
      16, QMetaType::QString, 0x00095001,

       0        // eod
};

void OrgFreedesktopTimedate1Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OrgFreedesktopTimedate1Interface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QDBusPendingReply<> _r = _t->SetLocalRTC((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 1: { QDBusPendingReply<> _r = _t->SetNTP((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 2: { QDBusPendingReply<> _r = _t->SetTime((*reinterpret_cast< qlonglong(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 3: { QDBusPendingReply<> _r = _t->SetTimezone((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<OrgFreedesktopTimedate1Interface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->canNTP(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->localRTC(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->nTP(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->nTPSynchronized(); break;
        case 4: *reinterpret_cast< qulonglong*>(_v) = _t->rTCTimeUSec(); break;
        case 5: *reinterpret_cast< qulonglong*>(_v) = _t->timeUSec(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->timezone(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject OrgFreedesktopTimedate1Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractInterface::staticMetaObject>(),
    qt_meta_stringdata_OrgFreedesktopTimedate1Interface.data,
    qt_meta_data_OrgFreedesktopTimedate1Interface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OrgFreedesktopTimedate1Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrgFreedesktopTimedate1Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OrgFreedesktopTimedate1Interface.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgFreedesktopTimedate1Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
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
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
