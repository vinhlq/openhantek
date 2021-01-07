/****************************************************************************
** Meta object code from reading C++ file 'dataanalyzer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/dataanalyzer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dataanalyzer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DataAnalyzer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      64,   37,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DataAnalyzer[] = {
    "DataAnalyzer\0\0samples\0analyzed(uint)\0"
    "data,size,samplerate,mutex\0"
    "analyze(const QList<double*>*,const QList<uint>*,double,QMutex*)\0"
};

void DataAnalyzer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DataAnalyzer *_t = static_cast<DataAnalyzer *>(_o);
        switch (_id) {
        case 0: _t->analyzed((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->analyze((*reinterpret_cast< const QList<double*>*(*)>(_a[1])),(*reinterpret_cast< const QList<uint>*(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< QMutex*(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DataAnalyzer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DataAnalyzer::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_DataAnalyzer,
      qt_meta_data_DataAnalyzer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DataAnalyzer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DataAnalyzer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DataAnalyzer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DataAnalyzer))
        return static_cast<void*>(const_cast< DataAnalyzer*>(this));
    return QThread::qt_metacast(_clname);
}

int DataAnalyzer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void DataAnalyzer::analyzed(unsigned int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
