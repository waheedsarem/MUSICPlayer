/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "durationChanged",
    "",
    "duration",
    "positionChanged",
    "progress",
    "on_Button_pauseplay_clicked",
    "on_actionSelect_Audio_File_triggered",
    "on_pushButton_clicked",
    "on_RepeatButton_clicked",
    "handleMediaStatusChanged",
    "QMediaPlayer::MediaStatus",
    "status",
    "on_VolumeSlider_valueChanged",
    "value",
    "on_action1x_triggered",
    "on_action2x_triggered",
    "on_action1_5x_triggered",
    "on_action2x_2_triggered",
    "on_VolumeButton_clicked",
    "on_TimelineBar_valueChanged",
    "on_actionProperties_triggered",
    "on_ShuffleButton_clicked",
    "on_ForwardButton_clicked",
    "on_BackwardButton_clicked",
    "on_actionSelect_Artist_triggered",
    "handleArtistFound",
    "artistName"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  134,    2, 0x08,    1 /* Private */,
       4,    1,  137,    2, 0x08,    3 /* Private */,
       6,    0,  140,    2, 0x08,    5 /* Private */,
       7,    0,  141,    2, 0x08,    6 /* Private */,
       8,    0,  142,    2, 0x08,    7 /* Private */,
       9,    0,  143,    2, 0x08,    8 /* Private */,
      10,    1,  144,    2, 0x08,    9 /* Private */,
      13,    1,  147,    2, 0x08,   11 /* Private */,
      15,    0,  150,    2, 0x08,   13 /* Private */,
      16,    0,  151,    2, 0x08,   14 /* Private */,
      17,    0,  152,    2, 0x08,   15 /* Private */,
      18,    0,  153,    2, 0x08,   16 /* Private */,
      19,    0,  154,    2, 0x08,   17 /* Private */,
      20,    1,  155,    2, 0x08,   18 /* Private */,
      21,    0,  158,    2, 0x08,   20 /* Private */,
      22,    0,  159,    2, 0x08,   21 /* Private */,
      23,    0,  160,    2, 0x08,   22 /* Private */,
      24,    0,  161,    2, 0x08,   23 /* Private */,
      25,    0,  162,    2, 0x08,   24 /* Private */,
      26,    1,  163,    2, 0x08,   25 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, QMetaType::LongLong,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   27,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'durationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'positionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'on_Button_pauseplay_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSelect_Audio_File_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_RepeatButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleMediaStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMediaPlayer::MediaStatus, std::false_type>,
        // method 'on_VolumeSlider_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_action1x_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action2x_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action1_5x_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action2x_2_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_VolumeButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_TimelineBar_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_actionProperties_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ShuffleButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ForwardButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_BackwardButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSelect_Artist_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleArtistFound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->durationChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 1: _t->positionChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 2: _t->on_Button_pauseplay_clicked(); break;
        case 3: _t->on_actionSelect_Audio_File_triggered(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_RepeatButton_clicked(); break;
        case 6: _t->handleMediaStatusChanged((*reinterpret_cast< std::add_pointer_t<QMediaPlayer::MediaStatus>>(_a[1]))); break;
        case 7: _t->on_VolumeSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_action1x_triggered(); break;
        case 9: _t->on_action2x_triggered(); break;
        case 10: _t->on_action1_5x_triggered(); break;
        case 11: _t->on_action2x_2_triggered(); break;
        case 12: _t->on_VolumeButton_clicked(); break;
        case 13: _t->on_TimelineBar_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->on_actionProperties_triggered(); break;
        case 15: _t->on_ShuffleButton_clicked(); break;
        case 16: _t->on_ForwardButton_clicked(); break;
        case 17: _t->on_BackwardButton_clicked(); break;
        case 18: _t->on_actionSelect_Artist_triggered(); break;
        case 19: _t->handleArtistFound((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 20;
    }
    return _id;
}
QT_WARNING_POP
