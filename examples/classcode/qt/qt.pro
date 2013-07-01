#
# This file is part of the xTuple ERP: PostBooks Edition, a free and
# open source Enterprise Resource Planning software suite,
# Copyright (c) 1999-2011 by OpenMFG LLC, d/b/a xTuple.
# It is licensed to you under the Common Public Attribution License
# version 1.0, the full text of which (including xTuple-specific Exhibits)
# is available at www.xtuple.com/CPAL.  By using this software, you agree
# to be bound by its terms.
#

TEMPLATE = app
TARGET = classcode_qt
INCLUDEPATH += . \
               ../../../src \
               ../../../src/interfaces
DEPENDPATH += $${INCLUDEPATH}
LIBS += -L../../../lib -lxtlib

QT += sql widgets
CONFIG += qt warn_on debug

OBJECTS_DIR = tmp
UI_DIR = tmp
MOC_DIR = tmp

# Input
HEADERS += ClassCode.h ClassCodeList.h
FORMS += ClassCode.ui ClassCodeList.ui
SOURCES += ClassCode.cpp ClassCodeList.cpp main.cpp

