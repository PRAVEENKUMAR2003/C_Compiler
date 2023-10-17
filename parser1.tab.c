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
#line 1 "parser1.y"

	void yyerror(char* s);
	int yylex();
	#include "stdio.h"
	#include "stdlib.h"
	#include "ctype.h"
	#include "string.h"



#line 82 "parser1.tab.c"

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

#include "parser1.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_CHAR = 5,                       /* CHAR  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_DOUBLE = 7,                     /* DOUBLE  */
  YYSYMBOL_LONG = 8,                       /* LONG  */
  YYSYMBOL_SHORT = 9,                      /* SHORT  */
  YYSYMBOL_SIGNED = 10,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 11,                  /* UNSIGNED  */
  YYSYMBOL_STRUCT = 12,                    /* STRUCT  */
  YYSYMBOL_RETURN = 13,                    /* RETURN  */
  YYSYMBOL_MAIN = 14,                      /* MAIN  */
  YYSYMBOL_VOID = 15,                      /* VOID  */
  YYSYMBOL_WHILE = 16,                     /* WHILE  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_DO = 18,                        /* DO  */
  YYSYMBOL_BREAK = 19,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 20,                  /* CONTINUE  */
  YYSYMBOL_GOTO = 21,                      /* GOTO  */
  YYSYMBOL_ENDIF = 22,                     /* ENDIF  */
  YYSYMBOL_SWITCH = 23,                    /* SWITCH  */
  YYSYMBOL_CASE = 24,                      /* CASE  */
  YYSYMBOL_DEFAULT = 25,                   /* DEFAULT  */
  YYSYMBOL_identifier = 26,                /* identifier  */
  YYSYMBOL_integer_constant = 27,          /* integer_constant  */
  YYSYMBOL_string_constant = 28,           /* string_constant  */
  YYSYMBOL_float_constant = 29,            /* float_constant  */
  YYSYMBOL_character_constant = 30,        /* character_constant  */
  YYSYMBOL_binary_constant = 31,           /* binary_constant  */
  YYSYMBOL_hexadecimal_constant = 32,      /* hexadecimal_constant  */
  YYSYMBOL_exponent_constant = 33,         /* exponent_constant  */
  YYSYMBOL_octal_constant = 34,            /* octal_constant  */
  YYSYMBOL_LEFT_SHIFT = 35,                /* LEFT_SHIFT  */
  YYSYMBOL_RIGHT_SHIFT = 36,               /* RIGHT_SHIFT  */
  YYSYMBOL_ELSE = 37,                      /* ELSE  */
  YYSYMBOL_MOD_EQUAL = 38,                 /* MOD_EQUAL  */
  YYSYMBOL_MULTIPLY_EQUAL = 39,            /* MULTIPLY_EQUAL  */
  YYSYMBOL_DIVIDE_EQUAL = 40,              /* DIVIDE_EQUAL  */
  YYSYMBOL_ADD_EQUAL = 41,                 /* ADD_EQUAL  */
  YYSYMBOL_SUBTRACT_EQUAL = 42,            /* SUBTRACT_EQUAL  */
  YYSYMBOL_43_ = 43,                       /* '='  */
  YYSYMBOL_OR_OR = 44,                     /* OR_OR  */
  YYSYMBOL_AND_AND = 45,                   /* AND_AND  */
  YYSYMBOL_46_ = 46,                       /* '^'  */
  YYSYMBOL_EQUAL = 47,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 48,                 /* NOT_EQUAL  */
  YYSYMBOL_LESS_EQUAL = 49,                /* LESS_EQUAL  */
  YYSYMBOL_LESS = 50,                      /* LESS  */
  YYSYMBOL_GREAT_EQUAL = 51,               /* GREAT_EQUAL  */
  YYSYMBOL_GREAT = 52,                     /* GREAT  */
  YYSYMBOL_53_ = 53,                       /* '+'  */
  YYSYMBOL_54_ = 54,                       /* '-'  */
  YYSYMBOL_55_ = 55,                       /* '*'  */
  YYSYMBOL_56_ = 56,                       /* '/'  */
  YYSYMBOL_57_ = 57,                       /* '%'  */
  YYSYMBOL_SIZEOF = 58,                    /* SIZEOF  */
  YYSYMBOL_NOT = 59,                       /* NOT  */
  YYSYMBOL_INCREMENT = 60,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 61,                 /* DECREMENT  */
  YYSYMBOL_62_ = 62,                       /* '{'  */
  YYSYMBOL_63_ = 63,                       /* '}'  */
  YYSYMBOL_64_ = 64,                       /* ';'  */
  YYSYMBOL_65_ = 65,                       /* ','  */
  YYSYMBOL_66_ = 66,                       /* '['  */
  YYSYMBOL_67_ = 67,                       /* ']'  */
  YYSYMBOL_68_ = 68,                       /* '('  */
  YYSYMBOL_69_ = 69,                       /* ')'  */
  YYSYMBOL_70_ = 70,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 71,                  /* $accept  */
  YYSYMBOL_begin_parse = 72,               /* begin_parse  */
  YYSYMBOL_declarations = 73,              /* declarations  */
  YYSYMBOL_declaration = 74,               /* declaration  */
  YYSYMBOL_structure_dec = 75,             /* structure_dec  */
  YYSYMBOL_structure_content = 76,         /* structure_content  */
  YYSYMBOL_variable_dec = 77,              /* variable_dec  */
  YYSYMBOL_structure_initialize = 78,      /* structure_initialize  */
  YYSYMBOL_variables = 79,                 /* variables  */
  YYSYMBOL_multiple_variables = 80,        /* multiple_variables  */
  YYSYMBOL_identifier_name = 81,           /* identifier_name  */
  YYSYMBOL_82_1 = 82,                      /* $@1  */
  YYSYMBOL_extended_identifier = 83,       /* extended_identifier  */
  YYSYMBOL_array_identifier = 84,          /* array_identifier  */
  YYSYMBOL_array_dims = 85,                /* array_dims  */
  YYSYMBOL_initilization = 86,             /* initilization  */
  YYSYMBOL_string_initilization = 87,      /* string_initilization  */
  YYSYMBOL_array_initialization = 88,      /* array_initialization  */
  YYSYMBOL_array_values = 89,              /* array_values  */
  YYSYMBOL_multiple_array_values = 90,     /* multiple_array_values  */
  YYSYMBOL_datatype = 91,                  /* datatype  */
  YYSYMBOL_unsigned_grammar = 92,          /* unsigned_grammar  */
  YYSYMBOL_signed_grammar = 93,            /* signed_grammar  */
  YYSYMBOL_long_grammar = 94,              /* long_grammar  */
  YYSYMBOL_short_grammar = 95,             /* short_grammar  */
  YYSYMBOL_function_dec = 96,              /* function_dec  */
  YYSYMBOL_function_datatype = 97,         /* function_datatype  */
  YYSYMBOL_function_parameters = 98,       /* function_parameters  */
  YYSYMBOL_parameters = 99,                /* parameters  */
  YYSYMBOL_all_parameter_identifiers = 100, /* all_parameter_identifiers  */
  YYSYMBOL_multiple_parameters = 101,      /* multiple_parameters  */
  YYSYMBOL_parameter_identifier = 102,     /* parameter_identifier  */
  YYSYMBOL_extended_parameter = 103,       /* extended_parameter  */
  YYSYMBOL_statement = 104,                /* statement  */
  YYSYMBOL_multiple_statement = 105,       /* multiple_statement  */
  YYSYMBOL_statments = 106,                /* statments  */
  YYSYMBOL_expression_statment = 107,      /* expression_statment  */
  YYSYMBOL_conditional_statements = 108,   /* conditional_statements  */
  YYSYMBOL_extended_conditional_statements = 109, /* extended_conditional_statements  */
  YYSYMBOL_iterative_statements = 110,     /* iterative_statements  */
  YYSYMBOL_for_initialization = 111,       /* for_initialization  */
  YYSYMBOL_return_statement = 112,         /* return_statement  */
  YYSYMBOL_return_suffix = 113,            /* return_suffix  */
  YYSYMBOL_break_statement = 114,          /* break_statement  */
  YYSYMBOL_expression = 115,               /* expression  */
  YYSYMBOL_expressions = 116,              /* expressions  */
  YYSYMBOL_simple_expression = 117,        /* simple_expression  */
  YYSYMBOL_simple_expression_breakup = 118, /* simple_expression_breakup  */
  YYSYMBOL_and_expression = 119,           /* and_expression  */
  YYSYMBOL_and_expression_breakup = 120,   /* and_expression_breakup  */
  YYSYMBOL_unary_relation_expression = 121, /* unary_relation_expression  */
  YYSYMBOL_regular_expression = 122,       /* regular_expression  */
  YYSYMBOL_regular_expression_breakup = 123, /* regular_expression_breakup  */
  YYSYMBOL_relational_operators = 124,     /* relational_operators  */
  YYSYMBOL_sum_expression = 125,           /* sum_expression  */
  YYSYMBOL_sum_operators = 126,            /* sum_operators  */
  YYSYMBOL_term = 127,                     /* term  */
  YYSYMBOL_multiply_operators = 128,       /* multiply_operators  */
  YYSYMBOL_factor = 129,                   /* factor  */
  YYSYMBOL_iden = 130,                     /* iden  */
  YYSYMBOL_extended_iden = 131,            /* extended_iden  */
  YYSYMBOL_func = 132,                     /* func  */
  YYSYMBOL_func_call = 133,                /* func_call  */
  YYSYMBOL_arguments = 134,                /* arguments  */
  YYSYMBOL_arguments_list = 135,           /* arguments_list  */
  YYSYMBOL_extended_arguments = 136,       /* extended_arguments  */
  YYSYMBOL_constant = 137                  /* constant  */
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
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   250

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  144
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  227

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   309


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
       2,     2,     2,     2,     2,     2,     2,    57,     2,     2,
      68,    69,    55,    53,    65,    54,    70,    56,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    64,
       2,    43,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    66,     2,    67,    46,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    62,     2,    63,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    44,    45,
      47,    48,    49,    50,    51,    52,    58,    59,    60,    61
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    49,    49,    52,    53,    57,    58,    59,    62,    64,
      64,    67,    68,    71,    74,    77,    78,    81,    81,    83,
      83,    86,    87,    90,    91,    94,    95,    96,    99,   102,
     105,   108,   109,   113,   113,   113,   113,   114,   115,   116,
     117,   118,   121,   121,   121,   121,   124,   124,   124,   124,
     127,   127,   130,   130,   133,   136,   139,   142,   142,   145,
     148,   149,   152,   155,   156,   159,   159,   160,   160,   161,
     161,   162,   165,   168,   169,   172,   173,   176,   179,   180,
     183,   184,   185,   188,   189,   190,   193,   196,   197,   200,
     203,   204,   207,   208,   209,   210,   211,   212,   213,   214,
     217,   220,   220,   223,   226,   227,   230,   231,   234,   237,
     238,   241,   242,   243,   244,   245,   246,   249,   250,   253,
     254,   257,   258,   261,   261,   261,   264,   264,   267,   268,
     271,   272,   275,   276,   276,   279,   282,   282,   285,   288,
     289,   292,   293,   294,   295
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
  "\"end of file\"", "error", "\"invalid token\"", "IF", "INT", "CHAR",
  "FLOAT", "DOUBLE", "LONG", "SHORT", "SIGNED", "UNSIGNED", "STRUCT",
  "RETURN", "MAIN", "VOID", "WHILE", "FOR", "DO", "BREAK", "CONTINUE",
  "GOTO", "ENDIF", "SWITCH", "CASE", "DEFAULT", "identifier",
  "integer_constant", "string_constant", "float_constant",
  "character_constant", "binary_constant", "hexadecimal_constant",
  "exponent_constant", "octal_constant", "LEFT_SHIFT", "RIGHT_SHIFT",
  "ELSE", "MOD_EQUAL", "MULTIPLY_EQUAL", "DIVIDE_EQUAL", "ADD_EQUAL",
  "SUBTRACT_EQUAL", "'='", "OR_OR", "AND_AND", "'^'", "EQUAL", "NOT_EQUAL",
  "LESS_EQUAL", "LESS", "GREAT_EQUAL", "GREAT", "'+'", "'-'", "'*'", "'/'",
  "'%'", "SIZEOF", "NOT", "INCREMENT", "DECREMENT", "'{'", "'}'", "';'",
  "','", "'['", "']'", "'('", "')'", "'.'", "$accept", "begin_parse",
  "declarations", "declaration", "structure_dec", "structure_content",
  "variable_dec", "structure_initialize", "variables",
  "multiple_variables", "identifier_name", "$@1", "extended_identifier",
  "array_identifier", "array_dims", "initilization",
  "string_initilization", "array_initialization", "array_values",
  "multiple_array_values", "datatype", "unsigned_grammar",
  "signed_grammar", "long_grammar", "short_grammar", "function_dec",
  "function_datatype", "function_parameters", "parameters",
  "all_parameter_identifiers", "multiple_parameters",
  "parameter_identifier", "extended_parameter", "statement",
  "multiple_statement", "statments", "expression_statment",
  "conditional_statements", "extended_conditional_statements",
  "iterative_statements", "for_initialization", "return_statement",
  "return_suffix", "break_statement", "expression", "expressions",
  "simple_expression", "simple_expression_breakup", "and_expression",
  "and_expression_breakup", "unary_relation_expression",
  "regular_expression", "regular_expression_breakup",
  "relational_operators", "sum_expression", "sum_operators", "term",
  "multiply_operators", "factor", "iden", "extended_iden", "func",
  "func_call", "arguments", "arguments_list", "extended_arguments",
  "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-114)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     193,  -114,  -114,  -114,  -114,     6,    34,    63,    70,   -11,
    -114,    39,  -114,   193,  -114,  -114,  -114,    15,  -114,   139,
    -114,  -114,  -114,  -114,  -114,     6,    34,  -114,  -114,     6,
      34,  -114,   -15,  -114,  -114,   -25,   -19,    -7,    24,  -114,
     -18,  -114,  -114,  -114,  -114,  -114,   205,  -114,  -114,   -24,
    -114,    54,  -114,    22,  -114,    16,   101,    72,    33,   205,
      54,    56,   -21,  -114,  -114,  -114,    32,  -114,   139,  -114,
      35,     2,    53,    55,   101,    36,    57,  -114,  -114,  -114,
    -114,    56,   101,  -114,    56,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,    37,  -114,    58,    87,  -114,   135,    -3,
    -114,    96,  -114,  -114,  -114,    54,    69,  -114,  -114,    85,
     110,  -114,  -114,  -114,    56,  -114,  -114,    91,    56,   166,
     142,  -114,    56,  -114,   -53,   101,    98,    95,  -114,    56,
    -114,    56,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,     7,     7,  -114,  -114,  -114,     7,    56,    56,
      56,    56,    56,    56,  -114,  -114,    56,   141,  -114,  -114,
    -114,   125,   151,  -114,   111,  -114,   121,  -114,  -114,    56,
     127,   138,   153,   150,  -114,  -114,  -114,  -114,    58,    87,
      11,    -3,  -114,  -114,  -114,  -114,  -114,  -114,  -114,   140,
    -114,   -14,  -114,  -114,  -114,  -114,   101,   101,   157,  -114,
      56,    56,  -114,  -114,  -114,  -114,  -114,   195,   186,  -114,
      56,   155,   153,   161,   164,   101,  -114,   159,   165,  -114,
     195,  -114,  -114,  -114,  -114,  -114,  -114
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    33,    34,    35,    36,    51,    53,    49,    45,     0,
      41,     0,     2,     4,     7,     5,    12,     0,     6,    58,
      50,    37,    52,    38,    46,    51,    53,    40,    42,    51,
      53,    39,     0,     1,     3,    17,     0,    16,     0,    54,
       0,    47,    48,    43,    44,    17,    10,    13,    55,    22,
      11,     0,    14,    64,    57,    61,     0,     0,     0,    10,
       0,     0,     0,    18,    19,    15,     0,    62,    58,    59,
       0,     0,     0,     0,     0,     0,   128,   141,   142,   143,
     144,     0,    74,    76,     0,    71,    56,    66,    65,    67,
      68,    69,    70,     0,    91,   102,   105,   107,   110,   118,
     122,   127,   126,   133,   134,     0,     0,     9,    20,     0,
       0,    21,    63,    60,     0,    87,    86,     0,     0,     0,
       0,    89,   137,   106,   127,    74,     0,     0,    75,     0,
     100,     0,   103,   115,   116,   112,   114,   111,   113,   119,
     120,   108,     0,     0,   123,   124,   125,     0,     0,     0,
       0,     0,     0,     0,    98,    99,     0,     0,    90,   129,
       8,    27,     0,    24,     0,    88,     0,    85,    83,     0,
       0,     0,   140,     0,   136,    73,    72,   132,   102,   105,
     109,   117,   121,    97,    95,    96,    93,    94,    92,     0,
     131,     0,    23,    25,    26,    28,     0,     0,     0,    84,
       0,     0,   138,   135,   101,   104,   130,     0,    79,    80,
       0,     0,   140,    32,     0,     0,    77,     0,     0,   139,
       0,    30,    29,    78,    81,    82,    31
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -114,  -114,   218,  -114,  -114,   173,     3,  -114,   -28,  -114,
    -114,  -114,  -114,  -114,  -114,  -114,    74,  -114,    13,  -114,
       8,  -114,  -114,    -5,    -4,  -114,  -114,  -114,   168,  -114,
    -114,  -114,  -114,   -56,  -114,   112,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,   -59,  -114,  -113,    60,   113,    61,
     -72,  -114,  -114,  -114,    97,  -114,   100,  -114,    94,   -74,
    -114,  -114,  -114,  -114,  -114,    38,  -114
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    11,    12,    13,    14,    58,    85,    16,    36,    52,
      37,    49,    63,    64,   111,   192,   163,   194,   214,   221,
      60,    31,    27,    21,    23,    18,    19,    39,    40,    54,
      69,    55,    67,   125,    87,   126,    88,    89,   216,    90,
     169,    91,   116,    92,    93,   158,    94,   130,    95,   132,
      96,    97,   141,   142,    98,   143,    99,   147,   100,   101,
     159,   102,   103,   173,   174,   202,   104
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      86,   164,   108,    15,    47,   166,   109,   124,    17,   123,
      20,    45,   117,   156,   195,    32,    15,   157,   120,    61,
      41,    17,    42,    65,    43,   127,    44,    38,    76,    77,
      78,    79,    80,    76,    77,    78,    79,    80,    22,    33,
     124,    35,    62,    48,   124,    50,   110,    46,   207,    59,
      53,    56,   144,   145,   146,   124,   198,   124,    51,   179,
     170,    81,    59,   172,   139,   140,   115,    24,   124,   124,
      84,    25,    26,   124,    28,    84,    38,    47,    29,    30,
      45,    68,    76,    77,    78,    79,    80,   211,    66,   183,
     184,   185,   186,   187,   188,   124,   106,   189,   105,   112,
     121,   128,   129,   114,    70,     1,     2,     3,     4,     5,
       6,     7,     8,    57,    71,    81,    10,    72,    73,    74,
      75,   118,   168,   119,    84,   122,   124,    76,    77,    78,
      79,    80,   131,   160,   148,   149,   150,   151,   152,   153,
     208,   209,   212,     1,     2,     3,     4,     5,     6,     7,
       8,   217,   161,   162,    10,   165,   154,   155,   171,   223,
      81,   176,   156,    82,   177,    83,   157,   190,   191,    84,
       1,     2,     3,     4,     5,     6,     7,     8,    57,   195,
     196,    10,   133,   134,   135,   136,   137,   138,   139,   140,
     197,   199,    76,    77,    78,    79,    80,     1,     2,     3,
       4,     5,     6,     7,     8,     9,   200,   206,    10,     1,
       2,     3,     4,     5,     6,     7,     8,    57,   201,   203,
      10,   210,   213,   215,   218,    81,   220,   222,   224,   225,
     167,    34,   107,   226,    84,   193,   113,   175,   204,   180,
     205,   182,   178,   181,     0,     0,     0,     0,     0,     0,
     219
};

