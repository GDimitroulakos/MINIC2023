/* A Bison parser, made by GNU Bison 2.7.  */

/* Skeleton implementation for Bison LALR(1) parsers in C++
   
      Copyright (C) 2002-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* First part of user declarations.  */
/* Line 279 of lalr1.cc  */
#line 3 "MINIC.y"

#include <iostream>
#include "MINIC.tab.h"

using namespace std;
extern int yylex(yy::parser::semantic_type *yylval ,yy::parser::location_type *yylloc);
extern FILE *yyin;


/* Line 279 of lalr1.cc  */
#line 48 "MINIC.tab.cpp"


#include "MINIC.tab.h"

/* User implementation prologue.  */

/* Line 285 of lalr1.cc  */
#line 56 "MINIC.tab.cpp"


# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* FIXME: INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


/* Suppress unused-variable warnings by "using" E.  */
#define YYUSE(e) ((void) (e))

/* Enable debugging if requested.  */
#if YYDEBUG

/* A pseudo ostream that takes yydebug_ into account.  */
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)	\
do {							\
  if (yydebug_)						\
    {							\
      *yycdebug_ << Title << ' ';			\
      yy_symbol_print_ ((Type), (Value), (Location));	\
      *yycdebug_ << std::endl;				\
    }							\
} while (false)

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug_)				\
    yy_reduce_print_ (Rule);		\
} while (false)

# define YY_STACK_PRINT()		\
do {					\
  if (yydebug_)				\
    yystack_print_ ();			\
} while (false)

#else /* !YYDEBUG */

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Type, Value, Location) YYUSE(Type)
# define YY_REDUCE_PRINT(Rule)        static_cast<void>(0)
# define YY_STACK_PRINT()             static_cast<void>(0)

#endif /* !YYDEBUG */

#define yyerrok		(yyerrstatus_ = 0)
#define yyclearin	(yychar = yyempty_)

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
/* Line 353 of lalr1.cc  */
#line 151 "MINIC.tab.cpp"

  /// Build a parser object.
  parser::parser ()
#if YYDEBUG
     :yydebug_ (false),
      yycdebug_ (&std::cerr)
#endif
  {
  }

  parser::~parser ()
  {
  }

#if YYDEBUG
  /*--------------------------------.
  | Print this symbol on YYOUTPUT.  |
  `--------------------------------*/

  inline void
  parser::yy_symbol_value_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yyvaluep);
    std::ostream& yyo = debug_stream ();
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    switch (yytype)
      {
         default:
	  break;
      }
  }


  void
  parser::yy_symbol_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    *yycdebug_ << (yytype < yyntokens_ ? "token" : "nterm")
	       << ' ' << yytname_[yytype] << " ("
	       << *yylocationp << ": ";
    yy_symbol_value_print_ (yytype, yyvaluep, yylocationp);
    *yycdebug_ << ')';
  }
