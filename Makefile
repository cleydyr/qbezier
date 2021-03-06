#############################################################################
# Makefile for building: pg
# Generated by qmake (2.01a) (Qt 4.6.2) on: ter jul 31 15:24:57 2012
# Project:  pg.pro
# Template: app
# Command: /usr/bin/qmake-qt4 -spec /usr/share/qt4/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile pg.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_OPENGL_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtOpenGL -I/usr/include/qt4 -I/usr/X11R6/include -I. -I.
LINK          = g++
LFLAGS        = 
LIBS          = $(SUBLIBS)  -L/usr/lib -L/usr/X11R6/lib -lQtOpenGL -lQtGui -lQtCore -lGLU -lGL -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake-qt4
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		visortowidget.cpp \
		superficiebezier.cpp \
		ponto3d.cpp \
		janelaprincipal.cpp \
		dialogoinicialmn.cpp \
		widgetglsuperficie.cpp \
		stwidget.cpp \
		vetor3d.cpp moc_visortowidget.cpp \
		moc_superficiebezier.cpp \
		moc_janelaprincipal.cpp \
		moc_dialogoinicialmn.cpp \
		moc_stwidget.cpp
OBJECTS       = main.o \
		visortowidget.o \
		superficiebezier.o \
		ponto3d.o \
		janelaprincipal.o \
		dialogoinicialmn.o \
		widgetglsuperficie.o \
		stwidget.o \
		vetor3d.o \
		moc_visortowidget.o \
		moc_superficiebezier.o \
		moc_janelaprincipal.o \
		moc_dialogoinicialmn.o \
		moc_stwidget.o
DIST          = /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/opengl.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		pg.pro
QMAKE_TARGET  = pg
DESTDIR       = 
TARGET        = pg

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_JanelaPrincipal.h ui_visortowidget.h ui_dialogoinicialmn.h ui_stwidget.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: pg.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/opengl.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/libQtOpenGL.prl \
		/usr/lib/libQtGui.prl \
		/usr/lib/libQtCore.prl
	$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile pg.pro
/usr/share/qt4/mkspecs/common/g++.conf:
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/debug.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/opengl.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/libQtOpenGL.prl:
/usr/lib/libQtGui.prl:
/usr/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile pg.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/pg1.0.0 || $(MKDIR) .tmp/pg1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/pg1.0.0/ && $(COPY_FILE) --parents visortowidget.h superficiebezier.h ponto3d.h janelaprincipal.h dialogoinicialmn.h widgetglsuperficie.h stwidget.h texto.h vetor3d.h .tmp/pg1.0.0/ && $(COPY_FILE) --parents main.cpp visortowidget.cpp superficiebezier.cpp ponto3d.cpp janelaprincipal.cpp dialogoinicialmn.cpp widgetglsuperficie.cpp stwidget.cpp vetor3d.cpp .tmp/pg1.0.0/ && $(COPY_FILE) --parents JanelaPrincipal.ui visortowidget.ui dialogoinicialmn.ui stwidget.ui .tmp/pg1.0.0/ && (cd `dirname .tmp/pg1.0.0` && $(TAR) pg1.0.0.tar pg1.0.0 && $(COMPRESS) pg1.0.0.tar) && $(MOVE) `dirname .tmp/pg1.0.0`/pg1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/pg1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_visortowidget.cpp moc_superficiebezier.cpp moc_janelaprincipal.cpp moc_dialogoinicialmn.cpp moc_stwidget.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_visortowidget.cpp moc_superficiebezier.cpp moc_janelaprincipal.cpp moc_dialogoinicialmn.cpp moc_stwidget.cpp
moc_visortowidget.cpp: superficiebezier.h \
		ponto3d.h \
		vetor3d.h \
		visortowidget.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) visortowidget.h -o moc_visortowidget.cpp

moc_superficiebezier.cpp: ponto3d.h \
		vetor3d.h \
		superficiebezier.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) superficiebezier.h -o moc_superficiebezier.cpp

