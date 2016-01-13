/****************************************************************************
**
** Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the Qt Toolkit.
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

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists for the convenience
// of other Qt classes.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

// This file was generated by qlalr - DO NOT EDIT!
#ifndef GRAMMAR_P_H
#define GRAMMAR_P_H

#include <QtCore/qglobal.h>

QT_BEGIN_NAMESPACE

class grammar
{
public:
  enum VariousConstants {
    EOF_SYMBOL = 0,
    COLON = 16,
    DECL = 19,
    DECL_FILE = 3,
    ERROR = 21,
    EXPECT = 4,
    EXPECT_RR = 5,
    ID = 1,
    IMPL = 20,
    IMPL_FILE = 6,
    LEFT = 7,
    MERGED_OUTPUT = 8,
    NONASSOC = 9,
    OR = 17,
    PARSER = 10,
    PREC = 11,
    RIGHT = 12,
    SEMICOLON = 18,
    START = 13,
    STRING_LITERAL = 2,
    TOKEN = 14,
    TOKEN_PREFIX = 15,

    ACCEPT_STATE = 68,
    RULE_COUNT = 45,
    STATE_COUNT = 69,
    TERMINAL_COUNT = 22,
    NON_TERMINAL_COUNT = 24,

    GOTO_INDEX_OFFSET = 69,
    GOTO_INFO_OFFSET = 76,
    GOTO_CHECK_OFFSET = 76
  };

  static const char  *const    spell [];
  static const short             lhs [];
  static const short             rhs [];
  static const short    goto_default [];
  static const short  action_default [];
  static const short    action_index [];
  static const short     action_info [];
  static const short    action_check [];

  static inline int nt_action (int state, int nt)
  {
    const int yyn = action_index [GOTO_INDEX_OFFSET + state] + nt;
    if (yyn < 0 || action_check [GOTO_CHECK_OFFSET + yyn] != nt)
      return goto_default [nt];

    return action_info [GOTO_INFO_OFFSET + yyn];
  }

  static inline int t_action (int state, int token)
  {
    const int yyn = action_index [state] + token;

    if (yyn < 0 || action_check [yyn] != token)
      return - action_default [state];

    return action_info [yyn];
  }
};


QT_END_NAMESPACE
#endif // GRAMMAR_P_H
