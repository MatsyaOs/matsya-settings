/****************************************************************************
** Meta object code from reading C++ file 'cscreenoutput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/cscreenoutput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cscreenoutput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CScreenOutput_t {
    QByteArrayData data[18];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CScreenOutput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CScreenOutput_t qt_meta_stringdata_CScreenOutput = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CScreenOutput"
QT_MOC_LITERAL(1, 14, 13), // "outputChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 15), // "rotationChanged"
QT_MOC_LITERAL(4, 45, 14), // "primaryChanged"
QT_MOC_LITERAL(5, 60, 14), // "enabledChanged"
QT_MOC_LITERAL(6, 75, 16), // "connectedChanged"
QT_MOC_LITERAL(7, 92, 2), // "id"
QT_MOC_LITERAL(8, 95, 4), // "name"
QT_MOC_LITERAL(9, 100, 8), // "rotation"
QT_MOC_LITERAL(10, 109, 8), // "Rotation"
QT_MOC_LITERAL(11, 118, 9), // "connected"
QT_MOC_LITERAL(12, 128, 7), // "primary"
QT_MOC_LITERAL(13, 136, 7), // "enabled"
QT_MOC_LITERAL(14, 144, 4), // "None"
QT_MOC_LITERAL(15, 149, 4), // "Left"
QT_MOC_LITERAL(16, 154, 8), // "Inverted"
QT_MOC_LITERAL(17, 163, 5) // "Right"

    },
    "CScreenOutput\0outputChanged\0\0"
    "rotationChanged\0primaryChanged\0"
    "enabledChanged\0connectedChanged\0id\0"
    "name\0rotation\0Rotation\0connected\0"
    "primary\0enabled\0None\0Left\0Inverted\0"
    "Right"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CScreenOutput[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       6,   44, // properties
       1,   68, // enums/sets
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
       7, QMetaType::Int, 0x00095401,
       8, QMetaType::QString, 0x00495103,
       9, 0x80000000 | 10, 0x0049510b,
      11, QMetaType::Bool, 0x00495103,
      12, QMetaType::Bool, 0x00495103,
      13, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       1,
       4,
       2,
       3,

 // enums: name, alias, flags, count, data
      10,   10, 0x0,    4,   73,

 // enum data: key, value
      14, uint(CScreenOutput::None),
      15, uint(CScreenOutput::Left),
      16, uint(CScreenOutput::Inverted),
      17, uint(CScreenOutput::Right),

       0        // eod
};

void CScreenOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CScreenOutput *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->outputChanged(); break;
        case 1: _t->rotationChanged(); break;
        case 2: _t->primaryChanged(); break;
        case 3: _t->enabledChanged(); break;
        case 4: _t->connectedChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CScreenOutput::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CScreenOutput::outputChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CScreenOutput::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CScreenOutput::rotationChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CScreenOutput::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CScreenOutput::primaryChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CScreenOutput::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CScreenOutput::enabledChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CScreenOutput::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CScreenOutput::connectedChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CScreenOutput *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 2: *reinterpret_cast< Rotation*>(_v) = _t->rotation(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->connected(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->primary(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->enabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<CScreenOutput *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setRotation(*reinterpret_cast< Rotation*>(_v)); break;
        case 3: _t->setConnected(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setPrimary(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CScreenOutput::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CScreenOutput.data,
    qt_meta_data_CScreenOutput,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CScreenOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CScreenOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CScreenOutput.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CScreenOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CScreenOutput::outputChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CScreenOutput::rotationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CScreenOutput::primaryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void CScreenOutput::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void CScreenOutput::connectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
