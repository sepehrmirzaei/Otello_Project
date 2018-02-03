/****************************************************************************
** Meta object code from reading C++ file 'loginmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../HeaderFiles/loginmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LoginMenu_t {
    QByteArrayData data[8];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoginMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoginMenu_t qt_meta_stringdata_LoginMenu = {
    {
QT_MOC_LITERAL(0, 0, 9), // "LoginMenu"
QT_MOC_LITERAL(1, 10, 11), // "information"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 7), // "Usrname"
QT_MOC_LITERAL(4, 31, 5), // "color"
QT_MOC_LITERAL(5, 37, 4), // "mode"
QT_MOC_LITERAL(6, 42, 13), // "QHostAddress*"
QT_MOC_LITERAL(7, 56, 12) // "requestlogin"

    },
    "LoginMenu\0information\0\0Usrname\0color\0"
    "mode\0QHostAddress*\0requestlogin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 6, QMetaType::UShort,    3,    4,    5,    2,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void LoginMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LoginMenu *_t = static_cast<LoginMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->information((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QHostAddress*(*)>(_a[4])),(*reinterpret_cast< quint16(*)>(_a[5]))); break;
        case 1: _t->requestlogin(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LoginMenu::*_t)(QString , QString , QString , QHostAddress * , quint16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoginMenu::information)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject LoginMenu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LoginMenu.data,
      qt_meta_data_LoginMenu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LoginMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LoginMenu.stringdata0))
        return static_cast<void*>(const_cast< LoginMenu*>(this));
    return QWidget::qt_metacast(_clname);
}

int LoginMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void LoginMenu::information(QString _t1, QString _t2, QString _t3, QHostAddress * _t4, quint16 _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
