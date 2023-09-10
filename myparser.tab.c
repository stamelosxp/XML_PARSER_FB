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
#line 1 "myparser.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    #define N 50

    
    extern FILE *yyin;
    extern int yylex();
    extern char* yytext;
    extern int yyparse();
    extern int yylineno;
    void yyerror(const char* s);
    
    int toInteger(const char *s);
    void checkLayoutValue(char *value);
    void checkUniqueID(char *idstr);
    void checkPaddingValue(char *padstr);
    void checkProgressValue(int prog, int maxvalue);
    void checkedButton(char *checkButtonValue);
    void insertRbuttonValues(char *idRbutton);
    void checkCounter(int counterValue, int counter);
    void initialArray();
    char layoutcont[2][15]={"\"wrap_content\"", "\"match_parent\""};
    
    char idValues[N][15];
    char radioButtonValues[N][15];

    char checkButtonValue[15]={'\0'};
    int maxProgress;
    int progressValue;
    int rbuttonCnt;
    int existCheckButton = 0;
    int existMax = 0;
    int existProgress = 0;
    int counterValue;


#line 111 "myparser.tab.c"

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

#include "myparser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LINEARBEGIN = 3,                /* LINEARBEGIN  */
  YYSYMBOL_LINEAREND = 4,                  /* LINEAREND  */
  YYSYMBOL_RELATIVEBEGIN = 5,              /* RELATIVEBEGIN  */
  YYSYMBOL_RELATIVEEND = 6,                /* RELATIVEEND  */
  YYSYMBOL_RADIONGROUPBEGIN = 7,           /* RADIONGROUPBEGIN  */
  YYSYMBOL_RADIOGROUPEND = 8,              /* RADIOGROUPEND  */
  YYSYMBOL_TEXTVIEWBEGIN = 9,              /* TEXTVIEWBEGIN  */
  YYSYMBOL_IMAGEVIEWBEGIN = 10,            /* IMAGEVIEWBEGIN  */
  YYSYMBOL_BUTTONBEGIN = 11,               /* BUTTONBEGIN  */
  YYSYMBOL_RADIOBUTTONBEGIN = 12,          /* RADIOBUTTONBEGIN  */
  YYSYMBOL_PROGRESSBARBEGIN = 13,          /* PROGRESSBARBEGIN  */
  YYSYMBOL_WIDTH = 14,                     /* WIDTH  */
  YYSYMBOL_HEIGHT = 15,                    /* HEIGHT  */
  YYSYMBOL_ID = 16,                        /* ID  */
  YYSYMBOL_ORIENTATION = 17,               /* ORIENTATION  */
  YYSYMBOL_TEXT = 18,                      /* TEXT  */
  YYSYMBOL_TEXTCOLOR = 19,                 /* TEXTCOLOR  */
  YYSYMBOL_SRC = 20,                       /* SRC  */
  YYSYMBOL_PADDING = 21,                   /* PADDING  */
  YYSYMBOL_CHECKEDBUTTON = 22,             /* CHECKEDBUTTON  */
  YYSYMBOL_MAX = 23,                       /* MAX  */
  YYSYMBOL_PROGRESS = 24,                  /* PROGRESS  */
  YYSYMBOL_COUNTER = 25,                   /* COUNTER  */
  YYSYMBOL_TAGEND = 26,                    /* TAGEND  */
  YYSYMBOL_EMPTYELEMENTEND = 27,           /* EMPTYELEMENTEND  */
  YYSYMBOL_COMMENTS = 28,                  /* COMMENTS  */
  YYSYMBOL_STRING = 29,                    /* STRING  */
  YYSYMBOL_POSITIVEINTEGER = 30,           /* POSITIVEINTEGER  */
  YYSYMBOL_EOL = 31,                       /* EOL  */
  YYSYMBOL_YYACCEPT = 32,                  /* $accept  */
  YYSYMBOL_root = 33,                      /* root  */
  YYSYMBOL_34_1 = 34,                      /* $@1  */
  YYSYMBOL_35_2 = 35,                      /* $@2  */
  YYSYMBOL_general_attr = 36,              /* general_attr  */
  YYSYMBOL_37_3 = 37,                      /* $@3  */
  YYSYMBOL_38_4 = 38,                      /* $@4  */
  YYSYMBOL_39_5 = 39,                      /* $@5  */
  YYSYMBOL_40_6 = 40,                      /* $@6  */
  YYSYMBOL_41_7 = 41,                      /* $@7  */
  YYSYMBOL_42_8 = 42,                      /* $@8  */
  YYSYMBOL_attr_cont = 43,                 /* attr_cont  */
  YYSYMBOL_str_cont_nocoms = 44,           /* str_cont_nocoms  */
  YYSYMBOL_int_cont_nocoms = 45,           /* int_cont_nocoms  */
  YYSYMBOL_elements = 46,                  /* elements  */
  YYSYMBOL_47_9 = 47,                      /* $@9  */
  YYSYMBOL_48_10 = 48,                     /* $@10  */
  YYSYMBOL_49_11 = 49,                     /* $@11  */
  YYSYMBOL_50_12 = 50,                     /* $@12  */
  YYSYMBOL_51_13 = 51,                     /* $@13  */
  YYSYMBOL_more_elem = 52,                 /* more_elem  */
  YYSYMBOL_lin_layout = 53,                /* lin_layout  */
  YYSYMBOL_opt_lin_attr = 54,              /* opt_lin_attr  */
  YYSYMBOL_55_14 = 55,                     /* $@14  */
  YYSYMBOL_56_15 = 56,                     /* $@15  */
  YYSYMBOL_rel_layout = 57,                /* rel_layout  */
  YYSYMBOL_opt_rev_attr = 58,              /* opt_rev_attr  */
  YYSYMBOL_59_16 = 59,                     /* $@16  */
  YYSYMBOL_relative = 60,                  /* relative  */
  YYSYMBOL_61_17 = 61,                     /* $@17  */
  YYSYMBOL_textview = 62,                  /* textview  */
  YYSYMBOL_text_attr = 63,                 /* text_attr  */
  YYSYMBOL_64_18 = 64,                     /* $@18  */
  YYSYMBOL_opt_text_attr = 65,             /* opt_text_attr  */
  YYSYMBOL_66_19 = 66,                     /* $@19  */
  YYSYMBOL_67_20 = 67,                     /* $@20  */
  YYSYMBOL_68_21 = 68,                     /* $@21  */
  YYSYMBOL_imageview = 69,                 /* imageview  */
  YYSYMBOL_img_attr = 70,                  /* img_attr  */
  YYSYMBOL_71_22 = 71,                     /* $@22  */
  YYSYMBOL_opt_img_attr = 72,              /* opt_img_attr  */
  YYSYMBOL_73_23 = 73,                     /* $@23  */
  YYSYMBOL_74_24 = 74,                     /* $@24  */
  YYSYMBOL_75_25 = 75,                     /* $@25  */
  YYSYMBOL_76_26 = 76,                     /* $@26  */
  YYSYMBOL_button = 77,                    /* button  */
  YYSYMBOL_but_attr = 78,                  /* but_attr  */
  YYSYMBOL_79_27 = 79,                     /* $@27  */
  YYSYMBOL_opt_but_attr = 80,              /* opt_but_attr  */
  YYSYMBOL_81_28 = 81,                     /* $@28  */
  YYSYMBOL_82_29 = 82,                     /* $@29  */
  YYSYMBOL_83_30 = 83,                     /* $@30  */
  YYSYMBOL_84_31 = 84,                     /* $@31  */
  YYSYMBOL_radiogroup = 85,                /* radiogroup  */
  YYSYMBOL_radiogroupelements = 86,        /* radiogroupelements  */
  YYSYMBOL_rad_group_attr = 87,            /* rad_group_attr  */
  YYSYMBOL_88_32 = 88,                     /* $@32  */
  YYSYMBOL_89_33 = 89,                     /* $@33  */
  YYSYMBOL_opt_rgroup_attr = 90,           /* opt_rgroup_attr  */
  YYSYMBOL_91_34 = 91,                     /* $@34  */
  YYSYMBOL_92_35 = 92,                     /* $@35  */
  YYSYMBOL_93_36 = 93,                     /* $@36  */
  YYSYMBOL_94_37 = 94,                     /* $@37  */
  YYSYMBOL_radiobutton = 95,               /* radiobutton  */
  YYSYMBOL_96_38 = 96,                     /* $@38  */
  YYSYMBOL_rbut_attr = 97,                 /* rbut_attr  */
  YYSYMBOL_98_39 = 98,                     /* $@39  */
  YYSYMBOL_opt_radbut_attr = 99,           /* opt_radbut_attr  */
  YYSYMBOL_100_40 = 100,                   /* $@40  */
  YYSYMBOL_101_41 = 101,                   /* $@41  */
  YYSYMBOL_progressbar = 102,              /* progressbar  */
  YYSYMBOL_opt_pbar_attr = 103,            /* opt_pbar_attr  */
  YYSYMBOL_104_42 = 104,                   /* $@42  */
  YYSYMBOL_105_43 = 105,                   /* $@43  */
  YYSYMBOL_106_44 = 106,                   /* $@44  */
  YYSYMBOL_107_45 = 107,                   /* $@45  */
  YYSYMBOL_108_46 = 108,                   /* $@46  */
  YYSYMBOL_109_47 = 109,                   /* $@47  */
  YYSYMBOL_110_48 = 110,                   /* $@48  */
  YYSYMBOL_line_comments = 111,            /* line_comments  */
  YYSYMBOL_comments = 112,                 /* comments  */
  YYSYMBOL_nline = 113                     /* nline  */
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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   206

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  82
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  213

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   286


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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    61,    61,    61,    62,    62,    67,    67,    67,    67,
      68,    68,    68,    68,    72,    73,    77,    81,    86,    87,
      87,    88,    88,    89,    89,    90,    90,    91,    91,    95,
      96,   101,   106,   106,   107,   107,   108,   109,   114,   118,
     119,   119,   123,   123,   124,   129,   133,   133,   134,   138,
     138,   138,   139,   139,   140,   145,   149,   149,   150,   154,
     154,   154,   155,   155,   155,   156,   162,   166,   166,   167,
     171,   171,   171,   172,   172,   172,   173,   178,   182,   183,
     187,   187,   187,   188,   192,   192,   192,   193,   193,   193,
     194,   199,   199,   203,   203,   204,   208,   208,   208,   209,
     214,   218,   218,   219,   219,   219,   220,   220,   220,   221,
     221,   221,   222,   227,   228,   232,   233,   237
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
  "\"end of file\"", "error", "\"invalid token\"", "LINEARBEGIN",
  "LINEAREND", "RELATIVEBEGIN", "RELATIVEEND", "RADIONGROUPBEGIN",
  "RADIOGROUPEND", "TEXTVIEWBEGIN", "IMAGEVIEWBEGIN", "BUTTONBEGIN",
  "RADIOBUTTONBEGIN", "PROGRESSBARBEGIN", "WIDTH", "HEIGHT", "ID",
  "ORIENTATION", "TEXT", "TEXTCOLOR", "SRC", "PADDING", "CHECKEDBUTTON",
  "MAX", "PROGRESS", "COUNTER", "TAGEND", "EMPTYELEMENTEND", "COMMENTS",
  "STRING", "POSITIVEINTEGER", "EOL", "$accept", "root", "$@1", "$@2",
  "general_attr", "$@3", "$@4", "$@5", "$@6", "$@7", "$@8", "attr_cont",
  "str_cont_nocoms", "int_cont_nocoms", "elements", "$@9", "$@10", "$@11",
  "$@12", "$@13", "more_elem", "lin_layout", "opt_lin_attr", "$@14",
  "$@15", "rel_layout", "opt_rev_attr", "$@16", "relative", "$@17",
  "textview", "text_attr", "$@18", "opt_text_attr", "$@19", "$@20", "$@21",
  "imageview", "img_attr", "$@22", "opt_img_attr", "$@23", "$@24", "$@25",
  "$@26", "button", "but_attr", "$@27", "opt_but_attr", "$@28", "$@29",
  "$@30", "$@31", "radiogroup", "radiogroupelements", "rad_group_attr",
  "$@32", "$@33", "opt_rgroup_attr", "$@34", "$@35", "$@36", "$@37",
  "radiobutton", "$@38", "rbut_attr", "$@39", "opt_radbut_attr", "$@40",
  "$@41", "progressbar", "opt_pbar_attr", "$@42", "$@43", "$@44", "$@45",
  "$@46", "$@47", "$@48", "line_comments", "comments", "nline", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-142)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,  -142,  -142,    15,    20,    20,  -142,  -142,  -142,   135,
    -142,   135,  -142,  -142,    63,    64,   123,   123,  -142,  -142,
    -142,   -14,    63,  -142,  -142,  -142,  -142,    29,  -142,  -142,
    -142,  -142,  -142,  -142,    44,    44,  -142,    22,  -142,  -142,
    -142,   -14,  -142,    20,    20,    63,    63,  -142,  -142,  -142,
    -142,  -142,  -142,   -14,  -142,    22,    44,    94,   107,  -142,
    -142,    20,    20,    20,    20,    20,   121,    22,   -14,   129,
    -142,  -142,  -142,   135,  -142,   135,  -142,   135,  -142,   135,
    -142,   135,  -142,   -14,   136,  -142,   123,   123,   115,    97,
      85,   117,    80,  -142,  -142,  -142,  -142,  -142,  -142,  -142,
     -14,  -142,   115,  -142,  -142,  -142,    36,  -142,  -142,  -142,
    -142,  -142,    85,  -142,  -142,  -142,  -142,  -142,   117,  -142,
    -142,  -142,  -142,  -142,    80,    44,    44,    99,   -14,    18,
    -142,    44,  -142,  -142,  -142,    44,    44,    99,  -142,    44,
      44,    99,  -142,    44,    99,    99,  -142,  -142,  -142,  -142,
    -142,  -142,   -14,    16,  -142,   132,    44,    44,  -142,   133,
    -142,  -142,   134,  -142,  -142,  -142,  -142,    40,    40,   139,
    -142,  -142,    20,  -142,  -142,    20,    62,  -142,    62,   120,
    -142,   120,    80,    80,    80,  -142,  -142,  -142,   135,    20,
    -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,   101,  -142,
    -142,  -142,  -142,  -142,   101,    44,    44,  -142,  -142,   140,
      61,  -142,  -142
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     2,     4,     0,     0,     0,     1,   117,     3,     0,
       5,     0,     6,    10,     0,     0,     0,     0,    32,    34,
      36,     0,     0,    42,    44,    38,    39,     0,    16,    17,
       7,    14,    15,    11,     0,     0,   116,     0,   113,   115,
      37,     0,    40,     0,     0,     0,     0,    25,    19,    21,
      23,    27,    18,     0,   114,     0,     0,     0,     0,    33,
      35,     0,     0,     0,     0,     0,     0,    30,     0,     0,
       8,    12,    26,     0,    20,     0,    22,     0,    24,     0,
      28,     0,    31,     0,     0,    41,     0,     0,     0,     0,
       0,     0,     0,    29,    43,     9,    13,    84,    87,    80,
       0,    83,     0,    46,    45,    48,     0,    59,    56,    62,
      55,    58,     0,    70,    67,    73,    66,    69,     0,   103,
     106,   109,   101,   100,     0,     0,     0,     0,     0,     0,
      90,     0,    49,    52,    54,     0,     0,     0,    65,     0,
       0,     0,    76,     0,     0,     0,   102,   112,    85,    88,
      81,    77,     0,     0,    91,     0,     0,     0,    60,     0,
      63,    71,     0,    74,   104,   107,   110,     0,     0,     0,
      78,    79,     0,    47,    50,     0,     0,    57,     0,     0,
      68,     0,     0,     0,     0,    86,    89,    82,     0,     0,
      53,    61,    64,    72,    75,   105,   108,   111,     0,    51,
      96,    93,    92,    95,     0,     0,     0,    99,    97,     0,
       0,    94,    98
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -142,   162,  -142,  -142,    -7,  -142,  -142,  -142,  -142,  -142,
    -142,   -11,   -13,  -125,    14,  -142,  -142,  -142,  -142,  -142,
      71,  -142,    -9,  -142,  -142,  -142,  -142,  -142,   100,  -142,
    -142,    60,  -142,  -141,  -142,  -142,  -142,  -142,    58,  -142,
     -79,  -142,  -142,  -142,  -142,  -142,    55,  -142,   -34,  -142,
    -142,  -142,  -142,  -142,    24,    81,  -142,  -142,   -10,  -142,
    -142,  -142,  -142,    82,  -142,   -20,  -142,   -24,  -142,  -142,
    -142,  -119,  -142,  -142,  -142,  -142,  -142,  -142,  -142,   -18,
     -29,    -4
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    52,     4,     5,    14,    16,    43,    86,    17,    44,
      87,    30,    31,    32,    53,    62,    63,    64,    61,    65,
      66,     8,    21,    34,    35,    10,    25,    56,    26,    41,
      74,   104,   131,   105,   156,   189,   157,    76,   110,   136,
     111,   135,   176,   137,   178,    78,   116,   140,   117,   139,
     179,   141,   181,    72,   151,   100,   127,   169,   101,   125,
     167,   126,   168,   152,   172,   202,   206,   203,   205,   210,
      80,   123,   146,   143,   182,   144,   183,   145,   184,    67,
      38,    39
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       9,    11,   150,    37,    15,   147,    33,     1,    54,     2,
      22,    27,   160,    40,    36,     6,   163,     7,    22,   165,
     166,    45,    46,    55,   171,     1,    54,     2,   154,    47,
     154,    48,    49,    50,   190,    51,    59,    60,    54,    57,
      58,    22,    22,    69,    36,    42,    36,     7,   199,     7,
      36,     7,   132,     7,   103,   133,    97,    73,    75,    77,
      79,    81,    98,   195,   196,   197,    88,     7,    89,    68,
      90,     7,    91,    28,    92,    95,    96,   200,   107,    18,
      19,    83,   129,   109,   102,   106,   112,   118,   124,    20,
      23,    24,     7,     7,     7,     7,   119,   191,   102,   192,
      54,   107,   106,   120,   121,   108,   109,   122,   112,    70,
     153,     7,   148,   149,   118,   103,     7,   200,   155,   201,
     124,    71,   158,   159,    54,    82,   161,   162,     7,    29,
     164,    97,     7,   113,   153,   114,   113,    98,   115,    84,
      99,   115,    94,   174,   175,   193,     7,   194,     7,    12,
      13,     7,    28,    29,    93,    23,    24,   185,   186,   173,
     177,   180,     3,   102,   102,   187,   134,   211,   188,    85,
     138,   106,   112,   142,   112,   118,   170,   118,   124,   124,
     124,   198,   128,   130,   207,   106,   212,     0,     0,     0,
       0,     0,   208,   209,   204,     0,     0,     0,     0,     0,
     204,     0,     0,     0,     0,     0,   204
};

