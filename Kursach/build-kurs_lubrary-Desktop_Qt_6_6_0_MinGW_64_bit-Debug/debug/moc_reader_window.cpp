/****************************************************************************
** Meta object code from reading C++ file 'reader_window.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kurs_lubrary/reader_window.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reader_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSreader_windowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSreader_windowENDCLASS = QtMocHelpers::stringData(
    "reader_window",
    "readerOpen",
    "",
    "on_addreader_clicked",
    "on_deletereader_clicked",
    "on_searchReader_textChanged",
    "text",
    "on_listWidget_itemClicked",
    "QListWidgetItem*",
    "item",
    "on_addresourse_clicked",
    "on_deleteresourse_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSreader_windowENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[14];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[24];
    char stringdata5[28];
    char stringdata6[5];
    char stringdata7[26];
    char stringdata8[17];
    char stringdata9[5];
    char stringdata10[23];
    char stringdata11[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSreader_windowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSreader_windowENDCLASS_t qt_meta_stringdata_CLASSreader_windowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "reader_window"
        QT_MOC_LITERAL(14, 10),  // "readerOpen"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 20),  // "on_addreader_clicked"
        QT_MOC_LITERAL(47, 23),  // "on_deletereader_clicked"
        QT_MOC_LITERAL(71, 27),  // "on_searchReader_textChanged"
        QT_MOC_LITERAL(99, 4),  // "text"
        QT_MOC_LITERAL(104, 25),  // "on_listWidget_itemClicked"
        QT_MOC_LITERAL(130, 16),  // "QListWidgetItem*"
        QT_MOC_LITERAL(147, 4),  // "item"
        QT_MOC_LITERAL(152, 22),  // "on_addresourse_clicked"
        QT_MOC_LITERAL(175, 25)   // "on_deleteresourse_clicked"
    },
    "reader_window",
    "readerOpen",
    "",
    "on_addreader_clicked",
    "on_deletereader_clicked",
    "on_searchReader_textChanged",
    "text",
    "on_listWidget_itemClicked",
    "QListWidgetItem*",
    "item",
    "on_addresourse_clicked",
    "on_deleteresourse_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSreader_windowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    1,   59,    2, 0x08,    4 /* Private */,
       7,    1,   62,    2, 0x08,    6 /* Private */,
      10,    0,   65,    2, 0x08,    8 /* Private */,
      11,    0,   66,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject reader_window::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSreader_windowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSreader_windowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSreader_windowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<reader_window, std::true_type>,
        // method 'readerOpen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addreader_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_deletereader_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_searchReader_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_listWidget_itemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'on_addresourse_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_deleteresourse_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void reader_window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<reader_window *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->readerOpen(); break;
        case 1: _t->on_addreader_clicked(); break;
        case 2: _t->on_deletereader_clicked(); break;
        case 3: _t->on_searchReader_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->on_listWidget_itemClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 5: _t->on_addresourse_clicked(); break;
        case 6: _t->on_deleteresourse_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (reader_window::*)();
            if (_t _q_method = &reader_window::readerOpen; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *reader_window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *reader_window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSreader_windowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int reader_window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void reader_window::readerOpen()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
