/****************************************************************************
** Meta object code from reading C++ file 'ByteConverter.h'
**
** Created: Wed Dec 11 14:22:56 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ByteConverter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ByteConverter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ByteConverter[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      35,   14,   14,   14, 0x05,
      55,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      75,   14,   14,   14, 0x0a,
      91,   14,   14,   14, 0x0a,
     107,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ByteConverter[] = {
    "ByteConverter\0\0decChanged(QString)\0"
    "hexChanged(QString)\0binChanged(QString)\0"
    "setDec(QString)\0setHex(QString)\0"
    "setBin(QString)\0"
};

const QMetaObject ByteConverter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ByteConverter,
      qt_meta_data_ByteConverter, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ByteConverter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ByteConverter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ByteConverter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ByteConverter))
        return static_cast<void*>(const_cast< ByteConverter*>(this));
    return QObject::qt_metacast(_clname);
}

int ByteConverter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: decChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: hexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: binChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: setDec((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: setHex((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: setBin((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ByteConverter::decChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ByteConverter::hexChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ByteConverter::binChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
