# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ameya/ddp/Modify

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ameya/ddp/Modify

# Include any dependencies generated for this target.
include CMakeFiles/AABB_demo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AABB_demo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AABB_demo.dir/flags.make

CMakeFiles/AABB_demo.dir/AABB_demo.cpp.o: CMakeFiles/AABB_demo.dir/flags.make
CMakeFiles/AABB_demo.dir/AABB_demo.cpp.o: AABB_demo.cpp
CMakeFiles/AABB_demo.dir/AABB_demo.cpp.o: MainWindow_moc.cpp
CMakeFiles/AABB_demo.dir/AABB_demo.cpp.o: Viewer_moc.cpp
CMakeFiles/AABB_demo.dir/AABB_demo.cpp.o: Scene_moc.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ameya/ddp/Modify/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/AABB_demo.dir/AABB_demo.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/AABB_demo.dir/AABB_demo.cpp.o -c /home/ameya/ddp/Modify/AABB_demo.cpp

CMakeFiles/AABB_demo.dir/AABB_demo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AABB_demo.dir/AABB_demo.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ameya/ddp/Modify/AABB_demo.cpp > CMakeFiles/AABB_demo.dir/AABB_demo.cpp.i

CMakeFiles/AABB_demo.dir/AABB_demo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AABB_demo.dir/AABB_demo.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ameya/ddp/Modify/AABB_demo.cpp -o CMakeFiles/AABB_demo.dir/AABB_demo.cpp.s

CMakeFiles/AABB_demo.dir/AABB_demo.cpp.o.requires:
.PHONY : CMakeFiles/AABB_demo.dir/AABB_demo.cpp.o.requires

CMakeFiles/AABB_demo.dir/AABB_demo.cpp.o.provides: CMakeFiles/AABB_demo.dir/AABB_demo.cpp.o.requires
	$(MAKE) -f CMakeFiles/AABB_demo.dir/build.make CMakeFiles/AABB_demo.dir/AABB_demo.cpp.o.provides.build
.PHONY : CMakeFiles/AABB_demo.dir/AABB_demo.cpp.o.provides

CMakeFiles/AABB_demo.dir/AABB_demo.cpp.o.provides.build: CMakeFiles/AABB_demo.dir/AABB_demo.cpp.o

CMakeFiles/AABB_demo.dir/qrc_AABB_demo.cxx.o: CMakeFiles/AABB_demo.dir/flags.make
CMakeFiles/AABB_demo.dir/qrc_AABB_demo.cxx.o: qrc_AABB_demo.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ameya/ddp/Modify/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/AABB_demo.dir/qrc_AABB_demo.cxx.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/AABB_demo.dir/qrc_AABB_demo.cxx.o -c /home/ameya/ddp/Modify/qrc_AABB_demo.cxx

CMakeFiles/AABB_demo.dir/qrc_AABB_demo.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AABB_demo.dir/qrc_AABB_demo.cxx.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ameya/ddp/Modify/qrc_AABB_demo.cxx > CMakeFiles/AABB_demo.dir/qrc_AABB_demo.cxx.i

CMakeFiles/AABB_demo.dir/qrc_AABB_demo.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AABB_demo.dir/qrc_AABB_demo.cxx.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ameya/ddp/Modify/qrc_AABB_demo.cxx -o CMakeFiles/AABB_demo.dir/qrc_AABB_demo.cxx.s

CMakeFiles/AABB_demo.dir/qrc_AABB_demo.cxx.o.requires:
.PHONY : CMakeFiles/AABB_demo.dir/qrc_AABB_demo.cxx.o.requires

CMakeFiles/AABB_demo.dir/qrc_AABB_demo.cxx.o.provides: CMakeFiles/AABB_demo.dir/qrc_AABB_demo.cxx.o.requires
	$(MAKE) -f CMakeFiles/AABB_demo.dir/build.make CMakeFiles/AABB_demo.dir/qrc_AABB_demo.cxx.o.provides.build
.PHONY : CMakeFiles/AABB_demo.dir/qrc_AABB_demo.cxx.o.provides

CMakeFiles/AABB_demo.dir/qrc_AABB_demo.cxx.o.provides.build: CMakeFiles/AABB_demo.dir/qrc_AABB_demo.cxx.o

