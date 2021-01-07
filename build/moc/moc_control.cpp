/****************************************************************************
** Meta object code from reading C++ file 'control.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/hantek/control.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'control.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Hantek__Control[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      62,   51,   33,   16, 0x0a,
     100,   95,   33,   16, 0x0a,
     150,  137,  133,   16, 0x0a,
     193,  176,  133,   16, 0x0a,
     245,  232,  225,   16, 0x0a,
     281,  266,  225,   16, 0x0a,
     309,  304,  133,   16, 0x0a,
     353,  342,  133,   16, 0x0a,
     395,  381,  225,   16, 0x0a,
     430,  424,  133,   16, 0x0a,
     467,  458,  225,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Hantek__Control[] = {
    "Hantek::Control\0\0connectDevice()\0"
    "unsigned long int\0samplerate\0"
    "setSamplerate(unsigned long int)\0size\0"
    "setBufferSize(unsigned long int)\0int\0"
    "channel,used\0setChannelUsed(uint,bool)\0"
    "channel,coupling\0setCoupling(uint,Dso::Coupling)\0"
    "double\0channel,gain\0setGain(uint,double)\0"
    "channel,offset\0setOffset(uint,double)\0"
    "mode\0setTriggerMode(Dso::TriggerMode)\0"
    "special,id\0setTriggerSource(bool,uint)\0"
    "channel,level\0setTriggerLevel(uint,double)\0"
    "slope\0setTriggerSlope(Dso::Slope)\0"
    "position\0setTriggerPosition(double)\0"
};

void Hantek::Control::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Control *_t = static_cast<Control *>(_o);
        switch (_id) {
        case 0: _t->connectDevice(); break;
        case 1: { unsigned long int _r = _t->setSamplerate((*reinterpret_cast< unsigned long int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< unsigned long int*>(_a[0]) = _r; }  break;
        case 2: { unsigned long int _r = _t->setBufferSize((*reinterpret_cast< unsigned long int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< unsigned long int*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->setChannelUsed((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->setCoupling((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< Dso::Coupling(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { double _r = _t->setGain((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 6: { double _r = _t->setOffset((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->setTriggerMode((*reinterpret_cast< Dso::TriggerMode(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->setTriggerSource((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { double _r = _t->setTriggerLevel((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->setTriggerSlope((*reinterpret_cast< Dso::Slope(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { double _r = _t->setTriggerPosition((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Hantek::Control::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Hantek::Control::staticMetaObject = {
    { &DsoControl::staticMetaObject, qt_meta_stringdata_Hantek__Control,
      qt_meta_data_Hantek__Control, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Hantek::Control::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Hantek::Control::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Hantek::Control::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Hantek__Control))
        return static_cast<void*>(const_cast< Control*>(this));
    return DsoControl::qt_metacast(_clname);
}

int Hantek::Control::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DsoControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
