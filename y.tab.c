/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "BMM_Parser.y"


    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    #include<ctype.h>
    // #include"lex.yy.c"
    void yyerror(const char *s);
    extern int yylex();
    extern int yylineno;
    extern FILE* yyin;
    extern char *yytext;

#line 85 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* ID  */
    PRINT = 259,                   /* PRINT  */
    LET = 260,                     /* LET  */
    END = 261,                     /* END  */
    NOT = 262,                     /* NOT  */
    OR = 263,                      /* OR  */
    XOR = 264,                     /* XOR  */
    AND = 265,                     /* AND  */
    VAR = 266,                     /* VAR  */
    NUM = 267,                     /* NUM  */
    DATA = 268,                    /* DATA  */
    FLOAT = 269,                   /* FLOAT  */
    STRING = 270,                  /* STRING  */
    DIM = 271,                     /* DIM  */
    DIMDATA = 272,                 /* DIMDATA  */
    GOTO = 273,                    /* GOTO  */
    GOTOID = 274,                  /* GOTOID  */
    GOSUB = 275,                   /* GOSUB  */
    GOSUBID = 276,                 /* GOSUBID  */
    RETURN = 277,                  /* RETURN  */
    STOP = 278,                    /* STOP  */
    IF = 279,                      /* IF  */
    THEN = 280,                    /* THEN  */
    IFNUM = 281,                   /* IFNUM  */
    IFVAR = 282,                   /* IFVAR  */
    INPUT = 283,                   /* INPUT  */
    INPUTTOKEN = 284,              /* INPUTTOKEN  */
    REM = 285,                     /* REM  */
    FOR = 286,                     /* FOR  */
    NEXT = 287,                    /* NEXT  */
    TO = 288,                      /* TO  */
    STEP = 289,                    /* STEP  */
    DEF = 290,                     /* DEF  */
    FN = 291                       /* FN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ID 258
#define PRINT 259
#define LET 260
#define END 261
#define NOT 262
#define OR 263
#define XOR 264
#define AND 265
#define VAR 266
#define NUM 267
#define DATA 268
#define FLOAT 269
#define STRING 270
#define DIM 271
#define DIMDATA 272
#define GOTO 273
#define GOTOID 274
#define GOSUB 275
#define GOSUBID 276
#define RETURN 277
#define STOP 278
#define IF 279
#define THEN 280
#define IFNUM 281
#define IFVAR 282
#define INPUT 283
#define INPUTTOKEN 284
#define REM 285
#define FOR 286
#define NEXT 287
#define TO 288
#define STEP 289
#define DEF 290
#define FN 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_PRINT = 4,                      /* PRINT  */
  YYSYMBOL_LET = 5,                        /* LET  */
  YYSYMBOL_END = 6,                        /* END  */
  YYSYMBOL_NOT = 7,                        /* NOT  */
  YYSYMBOL_OR = 8,                         /* OR  */
  YYSYMBOL_XOR = 9,                        /* XOR  */
  YYSYMBOL_AND = 10,                       /* AND  */
  YYSYMBOL_VAR = 11,                       /* VAR  */
  YYSYMBOL_NUM = 12,                       /* NUM  */
  YYSYMBOL_DATA = 13,                      /* DATA  */
  YYSYMBOL_FLOAT = 14,                     /* FLOAT  */
  YYSYMBOL_STRING = 15,                    /* STRING  */
  YYSYMBOL_DIM = 16,                       /* DIM  */
  YYSYMBOL_DIMDATA = 17,                   /* DIMDATA  */
  YYSYMBOL_GOTO = 18,                      /* GOTO  */
  YYSYMBOL_GOTOID = 19,                    /* GOTOID  */
  YYSYMBOL_GOSUB = 20,                     /* GOSUB  */
  YYSYMBOL_GOSUBID = 21,                   /* GOSUBID  */
  YYSYMBOL_RETURN = 22,                    /* RETURN  */
  YYSYMBOL_STOP = 23,                      /* STOP  */
  YYSYMBOL_IF = 24,                        /* IF  */
  YYSYMBOL_THEN = 25,                      /* THEN  */
  YYSYMBOL_IFNUM = 26,                     /* IFNUM  */
  YYSYMBOL_IFVAR = 27,                     /* IFVAR  */
  YYSYMBOL_INPUT = 28,                     /* INPUT  */
  YYSYMBOL_INPUTTOKEN = 29,                /* INPUTTOKEN  */
  YYSYMBOL_REM = 30,                       /* REM  */
  YYSYMBOL_FOR = 31,                       /* FOR  */
  YYSYMBOL_NEXT = 32,                      /* NEXT  */
  YYSYMBOL_TO = 33,                        /* TO  */
  YYSYMBOL_STEP = 34,                      /* STEP  */
  YYSYMBOL_DEF = 35,                       /* DEF  */
  YYSYMBOL_FN = 36,                        /* FN  */
  YYSYMBOL_37_ = 37,                       /* '+'  */
  YYSYMBOL_38_ = 38,                       /* '-'  */
  YYSYMBOL_39_ = 39,                       /* '*'  */
  YYSYMBOL_40_ = 40,                       /* '/'  */
  YYSYMBOL_41_ = 41,                       /* '='  */
  YYSYMBOL_42_ = 42,                       /* '<'  */
  YYSYMBOL_43_ = 43,                       /* '>'  */
  YYSYMBOL_44_ = 44,                       /* '('  */
  YYSYMBOL_45_ = 45,                       /* ')'  */
  YYSYMBOL_46_ = 46,                       /* '['  */
  YYSYMBOL_47_ = 47,                       /* ']'  */
  YYSYMBOL_48_ = 48,                       /* '{'  */
  YYSYMBOL_49_ = 49,                       /* '}'  */
  YYSYMBOL_50_ = 50,                       /* ';'  */
  YYSYMBOL_51_ = 51,                       /* ','  */
  YYSYMBOL_YYACCEPT = 52,                  /* $accept  */
  YYSYMBOL_program = 53,                   /* program  */
  YYSYMBOL_statement_list = 54,            /* statement_list  */
  YYSYMBOL_statement = 55,                 /* statement  */
  YYSYMBOL_def_statement = 56,             /* def_statement  */
  YYSYMBOL_rem_statement = 57,             /* rem_statement  */
  YYSYMBOL_for_statement = 58,             /* for_statement  */
  YYSYMBOL_for_next = 59,                  /* for_next  */
  YYSYMBOL_let_statement = 60,             /* let_statement  */
  YYSYMBOL_print_statement = 61,           /* print_statement  */
  YYSYMBOL_input_statement = 62,           /* input_statement  */
  YYSYMBOL_data_statement = 63,            /* data_statement  */
  YYSYMBOL_dim_statement = 64,             /* dim_statement  */
  YYSYMBOL_goto_statement = 65,            /* goto_statement  */
  YYSYMBOL_gosub_statement = 66,           /* gosub_statement  */
  YYSYMBOL_if_statement = 67,              /* if_statement  */
  YYSYMBOL_stop_statement = 68,            /* stop_statement  */
  YYSYMBOL_return_statement = 69,          /* return_statement  */
  YYSYMBOL_end_statement = 70,             /* end_statement  */
  YYSYMBOL_declaration = 71,               /* declaration  */
  YYSYMBOL_expr = 72,                      /* expr  */
  YYSYMBOL_if_declaration = 73,            /* if_declaration  */
  YYSYMBOL_if_expr = 74,                   /* if_expr  */
  YYSYMBOL_input_declaration = 75,         /* input_declaration  */
  YYSYMBOL_input_expr = 76,                /* input_expr  */
  YYSYMBOL_data_declaration = 77,          /* data_declaration  */
  YYSYMBOL_data_expr = 78,                 /* data_expr  */
  YYSYMBOL_dim_declaration = 79,           /* dim_declaration  */
  YYSYMBOL_dim_expr = 80,                  /* dim_expr  */
  YYSYMBOL_for_declaration = 81,           /* for_declaration  */
  YYSYMBOL_def_declaration = 82,           /* def_declaration  */
  YYSYMBOL_print_declaration = 83,         /* print_declaration  */
  YYSYMBOL_print_expr = 84                 /* print_expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   371

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  168

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   291


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      44,    45,    39,    37,    51,    38,     2,    40,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    50,
      42,    41,    43,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    46,     2,    47,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,     2,    49,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    37,    37,    40,    41,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    59,    62,
      65,    66,    69,    72,    75,    76,    79,    82,    85,    88,
      91,    92,    95,    97,   100,   103,   105,   106,   107,   108,
     109,   110,   111,   114,   115,   117,   118,   119,   120,   122,
     123,   124,   125,   127,   128,   129,   132,   133,   134,   135,
     136,   137,   138,   141,   142,   144,   145,   146,   147,   149,
     150,   151,   153,   154,   155,   156,   159,   160,   163,   165,
     166,   168,   169,   172,   173,   175,   178,   179,   182,   183,
     186,   187,   188,   189,   192,   193
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID", "PRINT", "LET",
  "END", "NOT", "OR", "XOR", "AND", "VAR", "NUM", "DATA", "FLOAT",
  "STRING", "DIM", "DIMDATA", "GOTO", "GOTOID", "GOSUB", "GOSUBID",
  "RETURN", "STOP", "IF", "THEN", "IFNUM", "IFVAR", "INPUT", "INPUTTOKEN",
  "REM", "FOR", "NEXT", "TO", "STEP", "DEF", "FN", "'+'", "'-'", "'*'",
  "'/'", "'='", "'<'", "'>'", "'('", "')'", "'['", "']'", "'{'", "'}'",
  "';'", "','", "$accept", "program", "statement_list", "statement",
  "def_statement", "rem_statement", "for_statement", "for_next",
  "let_statement", "print_statement", "input_statement", "data_statement",
  "dim_statement", "goto_statement", "gosub_statement", "if_statement",
  "stop_statement", "return_statement", "end_statement", "declaration",
  "expr", "if_declaration", "if_expr", "input_declaration", "input_expr",
  "data_declaration", "data_expr", "dim_declaration", "dim_expr",
  "for_declaration", "def_declaration", "print_declaration", "print_expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-57)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,   336,    22,     0,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   102,   127,
     -57,     9,    -9,    -8,    13,   -57,   133,     1,   -57,    18,
      -1,   -57,   -57,   127,   -57,   -57,   -57,   127,   127,   127,
     -57,   200,   -25,   -57,   -57,   -57,   -57,     9,   -57,   -57,
      -9,   -57,   -57,    33,   133,   -57,   -57,   133,   133,   133,
      39,   211,   -57,     1,   -57,    24,    67,   -34,   -57,   -57,
     178,   145,    23,   127,   127,   127,   127,   127,   127,   127,
     127,    64,   117,   102,   102,   -57,   -57,   294,    33,   -57,
     -57,   191,   158,    29,    48,   133,   133,   133,   133,   133,
     133,   133,   133,    77,    89,   -57,   127,   315,    67,   -57,
     127,    68,   -57,   -57,   -57,   -57,   -57,   -57,   216,   216,
       8,     8,   250,   127,   127,   250,   127,   250,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   269,
     269,    11,    11,   257,   133,   133,   257,   133,   257,   224,
      69,   -57,   250,    36,   250,   250,   250,   257,   257,   257,
     127,   -57,    41,   236,   127,   127,   250,   250
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     3,    17,    15,    16,     6,     5,
      14,     8,     9,    10,    11,    13,    12,     7,    25,     0,
      35,     0,     0,     0,     0,    33,     0,     0,    19,     0,
       0,     1,     4,     0,    43,    44,    95,     0,     0,     0,
      94,    42,    24,    90,    23,    82,    81,    27,    79,    85,
      28,    83,    29,     0,     0,    64,    63,     0,     0,     0,
       0,    62,    78,    26,    76,     0,     0,     0,    18,    45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    91,     0,    80,    84,     0,     0,    31,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    77,     0,     0,     0,    21,
       0,     0,    53,    54,    55,    47,    48,    46,    49,    50,
      51,    52,    36,     0,     0,    39,     0,    40,    93,    92,
      34,    30,    69,    70,    71,    32,    74,    75,    73,    65,
      66,    67,    68,    56,     0,     0,    59,     0,    60,     0,
       0,    20,    88,     0,    37,    41,    38,    57,    61,    58,
       0,    22,     0,    86,     0,     0,    89,    87
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -57,   -57,   -51,    -2,   -57,   -57,   -57,   -23,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,    -5,   -57,    70,
     -33,   -57,   -45,   -57,    25,   -57,    40,   -57,    42,   -57,
     -57,   -57,   -56
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     4,     5,     6,     7,   109,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    89,    17,    40,
      41,    60,    61,    63,    64,    47,    48,    50,    51,    66,
      68,    42,    43
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      69,    32,    88,     1,    70,    71,    72,   110,    49,    90,
     111,    52,    91,    92,    93,   108,    73,    74,    75,    95,
      96,    97,    31,    45,    46,    83,    84,   128,   129,    65,
      62,    73,    74,    75,    53,    67,    87,    95,    96,    97,
     115,   116,   117,   118,   119,   120,   121,   122,   125,   127,
     136,   137,   138,   139,   140,   141,   142,   143,   146,   148,
      76,    77,    78,    79,    94,   106,    98,    99,   100,   101,
     107,    33,   114,   149,   135,    34,    35,   152,   134,   153,
     161,   162,   164,   131,    54,   151,    32,    85,   105,    44,
     154,   155,    86,   156,     0,     0,    54,     0,     0,   157,
     158,     0,   159,    55,    56,   123,    32,   124,    37,    33,
      38,     0,    39,    34,    35,    55,    56,    36,   144,     0,
     145,    57,     0,    58,    33,    59,     0,   163,    34,    35,
     147,   166,   167,    57,    33,    58,     0,    59,    34,    35,
      54,     0,     0,     0,     0,     0,    37,     0,    38,     0,
      39,     0,     0,    73,    74,    75,     0,     0,   126,    55,
      56,    37,     0,    38,     0,    39,    95,    96,    97,     0,
       0,    37,     0,    38,     0,    39,     0,    57,     0,    58,
       0,    59,    76,    77,    78,    79,    73,    74,    75,     0,
       0,     0,   113,     0,     0,    98,    99,   100,   101,    95,
      96,    97,     0,     0,     0,   133,     0,     0,    73,    74,
      75,     0,     0,     0,     0,    76,    77,    78,    79,    95,
      96,    97,     0,   112,    73,    74,    75,     0,    98,    99,
     100,   101,    73,    74,    75,     0,   132,    76,    77,    78,
      79,    80,    81,    82,    73,    74,    75,     0,    98,    99,
     100,   101,   102,   103,   104,    78,    79,   160,    73,    74,
      75,    76,    77,    78,    79,    95,    96,    97,     0,     0,
     165,     0,     0,    76,    77,    78,    79,    95,    96,    97,
       0,     0,     0,     0,     0,     0,     0,    76,    77,    78,
      79,     0,     0,     0,    98,    99,   100,   101,    18,    19,
      20,     0,     0,     0,     0,     0,     0,    21,   100,   101,
      22,     0,    23,     0,    24,     0,   130,    25,    26,    18,
      19,    20,    27,     0,    28,    29,     0,     0,    21,    30,
       0,    22,     0,    23,     0,    24,     0,     0,    25,    26,
      18,    19,    20,    27,     0,    28,    29,   150,     0,    21,
      30,     0,    22,     0,    23,     0,    24,     0,     0,    25,
      26,     0,     0,     0,    27,     0,    28,    29,     0,     0,
       0,    30
};

static const yytype_int16 yycheck[] =
{
      33,     3,    53,     3,    37,    38,    39,    41,    17,    54,
      44,    19,    57,    58,    59,    66,     8,     9,    10,     8,
       9,    10,     0,    14,    15,    50,    51,    83,    84,    11,
      29,     8,     9,    10,    21,    36,     3,     8,     9,    10,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
      37,    38,    39,    40,    25,    41,    37,    38,    39,    40,
       3,     7,    49,   106,    26,    11,    12,   110,    49,    11,
      11,    45,    41,    88,     7,   108,    88,    47,    63,    19,
     123,   124,    50,   126,    -1,    -1,     7,    -1,    -1,   144,
     145,    -1,   147,    26,    27,    41,   108,    43,    44,     7,
      46,    -1,    48,    11,    12,    26,    27,    15,    41,    -1,
      43,    44,    -1,    46,     7,    48,    -1,   160,    11,    12,
      41,   164,   165,    44,     7,    46,    -1,    48,    11,    12,
       7,    -1,    -1,    -1,    -1,    -1,    44,    -1,    46,    -1,
      48,    -1,    -1,     8,     9,    10,    -1,    -1,    41,    26,
      27,    44,    -1,    46,    -1,    48,     8,     9,    10,    -1,
      -1,    44,    -1,    46,    -1,    48,    -1,    44,    -1,    46,
      -1,    48,    37,    38,    39,    40,     8,     9,    10,    -1,
      -1,    -1,    47,    -1,    -1,    37,    38,    39,    40,     8,
       9,    10,    -1,    -1,    -1,    47,    -1,    -1,     8,     9,
      10,    -1,    -1,    -1,    -1,    37,    38,    39,    40,     8,
       9,    10,    -1,    45,     8,     9,    10,    -1,    37,    38,
      39,    40,     8,     9,    10,    -1,    45,    37,    38,    39,
      40,    41,    42,    43,     8,     9,    10,    -1,    37,    38,
      39,    40,    41,    42,    43,    39,    40,    33,     8,     9,
      10,    37,    38,    39,    40,     8,     9,    10,    -1,    -1,
      34,    -1,    -1,    37,    38,    39,    40,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,
      40,    -1,    -1,    -1,    37,    38,    39,    40,     4,     5,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    13,    39,    40,
      16,    -1,    18,    -1,    20,    -1,    22,    23,    24,     4,
       5,     6,    28,    -1,    30,    31,    -1,    -1,    13,    35,
      -1,    16,    -1,    18,    -1,    20,    -1,    -1,    23,    24,
       4,     5,     6,    28,    -1,    30,    31,    32,    -1,    13,
      35,    -1,    16,    -1,    18,    -1,    20,    -1,    -1,    23,
      24,    -1,    -1,    -1,    28,    -1,    30,    31,    -1,    -1,
      -1,    35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    53,    54,    55,    56,    57,    58,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    70,     4,     5,
       6,    13,    16,    18,    20,    23,    24,    28,    30,    31,
      35,     0,    55,     7,    11,    12,    15,    44,    46,    48,
      71,    72,    83,    84,    71,    14,    15,    77,    78,    17,
      79,    80,    19,    21,     7,    26,    27,    44,    46,    48,
      73,    74,    29,    75,    76,    11,    81,    36,    82,    72,
      72,    72,    72,     8,     9,    10,    37,    38,    39,    40,
      41,    42,    43,    50,    51,    78,    80,     3,    54,    69,
      74,    74,    74,    74,    25,     8,     9,    10,    37,    38,
      39,    40,    41,    42,    43,    76,    41,     3,    54,    59,
      41,    44,    45,    47,    49,    72,    72,    72,    72,    72,
      72,    72,    72,    41,    43,    72,    41,    72,    84,    84,
      22,    69,    45,    47,    49,    26,    74,    74,    74,    74,
      74,    74,    74,    74,    41,    43,    74,    41,    74,    72,
      32,    59,    72,    11,    72,    72,    72,    74,    74,    74,
      33,    11,    45,    72,    41,    34,    72,    72
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    54,    54,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    56,    57,
      58,    58,    59,    60,    61,    61,    62,    63,    64,    65,
      66,    66,    67,    68,    69,    70,    71,    71,    71,    71,
      71,    71,    71,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    73,    73,    73,    73,
      73,    73,    73,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    75,    75,    76,    77,
      77,    78,    78,    79,    79,    80,    81,    81,    82,    82,
      83,    83,    83,    83,    84,    84
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       5,     4,     3,     3,     3,     2,     3,     3,     3,     3,
       5,     4,     5,     2,     2,     2,     3,     4,     4,     3,
       3,     4,     1,     1,     1,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     4,     4,     3,
       3,     4,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     3,     3,     1,     2,     1,     1,
       2,     1,     1,     1,     2,     1,     5,     7,     3,     6,
       1,     2,     3,     3,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 19: /* rem_statement: ID REM  */