MainWindow_moc.cpp: MainWindow.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ameya/ddp/Modify/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating MainWindow_moc.cpp"
	/usr/bin/moc-qt4 -I/home/ameya/ddp/Modify/../../include -I/home/ameya/ddp/Modify/./include -I/home/ameya/ddp/Modify/. -I/usr/include -I/home/ameya/ddp/Modify -I/home/ameya/ddp/CGAL-4.3/include -I/usr/include/qt4 -I/usr/include/qt4/QtOpenGL -I/usr/include/qt4/QtScript -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtXml -I/usr/include/qt4/QtCore -DCGAL_USE_MPFR -DCGAL_USE_GMP -DQT_OPENGL_LIB -DQT_SCRIPT_LIB -DQT_GUI_LIB -DQT_XML_LIB -DQT_CORE_LIB -o /home/ameya/ddp/Modify/MainWindow_moc.cpp /home/ameya/ddp/Modify/MainWindow.h

Viewer_moc.cpp: Viewer.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ameya/ddp/Modify/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating Viewer_moc.cpp"
	/usr/bin/moc-qt4 -I/home/ameya/ddp/Modify/../../include -I/home/ameya/ddp/Modify/./include -I/home/ameya/ddp/Modify/. -I/usr/include -I/home/ameya/ddp/Modify -I/home/ameya/ddp/CGAL-4.3/include -I/usr/include/qt4 -I/usr/include/qt4/QtOpenGL -I/usr/include/qt4/QtScript -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtXml -I/usr/include/qt4/QtCore -DCGAL_USE_MPFR -DCGAL_USE_GMP -DQT_OPENGL_LIB -DQT_SCRIPT_LIB -DQT_GUI_LIB -DQT_XML_LIB -DQT_CORE_LIB -o /home/ameya/ddp/Modify/Viewer_moc.cpp /home/ameya/ddp/Modify/Viewer.h

Scene_moc.cpp: Scene.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ameya/ddp/Modify/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating Scene_moc.cpp"
	/usr/bin/moc-qt4 -I/home/ameya/ddp/Modify/../../include -I/home/ameya/ddp/Modify/./include -I/home/ameya/ddp/Modify/. -I/usr/include -I/home/ameya/ddp/Modify -I/home/ameya/ddp/CGAL-4.3/include -I/usr/include/qt4 -I/usr/include/qt4/QtOpenGL -I/usr/include/qt4/QtScript -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtXml -I/usr/include/qt4/QtCore -DCGAL_USE_MPFR -DCGAL_USE_GMP -DQT_OPENGL_LIB -DQT_SCRIPT_LIB -DQT_GUI_LIB -DQT_XML_LIB -DQT_CORE_LIB -o /home/ameya/ddp/Modify/Scene_moc.cpp /home/ameya/ddp/Modify/Scene.h

ui_MainWindow.h: MainWindow.ui
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ameya/ddp/Modify/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ui_MainWindow.h"
	/usr/bin/uic-qt4 -o /home/ameya/ddp/Modify/ui_MainWindow.h /home/ameya/ddp/Modify/MainWindow.ui

qrc_AABB_demo.cxx: resources/cgal_logo.xpm
qrc_AABB_demo.cxx: resources/about.html
qrc_AABB_demo.cxx: AABB_demo.qrc.depends
qrc_AABB_demo.cxx: AABB_demo.qrc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ameya/ddp/Modify/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating qrc_AABB_demo.cxx"
	/usr/bin/rcc -name AABB_demo -o /home/ameya/ddp/Modify/qrc_AABB_demo.cxx /home/ameya/ddp/Modify/AABB_demo.qrc

# Object files for target AABB_demo
AABB_demo_OBJECTS = \
"CMakeFiles/AABB_demo.dir/AABB_demo.cpp.o" \
"CMakeFiles/AABB_demo.dir/qrc_AABB_demo.cxx.o"

# External object files for target AABB_demo
AABB_demo_EXTERNAL_OBJECTS =

