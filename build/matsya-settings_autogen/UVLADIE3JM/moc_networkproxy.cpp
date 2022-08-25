/****************************************************************************
** Meta object code from reading C++ file 'networkproxy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/networkproxy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networkproxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NetworkProxy_t {
    QByteArrayData data[22];
    char stringdata0[310];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetworkProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetworkProxy_t qt_meta_stringdata_NetworkProxy = {
    {
QT_MOC_LITERAL(0, 0, 12), // "NetworkProxy"
QT_MOC_LITERAL(1, 13, 11), // "flagChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 19), // "useSameProxyChanged"
QT_MOC_LITERAL(4, 46, 18), // "scriptProxyChanged"
QT_MOC_LITERAL(5, 65, 16), // "httpProxyChanged"
QT_MOC_LITERAL(6, 82, 15), // "ftpProxyChanged"
QT_MOC_LITERAL(7, 98, 17), // "socksProxyChanged"
QT_MOC_LITERAL(8, 116, 20), // "httpProxyPortChanged"
QT_MOC_LITERAL(9, 137, 19), // "ftpProxyPortChanged"
QT_MOC_LITERAL(10, 157, 21), // "socksProxyPortChanged"
QT_MOC_LITERAL(11, 179, 11), // "updateProxy"
QT_MOC_LITERAL(12, 191, 16), // "delayUpdateProxy"
QT_MOC_LITERAL(13, 208, 4), // "flag"
QT_MOC_LITERAL(14, 213, 12), // "useSameProxy"
QT_MOC_LITERAL(15, 226, 11), // "scriptProxy"
QT_MOC_LITERAL(16, 238, 9), // "httpProxy"
QT_MOC_LITERAL(17, 248, 8), // "ftpProxy"
QT_MOC_LITERAL(18, 257, 10), // "socksProxy"
QT_MOC_LITERAL(19, 268, 13), // "httpProxyPort"
QT_MOC_LITERAL(20, 282, 12), // "ftpProxyPort"
QT_MOC_LITERAL(21, 295, 14) // "socksProxyPort"

    },
    "NetworkProxy\0flagChanged\0\0useSameProxyChanged\0"
    "scriptProxyChanged\0httpProxyChanged\0"
    "ftpProxyChanged\0socksProxyChanged\0"
    "httpProxyPortChanged\0ftpProxyPortChanged\0"
    "socksProxyPortChanged\0updateProxy\0"
    "delayUpdateProxy\0flag\0useSameProxy\0"
    "scriptProxy\0httpProxy\0ftpProxy\0"
    "socksProxy\0httpProxyPort\0ftpProxyPort\0"
    "socksProxyPort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetworkProxy[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       9,   80, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,
       6,    0,   73,    2, 0x06 /* Public */,
       7,    0,   74,    2, 0x06 /* Public */,
       8,    0,   75,    2, 0x06 /* Public */,
       9,    0,   76,    2, 0x06 /* Public */,
      10,    0,   77,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      11,    0,   78,    2, 0x02 /* Public */,
      12,    0,   79,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      13, QMetaType::Int, 0x00495103,
      14, QMetaType::Bool, 0x00495103,
      15, QMetaType::QString, 0x00495103,
      16, QMetaType::QString, 0x00495103,
      17, QMetaType::QString, 0x00495103,
      18, QMetaType::QString, 0x00495103,
      19, QMetaType::QString, 0x00495103,
      20, QMetaType::QString, 0x00495103,
      21, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,

       0        // eod
};

void NetworkProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NetworkProxy *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->flagChanged(); break;
        case 1: _t->useSameProxyChanged(); break;
        case 2: _t->scriptProxyChanged(); break;
        case 3: _t->httpProxyChanged(); break;
        case 4: _t->ftpProxyChanged(); break;
        case 5: _t->socksProxyChanged(); break;
        case 6: _t->httpProxyPortChanged(); break;
        case 7: _t->ftpProxyPortChanged(); break;
        case 8: _t->socksProxyPortChanged(); break;
        case 9: _t->updateProxy(); break;
        case 10: _t->delayUpdateProxy(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NetworkProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkProxy::flagChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NetworkProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkProxy::useSameProxyChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NetworkProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkProxy::scriptProxyChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (NetworkProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkProxy::httpProxyChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (NetworkProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkProxy::ftpProxyChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (NetworkProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkProxy::socksProxyChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (NetworkProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkProxy::httpProxyPortChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (NetworkProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkProxy::ftpProxyPortChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (NetworkProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkProxy::socksProxyPortChanged)) {
                *result = 8;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<NetworkProxy *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->flag(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->useSameProxy(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->scriptProxy(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->httpProxy(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->ftpProxy(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->socksProxy(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->httpProxyPort(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->ftpProxyPort(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->socksProxyPort(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<NetworkProxy *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFlag(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setUseSameProxy(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setScriptProxy(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setHttpProxy(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setFtpProxy(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setSocksProxy(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setHttpProxyPort(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setFtpProxyPort(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setSocksProxyPort(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject NetworkProxy::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_NetworkProxy.data,
    qt_meta_data_NetworkProxy,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NetworkProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkProxy.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NetworkProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void NetworkProxy::flagChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void NetworkProxy::useSameProxyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void NetworkProxy::scriptProxyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void NetworkProxy::httpProxyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void NetworkProxy::ftpProxyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void NetworkProxy::socksProxyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void NetworkProxy::httpProxyPortChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void NetworkProxy::ftpProxyPortChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void NetworkProxy::socksProxyPortChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