#line 62 "BMM_Parser.y"
                      {printf("REMM\n");}
#line 1425 "y.tab.c"
    break;

  case 29: /* goto_statement: ID GOTO GOTOID  */
#line 88 "BMM_Parser.y"
                               {printf("GOTOO\n");}
#line 1431 "y.tab.c"
    break;

  case 30: /* gosub_statement: ID GOSUB GOSUBID statement_list return_statement  */
#line 91 "BMM_Parser.y"
                                                                  {printf("GOSUBB\n");}
#line 1437 "y.tab.c"
    break;

  case 31: /* gosub_statement: ID GOSUB GOSUBID return_statement  */
#line 92 "BMM_Parser.y"
                                                    {printf("GOSUBB without statements\n");}
#line 1443 "y.tab.c"
    break;

  case 33: /* stop_statement: ID STOP  */
#line 97 "BMM_Parser.y"
                        {printf("STOPP\n");}
#line 1449 "y.tab.c"
    break;

  case 34: /* return_statement: ID RETURN  */
#line 100 "BMM_Parser.y"
                            {printf("RETURNN\n");}
#line 1455 "y.tab.c"
    break;

  case 35: /* end_statement: ID END  */
#line 103 "BMM_Parser.y"
                      {printf("ENDD\n");}
#line 1461 "y.tab.c"
    break;

  case 43: /* expr: VAR  */
