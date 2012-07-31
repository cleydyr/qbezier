/****************************************************************************
** Meta object code from reading C++ file 'dialogoinicialmn.h'
**
** Created: Tue Jul 31 15:25:53 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialogoinicialmn.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogoinicialmn.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogoInicialMN[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      31,   27,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      49,   47,   17,   17, 0x08,
      61,   59,   17,   17, 0x08,
      71,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DialogoInicialMN[] = {
    "DialogoInicialMN\0\0reject()\0m,n\0"
    "accept(int,int)\0m\0setM(int)\0n\0setN(int)\0"
    "concluiu()\0"
};

const QMetaObject DialogoInicialMN::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogoInicialMN,
      qt_meta_data_DialogoInicialMN, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogoInicialMN::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogoInicialMN::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogoInicialMN::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogoInicialMN))
        return static_cast<void*>(const_cast< DialogoInicialMN*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogoInicialMN::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: reject(); break;
        case 1: accept((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: setM((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: setN((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: concluiu(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void DialogoInicialMN::reject()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void DialogoInicialMN::accept(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
