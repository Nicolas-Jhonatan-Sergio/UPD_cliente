/****************************************************************************
** Meta object code from reading C++ file 'udp_cliente_procyeto.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../UPD_CLIENTE_JM/udp_cliente_procyeto.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udp_cliente_procyeto.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UDP_CLIENTE_PROCYETO_t {
    QByteArrayData data[12];
    char stringdata0[252];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UDP_CLIENTE_PROCYETO_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UDP_CLIENTE_PROCYETO_t qt_meta_stringdata_UDP_CLIENTE_PROCYETO = {
    {
QT_MOC_LITERAL(0, 0, 20), // "UDP_CLIENTE_PROCYETO"
QT_MOC_LITERAL(1, 21, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 25), // "on_letrero2_linkActivated"
QT_MOC_LITERAL(4, 70, 4), // "link"
QT_MOC_LITERAL(5, 75, 39), // "on_UDP_CLIENTE_PROCYETO_iconS..."
QT_MOC_LITERAL(6, 115, 8), // "iconSize"
QT_MOC_LITERAL(7, 124, 38), // "on_centralwidget_windowIconTe..."
QT_MOC_LITERAL(8, 163, 8), // "iconText"
QT_MOC_LITERAL(9, 172, 33), // "on_letrero2_windowIconTextCha..."
QT_MOC_LITERAL(10, 206, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(11, 230, 21) // "on_pushButton_pressed"

    },
    "UDP_CLIENTE_PROCYETO\0on_pushButton_clicked\0"
    "\0on_letrero2_linkActivated\0link\0"
    "on_UDP_CLIENTE_PROCYETO_iconSizeChanged\0"
    "iconSize\0on_centralwidget_windowIconTextChanged\0"
    "iconText\0on_letrero2_windowIconTextChanged\0"
    "on_pushButton_2_clicked\0on_pushButton_pressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UDP_CLIENTE_PROCYETO[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    1,   50,    2, 0x08 /* Private */,
       5,    1,   53,    2, 0x08 /* Private */,
       7,    1,   56,    2, 0x08 /* Private */,
       9,    1,   59,    2, 0x08 /* Private */,
      10,    0,   62,    2, 0x08 /* Private */,
      11,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QSize,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UDP_CLIENTE_PROCYETO::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UDP_CLIENTE_PROCYETO *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UDP_CLIENTE_PROCYETO::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_UDP_CLIENTE_PROCYETO.data,
    qt_meta_data_UDP_CLIENTE_PROCYETO,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UDP_CLIENTE_PROCYETO::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UDP_CLIENTE_PROCYETO::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UDP_CLIENTE_PROCYETO.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int UDP_CLIENTE_PROCYETO::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
