/****************************************************************************
** Meta object code from reading C++ file 'bouton_monument.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Smart_Municipality2A4-master/bouton_monument.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bouton_monument.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_bouton_monument_t {
    QByteArrayData data[8];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bouton_monument_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bouton_monument_t qt_meta_stringdata_bouton_monument = {
    {
QT_MOC_LITERAL(0, 0, 15), // "bouton_monument"
QT_MOC_LITERAL(1, 16, 20), // "on_ajouter_2_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 20), // "on_modifer_2_clicked"
QT_MOC_LITERAL(4, 59, 22), // "on_supprimer_2_clicked"
QT_MOC_LITERAL(5, 82, 20), // "on_tableView_clicked"
QT_MOC_LITERAL(6, 103, 5), // "index"
QT_MOC_LITERAL(7, 109, 17) // "on_metier_clicked"

    },
    "bouton_monument\0on_ajouter_2_clicked\0"
    "\0on_modifer_2_clicked\0on_supprimer_2_clicked\0"
    "on_tableView_clicked\0index\0on_metier_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bouton_monument[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void,

       0        // eod
};

void bouton_monument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        bouton_monument *_t = static_cast<bouton_monument *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_ajouter_2_clicked(); break;
        case 1: _t->on_modifer_2_clicked(); break;
        case 2: _t->on_supprimer_2_clicked(); break;
        case 3: _t->on_tableView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_metier_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject bouton_monument::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_bouton_monument.data,
      qt_meta_data_bouton_monument,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *bouton_monument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bouton_monument::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_bouton_monument.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int bouton_monument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
