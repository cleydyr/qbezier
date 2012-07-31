/****************************************************************************
** Meta object code from reading C++ file 'visortowidget.h'
**
** Created: Tue Jul 31 15:25:51 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "visortowidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'visortowidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VisOrtoWidget[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   31,   14,   14, 0x0a,
      56,   53,   14,   14, 0x0a,
      77,   75,   14,   14, 0x0a,
      98,   96,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_VisOrtoWidget[] = {
    "VisOrtoWidget\0\0alterouPontos()\0ps\0"
    "mudaPrecisaoS(int)\0pt\0mudaPrecisaoT(int)\0"
    "s\0mudaParamS(double)\0t\0mudaParamT(double)\0"
};

const QMetaObject VisOrtoWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VisOrtoWidget,
      qt_meta_data_VisOrtoWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VisOrtoWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VisOrtoWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VisOrtoWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VisOrtoWidget))
        return static_cast<void*>(const_cast< VisOrtoWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int VisOrtoWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: alterouPontos(); break;
        case 1: mudaPrecisaoS((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: mudaPrecisaoT((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: mudaParamS((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: mudaParamT((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void VisOrtoWidget::alterouPontos()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
