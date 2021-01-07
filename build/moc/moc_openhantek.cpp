/****************************************************************************
** Meta object code from reading C++ file 'openhantek.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/openhantek.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'openhantek.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OpenHantekMainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   21,   40,   21, 0x08,
      51,   21,   40,   21, 0x08,
      58,   21,   40,   21, 0x08,
      75,   67,   21,   21, 0x08,
      97,   67,   21,   21, 0x08,
     108,   21,   21,   21, 0x08,
     118,   21,   21,   21, 0x08,
     128,   21,   21,   21, 0x08,
     137,   21,   21,   21, 0x08,
     145,   21,   21,   21, 0x08,
     161,   21,   21,   21, 0x08,
     185,  178,   21,   21, 0x08,
     222,  214,   21,   21, 0x08,
     241,   21,   21,   21, 0x08,
     258,  214,   21,   21, 0x08,
     275,  214,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OpenHantekMainWindow[] = {
    "OpenHantekMainWindow\0\0settingsChanged()\0"
    "int\0open()\0save()\0saveAs()\0enabled\0"
    "digitalPhosphor(bool)\0zoom(bool)\0"
    "started()\0stopped()\0config()\0about()\0"
    "applySettings()\0updateSettings()\0"
    "action\0bufferSizeSelected(QAction*)\0"
    "channel\0updateOffset(uint)\0updateTimebase()\0"
    "updateUsed(uint)\0updateVoltageGain(uint)\0"
};

void OpenHantekMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OpenHantekMainWindow *_t = static_cast<OpenHantekMainWindow *>(_o);
        switch (_id) {
        case 0: _t->settingsChanged(); break;
        case 1: { int _r = _t->open();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->save();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->saveAs();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: _t->digitalPhosphor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->zoom((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->started(); break;
        case 7: _t->stopped(); break;
        case 8: _t->config(); break;
        case 9: _t->about(); break;
        case 10: _t->applySettings(); break;
        case 11: _t->updateSettings(); break;
        case 12: _t->bufferSizeSelected((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 13: _t->updateOffset((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 14: _t->updateTimebase(); break;
        case 15: _t->updateUsed((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 16: _t->updateVoltageGain((*reinterpret_cast< uint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OpenHantekMainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OpenHantekMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_OpenHantekMainWindow,
      qt_meta_data_OpenHantekMainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OpenHantekMainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OpenHantekMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OpenHantekMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OpenHantekMainWindow))
        return static_cast<void*>(const_cast< OpenHantekMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int OpenHantekMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void OpenHantekMainWindow::settingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
