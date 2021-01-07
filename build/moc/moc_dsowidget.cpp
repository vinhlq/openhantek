/****************************************************************************
** Meta object code from reading C++ file 'dsowidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/dsowidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dsowidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DsoWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   11,   10,   10, 0x05,
      58,   52,   10,   10, 0x05,
      89,   11,   10,   10, 0x05,
     135,  122,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     162,   10,   10,   10, 0x0a,
     184,   10,   10,   10, 0x0a,
     203,   10,   10,   10, 0x0a,
     220,   10,   10,   10, 0x0a,
     240,   10,   10,   10, 0x0a,
     261,   10,   10,   10, 0x0a,
     291,  283,   10,   10, 0x0a,
     334,  321,   10,   10, 0x0a,
     364,  283,   10,   10, 0x0a,
     392,   10,   10,   10, 0x0a,
     409,  283,   10,   10, 0x0a,
     433,  321,   10,   10, 0x0a,
     467,  462,   10,   10, 0x0a,
     495,   10,  490,   10, 0x0a,
     506,   10,  490,   10, 0x0a,
     522,  514,   10,   10, 0x0a,
     539,   10,   10,   10, 0x0a,
     554,   11,   10,   10, 0x09,
     591,  579,   10,   10, 0x09,
     625,   11,   10,   10, 0x09,
     656,  122,   10,   10, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_DsoWidget[] = {
    "DsoWidget\0\0channel,value\0"
    "offsetChanged(uint,double)\0value\0"
    "triggerPositionChanged(double)\0"
    "triggerLevelChanged(uint,double)\0"
    "marker,value\0markerChanged(uint,double)\0"
    "updateFrequencybase()\0updateSamplerate()\0"
    "updateTimebase()\0updateTriggerMode()\0"
    "updateTriggerSlope()\0updateTriggerSource()\0"
    "channel\0updateSpectrumMagnitude(uint)\0"
    "channel,used\0updateSpectrumUsed(uint,bool)\0"
    "updateVoltageCoupling(uint)\0"
    "updateMathMode()\0updateVoltageGain(uint)\0"
    "updateVoltageUsed(uint,bool)\0size\0"
    "updateBufferSize(uint)\0bool\0exportAs()\0"
    "print()\0enabled\0updateZoom(bool)\0"
    "dataAnalyzed()\0updateOffset(int,double)\0"
    "index,value\0updateTriggerPosition(int,double)\0"
    "updateTriggerLevel(int,double)\0"
    "updateMarker(int,double)\0"
};

void DsoWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DsoWidget *_t = static_cast<DsoWidget *>(_o);
        switch (_id) {
        case 0: _t->offsetChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->triggerPositionChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->triggerLevelChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->markerChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 4: _t->updateFrequencybase(); break;
        case 5: _t->updateSamplerate(); break;
        case 6: _t->updateTimebase(); break;
        case 7: _t->updateTriggerMode(); break;
        case 8: _t->updateTriggerSlope(); break;
        case 9: _t->updateTriggerSource(); break;
        case 10: _t->updateSpectrumMagnitude((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 11: _t->updateSpectrumUsed((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->updateVoltageCoupling((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 13: _t->updateMathMode(); break;
        case 14: _t->updateVoltageGain((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 15: _t->updateVoltageUsed((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 16: _t->updateBufferSize((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 17: { bool _r = _t->exportAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->print();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: _t->updateZoom((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->dataAnalyzed(); break;
        case 21: _t->updateOffset((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 22: _t->updateTriggerPosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 23: _t->updateTriggerLevel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 24: _t->updateMarker((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DsoWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DsoWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DsoWidget,
      qt_meta_data_DsoWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DsoWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DsoWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DsoWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DsoWidget))
        return static_cast<void*>(const_cast< DsoWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int DsoWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void DsoWidget::offsetChanged(unsigned int _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DsoWidget::triggerPositionChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DsoWidget::triggerLevelChanged(unsigned int _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DsoWidget::markerChanged(unsigned int _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
