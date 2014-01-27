/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created: Tue Jan 28 00:11:07 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QWidget>
#include "Viewer.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionLoadPolyhedron;
    QAction *actionInside_points;
    QAction *actionBench_distances;
    QAction *actionUnsigned_distance_function_to_facets;
    QAction *actionUnsigned_distance_function_to_edges;
    QAction *actionSigned_distance_function_to_facets;
    QAction *actionView_polyhedron;
    QAction *actionView_points;
    QAction *actionClear_points;
    QAction *actionBoundary_segments;
    QAction *actionBoundary_points;
    QAction *actionClear_segments;
    QAction *actionView_segments;
    QAction *actionEdge_points;
    QAction *actionBench_intersections;
    QAction *actionView_distance_function;
    QAction *actionClear_distance_function;
    QAction *actionRefine_bisection;
    QAction *actionLoop_subdivision;
    QAction *actionBench_memory;
    QAction *actionBench_construction;
    QAction *actionBench_intersections_vs_nbt;
    QAction *actionBench_distances_vs_nbt;
    QAction *actionPoints_in_interval;
    QAction *actionSave_snapshot;
    QAction *actionCopy_snapshot;
    QAction *actionRefine_loop;
    QAction *actionIntersection_cutting_plane;
    QAction *actionView_cutting_plane;
    QAction *actionClear_cutting_plane;
    QAction *actionCutting_plane_none;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    Viewer *viewer;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuAlgorithms;
    QMenu *menuRefine;
    QMenu *menuCut_plane;
    QMenu *menuBenchmarks;
    QMenu *menuAgainst_triangles;
    QMenu *menuEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(638, 495);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/cgal/icons/resources/cgal_logo.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionLoadPolyhedron = new QAction(MainWindow);
        actionLoadPolyhedron->setObjectName(QString::fromUtf8("actionLoadPolyhedron"));
        actionInside_points = new QAction(MainWindow);
        actionInside_points->setObjectName(QString::fromUtf8("actionInside_points"));
        actionBench_distances = new QAction(MainWindow);
        actionBench_distances->setObjectName(QString::fromUtf8("actionBench_distances"));
        actionUnsigned_distance_function_to_facets = new QAction(MainWindow);
        actionUnsigned_distance_function_to_facets->setObjectName(QString::fromUtf8("actionUnsigned_distance_function_to_facets"));
        actionUnsigned_distance_function_to_edges = new QAction(MainWindow);
        actionUnsigned_distance_function_to_edges->setObjectName(QString::fromUtf8("actionUnsigned_distance_function_to_edges"));
        actionSigned_distance_function_to_facets = new QAction(MainWindow);
        actionSigned_distance_function_to_facets->setObjectName(QString::fromUtf8("actionSigned_distance_function_to_facets"));
        actionView_polyhedron = new QAction(MainWindow);
        actionView_polyhedron->setObjectName(QString::fromUtf8("actionView_polyhedron"));
        actionView_points = new QAction(MainWindow);
        actionView_points->setObjectName(QString::fromUtf8("actionView_points"));
        actionClear_points = new QAction(MainWindow);
        actionClear_points->setObjectName(QString::fromUtf8("actionClear_points"));
        actionBoundary_segments = new QAction(MainWindow);
        actionBoundary_segments->setObjectName(QString::fromUtf8("actionBoundary_segments"));
        actionBoundary_points = new QAction(MainWindow);
        actionBoundary_points->setObjectName(QString::fromUtf8("actionBoundary_points"));
        actionClear_segments = new QAction(MainWindow);
        actionClear_segments->setObjectName(QString::fromUtf8("actionClear_segments"));
        actionView_segments = new QAction(MainWindow);
        actionView_segments->setObjectName(QString::fromUtf8("actionView_segments"));
        actionEdge_points = new QAction(MainWindow);
        actionEdge_points->setObjectName(QString::fromUtf8("actionEdge_points"));
        actionBench_intersections = new QAction(MainWindow);
        actionBench_intersections->setObjectName(QString::fromUtf8("actionBench_intersections"));
        actionView_distance_function = new QAction(MainWindow);
        actionView_distance_function->setObjectName(QString::fromUtf8("actionView_distance_function"));
        actionClear_distance_function = new QAction(MainWindow);
        actionClear_distance_function->setObjectName(QString::fromUtf8("actionClear_distance_function"));
        actionRefine_bisection = new QAction(MainWindow);
        actionRefine_bisection->setObjectName(QString::fromUtf8("actionRefine_bisection"));
        actionLoop_subdivision = new QAction(MainWindow);
        actionLoop_subdivision->setObjectName(QString::fromUtf8("actionLoop_subdivision"));
        actionBench_memory = new QAction(MainWindow);
        actionBench_memory->setObjectName(QString::fromUtf8("actionBench_memory"));
        actionBench_construction = new QAction(MainWindow);
        actionBench_construction->setObjectName(QString::fromUtf8("actionBench_construction"));
        actionBench_intersections_vs_nbt = new QAction(MainWindow);
        actionBench_intersections_vs_nbt->setObjectName(QString::fromUtf8("actionBench_intersections_vs_nbt"));
        actionBench_distances_vs_nbt = new QAction(MainWindow);
        actionBench_distances_vs_nbt->setObjectName(QString::fromUtf8("actionBench_distances_vs_nbt"));
        actionPoints_in_interval = new QAction(MainWindow);
        actionPoints_in_interval->setObjectName(QString::fromUtf8("actionPoints_in_interval"));
        actionSave_snapshot = new QAction(MainWindow);
        actionSave_snapshot->setObjectName(QString::fromUtf8("actionSave_snapshot"));
        actionCopy_snapshot = new QAction(MainWindow);
        actionCopy_snapshot->setObjectName(QString::fromUtf8("actionCopy_snapshot"));
        actionRefine_loop = new QAction(MainWindow);
        actionRefine_loop->setObjectName(QString::fromUtf8("actionRefine_loop"));
        actionIntersection_cutting_plane = new QAction(MainWindow);
        actionIntersection_cutting_plane->setObjectName(QString::fromUtf8("actionIntersection_cutting_plane"));
        actionView_cutting_plane = new QAction(MainWindow);
        actionView_cutting_plane->setObjectName(QString::fromUtf8("actionView_cutting_plane"));
        actionClear_cutting_plane = new QAction(MainWindow);
        actionClear_cutting_plane->setObjectName(QString::fromUtf8("actionClear_cutting_plane"));
        actionCutting_plane_none = new QAction(MainWindow);
        actionCutting_plane_none->setObjectName(QString::fromUtf8("actionCutting_plane_none"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        viewer = new Viewer(centralwidget);
        viewer->setObjectName(QString::fromUtf8("viewer"));
        viewer->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        gridLayout->addWidget(viewer, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 638, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuAlgorithms = new QMenu(menubar);
        menuAlgorithms->setObjectName(QString::fromUtf8("menuAlgorithms"));
        menuRefine = new QMenu(menuAlgorithms);
        menuRefine->setObjectName(QString::fromUtf8("menuRefine"));
        menuCut_plane = new QMenu(menuAlgorithms);
        menuCut_plane->setObjectName(QString::fromUtf8("menuCut_plane"));
        menuBenchmarks = new QMenu(menubar);
        menuBenchmarks->setObjectName(QString::fromUtf8("menuBenchmarks"));
        menuAgainst_triangles = new QMenu(menuBenchmarks);
        menuAgainst_triangles->setObjectName(QString::fromUtf8("menuAgainst_triangles"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuAlgorithms->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuBenchmarks->menuAction());
        menuFile->addAction(actionLoadPolyhedron);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuView->addAction(actionView_points);
        menuView->addAction(actionView_cutting_plane);
        menuView->addAction(actionView_segments);
        menuView->addAction(actionView_polyhedron);
        menuAlgorithms->addAction(actionEdge_points);
        menuAlgorithms->addAction(actionInside_points);
        menuAlgorithms->addAction(actionPoints_in_interval);
        menuAlgorithms->addAction(actionBoundary_points);
        menuAlgorithms->addAction(actionBoundary_segments);
        menuAlgorithms->addSeparator();
        menuAlgorithms->addAction(menuCut_plane->menuAction());
        menuAlgorithms->addAction(menuRefine->menuAction());
        menuRefine->addAction(actionRefine_bisection);
        menuRefine->addAction(actionRefine_loop);
        menuCut_plane->addAction(actionCutting_plane_none);
        menuCut_plane->addAction(actionIntersection_cutting_plane);
        menuCut_plane->addAction(actionSigned_distance_function_to_facets);
        menuCut_plane->addAction(actionUnsigned_distance_function_to_facets);
        menuCut_plane->addAction(actionUnsigned_distance_function_to_edges);
        menuBenchmarks->addAction(actionBench_distances);
        menuBenchmarks->addAction(actionBench_intersections);
        menuBenchmarks->addAction(menuAgainst_triangles->menuAction());
        menuAgainst_triangles->addAction(actionBench_memory);
        menuAgainst_triangles->addAction(actionBench_construction);
        menuAgainst_triangles->addAction(actionBench_intersections_vs_nbt);
        menuAgainst_triangles->addAction(actionBench_distances_vs_nbt);
        menuEdit->addAction(actionClear_points);
        menuEdit->addAction(actionClear_segments);
        menuEdit->addAction(actionClear_cutting_plane);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCopy_snapshot);
        menuEdit->addAction(actionSave_snapshot);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CGAL AABB tree demo", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "&Quit", 0, QApplication::UnicodeUTF8));
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionLoadPolyhedron->setText(QApplication::translate("MainWindow", "Load polyhedron...", 0, QApplication::UnicodeUTF8));
        actionInside_points->setText(QApplication::translate("MainWindow", "Inside points...", 0, QApplication::UnicodeUTF8));
        actionBench_distances->setText(QApplication::translate("MainWindow", "Distances", 0, QApplication::UnicodeUTF8));
        actionUnsigned_distance_function_to_facets->setText(QApplication::translate("MainWindow", "Unsigned distance function to facets", 0, QApplication::UnicodeUTF8));
        actionUnsigned_distance_function_to_edges->setText(QApplication::translate("MainWindow", "Unsigned distance function to edges", 0, QApplication::UnicodeUTF8));
        actionSigned_distance_function_to_facets->setText(QApplication::translate("MainWindow", "Signed distance function to facets", 0, QApplication::UnicodeUTF8));
        actionView_polyhedron->setText(QApplication::translate("MainWindow", "Polyhedron", 0, QApplication::UnicodeUTF8));
        actionView_polyhedron->setShortcut(QApplication::translate("MainWindow", "P", 0, QApplication::UnicodeUTF8));
        actionView_points->setText(QApplication::translate("MainWindow", "Points", 0, QApplication::UnicodeUTF8));
        actionClear_points->setText(QApplication::translate("MainWindow", "Clear points", 0, QApplication::UnicodeUTF8));
        actionBoundary_segments->setText(QApplication::translate("MainWindow", "Boundary segments...", 0, QApplication::UnicodeUTF8));
        actionBoundary_points->setText(QApplication::translate("MainWindow", "Boundary points...", 0, QApplication::UnicodeUTF8));
        actionClear_segments->setText(QApplication::translate("MainWindow", "Clear segments", 0, QApplication::UnicodeUTF8));
        actionView_segments->setText(QApplication::translate("MainWindow", "Segments", 0, QApplication::UnicodeUTF8));
        actionEdge_points->setText(QApplication::translate("MainWindow", "Edge points...", 0, QApplication::UnicodeUTF8));
        actionBench_intersections->setText(QApplication::translate("MainWindow", "Intersections", 0, QApplication::UnicodeUTF8));
        actionView_distance_function->setText(QApplication::translate("MainWindow", "Distance function", 0, QApplication::UnicodeUTF8));
        actionClear_distance_function->setText(QApplication::translate("MainWindow", "Clear distance function", 0, QApplication::UnicodeUTF8));
        actionRefine_bisection->setText(QApplication::translate("MainWindow", "Longest edge bisection", 0, QApplication::UnicodeUTF8));
        actionLoop_subdivision->setText(QApplication::translate("MainWindow", "Loop subdivision", 0, QApplication::UnicodeUTF8));
        actionBench_memory->setText(QApplication::translate("MainWindow", "Memory", 0, QApplication::UnicodeUTF8));
        actionBench_construction->setText(QApplication::translate("MainWindow", "Construction", 0, QApplication::UnicodeUTF8));
        actionBench_intersections_vs_nbt->setText(QApplication::translate("MainWindow", "Intersections", 0, QApplication::UnicodeUTF8));
        actionBench_distances_vs_nbt->setText(QApplication::translate("MainWindow", "Distances", 0, QApplication::UnicodeUTF8));
        actionPoints_in_interval->setText(QApplication::translate("MainWindow", "Points in interval...", 0, QApplication::UnicodeUTF8));
        actionSave_snapshot->setText(QApplication::translate("MainWindow", "Save snapshot", 0, QApplication::UnicodeUTF8));
        actionCopy_snapshot->setText(QApplication::translate("MainWindow", "Copy snapshot", 0, QApplication::UnicodeUTF8));
        actionRefine_loop->setText(QApplication::translate("MainWindow", "Loop subdivision", 0, QApplication::UnicodeUTF8));
        actionIntersection_cutting_plane->setText(QApplication::translate("MainWindow", "Intersection", 0, QApplication::UnicodeUTF8));
        actionView_cutting_plane->setText(QApplication::translate("MainWindow", "Cut plane", 0, QApplication::UnicodeUTF8));
        actionClear_cutting_plane->setText(QApplication::translate("MainWindow", "Clear cutting plane", 0, QApplication::UnicodeUTF8));
        actionCutting_plane_none->setText(QApplication::translate("MainWindow", "None", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("MainWindow", "&View", 0, QApplication::UnicodeUTF8));
        menuAlgorithms->setTitle(QApplication::translate("MainWindow", "Algorithms", 0, QApplication::UnicodeUTF8));
        menuRefine->setTitle(QApplication::translate("MainWindow", "Refine", 0, QApplication::UnicodeUTF8));
        menuCut_plane->setTitle(QApplication::translate("MainWindow", "Cut plane", 0, QApplication::UnicodeUTF8));
        menuBenchmarks->setTitle(QApplication::translate("MainWindow", "Benchmark", 0, QApplication::UnicodeUTF8));
        menuAgainst_triangles->setTitle(QApplication::translate("MainWindow", "Against #triangles", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
