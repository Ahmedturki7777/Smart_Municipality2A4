/****************************************************************************
** Meta object code from reading C++ file 'projet_button.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Smart_Municipality2A4-master/projet_button.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'projet_button.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_projet_button_t {
    QByteArrayData data[7];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_projet_button_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_projet_button_t qt_meta_stringdata_projet_button = {
    {
QT_MOC_LITERAL(0, 0, 13), // "projet_button"
QT_MOC_LITERAL(1, 14, 36), // "on_pushButton_Ajouter_projet_..."
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 32), // "on_pushButton_mod_projet_clicked"
QT_MOC_LITERAL(4, 85, 32), // "on_pushButton_sup_projet_clicked"
QT_MOC_LITERAL(5, 118, 32), // "on_pushButton_rec_projet_clicked"
QT_MOC_LITERAL(6, 151, 33) // "on_pushButton_quit_projet_cli..."

    },
    "projet_button\0on_pushButton_Ajouter_projet_clicked\0"
    "\0on_pushButton_mod_projet_clicked\0"
    "on_pushButton_sup_projet_clicked\0"
    "on_pushButton_rec_projet_clicked\0"
    "on_pushButton_quit_projet_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_projet_button[] = {

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
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void projet_button::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        projet_button *_t = static_cast<projet_button *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_Ajouter_projet_clicked(); break;
        case 1: _t->on_pushButton_mod_projet_clicked(); break;
        case 2: _t->on_pushButton_sup_projet_clicked(); break;
        case 3: _t->on_pushButton_rec_projet_clicked(); break;
        case 4: _t->on_pushButton_quit_projet_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject projet_button::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_projet_button.data,
      qt_meta_data_projet_button,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *projet_button::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *projet_button::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_projet_button.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int projet_button::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
