/****************************************************************************
** Meta object code from reading C++ file 'dir.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/dir.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dir.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialogDIR_t {
    QByteArrayData data[23];
    char stringdata0[304];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogDIR_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogDIR_t qt_meta_stringdata_DialogDIR = {
    {
QT_MOC_LITERAL(0, 0, 9), // "DialogDIR"
QT_MOC_LITERAL(1, 10, 24), // "folder_dir_path_einlesen"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 13), // "treeview_show"
QT_MOC_LITERAL(4, 50, 16), // "zip_einlesen_dir"
QT_MOC_LITERAL(5, 67, 17), // "folder_expand_dir"
QT_MOC_LITERAL(6, 85, 18), // "folder_expand_path"
QT_MOC_LITERAL(7, 104, 11), // "elapsedTime"
QT_MOC_LITERAL(8, 116, 13), // "remainingTime"
QT_MOC_LITERAL(9, 130, 7), // "prozent"
QT_MOC_LITERAL(10, 138, 6), // "chkkey"
QT_MOC_LITERAL(11, 145, 11), // "ViewProzent"
QT_MOC_LITERAL(12, 157, 15), // "questionMessage"
QT_MOC_LITERAL(13, 173, 5), // "frage"
QT_MOC_LITERAL(14, 179, 9), // "chkhidden"
QT_MOC_LITERAL(15, 189, 17), // "save_attribut_dir"
QT_MOC_LITERAL(16, 207, 8), // "attribut"
QT_MOC_LITERAL(17, 216, 19), // "datei_auswerten_dir"
QT_MOC_LITERAL(18, 236, 9), // "buchstabe"
QT_MOC_LITERAL(19, 246, 21), // "datei_auswerten_1_dir"
QT_MOC_LITERAL(20, 268, 9), // "dateiname"
QT_MOC_LITERAL(21, 278, 12), // "thread1Ready"
QT_MOC_LITERAL(22, 291, 12) // "thread2Ready"

    },
    "DialogDIR\0folder_dir_path_einlesen\0\0"
    "treeview_show\0zip_einlesen_dir\0"
    "folder_expand_dir\0folder_expand_path\0"
    "elapsedTime\0remainingTime\0prozent\0"
    "chkkey\0ViewProzent\0questionMessage\0"
    "frage\0chkhidden\0save_attribut_dir\0"
    "attribut\0datei_auswerten_dir\0buchstabe\0"
    "datei_auswerten_1_dir\0dateiname\0"
    "thread1Ready\0thread2Ready"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogDIR[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x0a /* Public */,
       3,    0,   95,    2, 0x0a /* Public */,
       4,    0,   96,    2, 0x0a /* Public */,
       5,    0,   97,    2, 0x0a /* Public */,
       6,    0,   98,    2, 0x0a /* Public */,
       7,    0,   99,    2, 0x09 /* Protected */,
       8,    1,  100,    2, 0x09 /* Protected */,
      10,    0,  103,    2, 0x09 /* Protected */,
      11,    0,  104,    2, 0x09 /* Protected */,
      12,    1,  105,    2, 0x09 /* Protected */,
      14,    0,  108,    2, 0x09 /* Protected */,
      15,    1,  109,    2, 0x09 /* Protected */,
      17,    1,  112,    2, 0x09 /* Protected */,
      19,    1,  115,    2, 0x09 /* Protected */,
      21,    0,  118,    2, 0x08 /* Private */,
      22,    0,  119,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::QString, QMetaType::QString,   18,
    QMetaType::QString, QMetaType::QString,   20,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DialogDIR::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DialogDIR *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->folder_dir_path_einlesen();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->treeview_show(); break;
        case 2: _t->zip_einlesen_dir(); break;
        case 3: _t->folder_expand_dir(); break;
        case 4: _t->folder_expand_path(); break;
        case 5: _t->elapsedTime(); break;
        case 6: _t->remainingTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->chkkey(); break;
        case 8: _t->ViewProzent(); break;
        case 9: { int _r = _t->questionMessage((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->chkhidden(); break;
        case 11: _t->save_attribut_dir((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: { QString _r = _t->datei_auswerten_dir((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 13: { QString _r = _t->datei_auswerten_1_dir((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->thread1Ready(); break;
        case 15: _t->thread2Ready(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DialogDIR::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_DialogDIR.data,
    qt_meta_data_DialogDIR,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DialogDIR::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogDIR::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogDIR.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DialogDIR::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