#line 114 "BMM_Parser.y"
          {printf("Variable\n");}
#line 1467 "y.tab.c"
    break;

  case 44: /* expr: NUM  */
#line 115 "BMM_Parser.y"
          {printf("Number\n");}
#line 1473 "y.tab.c"
    break;

  case 45: /* expr: NOT expr  */
#line 117 "BMM_Parser.y"
               {printf("NOT\n");}
#line 1479 "y.tab.c"
    break;

  case 46: /* expr: expr AND expr  */
#line 118 "BMM_Parser.y"
                    {printf("AND\n");}
#line 1485 "y.tab.c"
    break;

  case 47: /* expr: expr OR expr  */
#line 119 "BMM_Parser.y"
                   {printf("OR\n");}
#line 1491 "y.tab.c"
    break;

  case 48: /* expr: expr XOR expr  */
#line 120 "BMM_Parser.y"
                    {printf("XOR\n");}
#line 1497 "y.tab.c"
    break;

  case 49: /* expr: expr '+' expr  */
#line 122 "BMM_Parser.y"
                    {printf("Addition\n");}
#line 1503 "y.tab.c"
    break;

  case 50: /* expr: expr '-' expr  */
#line 123 "BMM_Parser.y"
                    {printf("Subtraction\n");}
#line 1509 "y.tab.c"
    break;

  case 51: /* expr: expr '*' expr  */
