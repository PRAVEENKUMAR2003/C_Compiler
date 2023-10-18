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
  YYSYMBOL_head_parse = 72,                /* head_parse  */
  YYSYMBOL_declaration_list = 73,          /* declaration_list  */
  YYSYMBOL_declaration = 74,               /* declaration  */
  YYSYMBOL_structure_declaration = 75,     /* structure_declaration  */
  YYSYMBOL_structure_content = 76,         /* structure_content  */
  YYSYMBOL_variable_declaration = 77,      /* variable_declaration  */
  YYSYMBOL_structure_initialize = 78,      /* structure_initialize  */
  YYSYMBOL_variables = 79,                 /* variables  */
  YYSYMBOL_multiple_variables = 80,        /* multiple_variables  */
  YYSYMBOL_identifier_name = 81,           /* identifier_name  */
  YYSYMBOL_82_1 = 82,                      /* $@1  */
  YYSYMBOL_extended_identifier = 83,       /* extended_identifier  */
  YYSYMBOL_array_identifier = 84,          /* array_identifier  */
  YYSYMBOL_array_dims = 85,                /* array_dims  */
  YYSYMBOL_initialization = 86,            /* initialization  */
  YYSYMBOL_string_initialization = 87,     /* string_initialization  */
  YYSYMBOL_array_initialization = 88,      /* array_initialization  */
  YYSYMBOL_array_values = 89,              /* array_values  */
  YYSYMBOL_multiple_array_values = 90,     /* multiple_array_values  */
  YYSYMBOL_pointer_data_type = 91,         /* pointer_data_type  */
  YYSYMBOL_data_type = 92,                 /* data_type  */
  YYSYMBOL_unsigned_grammar = 93,          /* unsigned_grammar  */
  YYSYMBOL_signed_grammar = 94,            /* signed_grammar  */
  YYSYMBOL_long_grammar = 95,              /* long_grammar  */
  YYSYMBOL_short_grammar = 96,             /* short_grammar  */
  YYSYMBOL_function_declaration = 97,      /* function_declaration  */
  YYSYMBOL_function_data_type = 98,        /* function_data_type  */
  YYSYMBOL_function_parameters = 99,       /* function_parameters  */
  YYSYMBOL_parameters = 100,               /* parameters  */
  YYSYMBOL_all_parameter_identifiers = 101, /* all_parameter_identifiers  */
  YYSYMBOL_multiple_parameters = 102,      /* multiple_parameters  */
  YYSYMBOL_parameter_identifier = 103,     /* parameter_identifier  */
  YYSYMBOL_extended_parameter = 104,       /* extended_parameter  */
  YYSYMBOL_statement = 105,                /* statement  */
  YYSYMBOL_multiple_statement = 106,       /* multiple_statement  */
  YYSYMBOL_statements = 107,               /* statements  */
  YYSYMBOL_expression_statment = 108,      /* expression_statment  */
  YYSYMBOL_conditional_statements = 109,   /* conditional_statements  */
  YYSYMBOL_extended_conditional_statements = 110, /* extended_conditional_statements  */
  YYSYMBOL_iterative_statements = 111,     /* iterative_statements  */
  YYSYMBOL_for_initialization = 112,       /* for_initialization  */
  YYSYMBOL_return_statement = 113,         /* return_statement  */
  YYSYMBOL_return_suffix = 114,            /* return_suffix  */
  YYSYMBOL_break_statement = 115,          /* break_statement  */
  YYSYMBOL_expression = 116,               /* expression  */
  YYSYMBOL_expressions = 117,              /* expressions  */
  YYSYMBOL_simple_expression = 118,        /* simple_expression  */
  YYSYMBOL_simple_expression_breakup = 119, /* simple_expression_breakup  */
  YYSYMBOL_and_expression = 120,           /* and_expression  */
  YYSYMBOL_and_expression_breakup = 121,   /* and_expression_breakup  */
  YYSYMBOL_unary_relation_expression = 122, /* unary_relation_expression  */
  YYSYMBOL_regular_expression = 123,       /* regular_expression  */
  YYSYMBOL_regular_expression_breakup = 124, /* regular_expression_breakup  */
  YYSYMBOL_relational_operators = 125,     /* relational_operators  */
  YYSYMBOL_sum_expression = 126,           /* sum_expression  */
  YYSYMBOL_sum_operators = 127,            /* sum_operators  */
  YYSYMBOL_term = 128,                     /* term  */
  YYSYMBOL_multiply_operators = 129,       /* multiply_operators  */
  YYSYMBOL_factor = 130,                   /* factor  */
  YYSYMBOL_id = 131,                       /* id  */
  YYSYMBOL_extended_id = 132,              /* extended_id  */
  YYSYMBOL_function = 133,                 /* function  */
  YYSYMBOL_function_call = 134,            /* function_call  */
  YYSYMBOL_arguments = 135,                /* arguments  */
  YYSYMBOL_arguments_list = 136,           /* arguments_list  */
  YYSYMBOL_extended_arguments = 137,       /* extended_arguments  */
  YYSYMBOL_constant = 138                  /* constant  */
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
#define YYFINAL  34
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   292

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  153
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  241

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
     105,   108,   109,   113,   114,   117,   117,   117,   117,   118,
     119,   120,   121,   122,   125,   125,   125,   125,   128,   128,
     128,   128,   131,   131,   134,   134,   137,   140,   141,   144,
     147,   148,   149,   150,   153,   156,   157,   160,   163,   164,
     167,   167,   168,   168,   169,   169,   170,   173,   176,   177,
     180,   181,   184,   187,   188,   191,   192,   193,   196,   197,
     198,   201,   204,   205,   208,   211,   212,   215,   216,   217,
     218,   219,   220,   221,   222,   225,   228,   228,   231,   234,
     235,   238,   239,   242,   245,   246,   249,   250,   251,   252,
     253,   254,   257,   258,   261,   262,   265,   266,   269,   269,
     269,   272,   272,   275,   276,   279,   280,   283,   284,   284,
     287,   290,   290,   293,   296,   297,   300,   301,   302,   303,
     304,   305,   306,   307
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
  "','", "'['", "']'", "'('", "')'", "'.'", "$accept", "head_parse",
  "declaration_list", "declaration", "structure_declaration",
  "structure_content", "variable_declaration", "structure_initialize",
  "variables", "multiple_variables", "identifier_name", "$@1",
  "extended_identifier", "array_identifier", "array_dims",
  "initialization", "string_initialization", "array_initialization",
  "array_values", "multiple_array_values", "pointer_data_type",
  "data_type", "unsigned_grammar", "signed_grammar", "long_grammar",
  "short_grammar", "function_declaration", "function_data_type",
  "function_parameters", "parameters", "all_parameter_identifiers",
  "multiple_parameters", "parameter_identifier", "extended_parameter",
  "statement", "multiple_statement", "statements", "expression_statment",
  "conditional_statements", "extended_conditional_statements",
  "iterative_statements", "for_initialization", "return_statement",
  "return_suffix", "break_statement", "expression", "expressions",
  "simple_expression", "simple_expression_breakup", "and_expression",
  "and_expression_breakup", "unary_relation_expression",
  "regular_expression", "regular_expression_breakup",
  "relational_operators", "sum_expression", "sum_operators", "term",
  "multiply_operators", "factor", "id", "extended_id", "function",
  "function_call", "arguments", "arguments_list", "extended_arguments",
  "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-126)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     253,  -126,  -126,  -126,  -126,    27,    28,    68,    76,   -15,
    -126,    42,  -126,   253,  -126,  -126,  -126,    21,    -9,  -126,
     265,  -126,  -126,  -126,  -126,  -126,    27,    28,  -126,  -126,
      27,    28,  -126,   -11,  -126,  -126,     2,    11,  -126,   -10,
      16,    30,    60,    -3,  -126,    13,  -126,  -126,  -126,  -126,
    -126,  -126,   277,  -126,  -126,  -126,   -23,  -126,    61,  -126,
       0,    22,  -126,    26,  -126,   109,    66,    38,   277,    61,
     164,   -19,  -126,  -126,  -126,  -126,    44,  -126,   265,  -126,
      25,     7,    55,    62,   109,    65,    64,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,  -126,   164,   109,  -126,   164,  -126,
    -126,  -126,  -126,  -126,  -126,  -126,  -126,    69,  -126,   100,
     106,  -126,    56,    93,  -126,   186,  -126,  -126,  -126,    61,
      88,  -126,  -126,    86,   111,  -126,  -126,  -126,   164,  -126,
    -126,    91,   164,   174,   141,  -126,   164,  -126,   -42,   109,
      95,    90,  -126,   164,  -126,   164,  -126,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,  -126,  -126,   183,   183,  -126,  -126,
    -126,   183,   164,   164,   164,   164,   164,   164,  -126,  -126,
     164,   134,  -126,  -126,  -126,   118,   135,  -126,    96,  -126,
      97,  -126,  -126,   164,    98,    99,   104,   101,  -126,  -126,
    -126,  -126,   100,   106,   -32,    93,  -126,  -126,  -126,  -126,
    -126,  -126,  -126,   105,  -126,   -12,  -126,  -126,  -126,  -126,
     109,   109,   110,  -126,   164,   164,  -126,  -126,  -126,  -126,
    -126,   148,   139,  -126,   164,   119,   104,   122,   136,   109,
    -126,   149,   155,  -126,   148,  -126,  -126,  -126,  -126,  -126,
    -126
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    35,    36,    37,    38,    53,    55,    51,    47,     0,
      43,     0,     2,     4,     7,     5,    12,     0,     0,     6,
      63,    52,    39,    54,    40,    48,    53,    55,    42,    44,
      53,    55,    41,     0,     1,     3,     0,    17,    33,     0,
      16,     0,     0,     0,    56,     0,    49,    50,    45,    46,
      17,    34,    10,    13,    58,    57,    22,    11,     0,    14,
       0,    69,    62,    66,    60,     0,     0,     0,    10,     0,
       0,     0,    18,    19,    15,    61,     0,    67,    63,    64,
       0,     0,     0,     0,     0,     0,   133,   146,   147,   148,
     149,   152,   153,   150,   151,     0,    79,    81,     0,    76,
      59,    71,    70,    72,    73,    74,    75,     0,    96,   107,
     110,   112,   115,   123,   127,   132,   131,   138,   139,     0,
       0,     9,    20,     0,     0,    21,    68,    65,     0,    92,
      91,     0,     0,     0,     0,    94,   142,   111,   132,    79,
       0,     0,    80,     0,   105,     0,   108,   120,   121,   117,
     119,   116,   118,   124,   125,   113,     0,     0,   128,   129,
     130,     0,     0,     0,     0,     0,     0,     0,   103,   104,
       0,     0,    95,   134,     8,    27,     0,    24,     0,    93,
       0,    90,    88,     0,     0,     0,   145,     0,   141,    78,
      77,   137,   107,   110,   114,   122,   126,   102,   100,   101,
      98,    99,    97,     0,   136,     0,    23,    25,    26,    28,
       0,     0,     0,    89,     0,     0,   143,   140,   106,   109,
     135,     0,    84,    85,     0,     0,   145,    32,     0,     0,
      82,     0,     0,   144,     0,    30,    29,    83,    86,    87,
      31
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -126,  -126,   207,  -126,  -126,   153,     1,  -126,   -29,  -126,
    -126,  -126,  -126,  -126,  -126,  -126,    47,  -126,    -4,  -126,
     -14,     5,  -126,  -126,    31,    36,  -126,  -126,  -126,   156,
     -33,  -126,  -126,  -126,   -65,  -126,    92,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,  -126,   -68,  -126,  -125,    43,    94,
      46,   -86,  -126,  -126,  -126,    80,  -126,    83,  -126,    82,
     -83,  -126,  -126,  -126,  -126,  -126,    15,  -126
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    11,    12,    13,    14,    67,    99,    16,    39,    59,
      40,    56,    72,    73,   125,   206,   177,   208,   228,   235,
      17,    69,    32,    28,    22,    24,    19,    20,    44,    45,
      62,    79,    63,    77,   139,   101,   140,   102,   103,   230,
     104,   183,   105,   130,   106,   107,   172,   108,   144,   109,
     146,   110,   111,   155,   156,   112,   157,   113,   161,   114,
     115,   173,   116,   117,   187,   188,   216,   118
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     100,    15,   122,   178,    53,    18,    42,   180,   123,   137,
      64,    33,   138,   131,    15,    50,   209,    37,    18,   134,
      70,   153,   154,    61,   170,    43,    61,    75,   171,    74,
     141,    21,    23,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    34,    71,    51,   138,    38,    36,   124,   138,
     221,    52,    38,    68,    57,    51,    60,    46,   212,   193,
     138,    48,   138,    47,    42,   184,    95,    49,   186,    68,
      54,   129,    25,   138,   138,    98,    26,    27,   138,    55,
      29,    58,    65,    43,    30,    31,    61,    50,    76,   225,
      53,    78,   119,   128,   197,   198,   199,   200,   201,   202,
     138,   120,   203,   147,   148,   149,   150,   151,   152,   153,
     154,   126,    80,     1,     2,     3,     4,     5,     6,     7,
       8,    66,    81,   132,    10,    82,    83,    84,    85,   135,
     133,   138,   136,   142,   182,    86,    87,    88,    89,    90,
      91,    92,    93,    94,   143,   222,   223,   226,   158,   159,
     160,   145,   174,   175,   176,   179,   231,   185,   190,   191,
     204,   205,   213,   209,   237,   210,   211,   214,    95,   215,
     217,    96,   220,    97,   224,   227,   229,    98,     1,     2,
       3,     4,     5,     6,     7,     8,    66,   234,   232,    10,
      86,    87,    88,    89,    90,    91,    92,    93,    94,   236,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    86,
      87,    88,    89,    90,    91,    92,    93,    94,   238,   239,
      35,   121,   207,    95,   162,   163,   164,   165,   166,   167,
     240,   189,    98,    95,   127,   218,   194,   192,   181,   219,
     195,   233,    98,   196,     0,     0,   168,   169,     0,     0,
       0,    98,   170,     0,     0,     0,   171,     1,     2,     3,
       4,     5,     6,     7,     8,     9,     0,     0,    10,     1,
       2,     3,     4,     5,     6,     7,     8,    41,     0,     0,
      10,     1,     2,     3,     4,     5,     6,     7,     8,    66,
       0,     0,    10
};

