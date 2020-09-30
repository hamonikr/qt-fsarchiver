/****************************************************************************
** Meta object code from reading C++ file 'mbr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/mbr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mbr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialogMBR_t {
    QByteArrayData data[13];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogMBR_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogMBR_t qt_meta_stringdata_DialogMBR = {
    {
QT_MOC_LITERAL(0, 0, 9), // "DialogMBR"
QT_MOC_LITERAL(1, 10, 3), // "mbr"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 15), // "folder_einlesen"
QT_MOC_LITERAL(4, 31, 15), // "questionMessage"
QT_MOC_LITERAL(5, 47, 5), // "frage"
QT_MOC_LITERAL(6, 53, 15), // "sektor_auslesen"
QT_MOC_LITERAL(7, 69, 22), // "Ubuntuversion_auslesen"
QT_MOC_LITERAL(8, 92, 6), // "is_gpt"
QT_MOC_LITERAL(9, 99, 13), // "partition_efi"
QT_MOC_LITERAL(10, 113, 10), // "disk_exist"
QT_MOC_LITERAL(11, 124, 8), // "disk_art"
QT_MOC_LITERAL(12, 133, 13) // "folder_expand"

    },
    "DialogMBR\0mbr\0\0folder_einlesen\0"
    "questionMessage\0frage\0sektor_auslesen\0"
    "Ubuntuversion_auslesen\0is_gpt\0"
    "partition_efi\0disk_exist\0disk_art\0"
    "folder_expand"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogMBR[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    1,   61,    2, 0x0a /* Public */,
       6,    0,   64,    2, 0x0a /* Public */,
       7,    0,   65,    2, 0x0a /* Public */,
       8,    1,   66,    2, 0x0a /* Public */,
      10,    0,   69,    2, 0x0a /* Public */,
      11,    0,   70,    2, 0x0a /* Public */,
      12,    0,   71,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int, QMetaType::QString,    5,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Int, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DialogMBR::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogMBR *_t = static_cast<DialogMBR *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->mbr();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: { int _r = _t->folder_einlesen();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: { int _r = _t->questionMessage((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: { int _r = _t->sektor_auslesen();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->Ubuntuversion_auslesen(); break;
        case 5: { int _r = _t->is_gpt((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->disk_exist(); break;
        case 7: _t->disk_art(); break;
        case 8: _t->folder_expand(); break;
        default: ;
        }
    }
}

const QMetaObject DialogMBR::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DialogMBR.data,
      qt_meta_data_DialogMBR,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DialogMBR::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogMBR::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogMBR.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DialogMBR::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