#line 124 "BMM_Parser.y"
                    {printf("Multiplication\n");}
#line 1515 "y.tab.c"
    break;

  case 52: /* expr: expr '/' expr  */
#line 125 "BMM_Parser.y"
                    {printf("Division\n");}
#line 1521 "y.tab.c"
    break;

  case 53: /* expr: '(' expr ')'  */
#line 127 "BMM_Parser.y"
                   {printf("Parenthesis\n");}
#line 1527 "y.tab.c"
    break;

  case 54: /* expr: '[' expr ']'  */
#line 128 "BMM_Parser.y"
                   {printf("Brackets\n");}
#line 1533 "y.tab.c"
    break;

  case 55: /* expr: '{' expr '}'  */
#line 129 "BMM_Parser.y"
                   {printf("Braces\n");}
#line 1539 "y.tab.c"
    break;

  case 63: /* if_expr: IFVAR  */
#line 141 "BMM_Parser.y"
               {printf("Variable\n");}
#line 1545 "y.tab.c"
    break;

  case 64: /* if_expr: IFNUM  */
#line 142 "BMM_Parser.y"
                 {printf("Number\n");}
#line 1551 "y.tab.c"
    break;

  case 65: /* if_expr: if_expr '+' if_expr  */
#line 144 "BMM_Parser.y"
                               {printf("Addition\n");}