static const yytype_int16 yycheck[] =
{
       4,     5,   127,    21,    11,   124,    17,     3,    37,     5,
      14,    15,   137,    22,    28,     0,   141,    31,    22,   144,
     145,    34,    35,    41,     8,     3,    55,     5,    12,     7,
      12,     9,    10,    11,   175,    13,    45,    46,    67,    43,
      44,    45,    46,    56,    28,    16,    28,    31,   189,    31,
      28,    31,    16,    31,    18,    19,    16,    61,    62,    63,
      64,    65,    22,   182,   183,   184,    73,    31,    75,    55,
      77,    31,    79,    29,    81,    86,    87,    16,    16,    16,
      17,    67,   100,    21,    88,    89,    90,    91,    92,    26,
      26,    27,    31,    31,    31,    31,    16,   176,   102,   178,
     129,    16,   106,    23,    24,    20,    21,    27,   112,    15,
     128,    31,   125,   126,   118,    18,    31,    16,   131,    18,
     124,    14,   135,   136,   153,     4,   139,   140,    31,    30,
     143,    16,    31,    16,   152,    18,    16,    22,    21,    68,
      25,    21,     6,   156,   157,   179,    31,   181,    31,    14,
      15,    31,    29,    30,    83,    26,    27,   167,   168,    27,
      27,    27,     0,   167,   168,    26,   106,    27,   172,    69,
     112,   175,   176,   118,   178,   179,   152,   181,   182,   183,
     184,   188,   100,   102,   204,   189,   210,    -1,    -1,    -1,
      -1,    -1,   205,   206,   198,    -1,    -1,    -1,    -1,    -1,
     204,    -1,    -1,    -1,    -1,    -1,   210
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     5,    33,    34,    35,     0,    31,    53,   113,
      57,   113,    14,    15,    36,    36,    37,    40,    16,    17,
      26,    54,   113,    26,    27,    58,    60,   113,    29,    30,
      43,    44,    45,    43,    55,    56,    28,   111,   112,   113,
      54,    61,    16,    38,    41,    44,    44,     7,     9,    10,
      11,    13,    33,    46,   112,   111,    59,   113,   113,    54,
      54,    50,    47,    48,    49,    51,    52,   111,    46,    44,
      15,    14,    85,   113,    62,   113,    69,   113,    77,   113,
     102,   113,     4,    46,    52,    60,    39,    42,    36,    36,
      36,    36,    36,    52,     6,    43,    43,    16,    22,    25,
      87,    90,   113,    18,    63,    65,   113,    16,    20,    21,
      70,    72,   113,    16,    18,    21,    78,    80,   113,    16,
      23,    24,    27,   103,   113,    91,    93,    88,    95,   111,
      87,    64,    16,    19,    63,    73,    71,    75,    70,    81,
      79,    83,    78,   105,   107,   109,   104,   103,    44,    44,
      45,    86,    95,   111,    12,    44,    66,    68,    44,    44,
      45,    44,    44,    45,    44,    45,    45,    92,    94,    89,
      86,     8,    96,    27,    44,    44,    74,    27,    76,    82,
      27,    84,   106,   108,   110,    90,    90,    26,   113,    67,
      65,    72,    72,    80,    80,   103,   103,   103,    36,    65,
      16,    18,    97,    99,   113,   100,    98,    97,    44,    44,
     101,    27,    99
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    34,    33,    35,    33,    37,    38,    39,    36,
      40,    41,    42,    36,    43,    43,    44,    45,    46,    47,
      46,    48,    46,    49,    46,    50,    46,    51,    46,    52,
      52,    53,    55,    54,    56,    54,    54,    54,    57,    58,
      59,    58,    61,    60,    60,    62,    64,    63,    63,    66,
      67,    65,    68,    65,    65,    69,    71,    70,    70,    73,
      74,    72,    75,    76,    72,    72,    77,    79,    78,    78,
      81,    82,    80,    83,    84,    80,    80,    85,    86,    86,
      88,    89,    87,    87,    91,    92,    90,    93,    94,    90,
      90,    96,    95,    98,    97,    97,   100,   101,    99,    99,
     102,   104,   103,   105,   106,   103,   107,   108,   103,   109,
     110,   103,   103,   111,   111,   112,   112,   113
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     0,     3,     0,     0,     0,     8,
       0,     0,     0,     8,     1,     1,     1,     1,     1,     0,
       3,     0,     3,     0,     3,     0,     3,     0,     3,     3,
       1,     7,     0,     4,     0,     4,     1,     2,     3,     1,
       0,     5,     0,     6,     1,     3,     0,     4,     1,     0,
       0,     6,     0,     5,     2,     3,     0,     4,     1,     0,
       0,     5,     0,     0,     5,     2,     3,     0,     4,     1,
       0,     0,     5,     0,     0,     5,     2,     5,     2,     2,
       0,     0,     5,     1,     0,     0,     5,     0,     0,     5,
       2,     0,     6,     0,     4,     1,     0,     0,     5,     2,
       3,     0,     2,     0,     0,     5,     0,     0,     5,     0,
       0,     5,     2,     1,     2,     1,     1,     1
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
  case 2: /* $@1: %empty  */
#line 61 "myparser.y"
              {printf("%s", yytext);}
#line 1369 "myparser.tab.c"
    break;

  case 4: /* $@2: %empty  */
#line 62 "myparser.y"
                {printf("%s", yytext);}
#line 1375 "myparser.tab.c"
    break;

  case 6: /* $@3: %empty  */
#line 67 "myparser.y"
        {printf("%s", yytext);}
#line 1381 "myparser.tab.c"
    break;

  case 7: /* $@4: %empty  */
#line 67 "myparser.y"
                                          {checkLayoutValue(yytext);}
#line 1387 "myparser.tab.c"
    break;

  case 8: /* $@5: %empty  */
#line 67 "myparser.y"
                                                                                   {printf("%s", yytext);}
#line 1393 "myparser.tab.c"
    break;

  case 9: /* general_attr: WIDTH $@3 attr_cont $@4 nline HEIGHT $@5 attr_cont  */
#line 67 "myparser.y"
                                                                                                                     {checkLayoutValue(yytext);}
#line 1399 "myparser.tab.c"
    break;

  case 10: /* $@6: %empty  */
#line 68 "myparser.y"
         {printf("%s", yytext);}
#line 1405 "myparser.tab.c"
    break;

  case 11: /* $@7: %empty  */
#line 68 "myparser.y"
                                           {checkLayoutValue(yytext);}
#line 1411 "myparser.tab.c"
    break;

  case 12: /* $@8: %empty  */
#line 68 "myparser.y"
                                                                                   {printf("%s", yytext);}
#line 1417 "myparser.tab.c"
    break;

  case 13: /* general_attr: HEIGHT $@6 attr_cont $@7 nline WIDTH $@8 attr_cont  */
#line 68 "myparser.y"
                                                                                                                     {checkLayoutValue(yytext);}
#line 1423 "myparser.tab.c"
    break;

  case 16: /* str_cont_nocoms: STRING  */
#line 77 "myparser.y"
         {printf("%s", yytext);}
#line 1429 "myparser.tab.c"
    break;

  case 17: /* int_cont_nocoms: POSITIVEINTEGER  */
#line 81 "myparser.y"
                  {printf("%s", yytext);}
#line 1435 "myparser.tab.c"
    break;

  case 19: /* $@9: %empty  */
#line 87 "myparser.y"
                {printf("%s", yytext);}
#line 1441 "myparser.tab.c"
    break;

  case 21: /* $@10: %empty  */
#line 88 "myparser.y"
                 {printf("%s", yytext);}
#line 1447 "myparser.tab.c"
    break;

  case 23: /* $@11: %empty  */
#line 89 "myparser.y"
              {printf("%s", yytext);}
#line 1453 "myparser.tab.c"
    break;

  case 25: /* $@12: %empty  */
#line 90 "myparser.y"
                   {rbuttonCnt=0; initialArray(); printf("%s", yytext);}
#line 1459 "myparser.tab.c"
    break;

  case 27: /* $@13: %empty  */
#line 91 "myparser.y"
                   {printf("%s", yytext);}
#line 1465 "myparser.tab.c"
    break;

  case 31: /* lin_layout: nline general_attr opt_lin_attr line_comments elements more_elem LINEAREND  */
#line 101 "myparser.y"
                                                                             {printf("%s", yytext);}
#line 1471 "myparser.tab.c"
    break;

  case 32: /* $@14: %empty  */
#line 106 "myparser.y"
     {printf("%s", yytext);}
#line 1477 "myparser.tab.c"
    break;

  case 34: /* $@15: %empty  */
#line 107 "myparser.y"
              {printf("%s", yytext);}
#line 1483 "myparser.tab.c"
    break;

  case 36: /* opt_lin_attr: TAGEND  */
#line 108 "myparser.y"
         {printf("%s", yytext);}
#line 1489 "myparser.tab.c"
    break;

  case 40: /* $@16: %empty  */
#line 119 "myparser.y"
           {printf("%s", yytext);}
#line 1495 "myparser.tab.c"
    break;

  case 42: /* $@17: %empty  */
#line 123 "myparser.y"
         {printf("%s", yytext);}
#line 1501 "myparser.tab.c"
    break;

  case 43: /* relative: TAGEND $@17 line_comments elements more_elem RELATIVEEND  */
#line 123 "myparser.y"
                                                                              {printf("%s", yytext);}
#line 1507 "myparser.tab.c"
    break;

  case 44: /* relative: EMPTYELEMENTEND  */
#line 124 "myparser.y"
                  {printf("%s", yytext);}
#line 1513 "myparser.tab.c"
    break;

  case 46: /* $@18: %empty  */
#line 133 "myparser.y"
       {printf("%s", yytext);}
#line 1519 "myparser.tab.c"
    break;

  case 47: /* text_attr: TEXT $@18 str_cont_nocoms EMPTYELEMENTEND  */
#line 133 "myparser.y"
                                                               {printf("%s", yytext);}
#line 1525 "myparser.tab.c"
    break;

  case 49: /* $@19: %empty  */
#line 138 "myparser.y"
           {printf("%s", yytext);}
#line 1531 "myparser.tab.c"
    break;

  case 50: /* $@20: %empty  */
#line 138 "myparser.y"
                                                   {checkUniqueID(yytext);}
#line 1537 "myparser.tab.c"
    break;

  case 52: /* $@21: %empty  */
#line 139 "myparser.y"
                  {printf("%s", yytext);}
#line 1543 "myparser.tab.c"
    break;

  case 56: /* $@22: %empty  */
#line 149 "myparser.y"
      {printf("%s", yytext);}
#line 1549 "myparser.tab.c"
    break;

  case 57: /* img_attr: SRC $@22 str_cont_nocoms EMPTYELEMENTEND  */
#line 149 "myparser.y"
                                                              {printf("%s", yytext);}
#line 1555 "myparser.tab.c"
    break;

  case 59: /* $@23: %empty  */
#line 154 "myparser.y"
     {printf("%s", yytext);}
#line 1561 "myparser.tab.c"
    break;

  case 60: /* $@24: %empty  */
#line 154 "myparser.y"
                                             {checkUniqueID(yytext);}
#line 1567 "myparser.tab.c"
    break;

  case 62: /* $@25: %empty  */
#line 155 "myparser.y"
          {printf("%s", yytext);}
#line 1573 "myparser.tab.c"
    break;

  case 63: /* $@26: %empty  */
#line 155 "myparser.y"
                                                  {checkPaddingValue(yytext);}
#line 1579 "myparser.tab.c"
    break;

  case 67: /* $@27: %empty  */
#line 166 "myparser.y"
       {printf("%s", yytext);}
#line 1585 "myparser.tab.c"
    break;

  case 68: /* but_attr: TEXT $@27 str_cont_nocoms EMPTYELEMENTEND  */
#line 166 "myparser.y"
                                                               {printf("%s", yytext);}
#line 1591 "myparser.tab.c"
    break;

  case 70: /* $@28: %empty  */
#line 171 "myparser.y"
     {printf("%s", yytext);}
#line 1597 "myparser.tab.c"
    break;

  case 71: /* $@29: %empty  */
#line 171 "myparser.y"
                                             {checkUniqueID(yytext);}
#line 1603 "myparser.tab.c"
    break;

  case 73: /* $@30: %empty  */
#line 172 "myparser.y"
          {printf("%s", yytext);}
#line 1609 "myparser.tab.c"
    break;

  case 74: /* $@31: %empty  */
#line 172 "myparser.y"
                                                  {checkPaddingValue(yytext);}
#line 1615 "myparser.tab.c"
    break;

  case 79: /* radiogroupelements: line_comments RADIOGROUPEND  */
#line 183 "myparser.y"
                              {printf("%s", yytext);if(existCheckButton==1){checkedButton(checkButtonValue);} checkCounter(counterValue, rbuttonCnt);}
#line 1621 "myparser.tab.c"
    break;

  case 80: /* $@32: %empty  */
#line 187 "myparser.y"
          {printf("%s", yytext);}
#line 1627 "myparser.tab.c"
    break;

  case 81: /* $@33: %empty  */
#line 187 "myparser.y"
                                                  {counterValue = toInteger(yytext);}
#line 1633 "myparser.tab.c"
    break;

  case 82: /* rad_group_attr: COUNTER $@32 int_cont_nocoms $@33 TAGEND  */
#line 187 "myparser.y"
                                                                                             {printf("%s", yytext);}
#line 1639 "myparser.tab.c"
    break;

  case 84: /* $@34: %empty  */
#line 192 "myparser.y"
     {printf("%s", yytext);}
#line 1645 "myparser.tab.c"
    break;

  case 85: /* $@35: %empty  */
#line 192 "myparser.y"
                                             {checkUniqueID(yytext);}
#line 1651 "myparser.tab.c"
    break;

  case 87: /* $@36: %empty  */
#line 193 "myparser.y"
                {existCheckButton=1;printf("%s", yytext);}
#line 1657 "myparser.tab.c"
    break;

  case 88: /* $@37: %empty  */
#line 193 "myparser.y"
                                                                           {strcpy(checkButtonValue, yytext);}
#line 1663 "myparser.tab.c"
    break;

  case 91: /* $@38: %empty  */
#line 199 "myparser.y"
                                 {printf("%s", yytext);rbuttonCnt++; }
#line 1669 "myparser.tab.c"
    break;

  case 93: /* $@39: %empty  */
#line 203 "myparser.y"
       {printf("%s", yytext);}
#line 1675 "myparser.tab.c"
    break;

  case 94: /* rbut_attr: TEXT $@39 str_cont_nocoms EMPTYELEMENTEND  */
#line 203 "myparser.y"
                                                               {printf("%s", yytext);}
#line 1681 "myparser.tab.c"
    break;

  case 96: /* $@40: %empty  */
#line 208 "myparser.y"
     {printf("%s", yytext);}
#line 1687 "myparser.tab.c"
    break;

  case 97: /* $@41: %empty  */
#line 208 "myparser.y"
                                             {checkUniqueID(yytext); insertRbuttonValues(yytext);}
#line 1693 "myparser.tab.c"
    break;

  case 101: /* $@42: %empty  */
#line 218 "myparser.y"
                  {printf("%s", yytext);}
#line 1699 "myparser.tab.c"
    break;

  case 102: /* opt_pbar_attr: EMPTYELEMENTEND $@42  */
#line 218 "myparser.y"
                                          {if(existMax==1 && existProgress==1){checkProgressValue(progressValue,maxProgress);}}
#line 1705 "myparser.tab.c"
    break;

  case 103: /* $@43: %empty  */
#line 219 "myparser.y"
     {printf("%s", yytext);}
#line 1711 "myparser.tab.c"
    break;

  case 104: /* $@44: %empty  */
#line 219 "myparser.y"
                                             {checkUniqueID(yytext);}
#line 1717 "myparser.tab.c"
    break;

  case 106: /* $@45: %empty  */
#line 220 "myparser.y"
      {printf("%s", yytext);}
#line 1723 "myparser.tab.c"
    break;

  case 107: /* $@46: %empty  */
#line 220 "myparser.y"
                                              {existMax=1; maxProgress = toInteger(yytext);}
#line 1729 "myparser.tab.c"
    break;

  case 109: /* $@47: %empty  */
#line 221 "myparser.y"
           {printf("%s", yytext);}
#line 1735 "myparser.tab.c"
    break;

  case 110: /* $@48: %empty  */
#line 221 "myparser.y"
                                                   {existProgress=1; progressValue=toInteger(yytext);}
#line 1741 "myparser.tab.c"
    break;

  case 116: /* comments: COMMENTS  */
#line 233 "myparser.y"
           { printf("%s", yytext); }
#line 1747 "myparser.tab.c"
    break;

  case 117: /* nline: EOL  */
#line 237 "myparser.y"
      { printf("%s", yytext); }
#line 1753 "myparser.tab.c"
    break;


#line 1757 "myparser.tab.c"

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

#line 240 "myparser.y"


int main (int argc, char **argv) {
	FILE *jfile = fopen(argv[1], "r");
	yyin = jfile;
    for(int i=0; i<N;i++){
        strcpy(idValues[i],"\"\"");
    }
	yyparse();
    printf("\n");
	return 0;
}


void yyerror (const char *errmsg) {
    printf("\n\nError in line %d: %s ", yylineno,errmsg);
} 

void checkLayoutValue(char *value){
    int first = toInteger(value);
    if(first<0){
        yyerror("The value must be only positive integer.\n");
        exit(1);
    }
    else if(first==0){
        int res;
        for(int i=0; i<2; i++){
            res = strcmp(value,layoutcont[i]);
            if(res == 0){
                break;
            }
        }
        if(res !=0){
            yyerror("The value must be only positive integer or \"match_parent\" or \"wrap_content\".\n");
            exit(1);
        }
    }
}

void insertRbuttonValues(char *idRbutton) {
    for (int i = 0; i < rbuttonCnt; i++) {
        int res1 = strcmp("\"\"", radioButtonValues[i]);
        if (res1 == 0) {
            strcpy(radioButtonValues[i], idRbutton);
            break;
        }
    }
}

void checkedButton(char *checkButtonValue){
    int check;
    for(int i=0; i<rbuttonCnt; i++){
        int res1 = strcmp(checkButtonValue,radioButtonValues[i]);
        if(res1==0){
            check = res1;
            break;
        } else{
            check = res1;
        }
    }
    if(check != 0){
        yyerror("Check button must be one value of radio button id.\n");
        exit(1);
    }
}



void checkUniqueID(char *idstr){
    int idCheckEmpty = strcmp("\"\"",idstr);
    if(idCheckEmpty == 0){
        yyerror("The ID attribute must have a valid value.\n");
        exit(1);
    }
    for(int i=0; i<N; i++){
        int res1 = strcmp("\"\"",idValues[i]);
        if(res1==0){
            strcpy(idValues[i], idstr);
            break;
        } else{
            int res2 = strcmp(idstr, idValues[i]);
            if(res2==0){
                yyerror("The ID attribute must have a unique value.\n");
                exit(1);
            }
        }
    }
}

void checkPaddingValue(char *padstr){
    int value = toInteger(padstr);
    if(value==0){
        yyerror("The padding attribute must have a value greater than 0.\n");
        exit(1);
    }
}

void checkProgressValue(int prog, int maxvalue){
    if(prog>maxvalue){
        yyerror("The progress attribute must be between 0 and the maximum value attribute.\n");
        exit(1);
    }
}

int toInteger(const char *s) {
    char cleanString[strlen(s) - 1];
    for (int i = 0; i < sizeof(cleanString) - 1; i++) {
        cleanString[i] = s[i + 1];
    }
    cleanString[sizeof(cleanString) - 1] = '\0';
    int intValue = atoi(cleanString);

    return intValue;
}

void checkCounter(int counterValue, int counter){
    if(counterValue != counter){
        yyerror("The counter value must match the sum of radio buttons.\n");
        exit(1);
    }

}

void initialArray(){
    for(int i=0; i<N;i++){
        strcpy(radioButtonValues[i],"\"\"");
    }
}
