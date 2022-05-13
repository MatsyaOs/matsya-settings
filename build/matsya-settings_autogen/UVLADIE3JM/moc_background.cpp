/****************************************************************************
** Meta object code from reading C++ file 'background.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/background.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'background.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Background_t {
    QByteArrayData data[12];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Background_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Background_t qt_meta_stringdata_Background = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Background"
QT_MOC_LITERAL(1, 11, 17), // "backgroundChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 22), // "backgroundColorChanged"
QT_MOC_LITERAL(4, 53, 21), // "backgroundTypeChanged"
QT_MOC_LITERAL(5, 75, 4), // "stub"
QT_MOC_LITERAL(6, 80, 13), // "setBackground"
QT_MOC_LITERAL(7, 94, 17), // "newBackgroundPath"
QT_MOC_LITERAL(8, 112, 21), // "currentBackgroundPath"
QT_MOC_LITERAL(9, 134, 11), // "backgrounds"
QT_MOC_LITERAL(10, 146, 14), // "backgroundType"
QT_MOC_LITERAL(11, 161, 15) // "backgroundColor"

    },
    "Background\0backgroundChanged\0\0"
    "backgroundColorChanged\0backgroundTypeChanged\0"
    "stub\0setBackground\0newBackgroundPath\0"
    "currentBackgroundPath\0backgrounds\0"
    "backgroundType\0backgroundColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Background[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   46, // properties
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
       6,    1,   43,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    7,

 // properties: name, type, flags
       8, QMetaType::QString, 0x00495003,
       9, QMetaType::QVariantList, 0x00495001,
      10, QMetaType::Int, 0x00495103,
      11, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       3,
       2,
       1,

       0        // eod
};

void Background::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Background *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backgroundChanged(); break;
        case 1: _t->backgroundColorChanged(); break;
        case 2: _t->backgroundTypeChanged(); break;
        case 3: _t->stub(); break;
        case 4: _t->setBackground((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Background::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Background::backgroundChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Background::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Background::backgroundColorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Background::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Background::backgroundTypeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Background::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Background::stub)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Background *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->currentBackgroundPath(); break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = _t->backgrounds(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->backgroundType(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->backgroundColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Background *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackground(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setBackgroundType(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setBackgroundColor(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Background::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Background.data,
    qt_meta_data_Background,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Background::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Background::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Background.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Background::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Background::backgroundChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Background::backgroundColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Background::backgroundTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Background::stub()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
