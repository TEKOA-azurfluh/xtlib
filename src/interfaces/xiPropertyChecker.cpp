/*
 * This file is part of the xTuple ERP: PostBooks Edition, a free and
 * open source Enterprise Resource Planning software suite,
 * Copyright (c) 1999-2011 by OpenMFG LLC, d/b/a xTuple.
 * It is licensed to you under the Common Public Attribution License
 * version 1.0, the full text of which (including xTuple-specific Exhibits)
 * is available at www.xtuple.com/CPAL.  By using this software, you agree
 * to be bound by its terms.
 */
/**
    \class xiPropertyChecker
    \brief An interface for implementing property checkers.

    Subclasses implementing this interface are used to
    validate data prior to setting properties of xtObject instances.
    For example, a property checker to look ensure that empty values are not
    allowed might be written like this:
    \dontinclude xtAbstractCode.cpp
    \skip class NotEmptyChecker
    \until };

    The property checker would then be declared:
    \skipline xiPropertyChecker *
    instantiated:
    \skipline notEmpty =
    and finally set as the value of the xtlib::CheckerRole on the property
    to be checked:
    \code
    setPropertyP("code", notEmpty, xtlib::CheckerRole);
    \endcode

    Typically this would be done in the constructor of the object with the
    property being checked.

 */

#include "xiPropertyChecker.h"

/**
    \brief Construct a default \c xiPropertyChecker object.

    Protected constructor to prevent direct instantiations
    of this unimplemented object.
 */
xiPropertyChecker::xiPropertyChecker() {}

/**
    \brief Destruct an \c xiPropertyChecker.
 */
xiPropertyChecker::~xiPropertyChecker() {}

/**
    \fn void xiPropertyChecker::check(const QVariant & value, int role)

    \brief Called when an object's property is changed.

    Subclasses must implement this method to ensure that a new value
    is valid before a property's value is changed.  If an xtObject
    has the xtlib::CheckerRole set to an xiPropertyChecker for a
    particular property, the new value and the role of the property
    are passed in for the checker to evaluate.

    \param value The new value to check.
    \param role The property role being changed.
    \return \c true if the new value is considered valid for the given role,
            \c false otherwise.
 */

