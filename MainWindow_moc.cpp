/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created: Tue Jan 28 00:11:01 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MainWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      40,   31,   11,   11, 0x0a,
      54,   11,   11,   11, 0x0a,
     109,   11,   11,   11, 0x09,
     116,   11,   11,   11, 0x09,
     131,   11,   11,   11, 0x09,
     153,  147,   11,   11, 0x09,
     176,  147,   11,   11, 0x09,
     201,  147,   11,   11, 0x09,
     234,   11,   11,   11, 0x09,
     270,   11,   11,   11, 0x09,
     305,   11,   11,   11, 0x09,
     340,   11,   11,   11, 0x09,
     374,   11,   11,   11, 0x09,
     410,   11,   11,   11, 0x09,
     451,   11,   11,   11, 0x09,
     484,   11,   11,   11, 0x09,
     517,   11,   11,   11, 0x09,
     552,   11,   11,   11, 0x09,
     589,   11,   11,   11, 0x09,
     627,   11,   11,   11, 0x09,
     666,   11,   11,   11, 0x09,
     706,   11,   11,   11, 0x09,
     762,   11,   11,   11, 0x09,
     819,   11,   11,   11, 0x09,
     877,   11,   11,   11, 0x09,
     925,   11,   11,   11, 0x09,
     965,   11,   11,   11, 0x09,
     999,   11,   11,   11, 0x09,
    1036,   11,   11,   11, 0x09,
    1077,   11,   11,   11, 0x09,
    1117,   11,   11,   11, 0x09,
    1161,   11,   11,   11, 0x09,
    1209,   11,   11,   11, 0x09,
    1242,   11,   11,   11, 0x09,
    1277,   11,   11,   11, 0x09,
    1314,   11,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0updateViewerBBox()\0filename\0"
    "open(QString)\0"
    "setAddKeyFrameKeyboardModifiers(Qt::KeyboardModifiers)\0"
    "quit()\0readSettings()\0writeSettings()\0"
    "event\0dropEvent(QDropEvent*)\0"
    "closeEvent(QCloseEvent*)\0"
    "dragEnterEvent(QDragEnterEvent*)\0"
    "on_actionLoadPolyhedron_triggered()\0"
    "on_actionSave_snapshot_triggered()\0"
    "on_actionCopy_snapshot_triggered()\0"
    "on_actionClear_points_triggered()\0"
    "on_actionClear_segments_triggered()\0"
    "on_actionClear_cutting_plane_triggered()\0"
    "on_actionRefine_loop_triggered()\0"
    "on_actionEdge_points_triggered()\0"
    "on_actionInside_points_triggered()\0"
    "on_actionBoundary_points_triggered()\0"
    "on_actionRefine_bisection_triggered()\0"
    "on_actionBoundary_segments_triggered()\0"
    "on_actionPoints_in_interval_triggered()\0"
    "on_actionSigned_distance_function_to_facets_triggered()\0"
    "on_actionUnsigned_distance_function_to_edges_triggered()\0"
    "on_actionUnsigned_distance_function_to_facets_triggered()\0"
    "on_actionIntersection_cutting_plane_triggered()\0"
    "on_actionCutting_plane_none_triggered()\0"
    "on_actionBench_memory_triggered()\0"
    "on_actionBench_distances_triggered()\0"
    "on_actionBench_intersections_triggered()\0"
    "on_actionBench_construction_triggered()\0"
    "on_actionBench_distances_vs_nbt_triggered()\0"
    "on_actionBench_intersections_vs_nbt_triggered()\0"
    "on_actionView_points_triggered()\0"
    "on_actionView_segments_triggered()\0"
    "on_actionView_polyhedron_triggered()\0"
    "on_actionView_cutting_plane_triggered()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->updateViewerBBox(); break;
        case 1: _t->open((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setAddKeyFrameKeyboardModifiers((*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[1]))); break;
        case 3: _t->quit(); break;
        case 4: _t->readSettings(); break;
        case 5: _t->writeSettings(); break;
        case 6: _t->dropEvent((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        case 7: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 8: _t->dragEnterEvent((*reinterpret_cast< QDragEnterEvent*(*)>(_a[1]))); break;
        case 9: _t->on_actionLoadPolyhedron_triggered(); break;
        case 10: _t->on_actionSave_snapshot_triggered(); break;
        case 11: _t->on_actionCopy_snapshot_triggered(); break;
        case 12: _t->on_actionClear_points_triggered(); break;
        case 13: _t->on_actionClear_segments_triggered(); break;
        case 14: _t->on_actionClear_cutting_plane_triggered(); break;
        case 15: _t->on_actionRefine_loop_triggered(); break;
        case 16: _t->on_actionEdge_points_triggered(); break;
        case 17: _t->on_actionInside_points_triggered(); break;
        case 18: _t->on_actionBoundary_points_triggered(); break;
        case 19: _t->on_actionRefine_bisection_triggered(); break;
        case 20: _t->on_actionBoundary_segments_triggered(); break;
        case 21: _t->on_actionPoints_in_interval_triggered(); break;
        case 22: _t->on_actionSigned_distance_function_to_facets_triggered(); break;
        case 23: _t->on_actionUnsigned_distance_function_to_edges_triggered(); break;
        case 24: _t->on_actionUnsigned_distance_function_to_facets_triggered(); break;
        case 25: _t->on_actionIntersection_cutting_plane_triggered(); break;
        case 26: _t->on_actionCutting_plane_none_triggered(); break;
        case 27: _t->on_actionBench_memory_triggered(); break;
        case 28: _t->on_actionBench_distances_triggered(); break;
        case 29: _t->on_actionBench_intersections_triggered(); break;
        case 30: _t->on_actionBench_construction_triggered(); break;
        case 31: _t->on_actionBench_distances_vs_nbt_triggered(); break;
        case 32: _t->on_actionBench_intersections_vs_nbt_triggered(); break;
        case 33: _t->on_actionView_points_triggered(); break;
        case 34: _t->on_actionView_segments_triggered(); break;
        case 35: _t->on_actionView_polyhedron_triggered(); break;
        case 36: _t->on_actionView_cutting_plane_triggered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &CGAL::Qt::DemosMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    typedef CGAL::Qt::DemosMainWindow QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CGAL::Qt::DemosMainWindow QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
