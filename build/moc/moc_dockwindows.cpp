/****************************************************************************
** Meta object code from reading C++ file 'dockwindows.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/dockwindows.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockwindows.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HorizontalDock[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   16,   15,   15, 0x05,
      68,   59,   15,   15, 0x05,
      99,   92,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     137,  131,   15,   15, 0x09,
     164,  131,   15,   15, 0x09,
     186,  131,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_HorizontalDock[] = {
    "HorizontalDock\0\0frequencybase\0"
    "frequencybaseChanged(double)\0timebase\0"
    "timebaseChanged(double)\0format\0"
    "formatChanged(Dso::GraphFormat)\0index\0"
    "frequencybaseSelected(int)\0"
    "timebaseSelected(int)\0formatSelected(int)\0"
};

void HorizontalDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HorizontalDock *_t = static_cast<HorizontalDock *>(_o);
        switch (_id) {
        case 0: _t->frequencybaseChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->timebaseChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->formatChanged((*reinterpret_cast< Dso::GraphFormat(*)>(_a[1]))); break;
        case 3: _t->frequencybaseSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->timebaseSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->formatSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData HorizontalDock::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HorizontalDock::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_HorizontalDock,
      qt_meta_data_HorizontalDock, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HorizontalDock::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HorizontalDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HorizontalDock::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HorizontalDock))
        return static_cast<void*>(const_cast< HorizontalDock*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int HorizontalDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void HorizontalDock::frequencybaseChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HorizontalDock::timebaseChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HorizontalDock::formatChanged(Dso::GraphFormat _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_TriggerDock[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      54,   43,   12,   12, 0x05,
      79,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     110,  104,   12,   12, 0x09,
     128,  104,   12,   12, 0x09,
     147,  104,   12,   12, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_TriggerDock[] = {
    "TriggerDock\0\0modeChanged(Dso::TriggerMode)\0"
    "special,id\0sourceChanged(bool,uint)\0"
    "slopeChanged(Dso::Slope)\0index\0"
    "modeSelected(int)\0slopeSelected(int)\0"
    "sourceSelected(int)\0"
};

void TriggerDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TriggerDock *_t = static_cast<TriggerDock *>(_o);
        switch (_id) {
        case 0: _t->modeChanged((*reinterpret_cast< Dso::TriggerMode(*)>(_a[1]))); break;
        case 1: _t->sourceChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 2: _t->slopeChanged((*reinterpret_cast< Dso::Slope(*)>(_a[1]))); break;
        case 3: _t->modeSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slopeSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->sourceSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TriggerDock::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TriggerDock::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_TriggerDock,
      qt_meta_data_TriggerDock, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TriggerDock::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TriggerDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TriggerDock::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TriggerDock))
        return static_cast<void*>(const_cast< TriggerDock*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int TriggerDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void TriggerDock::modeChanged(Dso::TriggerMode _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TriggerDock::sourceChanged(bool _t1, unsigned int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TriggerDock::slopeChanged(Dso::Slope _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_VoltageDock[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   13,   12,   12, 0x05,
      79,   66,   12,   12, 0x05,
     109,  104,   12,   12, 0x05,
     149,  136,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     178,  172,   12,   12, 0x09,
     196,  172,   12,   12, 0x09,
     222,  214,   12,   12, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_VoltageDock[] = {
    "VoltageDock\0\0channel,coupling\0"
    "couplingChanged(uint,Dso::Coupling)\0"
    "channel,gain\0gainChanged(uint,double)\0"
    "mode\0modeChanged(Dso::MathMode)\0"
    "channel,used\0usedChanged(uint,bool)\0"
    "index\0gainSelected(int)\0miscSelected(int)\0"
    "checked\0usedSwitched(bool)\0"
};

void VoltageDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VoltageDock *_t = static_cast<VoltageDock *>(_o);
        switch (_id) {
        case 0: _t->couplingChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< Dso::Coupling(*)>(_a[2]))); break;
        case 1: _t->gainChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->modeChanged((*reinterpret_cast< Dso::MathMode(*)>(_a[1]))); break;
        case 3: _t->usedChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->gainSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->miscSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->usedSwitched((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VoltageDock::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VoltageDock::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_VoltageDock,
      qt_meta_data_VoltageDock, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VoltageDock::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VoltageDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VoltageDock::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VoltageDock))
        return static_cast<void*>(const_cast< VoltageDock*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int VoltageDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void VoltageDock::couplingChanged(unsigned int _t1, Dso::Coupling _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VoltageDock::gainChanged(unsigned int _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VoltageDock::modeChanged(Dso::MathMode _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VoltageDock::usedChanged(unsigned int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
static const uint qt_meta_data_SpectrumDock[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   14,   13,   13, 0x05,
      75,   62,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     104,   98,   13,   13, 0x0a,
     135,  127,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SpectrumDock[] = {
    "SpectrumDock\0\0channel,magnitude\0"
    "magnitudeChanged(uint,double)\0"
    "channel,used\0usedChanged(uint,bool)\0"
    "index\0magnitudeSelected(int)\0checked\0"
    "usedSwitched(bool)\0"
};

void SpectrumDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SpectrumDock *_t = static_cast<SpectrumDock *>(_o);
        switch (_id) {
        case 0: _t->magnitudeChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->usedChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->magnitudeSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->usedSwitched((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SpectrumDock::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SpectrumDock::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_SpectrumDock,
      qt_meta_data_SpectrumDock, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SpectrumDock::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SpectrumDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SpectrumDock::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpectrumDock))
        return static_cast<void*>(const_cast< SpectrumDock*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int SpectrumDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SpectrumDock::magnitudeChanged(unsigned int _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SpectrumDock::usedChanged(unsigned int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