moc_janelaprincipal.cpp: superficiebezier.h \
		ponto3d.h \
		vetor3d.h \
		janelaprincipal.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) janelaprincipal.h -o moc_janelaprincipal.cpp

moc_dialogoinicialmn.cpp: dialogoinicialmn.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) dialogoinicialmn.h -o moc_dialogoinicialmn.cpp

moc_stwidget.cpp: stwidget.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) stwidget.h -o moc_stwidget.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_JanelaPrincipal.h ui_visortowidget.h ui_dialogoinicialmn.h ui_stwidget.h
compiler_uic_clean:
	-$(DEL_FILE) ui_JanelaPrincipal.h ui_visortowidget.h ui_dialogoinicialmn.h ui_stwidget.h
ui_JanelaPrincipal.h: JanelaPrincipal.ui \
		stwidget.h \
		widgetglsuperficie.h \
		visortowidget.h \
		superficiebezier.h \
		ponto3d.h \
		vetor3d.h \
		superficiebezier.h \
		ponto3d.h \
		vetor3d.h
	/usr/bin/uic-qt4 JanelaPrincipal.ui -o ui_JanelaPrincipal.h

ui_visortowidget.h: visortowidget.ui
	/usr/bin/uic-qt4 visortowidget.ui -o ui_visortowidget.h

ui_dialogoinicialmn.h: dialogoinicialmn.ui
	/usr/bin/uic-qt4 dialogoinicialmn.ui -o ui_dialogoinicialmn.h

ui_stwidget.h: stwidget.ui
	/usr/bin/uic-qt4 stwidget.ui -o ui_stwidget.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

main.o: main.cpp janelaprincipal.h \
		superficiebezier.h \
		ponto3d.h \
		vetor3d.h \
		dialogoinicialmn.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

visortowidget.o: visortowidget.cpp visortowidget.h \
		superficiebezier.h \
		ponto3d.h \
		vetor3d.h \
		ui_visortowidget.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o visortowidget.o visortowidget.cpp

superficiebezier.o: superficiebezier.cpp superficiebezier.h \
		ponto3d.h \
		vetor3d.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o superficiebezier.o superficiebezier.cpp

ponto3d.o: ponto3d.cpp ponto3d.h \
		vetor3d.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ponto3d.o ponto3d.cpp

janelaprincipal.o: janelaprincipal.cpp janelaprincipal.h \
		superficiebezier.h \
		ponto3d.h \
		vetor3d.h \
		ui_JanelaPrincipal.h \
		widgetglsuperficie.h \
		stwidget.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o janelaprincipal.o janelaprincipal.cpp

dialogoinicialmn.o: dialogoinicialmn.cpp dialogoinicialmn.h \
		ui_dialogoinicialmn.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o dialogoinicialmn.o dialogoinicialmn.cpp

widgetglsuperficie.o: widgetglsuperficie.cpp widgetglsuperficie.h \
		superficiebezier.h \
		ponto3d.h \
		vetor3d.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o widgetglsuperficie.o widgetglsuperficie.cpp

stwidget.o: stwidget.cpp stwidget.h \
		ui_stwidget.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o stwidget.o stwidget.cpp

vetor3d.o: vetor3d.cpp vetor3d.h \
		ponto3d.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o vetor3d.o vetor3d.cpp

moc_visortowidget.o: moc_visortowidget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_visortowidget.o moc_visortowidget.cpp

moc_superficiebezier.o: moc_superficiebezier.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_superficiebezier.o moc_superficiebezier.cpp

moc_janelaprincipal.o: moc_janelaprincipal.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_janelaprincipal.o moc_janelaprincipal.cpp

moc_dialogoinicialmn.o: moc_dialogoinicialmn.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_dialogoinicialmn.o moc_dialogoinicialmn.cpp

moc_stwidget.o: moc_stwidget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_stwidget.o moc_stwidget.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

