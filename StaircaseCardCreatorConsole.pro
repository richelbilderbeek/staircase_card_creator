#include(../RibiClasses/CppAbout/CppAbout.pri)
include(../RibiClasses/CppFileIo/CppFileIo.pri)
include(../RibiClasses/CppHelp/CppHelp.pri)
#include(../RibiClasses/CppMenuDialog/CppMenuDialog.pri)
include(../RibiClasses/CppCanvas/CppCanvas.pri)
include(../DotMatrix/DotMatrix.pri)
include(../RibiClasses/CppTextCanvas/CppTextCanvas.pri)
include(StaircaseCardCreatorConsole.pri)

SOURCES += main.cpp

# Needed for Boost
#INCLUDEPATH += /home/runner/work/staircase_card_creator/staircase_card_creator/boost
#INCLUDEPATH += /home/runner/work/staircase_card_creator/staircase_card_creator/boost/boost

CONFIG += c++17
QMAKE_CXXFLAGS += -std=c++17

# High warning levels
# Qt goes bad with -Weffc++
CONFIG(debug, debug|release) {
  QMAKE_CXXFLAGS += -Wall -Wextra -Wnon-virtual-dtor -Wshadow -pedantic -Werror
}

# Debug and release mode
CONFIG += debug_and_release

# In release mode, define NDEBUG
CONFIG(release, debug|release) {

  DEFINES += NDEBUG
}

# In debug mode, turn on gcov and UBSAN
CONFIG(debug, debug|release) {

  # gcov
  QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
  LIBS += -lgcov

  # UBSAN
  QMAKE_CXXFLAGS += -fsanitize=undefined
  QMAKE_LFLAGS += -fsanitize=undefined
  LIBS += -lubsan
}

# No Qt
QT += core
#gui

# Fixes
#/usr/include/boost/math/constants/constants.hpp:277: error: unable to find numeric literal operator 'operator""Q'
#   BOOST_DEFINE_MATH_CONSTANT(half, 5.000000000000000000000000000000000000e-01, "5.00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000e-01")
#   ^
QMAKE_CXXFLAGS += -fext-numeric-literals

