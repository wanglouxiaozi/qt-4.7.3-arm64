/****************************************************************************
** Meta object code from reading C++ file 'person.h'
**
** Created: Tue Aug 21 17:00:51 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../person.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'person.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Person[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      15,    7, 0x0a095103,
      24,   20, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_Person[] = {
    "Person\0QString\0name\0int\0shoeSize\0"
};

const QMetaObject Person::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Person,
      qt_meta_data_Person, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Person::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Person::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Person::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Person))
        return static_cast<void*>(const_cast< Person*>(this));
    return QObject::qt_metacast(_clname);
}

int Person::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = name(); break;
        case 1: *reinterpret_cast< int*>(_v) = shoeSize(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: setShoeSize(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_Boy[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_Boy[] = {
    "Boy\0"
};

const QMetaObject Boy::staticMetaObject = {
    { &Person::staticMetaObject, qt_meta_stringdata_Boy,
      qt_meta_data_Boy, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Boy::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Boy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Boy::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Boy))
        return static_cast<void*>(const_cast< Boy*>(this));
    return Person::qt_metacast(_clname);
}

int Boy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Person::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Girl[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_Girl[] = {
    "Girl\0"
};

const QMetaObject Girl::staticMetaObject = {
    { &Person::staticMetaObject, qt_meta_stringdata_Girl,
      qt_meta_data_Girl, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Girl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Girl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Girl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Girl))
        return static_cast<void*>(const_cast< Girl*>(this));
    return Person::qt_metacast(_clname);
}

int Girl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Person::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