static const yytype_int16 yycheck[] =
{
      65,     0,    70,   128,    33,     0,    20,   132,    27,    95,
      43,    26,    95,    81,    13,    26,    28,    26,    13,    84,
      43,    53,    54,    26,    66,    20,    26,    60,    70,    58,
      98,     4,     4,    26,    27,    28,    29,    30,    31,    32,
      33,    34,     0,    66,    55,   128,    55,    26,    67,   132,
      62,    62,    55,    52,    64,    55,    26,    26,   183,   145,
     143,    30,   145,    27,    78,   133,    59,    31,   136,    68,
      68,    64,     4,   156,   157,    68,     8,     9,   161,    68,
       4,    65,    69,    78,     8,     9,    26,    26,    66,   214,
     119,    65,    26,    68,   162,   163,   164,   165,   166,   167,
     183,    63,   170,    47,    48,    49,    50,    51,    52,    53,
      54,    67,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    68,    15,    16,    17,    18,    19,    64,
      68,   214,    68,    64,   133,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    44,   210,   211,   215,    55,    56,
      57,    45,    64,    67,    43,    64,   224,    16,    63,    69,
      26,    43,    64,    28,   229,    69,    69,    68,    59,    65,
      69,    62,    67,    64,    64,    27,    37,    68,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    65,    69,    15,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    63,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    69,    64,
      13,    68,   175,    59,    38,    39,    40,    41,    42,    43,
     234,   139,    68,    59,    78,   192,   156,   143,    64,   193,
     157,   226,    68,   161,    -1,    -1,    60,    61,    -1,    -1,
      -1,    68,    66,    -1,    -1,    -1,    70,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    15,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    -1,    -1,
      15,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    -1,    15
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      15,    72,    73,    74,    75,    77,    78,    91,    92,    97,
      98,     4,    95,     4,    96,     4,     8,     9,    94,     4,
       8,     9,    93,    26,     0,    73,    26,    26,    55,    79,
      81,    12,    91,    92,    99,   100,    95,    96,    95,    96,
      26,    55,    62,    79,    68,    68,    82,    64,    65,    80,
      26,    26,   101,   103,   101,    69,    12,    76,    77,    92,
      43,    66,    83,    84,    79,   101,    66,   104,    65,   102,
       3,    13,    16,    17,    18,    19,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    59,    62,    64,    68,    77,
     105,   106,   108,   109,   111,   113,   115,   116,   118,   120,
     122,   123,   126,   128,   130,   131,   133,   134,   138,    26,
      63,    76,   116,    27,    67,    85,    67,   100,    68,    64,
     114,   116,    68,    68,   105,    64,    68,   122,   131,   105,
     107,   116,    64,    44,   119,    45,   121,    47,    48,    49,
      50,    51,    52,    53,    54,   124,   125,   127,    55,    56,
      57,   129,    38,    39,    40,    41,    42,    43,    60,    61,
      66,    70,   117,   132,    64,    67,    43,    87,   118,    64,
     118,    64,    77,   112,   116,    16,   116,   135,   136,   107,
      63,    69,   120,   122,   126,   128,   130,   116,   116,   116,
     116,   116,   116,   116,    26,    43,    86,    87,    88,    28,
      69,    69,   118,    64,    68,    65,   137,    69,   119,   121,
      67,    62,   105,   105,    64,   118,   116,    27,    89,    37,
     110,   116,    69,   137,    65,    90,    63,   105,    69,    64,
      89
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    73,    73,    74,    74,    74,    75,    76,
      76,    77,    77,    78,    79,    80,    80,    82,    81,    83,
      83,    84,    84,    85,    85,    86,    86,    86,    87,    88,
      89,    90,    90,    91,    91,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    93,    93,    93,    93,    94,    94,
      94,    94,    95,    95,    96,    96,    97,    98,    98,    99,
     100,   100,   100,   100,   101,   102,   102,   103,   104,   104,
     105,   105,   105,   105,   105,   105,   105,   106,   107,   107,
     108,   108,   109,   110,   110,   111,   111,   111,   112,   112,
     112,   113,   114,   114,   115,   116,   116,   117,   117,   117,
     117,   117,   117,   117,   117,   118,   119,   119,   120,   121,
     121,   122,   122,   123,   124,   124,   125,   125,   125,   125,
     125,   125,   126,   126,   127,   127,   128,   128,   129,   129,
     129,   130,   130,   131,   131,   132,   132,   133,   133,   133,
     134,   135,   135,   136,   137,   137,   138,   138,   138,   138,
     138,   138,   138,   138
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     6,     2,
       0,     3,     1,     3,     2,     2,     0,     0,     3,     1,
       2,     2,     0,     3,     2,     1,     1,     0,     2,     4,
       2,     2,     0,     2,     3,     1,     1,     1,     1,     2,
       2,     2,     2,     1,     1,     2,     2,     0,     1,     2,
       2,     0,     1,     0,     1,     0,     2,     3,     3,     3,
       2,     3,     2,     0,     2,     2,     0,     2,     2,     0,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     0,
       2,     1,     6,     2,     0,     5,     7,     7,     1,     2,
       1,     2,     1,     2,     2,     2,     1,     2,     2,     2,
       2,     2,     2,     1,     1,     2,     3,     0,     2,     3,
       0,     2,     1,     2,     2,     0,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     2,     3,     1,     1,
       4,     1,     0,     2,     3,     0,     1,     1,     1,     1,
       1,     1,     1,     1
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
  case 17: /* $@1: %empty  */
#line 81 "parser1.y"
                 {printf("found identifier\n");}
#line 1416 "parser1.tab.c"
    break;

  case 35: /* data_type: INT  */
#line 117 "parser1.y"
          {printf("found int\n");}
#line 1422 "parser1.tab.c"
    break;


#line 1426 "parser1.tab.c"

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

#line 309 "parser1.y"


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
