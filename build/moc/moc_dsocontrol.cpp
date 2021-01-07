/****************************************************************************
** Meta object code from reading C++ file 'dsocontrol.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/dsocontrol.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dsocontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DsoControl[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      30,   11,   11,   11, 0x05,
      51,   11,   11,   11, 0x05,
      69,   11,   11,   11, 0x05,
     103,   87,   11,   11, 0x05,
     157,  130,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     231,   11,   11,   11, 0x0a,
     247,   11,   11,   11, 0x0a,
     266,   11,   11,   11, 0x0a,
     282,   11,   11,   11, 0x0a,
     326,  315,  297,   11, 0x0a,
     364,  359,  297,   11, 0x0a,
     406,  401,  397,   11, 0x0a,
     450,  439,  397,   11, 0x0a,
     499,  485,  478,   11, 0x0a,
     534,  528,  397,   11, 0x0a,
     571,  562,  478,   11, 0x0a,
     611,  598,  397,   11, 0x0a,
     654,  637,  397,   11, 0x0a,
     699,  686,  478,   11, 0x0a,
     735,  720,  478,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DsoControl[] = {
    "DsoControl\0\0deviceConnected()\0"
    "deviceDisconnected()\0samplingStarted()\0"
    "samplingStopped()\0message,timeout\0"
    "statusMessage(QString,int)\0"
    "data,size,samplerate,mutex\0"
    "samplesAvailable(const QList<double*>*,const QList<uint>*,double,QMute"
    "x*)\0"
    "connectDevice()\0disconnectDevice()\0"
    "startSampling()\0stopSampling()\0"
    "unsigned long int\0samplerate\0"
    "setSamplerate(unsigned long int)\0size\0"
    "setBufferSize(unsigned long int)\0int\0"
    "mode\0setTriggerMode(Dso::TriggerMode)\0"
    "special,id\0setTriggerSource(bool,uint)\0"
    "double\0channel,level\0setTriggerLevel(uint,double)\0"
    "slope\0setTriggerSlope(Dso::Slope)\0"
    "position\0setTriggerPosition(double)\0"
    "channel,used\0setChannelUsed(uint,bool)\0"
    "channel,coupling\0setCoupling(uint,Dso::Coupling)\0"
    "channel,gain\0setGain(uint,double)\0"
    "channel,offset\0setOffset(uint,double)\0"
};

void DsoControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DsoControl *_t = static_cast<DsoControl *>(_o);
        switch (_id) {
        case 0: _t->deviceConnected(); break;
        case 1: _t->deviceDisconnected(); break;
        case 2: _t->samplingStarted(); break;
        case 3: _t->samplingStopped(); break;
        case 4: _t->statusMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->samplesAvailable((*reinterpret_cast< const QList<double*>*(*)>(_a[1])),(*reinterpret_cast< const QList<uint>*(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< QMutex*(*)>(_a[4]))); break;
        case 6: _t->connectDevice(); break;
        case 7: _t->disconnectDevice(); break;
        case 8: _t->startSampling(); break;
        case 9: _t->stopSampling(); break;
        case 10: { unsigned long int _r = _t->setSamplerate((*reinterpret_cast< unsigned long int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< unsigned long int*>(_a[0]) = _r; }  break;
        case 11: { unsigned long int _r = _t->setBufferSize((*reinterpret_cast< unsigned long int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< unsigned long int*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->setTriggerMode((*reinterpret_cast< Dso::TriggerMode(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->setTriggerSource((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: { double _r = _t->setTriggerLevel((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 15: { int _r = _t->setTriggerSlope((*reinterpret_cast< Dso::Slope(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: { double _r = _t->setTriggerPosition((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 17: { int _r = _t->setChannelUsed((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { int _r = _t->setCoupling((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< Dso::Coupling(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: { double _r = _t->setGain((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 20: { double _r = _t->setOffset((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DsoControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DsoControl::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_DsoControl,
      qt_meta_data_DsoControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DsoControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DsoControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DsoControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DsoControl))
        return static_cast<void*>(const_cast< DsoControl*>(this));
    return QThread::qt_metacast(_clname);
}

int DsoControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void DsoControl::deviceConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void DsoControl::deviceDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void DsoControl::samplingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void DsoControl::samplingStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void DsoControl::statusMessage(const QString & _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DsoControl::samplesAvailable(const QList<double*> * _t1, const QList<unsigned int> * _t2, double _t3, QMutex * _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
