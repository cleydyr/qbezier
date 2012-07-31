/****************************************************************************
** Meta object code from reading C++ file 'janelaprincipal.h'
**
** Created: Tue Jul 31 15:25:52 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "janelaprincipal.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'janelaprincipal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_JanelaPrincipal[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   17,   16,   16, 0x0a,
      40,   38,   16,   16, 0x0a,
      59,   17,   16,   16, 0x0a,
      78,   38,   16,   16, 0x0a,
      99,   97,   16,   16, 0x0a,
     118,  116,   16,   16, 0x0a,
     139,  135,   16,   16, 0x0a,
     154,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_JanelaPrincipal[] = {
    "JanelaPrincipal\0\0s\0mudaPrecisaoS(int)\0"
    "t\0mudaPrecisaoT(int)\0mudaParamS(double)\0"
    "mudaParamT(double)\0i\0mudaIndiceI(int)\0"
    "j\0mudaIndiceJ(int)\0m,n\0setMN(int,int)\0"
    "mudaPontoControle()\0"
};

const QMetaObject JanelaPrincipal::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_JanelaPrincipal,
      qt_meta_data_JanelaPrincipal, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &JanelaPrincipal::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *JanelaPrincipal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *JanelaPrincipal::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_JanelaPrincipal))
        return static_cast<void*>(const_cast< JanelaPrincipal*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int JanelaPrincipal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: mudaPrecisaoS((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: mudaPrecisaoT((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: mudaParamS((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: mudaParamT((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: mudaIndiceI((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: mudaIndiceJ((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: setMN((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: mudaPontoControle(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