AABB_demo: CMakeFiles/AABB_demo.dir/AABB_demo.cpp.o
AABB_demo: CMakeFiles/AABB_demo.dir/qrc_AABB_demo.cxx.o
AABB_demo: /usr/lib/i386-linux-gnu/libmpfr.so
AABB_demo: /usr/lib/i386-linux-gnu/libgmp.so
AABB_demo: /home/ameya/ddp/CGAL-4.3/lib/libCGAL_Qt4.so
AABB_demo: /home/ameya/ddp/CGAL-4.3/lib/libCGAL.so
AABB_demo: /usr/lib/libboost_thread-mt.so
AABB_demo: /usr/lib/libboost_system-mt.so
AABB_demo: /usr/lib/i386-linux-gnu/libQtOpenGL.so
AABB_demo: /usr/lib/i386-linux-gnu/libQtGui.so
AABB_demo: /usr/lib/i386-linux-gnu/libQtCore.so
AABB_demo: /usr/lib/i386-linux-gnu/libGLU.so
AABB_demo: /usr/lib/i386-linux-gnu/libGL.so
AABB_demo: /usr/lib/i386-linux-gnu/libSM.so
AABB_demo: /usr/lib/i386-linux-gnu/libICE.so
AABB_demo: /usr/lib/i386-linux-gnu/libX11.so
AABB_demo: /usr/lib/i386-linux-gnu/libXext.so
AABB_demo: /usr/lib/i386-linux-gnu/libQtOpenGL.so
AABB_demo: /usr/lib/i386-linux-gnu/libQtScript.so
AABB_demo: /usr/lib/i386-linux-gnu/libQtGui.so
AABB_demo: /usr/lib/i386-linux-gnu/libQtXml.so
AABB_demo: /usr/lib/i386-linux-gnu/libQtCore.so
AABB_demo: /home/ameya/ddp/CGAL-4.3/lib/libCGAL_Qt4.so
AABB_demo: /home/ameya/ddp/CGAL-4.3/lib/libCGAL.so
AABB_demo: /usr/lib/libboost_thread-mt.so
AABB_demo: /usr/lib/libboost_system-mt.so
AABB_demo: /usr/lib/i386-linux-gnu/libQtOpenGL.so
AABB_demo: /usr/lib/i386-linux-gnu/libQtGui.so
AABB_demo: /usr/lib/i386-linux-gnu/libQtCore.so
AABB_demo: /usr/lib/i386-linux-gnu/libGLU.so
AABB_demo: /usr/lib/i386-linux-gnu/libGL.so
AABB_demo: /usr/lib/i386-linux-gnu/libSM.so
AABB_demo: /usr/lib/i386-linux-gnu/libICE.so
AABB_demo: /usr/lib/i386-linux-gnu/libX11.so
AABB_demo: /usr/lib/i386-linux-gnu/libXext.so
AABB_demo: /usr/lib/i386-linux-gnu/libqglviewer-qt4.so
AABB_demo: /usr/lib/i386-linux-gnu/libGL.so
AABB_demo: /usr/lib/i386-linux-gnu/libGLU.so
AABB_demo: /home/ameya/ddp/CGAL-4.3/lib/libCGAL_Qt4.so
AABB_demo: /home/ameya/ddp/CGAL-4.3/lib/libCGAL.so
AABB_demo: /usr/lib/libboost_thread-mt.so
AABB_demo: /usr/lib/libboost_system-mt.so
AABB_demo: /usr/lib/i386-linux-gnu/libQtOpenGL.so
AABB_demo: /usr/lib/i386-linux-gnu/libQtGui.so
AABB_demo: /usr/lib/i386-linux-gnu/libQtCore.so
AABB_demo: /usr/lib/i386-linux-gnu/libSM.so
AABB_demo: /usr/lib/i386-linux-gnu/libICE.so
AABB_demo: /usr/lib/i386-linux-gnu/libX11.so
AABB_demo: /usr/lib/i386-linux-gnu/libXext.so
AABB_demo: /usr/lib/i386-linux-gnu/libQtScript.so
AABB_demo: /usr/lib/i386-linux-gnu/libQtXml.so
AABB_demo: /usr/lib/i386-linux-gnu/libqglviewer-qt4.so
AABB_demo: CMakeFiles/AABB_demo.dir/build.make
AABB_demo: CMakeFiles/AABB_demo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable AABB_demo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AABB_demo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AABB_demo.dir/build: AABB_demo
.PHONY : CMakeFiles/AABB_demo.dir/build

CMakeFiles/AABB_demo.dir/requires: CMakeFiles/AABB_demo.dir/AABB_demo.cpp.o.requires
CMakeFiles/AABB_demo.dir/requires: CMakeFiles/AABB_demo.dir/qrc_AABB_demo.cxx.o.requires
.PHONY : CMakeFiles/AABB_demo.dir/requires

CMakeFiles/AABB_demo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AABB_demo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AABB_demo.dir/clean

CMakeFiles/AABB_demo.dir/depend: MainWindow_moc.cpp
CMakeFiles/AABB_demo.dir/depend: Viewer_moc.cpp
CMakeFiles/AABB_demo.dir/depend: Scene_moc.cpp
CMakeFiles/AABB_demo.dir/depend: ui_MainWindow.h
CMakeFiles/AABB_demo.dir/depend: qrc_AABB_demo.cxx
	cd /home/ameya/ddp/Modify && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ameya/ddp/Modify /home/ameya/ddp/Modify /home/ameya/ddp/Modify /home/ameya/ddp/Modify /home/ameya/ddp/Modify/CMakeFiles/AABB_demo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AABB_demo.dir/depend

