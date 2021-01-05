/****************************************************************************
** Meta object code from reading C++ file 'bouton_employe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Smart_Municipality2A4-master/bouton_employe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bouton_employe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_bouton_employe_t {
    QByteArrayData data[13];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bouton_employe_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bouton_employe_t qt_meta_stringdata_bouton_employe = {
    {
QT_MOC_LITERAL(0, 0, 14), // "bouton_employe"
QT_MOC_LITERAL(1, 15, 25), // "on_ajoutereButton_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 27), // "on_supprimereButton_clicked"
QT_MOC_LITERAL(4, 70, 29), // "on_modifemployeButton_clicked"
QT_MOC_LITERAL(5, 100, 8), // "sendMail"
QT_MOC_LITERAL(6, 109, 8), // "mailSent"
QT_MOC_LITERAL(7, 118, 6), // "browse"
QT_MOC_LITERAL(8, 125, 27), // "on_pushButton_pdf_2_clicked"
QT_MOC_LITERAL(9, 153, 24), // "on_recherchernom_clicked"
QT_MOC_LITERAL(10, 178, 18), // "on_rprenom_clicked"
QT_MOC_LITERAL(11, 197, 15), // "on_rcin_clicked"
QT_MOC_LITERAL(12, 213, 21) // "on_recuButton_clicked"

    },
    "bouton_employe\0on_ajoutereButton_clicked\0"
    "\0on_supprimereButton_clicked\0"
    "on_modifemployeButton_clicked\0sendMail\0"
    "mailSent\0browse\0on_pushButton_pdf_2_clicked\0"
    "on_recherchernom_clicked\0on_rprenom_clicked\0"
    "on_rcin_clicked\0on_recuButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bouton_employe[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    1,   73,    2, 0x08 /* Private */,
       7,    0,   76,    2, 0x08 /* Private */,
       8,    0,   77,    2, 0x08 /* Private */,
       9,    0,   78,    2, 0x08 /* Private */,
      10,    0,   79,    2, 0x08 /* Private */,
      11,    0,   80,    2, 0x08 /* Private */,
      12,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void bouton_employe::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        bouton_employe *_t = static_cast<bouton_employe *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->on_ajoutereButton_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->on_supprimereButton_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->on_modifemployeButton_clicked(); break;
        case 3: _t->sendMail(); break;
        case 4: _t->mailSent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->browse(); break;
        case 6: _t->on_pushButton_pdf_2_clicked(); break;
        case 7: _t->on_recherchernom_clicked(); break;
        case 8: _t->on_rprenom_clicked(); break;
        case 9: _t->on_rcin_clicked(); break;
        case 10: _t->on_recuButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject bouton_employe::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_bouton_employe.data,
      qt_meta_data_bouton_employe,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *bouton_employe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bouton_employe::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_bouton_employe.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int bouton_employe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
