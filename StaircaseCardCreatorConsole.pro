include(../RibiLibraries/ConsoleApplication.pri)
include(../RibiLibraries/Boost.pri)

#General, console
include(../RibiLibraries/GeneralConsole.pri)

#Specific, console
include(../RibiClasses/CppCanvas/CppCanvas.pri)
include(../RibiClasses/CppDotMatrix/CppDotMatrix.pri)
include(../RibiClasses/CppTextCanvas/CppTextCanvas.pri)
include(../StaircaseCardCreator/StaircaseCardCreatorConsole.pri)

SOURCES += main.cpp