#line 1557 "y.tab.c"
    break;

  case 66: /* if_expr: if_expr '-' if_expr  */
#line 145 "BMM_Parser.y"
                               {printf("Subtraction\n");}
#line 1563 "y.tab.c"
    break;

  case 67: /* if_expr: if_expr '*' if_expr  */
#line 146 "BMM_Parser.y"
                               {printf("Multiplication\n");}
#line 1569 "y.tab.c"
    break;

  case 68: /* if_expr: if_expr '/' if_expr  */
#line 147 "BMM_Parser.y"
                               {printf("Division\n");}
#line 1575 "y.tab.c"
    break;

  case 69: /* if_expr: '(' if_expr ')'  */
#line 149 "BMM_Parser.y"
                           {printf("Parenthesis\n");}
#line 1581 "y.tab.c"
    break;

  case 70: /* if_expr: '[' if_expr ']'  */
#line 150 "BMM_Parser.y"
                           {printf("Brackets\n");}
#line 1587 "y.tab.c"
    break;

  case 71: /* if_expr: '{' if_expr '}'  */
#line 151 "BMM_Parser.y"
                           {printf("Braces\n");}
#line 1593 "y.tab.c"
    break;

  case 72: /* if_expr: NOT if_expr  */
#line 153 "BMM_Parser.y"
                       {printf("NOT\n");}