static const yytype_int16 yycheck[] =
{
      56,   114,    61,     0,    32,   118,    27,    81,     0,    81,
       4,    26,    71,    66,    28,    26,    13,    70,    74,    43,
      25,    13,    26,    51,    29,    84,    30,    19,    26,    27,
      28,    29,    30,    26,    27,    28,    29,    30,     4,     0,
     114,    26,    66,    68,   118,    64,    67,    62,    62,    46,
      26,    69,    55,    56,    57,   129,   169,   131,    65,   131,
     119,    59,    59,   122,    53,    54,    64,     4,   142,   143,
      68,     8,     9,   147,     4,    68,    68,   105,     8,     9,
      26,    65,    26,    27,    28,    29,    30,   200,    66,   148,
     149,   150,   151,   152,   153,   169,    63,   156,    26,    67,
      64,    64,    44,    68,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    59,    15,    16,    17,    18,
      19,    68,   119,    68,    68,    68,   200,    26,    27,    28,
      29,    30,    45,    64,    38,    39,    40,    41,    42,    43,
     196,   197,   201,     4,     5,     6,     7,     8,     9,    10,
      11,   210,    67,    43,    15,    64,    60,    61,    16,   215,
      59,    63,    66,    62,    69,    64,    70,    26,    43,    68,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    28,
      69,    15,    47,    48,    49,    50,    51,    52,    53,    54,
      69,    64,    26,    27,    28,    29,    30,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    68,    67,    15,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    65,    69,
      15,    64,    27,    37,    69,    59,    65,    63,    69,    64,
      64,    13,    59,   220,    68,   161,    68,   125,   178,   142,
     179,   147,   129,   143,    -1,    -1,    -1,    -1,    -1,    -1,
     212
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      15,    72,    73,    74,    75,    77,    78,    91,    96,    97,
       4,    94,     4,    95,     4,     8,     9,    93,     4,     8,
       9,    92,    26,     0,    73,    26,    79,    81,    91,    98,
      99,    94,    95,    94,    95,    26,    62,    79,    68,    82,
      64,    65,    80,    26,   100,   102,    69,    12,    76,    77,
      91,    43,    66,    83,    84,    79,    66,   103,    65,   101,
       3,    13,    16,    17,    18,    19,    26,    27,    28,    29,
      30,    59,    62,    64,    68,    77,   104,   105,   107,   108,
     110,   112,   114,   115,   117,   119,   121,   122,   125,   127,
     129,   130,   132,   133,   137,    26,    63,    76,   115,    27,
      67,    85,    67,    99,    68,    64,   113,   115,    68,    68,
     104,    64,    68,   121,   130,   104,   106,   115,    64,    44,
     118,    45,   120,    47,    48,    49,    50,    51,    52,    53,
      54,   123,   124,   126,    55,    56,    57,   128,    38,    39,
      40,    41,    42,    43,    60,    61,    66,    70,   116,   131,
      64,    67,    43,    87,   117,    64,   117,    64,    77,   111,
     115,    16,   115,   134,   135,   106,    63,    69,   119,   121,
     125,   127,   129,   115,   115,   115,   115,   115,   115,   115,
      26,    43,    86,    87,    88,    28,    69,    69,   117,    64,
      68,    65,   136,    69,   118,   120,    67,    62,   104,   104,
      64,   117,   115,    27,    89,    37,   109,   115,    69,   136,
      65,    90,    63,   104,    69,    64,    89
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    73,    73,    74,    74,    74,    75,    76,
      76,    77,    77,    78,    79,    80,    80,    82,    81,    83,
      83,    84,    84,    85,    85,    86,    86,    86,    87,    88,
      89,    90,    90,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    92,    92,    92,    92,    93,    93,    93,    93,
      94,    94,    95,    95,    96,    97,    98,    99,    99,   100,
     101,   101,   102,   103,   103,   104,   104,   104,   104,   104,
     104,   104,   105,   106,   106,   107,   107,   108,   109,   109,
     110,   110,   110,   111,   111,   111,   112,   113,   113,   114,
     115,   115,   116,   116,   116,   116,   116,   116,   116,   116,
     117,   118,   118,   119,   120,   120,   121,   121,   122,   123,
     123,   124,   124,   124,   124,   124,   124,   125,   125,   126,
     126,   127,   127,   128,   128,   128,   129,   129,   130,   130,
     131,   131,   132,   132,   132,   133,   134,   134,   135,   136,
     136,   137,   137,   137,   137
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     6,     2,
       0,     3,     1,     3,     2,     2,     0,     0,     3,     1,
       2,     2,     0,     3,     2,     1,     1,     0,     2,     4,
       2,     2,     0,     1,     1,     1,     1,     2,     2,     2,
       2,     1,     1,     2,     2,     0,     1,     2,     2,     0,
       1,     0,     1,     0,     2,     3,     3,     2,     0,     2,
       2,     0,     2,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     0,     2,     1,     6,     2,     0,
       5,     7,     7,     1,     2,     1,     2,     1,     2,     2,
       2,     1,     2,     2,     2,     2,     2,     2,     1,     1,
       2,     3,     0,     2,     3,     0,     2,     1,     2,     2,
       0,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     2,     3,     1,     1,     4,     1,     0,     2,     3,
       0,     1,     1,     1,     1
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
  case 2: /* begin_parse: declarations  */
#line 49 "parser1.y"
                                       {printf("valid syntax\n"); exit(0);}
#line 1398 "parser1.tab.c"
    break;

  case 17: /* $@1: %empty  */
#line 81 "parser1.y"
                                     {printf("found identifier\n");}
#line 1404 "parser1.tab.c"
    break;

  case 33: /* datatype: INT  */
#line 113 "parser1.y"
                              {printf("found int\n");}
#line 1410 "parser1.tab.c"
    break;


#line 1414 "parser1.tab.c"

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

#line 297 "parser1.y"


extern FILE *yyin;
extern int yylineno;
extern char *yytext;



int main()
{
	yyin = fopen("test15.c", "r");
	printf("entering the parsing phase\n");
	int ok=yyparse();



	if(ok == 0)
	{
		printf("VALID PARSE\n");
	
	}
}

void yyerror(char *s)
{
	printf("Line No. : %d %s %s\n",yylineno, s, yytext);
	
}




int yywrap()
{
	return 1;
}
