/****************************************************************************
** Meta object code from reading C++ file 'defaultapplications.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/defaultapplications.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'defaultapplications.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DefaultApplications_t {
    QByteArrayData data[16];
    char stringdata0[221];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DefaultApplications_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DefaultApplications_t qt_meta_stringdata_DefaultApplications = {
    {
QT_MOC_LITERAL(0, 0, 19), // "DefaultApplications"
QT_MOC_LITERAL(1, 20, 12), // "loadFinished"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "setDefaultBrowser"
QT_MOC_LITERAL(4, 52, 5), // "index"
QT_MOC_LITERAL(5, 58, 21), // "setDefaultFileManager"
QT_MOC_LITERAL(6, 80, 15), // "setDefaultEMail"
QT_MOC_LITERAL(7, 96, 18), // "setDefaultTerminal"
QT_MOC_LITERAL(8, 115, 11), // "browserList"
QT_MOC_LITERAL(9, 127, 15), // "fileManagerList"
QT_MOC_LITERAL(10, 143, 9), // "emailList"
QT_MOC_LITERAL(11, 153, 12), // "terminalList"
QT_MOC_LITERAL(12, 166, 12), // "browserIndex"
QT_MOC_LITERAL(13, 179, 16), // "fileManagerIndex"
QT_MOC_LITERAL(14, 196, 10), // "emailIndex"
QT_MOC_LITERAL(15, 207, 13) // "terminalIndex"

    },
    "DefaultApplications\0loadFinished\0\0"
    "setDefaultBrowser\0index\0setDefaultFileManager\0"
    "setDefaultEMail\0setDefaultTerminal\0"
    "browserList\0fileManagerList\0emailList\0"
    "terminalList\0browserIndex\0fileManagerIndex\0"
    "emailIndex\0terminalIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DefaultApplications[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       8,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   40,    2, 0x02 /* Public */,
       5,    1,   43,    2, 0x02 /* Public */,
       6,    1,   46,    2, 0x02 /* Public */,
       7,    1,   49,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,

 // properties: name, type, flags
       8, QMetaType::QVariantList, 0x00495001,
       9, QMetaType::QVariantList, 0x00495001,
      10, QMetaType::QVariantList, 0x00495001,
      11, QMetaType::QVariantList, 0x00495001,
      12, QMetaType::Int, 0x00495001,
      13, QMetaType::Int, 0x00495001,
      14, QMetaType::Int, 0x00495001,
      15, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void DefaultApplications::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DefaultApplications *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->loadFinished(); break;
        case 1: _t->setDefaultBrowser((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setDefaultFileManager((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setDefaultEMail((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setDefaultTerminal((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DefaultApplications::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DefaultApplications::loadFinished)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DefaultApplications *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->browserList(); break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = _t->fileManagerList(); break;
        case 2: *reinterpret_cast< QVariantList*>(_v) = _t->emailList(); break;
        case 3: *reinterpret_cast< QVariantList*>(_v) = _t->terminalList(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->browserIndex(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->fileManagerIndex(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->emailIndex(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->terminalIndex(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject DefaultApplications::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DefaultApplications.data,
    qt_meta_data_DefaultApplications,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DefaultApplications::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DefaultApplications::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DefaultApplications.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DefaultApplications::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void DefaultApplications::loadFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