#line 1599 "y.tab.c"
    break;

  case 73: /* if_expr: if_expr AND if_expr  */
#line 154 "BMM_Parser.y"
                               {printf("AND\n");}
#line 1605 "y.tab.c"
    break;

  case 74: /* if_expr: if_expr OR if_expr  */
#line 155 "BMM_Parser.y"
                              {printf("OR\n");}
#line 1611 "y.tab.c"
    break;

  case 75: /* if_expr: if_expr XOR if_expr  */
#line 156 "BMM_Parser.y"
                               {printf("XOR\n");}
#line 1617 "y.tab.c"
    break;

  case 78: /* input_expr: INPUTTOKEN  */
#line 163 "BMM_Parser.y"
                       {printf("Input\n");}
#line 1623 "y.tab.c"
    break;

  case 81: /* data_expr: STRING  */
#line 168 "BMM_Parser.y"
                  {printf("String\n");}
#line 1629 "y.tab.c"
    break;

  case 82: /* data_expr: FLOAT  */
#line 169 "BMM_Parser.y"
                 {printf("Float\n");}
#line 1635 "y.tab.c"
    break;

  case 85: /* dim_expr: DIMDATA  */
#line 175 "BMM_Parser.y"
                  {printf("DIM Data\n");}
#line 1641 "y.tab.c"
    break;

  case 95: /* print_expr: STRING  */
#line 193 "BMM_Parser.y"
                     {printf("String\n");}
#line 1647 "y.tab.c"
    break;


#line 1651 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 196 "BMM_Parser.y"


void yyerror(const char *msg) {
    printf("Error: %s at line %d: %s\n", msg, yylineno, yytext);
}

int main() {
    yyin = fopen("./test.bmm", "r");
    yyparse();
    fclose(yyin);
    return 0;
}
