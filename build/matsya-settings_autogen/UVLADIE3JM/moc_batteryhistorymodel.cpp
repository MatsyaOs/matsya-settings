/****************************************************************************
** Meta object code from reading C++ file 'batteryhistorymodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/batteryhistorymodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'batteryhistorymodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BatteryHistoryModel_t {
    QByteArrayData data[18];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BatteryHistoryModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BatteryHistoryModel_t qt_meta_stringdata_BatteryHistoryModel = {
    {
QT_MOC_LITERAL(0, 0, 19), // "BatteryHistoryModel"
QT_MOC_LITERAL(1, 20, 13), // "deviceChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 11), // "typeChanged"
QT_MOC_LITERAL(4, 47, 15), // "durationChanged"
QT_MOC_LITERAL(5, 63, 11), // "dataChanged"
QT_MOC_LITERAL(6, 75, 7), // "refresh"
QT_MOC_LITERAL(7, 83, 6), // "device"
QT_MOC_LITERAL(8, 90, 8), // "duration"
QT_MOC_LITERAL(9, 99, 4), // "type"
QT_MOC_LITERAL(10, 104, 11), // "HistoryType"
QT_MOC_LITERAL(11, 116, 6), // "points"
QT_MOC_LITERAL(12, 123, 5), // "count"
QT_MOC_LITERAL(13, 129, 18), // "firstDataPointTime"
QT_MOC_LITERAL(14, 148, 17), // "lastDataPointTime"
QT_MOC_LITERAL(15, 166, 12), // "largestValue"
QT_MOC_LITERAL(16, 179, 8), // "RateType"
QT_MOC_LITERAL(17, 188, 10) // "ChargeType"

    },
    "BatteryHistoryModel\0deviceChanged\0\0"
    "typeChanged\0durationChanged\0dataChanged\0"
    "refresh\0device\0duration\0type\0HistoryType\0"
    "points\0count\0firstDataPointTime\0"
    "lastDataPointTime\0largestValue\0RateType\0"
    "ChargeType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BatteryHistoryModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       8,   44, // properties
       1,   76, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00495103,
       8, QMetaType::UInt, 0x00495103,
       9, 0x80000000 | 10, 0x0049510b,
      11, QMetaType::QVariantList, 0x00495001,
      12, QMetaType::Int, 0x00495001,
      13, QMetaType::Int, 0x00495001,
      14, QMetaType::Int, 0x00495001,
      15, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       2,
       1,
       3,
       3,
       3,
       3,
       3,

 // enums: name, alias, flags, count, data
      10,   10, 0x0,    2,   81,

 // enum data: key, value
      16, uint(BatteryHistoryModel::RateType),
      17, uint(BatteryHistoryModel::ChargeType),

       0        // eod
};

void BatteryHistoryModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BatteryHistoryModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->deviceChanged(); break;
        case 1: _t->typeChanged(); break;
        case 2: _t->durationChanged(); break;
        case 3: _t->dataChanged(); break;
        case 4: _t->refresh(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BatteryHistoryModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BatteryHistoryModel::deviceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BatteryHistoryModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BatteryHistoryModel::typeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BatteryHistoryModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BatteryHistoryModel::durationChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BatteryHistoryModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BatteryHistoryModel::dataChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<BatteryHistoryModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_device; break;
        case 1: *reinterpret_cast< uint*>(_v) = _t->m_duration; break;
        case 2: *reinterpret_cast< HistoryType*>(_v) = _t->m_type; break;
        case 3: *reinterpret_cast< QVariantList*>(_v) = _t->asPoints(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->firstDataPointTime(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->lastDataPointTime(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->largestValue(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<BatteryHistoryModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDevice(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setDuration(*reinterpret_cast< uint*>(_v)); break;
        case 2: _t->setType(*reinterpret_cast< HistoryType*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject BatteryHistoryModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_BatteryHistoryModel.data,
    qt_meta_data_BatteryHistoryModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BatteryHistoryModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BatteryHistoryModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BatteryHistoryModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int BatteryHistoryModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void BatteryHistoryModel::deviceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BatteryHistoryModel::typeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void BatteryHistoryModel::durationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void BatteryHistoryModel::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
