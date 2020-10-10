/****************************************************************************
** Meta object code from reading C++ file 'net_ein.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/net_ein.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'net_ein.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NetEin_t {
    QByteArrayData data[17];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetEin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetEin_t qt_meta_stringdata_NetEin = {
    {
QT_MOC_LITERAL(0, 0, 6), // "NetEin"
QT_MOC_LITERAL(1, 7, 8), // "save_net"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 11), // "restore_net"
QT_MOC_LITERAL(4, 29, 8), // "hostname"
QT_MOC_LITERAL(5, 38, 2), // "IP"
QT_MOC_LITERAL(6, 41, 7), // "adresse"
QT_MOC_LITERAL(7, 49, 15), // "listWidget_show"
QT_MOC_LITERAL(8, 65, 12), // "setting_save"
QT_MOC_LITERAL(9, 78, 12), // "user_net_ein"
QT_MOC_LITERAL(10, 91, 8), // "Kennwort"
QT_MOC_LITERAL(11, 100, 13), // "Array_pruefen"
QT_MOC_LITERAL(12, 114, 2), // "ip"
QT_MOC_LITERAL(13, 117, 15), // "questionMessage"
QT_MOC_LITERAL(14, 133, 5), // "frage"
QT_MOC_LITERAL(15, 139, 3), // "end"
QT_MOC_LITERAL(16, 143, 2) // "go"

    },
    "NetEin\0save_net\0\0restore_net\0hostname\0"
    "IP\0adresse\0listWidget_show\0setting_save\0"
    "user_net_ein\0Kennwort\0Array_pruefen\0"
    "ip\0questionMessage\0frage\0end\0go"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetEin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x09 /* Protected */,
       3,    0,   70,    2, 0x09 /* Protected */,
       4,    0,   71,    2, 0x09 /* Protected */,
       5,    1,   72,    2, 0x09 /* Protected */,
       7,    0,   75,    2, 0x09 /* Protected */,
       8,    1,   76,    2, 0x09 /* Protected */,
      10,    0,   79,    2, 0x09 /* Protected */,
      11,    1,   80,    2, 0x09 /* Protected */,
      13,    1,   83,    2, 0x09 /* Protected */,
      15,    0,   86,    2, 0x08 /* Private */,
      16,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::QString, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Int, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Int, QMetaType::QString,   12,
    QMetaType::Int, QMetaType::QString,   14,
    QMetaType::Int,
    QMetaType::Int,

       0        // eod
};

void NetEin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NetEin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->save_net(); break;
        case 1: _t->restore_net(); break;
        case 2: { QString _r = _t->hostname();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->IP((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->listWidget_show(); break;
        case 5: { int _r = _t->setting_save((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->Kennwort(); break;
        case 7: { int _r = _t->Array_pruefen((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 8: { int _r = _t->questionMessage((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 9: { int _r = _t->end();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 10: { int _r = _t->go();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NetEin::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_NetEin.data,
    qt_meta_data_NetEin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NetEin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetEin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetEin.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int NetEin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