#endif

  void
  parser::yydestruct_ (const char* yymsg,
			   int yytype, semantic_type* yyvaluep, location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yymsg);
    YYUSE (yyvaluep);

    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

    switch (yytype)
      {
  
	default:
	  break;
      }
  }

  void
  parser::yypop_ (unsigned int n)
  {
    yystate_stack_.pop (n);
    yysemantic_stack_.pop (n);
    yylocation_stack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif

  inline bool
  parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::parse ()
  {
    /// Lookahead and lookahead in internal form.
    int yychar = yyempty_;
    int yytoken = 0;

    // State.
    int yyn;
    int yylen = 0;
    int yystate = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// Semantic value of the lookahead.
    static semantic_type yyval_default;
    semantic_type yylval = yyval_default;
    /// Location of the lookahead.
    location_type yylloc;
    /// The locations where the error started and ended.
    location_type yyerror_range[3];

    /// $$.
    semantic_type yyval;
    /// @$.
    location_type yyloc;

    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


/* User initialization code.  */
/* Line 545 of lalr1.cc  */
#line 17 "MINIC.y"
{
// Filename for locations here
yylloc.begin.filename = yylloc.end.filename = new std::string("test.txt");
}
/* Line 545 of lalr1.cc  */
#line 312 "MINIC.tab.cpp"

    /* Initialize the stacks.  The initial state will be pushed in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystate_stack_ = state_stack_type (0);
    yysemantic_stack_ = semantic_stack_type (0);
    yylocation_stack_ = location_stack_type (0);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* New state.  */
  yynewstate:
    yystate_stack_.push (yystate);
    YYCDEBUG << "Entering state " << yystate << std::endl;

    /* Accept?  */
    if (yystate == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    /* Backup.  */
  yybackup:

    /* Try to take a decision without lookahead.  */
    yyn = yypact_[yystate];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    /* Read a lookahead token.  */
    if (yychar == yyempty_)
      {
        YYCDEBUG << "Reading a token: ";
        yychar = yylex (&yylval, &yylloc);
      }

    /* Convert token to internal form.  */
    if (yychar <= yyeof_)
      {
	yychar = yytoken = yyeof_;
	YYCDEBUG << "Now at end of input." << std::endl;
      }
    else
      {
	yytoken = yytranslate_ (yychar);
	YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
      }

    /* If the proper action on seeing token YYTOKEN is to reduce or to
       detect an error, take that action.  */
    yyn += yytoken;
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yytoken)
      goto yydefault;

    /* Reduce or error.  */
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
	if (yy_table_value_is_error_ (yyn))
	  goto yyerrlab;
	yyn = -yyn;
	goto yyreduce;
      }

    /* Shift the lookahead token.  */
    YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

    /* Discard the token being shifted.  */
    yychar = yyempty_;

    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* Count tokens shifted since error; after three, turn off error
       status.  */
    if (yyerrstatus_)
      --yyerrstatus_;

    yystate = yyn;
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystate];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    /* If YYLEN is nonzero, implement the default value of the action:
       `$$ = $1'.  Otherwise, use the top of the stack.

       Otherwise, the following line sets YYVAL to garbage.
       This behavior is undocumented and Bison
       users should not rely upon it.  */
    if (yylen)
      yyval = yysemantic_stack_[yylen - 1];
    else
      yyval = yysemantic_stack_[0];

    // Compute the default @$.
    {
      slice<location_type, location_stack_type> slice (yylocation_stack_, yylen);
      YYLLOC_DEFAULT (yyloc, slice, yylen);
    }

    // Perform the reduction.
    YY_REDUCE_PRINT (yyn);
    switch (yyn)
      {
        
/* Line 670 of lalr1.cc  */
#line 432 "MINIC.tab.cpp"
      default:
        break;
      }

    /* User semantic actions sometimes alter yychar, and that requires
       that yytoken be updated with the new translation.  We take the
       approach of translating immediately before every use of yytoken.
       One alternative is translating here after every semantic action,
       but that translation would be missed if the semantic action
       invokes YYABORT, YYACCEPT, or YYERROR immediately after altering
       yychar.  In the case of YYABORT or YYACCEPT, an incorrect
       destructor might then be invoked immediately.  In the case of
       YYERROR, subsequent parser actions might lead to an incorrect
       destructor call or verbose syntax error message before the
       lookahead is translated.  */
    YY_SYMBOL_PRINT ("-> $$ =", yyr1_[yyn], &yyval, &yyloc);

    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();

    yysemantic_stack_.push (yyval);
    yylocation_stack_.push (yyloc);

    /* Shift the result of the reduction.  */
    yyn = yyr1_[yyn];
    yystate = yypgoto_[yyn - yyntokens_] + yystate_stack_[0];
    if (0 <= yystate && yystate <= yylast_
	&& yycheck_[yystate] == yystate_stack_[0])
      yystate = yytable_[yystate];
    else
      yystate = yydefgoto_[yyn - yyntokens_];
    goto yynewstate;

  /*------------------------------------.
  | yyerrlab -- here on detecting error |
  `------------------------------------*/
  yyerrlab:
    /* Make sure we have latest lookahead translation.  See comments at
       user semantic actions for why this is necessary.  */
    yytoken = yytranslate_ (yychar);

    /* If not already recovering from an error, report this error.  */
    if (!yyerrstatus_)
      {
	++yynerrs_;
	if (yychar == yyempty_)
	  yytoken = yyempty_;
	error (yylloc, yysyntax_error_ (yystate, yytoken));
      }

    yyerror_range[1] = yylloc;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */
        if (yychar <= yyeof_)
          {
            /* Return failure if at end of input.  */
            if (yychar == yyeof_)
              YYABORT;
          }
        else
          {
            yydestruct_ ("Error: discarding", yytoken, &yylval, &yylloc);
            yychar = yyempty_;
          }
      }

    /* Else will try to reuse lookahead token after shifting the error
       token.  */
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;

    yyerror_range[1] = yylocation_stack_[yylen - 1];
    /* Do not reclaim the symbols of the rule which action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    yystate = yystate_stack_[0];
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;	/* Each real token shifted decrements this.  */

    for (;;)
      {
	yyn = yypact_[yystate];
	if (!yy_pact_value_is_default_ (yyn))
	{
	  yyn += yyterror_;
	  if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
	    {
	      yyn = yytable_[yyn];
	      if (0 < yyn)
		break;
	    }
	}

	/* Pop the current state because it cannot handle the error token.  */
	if (yystate_stack_.height () == 1)
	  YYABORT;

	yyerror_range[1] = yylocation_stack_[0];
	yydestruct_ ("Error: popping",
		     yystos_[yystate],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);
	yypop_ ();
	yystate = yystate_stack_[0];
	YY_STACK_PRINT ();
      }

    yyerror_range[2] = yylloc;
    // Using YYLLOC is tempting, but would change the location of
    // the lookahead.  YYLOC is available though.
    YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yyloc);

    /* Shift the error token.  */
    YY_SYMBOL_PRINT ("Shifting", yystos_[yyn],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);

    yystate = yyn;
    goto yynewstate;

    /* Accept.  */
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    /* Abort.  */
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (yychar != yyempty_)
      {
        /* Make sure we have latest lookahead translation.  See comments
           at user semantic actions for why this is necessary.  */
        yytoken = yytranslate_ (yychar);
        yydestruct_ ("Cleanup: discarding lookahead", yytoken, &yylval,
                     &yylloc);
      }

    /* Do not reclaim the symbols of the rule which action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystate_stack_.height ())
      {
        yydestruct_ ("Cleanup: popping",
                     yystos_[yystate_stack_[0]],
                     &yysemantic_stack_[0],
                     &yylocation_stack_[0]);
        yypop_ ();
      }

    return yyresult;
    }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (yychar != yyempty_)
          {
            /* Make sure we have latest lookahead translation.  See
               comments at user semantic actions for why this is
               necessary.  */
            yytoken = yytranslate_ (yychar);
            yydestruct_ (YY_NULL, yytoken, &yylval, &yylloc);
          }

        while (1 < yystate_stack_.height ())
          {
            yydestruct_ (YY_NULL,
                         yystos_[yystate_stack_[0]],
                         &yysemantic_stack_[0],
                         &yylocation_stack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (int, int)
  {
    return YY_("syntax error");
  }


  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
  const signed char parser::yypact_ninf_ = -90;
  const short int
  parser::yypact_[] =
  {
       153,    14,   -90,   -90,   -27,   193,   -23,    13,    37,   181,
     -90,   193,   193,   193,   -90,   193,    92,    12,   -90,    -1,
      59,   -90,   -90,   -90,   -90,    41,   282,   193,    63,   -90,
     298,   -90,   193,   193,    61,    15,    15,   -90,   210,   -90,
     -90,   121,   -90,   -90,    44,   -90,   -90,    16,   -90,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   -90,   314,   -90,   314,    29,   -90,   228,   246,    46,
     -90,   -90,   -90,   -90,   193,    32,   325,   335,   345,   345,
     345,   345,   345,   345,    15,    15,   -90,   -90,   -90,   193,
     181,   181,   193,   314,    45,    33,   -90,    71,   314,    49,
     -90,   264,   -90,    45,    64,    66,   181,   -90,   -90,   -90,
     -90
  };

  /* YYDEFACT[S] -- default reduction number in state S.  Performed when
     YYTABLE doesn't specify something else to do.  Zero means the
     default is an error.  */
  const unsigned char
  parser::yydefact_[] =
  {
         0,    34,    14,    15,     0,     0,     0,     0,     0,     0,
      33,     0,     0,     0,    24,     0,     0,     0,     4,     0,
       0,     2,    17,    18,    19,     0,     0,     0,     0,    23,
       0,    22,     0,     0,     0,    42,    41,    47,     0,    25,
      31,     0,     1,     6,     0,     3,     5,    12,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    16,    44,    35,    54,     0,    21,     0,     0,     0,
      43,    26,    32,     7,     0,     0,    46,    45,    53,    52,
      51,    50,    49,    48,    38,    37,    40,    39,    36,     0,
       0,     0,     0,    13,     0,     0,    10,     0,    55,    27,
      29,     0,     9,     0,     0,    12,     0,    30,     8,    11,
      28
  };

  /* YYPGOTO[NTERM-NUM].  */
  const signed char
  parser::yypgoto_[] =
  {
       -90,   -90,    67,   -90,   -16,   -71,    -9,   -89,   -90,   -90,
     -90,   -90,    -2,   -90
  };

  /* YYDEFGOTO[NTERM-NUM].  */
  const signed char
  parser::yydefgoto_[] =
  {
        -1,    17,    18,    95,    19,    20,    21,    22,    23,    24,
      25,    41,    26,    65
  };

  /* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule which
     number is the opposite.  If YYTABLE_NINF_, syntax error.  */
  const signed char parser::yytable_ninf_ = -1;
  const signed char
  parser::yytable_[] =
  {
        34,    44,    29,    30,    97,   102,    31,    40,    45,    35,
      36,    37,    42,    38,   108,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    62,    64,    27,    46,    74,
      67,    68,    72,    97,    11,    12,     2,     3,    13,    59,
      60,    14,    15,    32,    28,    16,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    96,
      88,    89,    47,    94,   103,   104,     1,    33,     2,     3,
      48,    69,    93,    73,   105,    10,    92,   106,    16,    74,
       0,    99,   100,     0,    43,    11,    12,    98,   109,    13,
     101,     0,     0,    15,    63,     1,     0,   110,     4,     5,
       6,     7,     8,     9,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,    13,     0,
       0,    14,    15,     0,     1,    16,    39,     4,     5,     6,
       7,     8,     9,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,    13,     0,     0,
      14,    15,     0,     0,    16,    71,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,    13,
       0,     0,    14,    15,     1,     0,    16,     4,     5,     6,
       7,     8,     9,    10,     0,     0,     1,     0,     0,     0,
       0,     0,     0,    11,    12,    10,     0,    13,     0,     0,
      14,    15,     0,     0,    16,    11,    12,     0,     0,    13,
       0,     0,     0,    15,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,     0,     0,     0,     0,
       0,    70,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,     0,     0,     0,     0,     0,    90,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,     0,     0,     0,     0,     0,    91,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
       0,     0,     0,     0,     0,   107,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,     0,     0,
       0,    61,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,     0,     0,     0,    66,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,
      60
  };

  /* YYCHECK.  */
  const signed char
  parser::yycheck_[] =
  {
         9,    17,    29,     5,    75,    94,    29,    16,    17,    11,
      12,    13,     0,    15,   103,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    27,    28,    13,    29,    13,
      32,    33,    41,   104,    22,    23,     4,     5,    26,    24,
      25,    29,    30,    30,    30,    33,    30,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    75,
      31,    32,     3,    31,    31,    32,     3,    30,     4,     5,
      29,    10,    74,    29,     3,    12,    30,    28,    33,    13,
      -1,    90,    91,    -1,    17,    22,    23,    89,   104,    26,
      92,    -1,    -1,    30,    31,     3,    -1,   106,     6,     7,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
      -1,    29,    30,    -1,     3,    33,    34,     6,     7,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,
      29,    30,    -1,    -1,    33,    34,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,    -1,    29,    30,     3,    -1,    33,     6,     7,     8,
       9,    10,    11,    12,    -1,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    12,    -1,    26,    -1,    -1,
      29,    30,    -1,    -1,    33,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    30,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    29,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    29,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25
  };

  /* STOS_[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
  const unsigned char
  parser::yystos_[] =
  {
         0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    22,    23,    26,    29,    30,    33,    36,    37,    39,
      40,    41,    42,    43,    44,    45,    47,    13,    30,    29,
      47,    29,    30,    30,    41,    47,    47,    47,    47,    34,
      41,    46,     0,    37,    39,    41,    29,     3,    29,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    29,    47,    31,    47,    48,    29,    47,    47,    10,
      31,    34,    41,    29,    13,    30,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    31,    32,
      31,    31,    30,    47,    31,    38,    39,    40,    47,    41,
      41,    47,    42,    31,    32,     3,    28,    31,    42,    39,
      41
  };

#if YYDEBUG
  /* TOKEN_NUMBER_[YYLEX-NUM] -- Internal symbol number corresponding
     to YYLEX-NUM.  */
  const unsigned short int
  parser::yytoken_number_[] =
  {
         0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,    61,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,    59,
      40,    41,    44,   123,   125
  };
#endif

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
  const unsigned char
  parser::yyr1_[] =
  {
         0,    35,    36,    36,    36,    36,    36,    36,    37,    37,
      38,    38,    39,    39,    40,    40,    41,    41,    41,    41,
      41,    41,    41,    41,    41,    42,    42,    43,    43,    44,
      45,    46,    46,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    48,    48
  };

  /* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
  const unsigned char
  parser::yyr2_[] =
  {
         0,     2,     1,     2,     1,     2,     2,     3,     6,     5,
       1,     3,     2,     4,     1,     1,     2,     1,     1,     1,
       2,     3,     2,     2,     1,     2,     3,     5,     7,     5,
       6,     1,     2,     1,     1,     3,     4,     3,     3,     3,
       3,     2,     2,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     3,     3,     1,     3
  };

#if YYDEBUG
  /* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
     First, the terminals, then, starting at \a yyntokens_, nonterminals.  */
  const char*
  const parser::yytname_[] =
  {
    "$end", "error", "$undefined", "IDENTIFIER", "INT", "FLOAT", "CONTINUE",
  "RETURN", "BREAK", "IF", "WHILE", "DO", "NUMBER", "'='", "OR", "AND",
  "NEQUAL", "EQUAL", "LTE", "LT", "GTE", "GT", "MINUS", "PLUS", "DIV",
  "MULT", "NOT", "IFPREC", "ELSE", "';'", "'('", "')'", "','", "'{'",
  "'}'", "$accept", "compile_unit", "function_definition", "fargs",
  "declaration", "type_specifier", "statement", "compound_statement",
  "if_statement", "while_statement", "do_while_statement",
  "statement_list", "expression", "args", YY_NULL
  };


  /* YYRHS -- A `-1'-separated list of the rules' RHS.  */
  const parser::rhs_number_type
  parser::yyrhs_[] =
  {
        36,     0,    -1,    41,    -1,    36,    41,    -1,    37,    -1,
      39,    29,    -1,    36,    37,    -1,    36,    39,    29,    -1,
      40,     3,    30,    38,    31,    42,    -1,    40,     3,    30,
      31,    42,    -1,    39,    -1,    38,    32,    39,    -1,    40,
       3,    -1,    40,     3,    13,    47,    -1,     4,    -1,     5,
      -1,    47,    29,    -1,    42,    -1,    43,    -1,    44,    -1,
      45,    29,    -1,     7,    47,    29,    -1,     8,    29,    -1,
       6,    29,    -1,    29,    -1,    33,    34,    -1,    33,    46,
      34,    -1,     9,    30,    47,    31,    41,    -1,     9,    30,
      47,    31,    41,    28,    41,    -1,    10,    30,    47,    31,
      41,    -1,    11,    41,    10,    30,    47,    31,    -1,    41,
      -1,    46,    41,    -1,    12,    -1,     3,    -1,     3,    30,
      31,    -1,     3,    30,    48,    31,    -1,    47,    23,    47,
      -1,    47,    22,    47,    -1,    47,    25,    47,    -1,    47,
      24,    47,    -1,    23,    47,    -1,    22,    47,    -1,    30,
      47,    31,    -1,     3,    13,    47,    -1,    47,    15,    47,
      -1,    47,    14,    47,    -1,    26,    47,    -1,    47,    21,
      47,    -1,    47,    20,    47,    -1,    47,    19,    47,    -1,
      47,    18,    47,    -1,    47,    17,    47,    -1,    47,    16,
      47,    -1,    47,    -1,    48,    32,    47,    -1
  };

  /* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
     YYRHS.  */
  const unsigned char
  parser::yyprhs_[] =
  {
         0,     0,     3,     5,     8,    10,    13,    16,    20,    27,
      33,    35,    39,    42,    47,    49,    51,    54,    56,    58,
      60,    63,    67,    70,    73,    75,    78,    82,    88,    96,
     102,   109,   111,   114,   116,   118,   122,   127,   131,   135,
     139,   143,   146,   149,   153,   157,   161,   165,   168,   172,
     176,   180,   184,   188,   192,   194
  };

  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
  const unsigned char
  parser::yyrline_[] =
  {
         0,    39,    39,    40,    41,    42,    43,    44,    47,    48,
      51,    52,    55,    56,    59,    60,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    73,    74,    77,    78,    81,
      84,    87,    88,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   114,   115
  };

  // Print the state stack on the debug stream.
  void
  parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (state_stack_type::const_iterator i = yystate_stack_.begin ();
	 i != yystate_stack_.end (); ++i)
      *yycdebug_ << ' ' << *i;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    /* Print the symbols being reduced, and their result.  */
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
	       << " (line " << yylno << "):" << std::endl;
    /* The symbols being reduced.  */
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
		       yyrhs_[yyprhs_[yyrule] + yyi],
		       &(yysemantic_stack_[(yynrhs) - (yyi + 1)]),
		       &(yylocation_stack_[(yynrhs) - (yyi + 1)]));
  }
#endif // YYDEBUG

  /* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
  parser::token_number_type
  parser::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
    {
           0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      30,    31,     2,     2,    32,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    29,
       2,    13,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    33,     2,    34,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28
    };
    if ((unsigned int) t <= yyuser_token_number_max_)
      return translate_table[t];
    else
      return yyundef_token_;
  }

  const int parser::yyeof_ = 0;
  const int parser::yylast_ = 370;
  const int parser::yynnts_ = 14;
  const int parser::yyempty_ = -2;
  const int parser::yyfinal_ = 42;
  const int parser::yyterror_ = 1;
  const int parser::yyerrcode_ = 256;
  const int parser::yyntokens_ = 35;

  const unsigned int parser::yyuser_token_number_max_ = 282;
  const parser::token_number_type parser::yyundef_token_ = 2;


} // yy
/* Line 1141 of lalr1.cc  */
#line 1001 "MINIC.tab.cpp"
/* Line 1142 of lalr1.cc  */
#line 118 "MINIC.y"


namespace yy{
	void parser::error(yy::location const &loc, const string &message){
		std::cerr << "error at " << loc << ": " << message << std::endl;
	}
}