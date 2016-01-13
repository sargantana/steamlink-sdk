/****************************************************************************
**
** Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtXmlPatterns module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL21$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia. For licensing terms and
** conditions see http://qt.digia.com/licensing. For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 or version 3 as published by the Free
** Software Foundation and appearing in the file LICENSE.LGPLv21 and
** LICENSE.LGPLv3 included in the packaging of this file. Please review the
** following information to ensure the GNU Lesser General Public License
** requirements will be met: https://www.gnu.org/licenses/lgpl.html and
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights. These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qatomiccomparatorlocator_p.h"

QT_BEGIN_NAMESPACE

using namespace QPatternist;

AtomicComparatorLocator::AtomicComparatorLocator()
{
}

AtomicComparatorLocator::~AtomicComparatorLocator()
{
}

#define implCompVisit(type)                                                             \
AtomicTypeVisitorResult::Ptr                                                            \
AtomicComparatorLocator::visit(const type *,                                            \
                               const qint16,                                            \
                               const SourceLocationReflection *const) const             \
{                                                                                       \
    return AtomicTypeVisitorResult::Ptr();                                              \
}

implCompVisit(AnyAtomicType)
implCompVisit(AnyURIType)
implCompVisit(Base64BinaryType)
implCompVisit(BooleanType)
implCompVisit(DateTimeType)
implCompVisit(DateType)
implCompVisit(DayTimeDurationType)
implCompVisit(DecimalType)
implCompVisit(DoubleType)
implCompVisit(DurationType)
implCompVisit(FloatType)
implCompVisit(GDayType)
implCompVisit(GMonthDayType)
implCompVisit(GMonthType)
implCompVisit(GYearMonthType)
implCompVisit(GYearType)
implCompVisit(HexBinaryType)
implCompVisit(IntegerType)
implCompVisit(NOTATIONType)
implCompVisit(QNameType)
implCompVisit(StringType)
implCompVisit(SchemaTimeType)
implCompVisit(UntypedAtomicType)
implCompVisit(YearMonthDurationType)
#undef implCompVisit

QT_END_NAMESPACE