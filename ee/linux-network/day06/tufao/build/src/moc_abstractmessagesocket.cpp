/****************************************************************************
** Meta object code from reading C++ file 'abstractmessagesocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/abstractmessagesocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractmessagesocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Tufao__AbstractMessageSocket_t {
    QByteArrayData data[10];
    char stringdata[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Tufao__AbstractMessageSocket_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Tufao__AbstractMessageSocket_t qt_meta_stringdata_Tufao__AbstractMessageSocket = {
    {
QT_MOC_LITERAL(0, 0, 28),
QT_MOC_LITERAL(1, 29, 9),
QT_MOC_LITERAL(2, 39, 0),
QT_MOC_LITERAL(3, 40, 12),
QT_MOC_LITERAL(4, 53, 10),
QT_MOC_LITERAL(5, 64, 3),
QT_MOC_LITERAL(6, 68, 5),
QT_MOC_LITERAL(7, 74, 11),
QT_MOC_LITERAL(8, 86, 11),
QT_MOC_LITERAL(9, 98, 14)
    },
    "Tufao::AbstractMessageSocket\0connected\0"
    "\0disconnected\0newMessage\0msg\0close\0"
    "sendMessage\0onConnected\0onDisconnected\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tufao__AbstractMessageSocket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       1,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06,
       3,    0,   50,    2, 0x06,
       4,    1,   51,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       6,    0,   54,    2, 0x0a,
       7,    1,   55,    2, 0x0a,
       8,    0,   58,    2, 0x08,
       9,    0,   59,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QByteArray,    5,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       1, QMetaType::Bool, 0x00095801,

       0        // eod
};

void Tufao::AbstractMessageSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AbstractMessageSocket *_t = static_cast<AbstractMessageSocket *>(_o);
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->newMessage((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->close(); break;
        case 4: { bool _r = _t->sendMessage((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->onConnected(); break;
        case 6: _t->onDisconnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AbstractMessageSocket::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractMessageSocket::connected)) {
                *result = 0;
            }
        }
        {
            typedef void (AbstractMessageSocket::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractMessageSocket::disconnected)) {
                *result = 1;
            }
        }
        {
            typedef void (AbstractMessageSocket::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractMessageSocket::newMessage)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject Tufao::AbstractMessageSocket::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Tufao__AbstractMessageSocket.data,
      qt_meta_data_Tufao__AbstractMessageSocket,  qt_static_metacall, 0, 0}
};


const QMetaObject *Tufao::AbstractMessageSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tufao::AbstractMessageSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tufao__AbstractMessageSocket.stringdata))
        return static_cast<void*>(const_cast< AbstractMessageSocket*>(this));
    return QObject::qt_metacast(_clname);
}

int Tufao::AbstractMessageSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isConnected(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Tufao::AbstractMessageSocket::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Tufao::AbstractMessageSocket::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Tufao::AbstractMessageSocket::newMessage(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
