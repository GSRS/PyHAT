/****************************************************************************
** Meta object code from reading C++ file 'guitest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/PYSAT_GUI/guitest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'guitest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GuiTest_t {
    QByteArrayData data[16];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GuiTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GuiTest_t qt_meta_stringdata_GuiTest = {
    {
QT_MOC_LITERAL(0, 0, 7), // "GuiTest"
QT_MOC_LITERAL(1, 8, 16), // "setLabelsVisible"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "index"
QT_MOC_LITERAL(4, 32, 7), // "visible"
QT_MOC_LITERAL(5, 40, 19), // "setSpinrightVisible"
QT_MOC_LITERAL(6, 60, 18), // "setSpinleftVisible"
QT_MOC_LITERAL(7, 79, 21), // "on_toolButton_clicked"
QT_MOC_LITERAL(8, 101, 23), // "on_toolButton_2_clicked"
QT_MOC_LITERAL(9, 125, 23), // "on_toolButton_3_clicked"
QT_MOC_LITERAL(10, 149, 23), // "on_toolButton_4_clicked"
QT_MOC_LITERAL(11, 173, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(12, 197, 24), // "on_pushButton_13_clicked"
QT_MOC_LITERAL(13, 222, 30), // "on_norm_spinBox_9_valueChanged"
QT_MOC_LITERAL(14, 253, 4), // "arg1"
QT_MOC_LITERAL(15, 258, 28) // "on_norm_spinBox_valueChanged"

    },
    "GuiTest\0setLabelsVisible\0\0index\0visible\0"
    "setSpinrightVisible\0setSpinleftVisible\0"
    "on_toolButton_clicked\0on_toolButton_2_clicked\0"
    "on_toolButton_3_clicked\0on_toolButton_4_clicked\0"
    "on_actionExit_triggered\0"
    "on_pushButton_13_clicked\0"
    "on_norm_spinBox_9_valueChanged\0arg1\0"
    "on_norm_spinBox_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GuiTest[] = {

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
       1,    2,   69,    2, 0x08 /* Private */,
       5,    2,   74,    2, 0x08 /* Private */,
       6,    2,   79,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    1,   90,    2, 0x08 /* Private */,
      15,    1,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void GuiTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GuiTest *_t = static_cast<GuiTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setLabelsVisible((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->setSpinrightVisible((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->setSpinleftVisible((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->on_toolButton_clicked(); break;
        case 4: _t->on_toolButton_2_clicked(); break;
        case 5: _t->on_toolButton_3_clicked(); break;
        case 6: _t->on_toolButton_4_clicked(); break;
        case 7: _t->on_actionExit_triggered(); break;
        case 8: _t->on_pushButton_13_clicked(); break;
        case 9: _t->on_norm_spinBox_9_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_norm_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject GuiTest::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_GuiTest.data,
      qt_meta_data_GuiTest,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GuiTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuiTest::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GuiTest.stringdata0))
        return static_cast<void*>(const_cast< GuiTest*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int GuiTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
