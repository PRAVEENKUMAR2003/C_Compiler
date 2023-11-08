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
#line 1 "parser2.y"

void yyerror(char* s);
int yylex();
#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"
#include "string.h"



#line 82 "parser2.tab.c"

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

#include "parser2.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_WHILE = 4,                      /* WHILE  */
  YYSYMBOL_FOR = 5,                        /* FOR  */
  YYSYMBOL_DO = 6,                         /* DO  */
  YYSYMBOL_SWITCH = 7,                     /* SWITCH  */
  YYSYMBOL_CASE = 8,                       /* CASE  */
  YYSYMBOL_DEFAULT = 9,                    /* DEFAULT  */
  YYSYMBOL_INT = 10,                       /* INT  */
  YYSYMBOL_CHAR = 11,                      /* CHAR  */
  YYSYMBOL_FLOAT = 12,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 13,                    /* DOUBLE  */
  YYSYMBOL_LONG = 14,                      /* LONG  */
  YYSYMBOL_SHORT = 15,                     /* SHORT  */
  YYSYMBOL_SIGNED = 16,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 17,                  /* UNSIGNED  */
  YYSYMBOL_STRUCT = 18,                    /* STRUCT  */
  YYSYMBOL_UNION = 19,                     /* UNION  */
  YYSYMBOL_RETURN = 20,                    /* RETURN  */
  YYSYMBOL_MAIN = 21,                      /* MAIN  */
  YYSYMBOL_BREAK = 22,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 23,                  /* CONTINUE  */
  YYSYMBOL_GOTO = 24,                      /* GOTO  */
  YYSYMBOL_ENDIF = 25,                     /* ENDIF  */
  YYSYMBOL_VOID = 26,                      /* VOID  */
  YYSYMBOL_identifier = 27,                /* identifier  */
  YYSYMBOL_integer_constant = 28,          /* integer_constant  */
  YYSYMBOL_string_constant = 29,           /* string_constant  */
  YYSYMBOL_float_constant = 30,            /* float_constant  */
  YYSYMBOL_character_constant = 31,        /* character_constant  */
  YYSYMBOL_binary_constant = 32,           /* binary_constant  */
  YYSYMBOL_hexadecimal_constant = 33,      /* hexadecimal_constant  */
  YYSYMBOL_exponent_constant = 34,         /* exponent_constant  */
  YYSYMBOL_octal_constant = 35,            /* octal_constant  */
  YYSYMBOL_LEFT_SHIFT = 36,                /* LEFT_SHIFT  */
  YYSYMBOL_RIGHT_SHIFT = 37,               /* RIGHT_SHIFT  */
  YYSYMBOL_ELSE = 38,                      /* ELSE  */
  YYSYMBOL_MOD_EQUAL = 39,                 /* MOD_EQUAL  */
  YYSYMBOL_MULTIPLY_EQUAL = 40,            /* MULTIPLY_EQUAL  */
  YYSYMBOL_DIVIDE_EQUAL = 41,              /* DIVIDE_EQUAL  */
  YYSYMBOL_ADD_EQUAL = 42,                 /* ADD_EQUAL  */
  YYSYMBOL_SUBTRACT_EQUAL = 43,            /* SUBTRACT_EQUAL  */
  YYSYMBOL_44_ = 44,                       /* '='  */
  YYSYMBOL_LOGICAL_OR = 45,                /* LOGICAL_OR  */
  YYSYMBOL_LOGICAL_AND = 46,               /* LOGICAL_AND  */
  YYSYMBOL_47_ = 47,                       /* '^'  */
  YYSYMBOL_EQUAL = 48,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 49,                 /* NOT_EQUAL  */
  YYSYMBOL_LESS_EQUAL = 50,                /* LESS_EQUAL  */
  YYSYMBOL_LESS = 51,                      /* LESS  */
  YYSYMBOL_GREAT_EQUAL = 52,               /* GREAT_EQUAL  */
  YYSYMBOL_GREAT = 53,                     /* GREAT  */
  YYSYMBOL_54_ = 54,                       /* '+'  */
  YYSYMBOL_55_ = 55,                       /* '-'  */
  YYSYMBOL_56_ = 56,                       /* '*'  */
  YYSYMBOL_57_ = 57,                       /* '/'  */
  YYSYMBOL_58_ = 58,                       /* '%'  */
  YYSYMBOL_SIZEOF = 59,                    /* SIZEOF  */
  YYSYMBOL_NOT = 60,                       /* NOT  */
  YYSYMBOL_INCREMENT = 61,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 62,                 /* DECREMENT  */
  YYSYMBOL_63_ = 63,                       /* '{'  */
  YYSYMBOL_64_ = 64,                       /* '}'  */
  YYSYMBOL_65_ = 65,                       /* ';'  */
  YYSYMBOL_66_ = 66,                       /* ','  */
  YYSYMBOL_67_ = 67,                       /* '['  */
  YYSYMBOL_68_ = 68,                       /* ']'  */
  YYSYMBOL_69_ = 69,                       /* '('  */
  YYSYMBOL_70_ = 70,                       /* ')'  */
  YYSYMBOL_71_ = 71,                       /* '&'  */
  YYSYMBOL_72_ = 72,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 73,                  /* $accept  */
  YYSYMBOL_head_parse = 74,                /* head_parse  */
  YYSYMBOL_declarations = 75,              /* declarations  */
  YYSYMBOL_declaration = 76,               /* declaration  */
  YYSYMBOL_structure_declaration = 77,     /* structure_declaration  */
  YYSYMBOL_structure_content = 78,         /* structure_content  */
  YYSYMBOL_variable_declaration = 79,      /* variable_declaration  */
  YYSYMBOL_variables = 80,                 /* variables  */
  YYSYMBOL_multiple_variables = 81,        /* multiple_variables  */
  YYSYMBOL_identifier_name = 82,           /* identifier_name  */
  YYSYMBOL_83_1 = 83,                      /* $@1  */
  YYSYMBOL_extended_identifier = 84,       /* extended_identifier  */
  YYSYMBOL_array_identifier = 85,          /* array_identifier  */
  YYSYMBOL_array_dims = 86,                /* array_dims  */
  YYSYMBOL_dims = 87,                      /* dims  */
  YYSYMBOL_initilization = 88,             /* initilization  */
  YYSYMBOL_string_initilization = 89,      /* string_initilization  */
  YYSYMBOL_array_initialization = 90,      /* array_initialization  */
  YYSYMBOL_multiple_array_values = 91,     /* multiple_array_values  */
  YYSYMBOL_array_values = 92,              /* array_values  */
  YYSYMBOL_pointer_datatype = 93,          /* pointer_datatype  */
  YYSYMBOL_datatype = 94,                  /* datatype  */
  YYSYMBOL_unsigned_grammar = 95,          /* unsigned_grammar  */
  YYSYMBOL_signed_grammar = 96,            /* signed_grammar  */
  YYSYMBOL_long_grammar = 97,              /* long_grammar  */
  YYSYMBOL_short_grammar = 98,             /* short_grammar  */
  YYSYMBOL_function_declaration = 99,      /* function_declaration  */
  YYSYMBOL_function_datatype = 100,        /* function_datatype  */
  YYSYMBOL_function_parameters = 101,      /* function_parameters  */
  YYSYMBOL_parameters = 102,               /* parameters  */
  YYSYMBOL_all_parameter_identifiers = 103, /* all_parameter_identifiers  */
  YYSYMBOL_multiple_parameters = 104,      /* multiple_parameters  */
  YYSYMBOL_parameter_identifier = 105,     /* parameter_identifier  */
  YYSYMBOL_extended_parameter = 106,       /* extended_parameter  */
  YYSYMBOL_statement = 107,                /* statement  */
  YYSYMBOL_multiple_statement = 108,       /* multiple_statement  */
  YYSYMBOL_statements = 109,               /* statements  */
  YYSYMBOL_expression_statment = 110,      /* expression_statment  */
  YYSYMBOL_conditional_statements = 111,   /* conditional_statements  */
  YYSYMBOL_extended_conditional_statements = 112, /* extended_conditional_statements  */
  YYSYMBOL_iterative_statements = 113,     /* iterative_statements  */
  YYSYMBOL_for_simple_expression = 114,    /* for_simple_expression  */
  YYSYMBOL_for_expression = 115,           /* for_expression  */
  YYSYMBOL_for_initialization = 116,       /* for_initialization  */
  YYSYMBOL_return_statement = 117,         /* return_statement  */
  YYSYMBOL_return_element = 118,           /* return_element  */
  YYSYMBOL_break_statement = 119,          /* break_statement  */
  YYSYMBOL_expression = 120,               /* expression  */
  YYSYMBOL_expressions = 121,              /* expressions  */
  YYSYMBOL_simple_expression = 122,        /* simple_expression  */
  YYSYMBOL_simple_expression_extend = 123, /* simple_expression_extend  */
  YYSYMBOL_and_expression = 124,           /* and_expression  */
  YYSYMBOL_and_expression_extend = 125,    /* and_expression_extend  */
  YYSYMBOL_unary_relation_expression = 126, /* unary_relation_expression  */
  YYSYMBOL_regular_expression = 127,       /* regular_expression  */
  YYSYMBOL_regular_expression_extend = 128, /* regular_expression_extend  */
  YYSYMBOL_relational_operators = 129,     /* relational_operators  */
  YYSYMBOL_sum_expression = 130,           /* sum_expression  */
  YYSYMBOL_sum_operators = 131,            /* sum_operators  */
  YYSYMBOL_term = 132,                     /* term  */
  YYSYMBOL_multiply_operators = 133,       /* multiply_operators  */
  YYSYMBOL_factor = 134,                   /* factor  */
  YYSYMBOL_id = 135,                       /* id  */
  YYSYMBOL_extended_id = 136,              /* extended_id  */
  YYSYMBOL_non_id = 137,                   /* non_id  */
  YYSYMBOL_function_call = 138,            /* function_call  */
  YYSYMBOL_arguments = 139,                /* arguments  */
  YYSYMBOL_arguments_list = 140,           /* arguments_list  */
  YYSYMBOL_extended_arguments = 141,       /* extended_arguments  */
  YYSYMBOL_constant = 142                  /* constant  */
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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   324

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  163
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  260

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   310


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
       2,     2,     2,     2,     2,     2,     2,    58,    71,     2,
      69,    70,    56,    54,    66,    55,    72,    57,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    65,
       2,    44,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    67,     2,    68,    47,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,     2,    64,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    45,
      46,    48,    49,    50,    51,    52,    53,    59,    60,    61,
      62
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    52,    52,    55,    56,    60,    61,    62,    65,    66,
      68,    68,    71,    72,    76,    79,    80,    83,    83,    85,
      85,    88,    89,    92,    93,    96,    97,   100,   101,   102,
     105,   108,   112,   114,   115,   116,   119,   120,   123,   123,
     123,   123,   124,   125,   126,   127,   128,   129,   130,   133,
     133,   133,   133,   136,   136,   136,   136,   139,   139,   142,
     142,   145,   148,   149,   152,   155,   156,   157,   158,   161,
     164,   165,   168,   171,   172,   175,   175,   176,   176,   177,
     177,   178,   183,   186,   187,   190,   191,   194,   197,   198,
     201,   202,   203,   205,   205,   206,   206,   208,   209,   210,
     213,   216,   217,   220,   223,   224,   227,   228,   229,   230,
     231,   232,   233,   234,   237,   240,   240,   243,   246,   247,
     250,   251,   254,   257,   258,   261,   262,   263,   264,   265,
     266,   269,   270,   273,   274,   277,   278,   281,   281,   281,
     284,   284,   287,   288,   289,   292,   293,   296,   297,   297,
     300,   303,   303,   306,   309,   310,   313,   314,   315,   316,
     317,   318,   319,   320
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
  "\"end of file\"", "error", "\"invalid token\"", "IF", "WHILE", "FOR",
  "DO", "SWITCH", "CASE", "DEFAULT", "INT", "CHAR", "FLOAT", "DOUBLE",
  "LONG", "SHORT", "SIGNED", "UNSIGNED", "STRUCT", "UNION", "RETURN",
  "MAIN", "BREAK", "CONTINUE", "GOTO", "ENDIF", "VOID", "identifier",
  "integer_constant", "string_constant", "float_constant",
  "character_constant", "binary_constant", "hexadecimal_constant",
  "exponent_constant", "octal_constant", "LEFT_SHIFT", "RIGHT_SHIFT",
  "ELSE", "MOD_EQUAL", "MULTIPLY_EQUAL", "DIVIDE_EQUAL", "ADD_EQUAL",
  "SUBTRACT_EQUAL", "'='", "LOGICAL_OR", "LOGICAL_AND", "'^'", "EQUAL",
  "NOT_EQUAL", "LESS_EQUAL", "LESS", "GREAT_EQUAL", "GREAT", "'+'", "'-'",
  "'*'", "'/'", "'%'", "SIZEOF", "NOT", "INCREMENT", "DECREMENT", "'{'",
  "'}'", "';'", "','", "'['", "']'", "'('", "')'", "'&'", "'.'", "$accept",
  "head_parse", "declarations", "declaration", "structure_declaration",
  "structure_content", "variable_declaration", "variables",
  "multiple_variables", "identifier_name", "$@1", "extended_identifier",
  "array_identifier", "array_dims", "dims", "initilization",
  "string_initilization", "array_initialization", "multiple_array_values",
  "array_values", "pointer_datatype", "datatype", "unsigned_grammar",
  "signed_grammar", "long_grammar", "short_grammar",
  "function_declaration", "function_datatype", "function_parameters",
  "parameters", "all_parameter_identifiers", "multiple_parameters",
  "parameter_identifier", "extended_parameter", "statement",
  "multiple_statement", "statements", "expression_statment",
  "conditional_statements", "extended_conditional_statements",
  "iterative_statements", "for_simple_expression", "for_expression",
  "for_initialization", "return_statement", "return_element",
  "break_statement", "expression", "expressions", "simple_expression",
  "simple_expression_extend", "and_expression", "and_expression_extend",
  "unary_relation_expression", "regular_expression",
  "regular_expression_extend", "relational_operators", "sum_expression",
  "sum_operators", "term", "multiply_operators", "factor", "id",
  "extended_id", "non_id", "function_call", "arguments", "arguments_list",
  "extended_arguments", "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-221)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     134,  -221,  -221,  -221,  -221,    21,    40,    56,   109,   -15,
      25,  -221,    69,  -221,   134,  -221,  -221,   -13,   -12,  -221,
     277,  -221,  -221,  -221,  -221,  -221,    21,    40,  -221,  -221,
      21,    40,  -221,    16,    32,  -221,  -221,    38,  -221,    57,
      74,    85,  -221,    70,   116,   131,    -8,    -7,  -221,    91,
    -221,  -221,  -221,  -221,   298,   298,  -221,    17,  -221,   135,
    -221,  -221,  -221,   136,  -221,    98,  -221,   100,  -221,   171,
     140,   107,   298,    -3,    -2,   108,   191,   -17,  -221,  -221,
    -221,  -221,  -221,   105,  -221,   277,  -221,   110,   123,   125,
     171,   181,   113,   126,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,   191,   171,  -221,   191,   169,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,   142,  -221,   172,   182,  -221,
      37,    41,  -221,   214,  -221,  -221,  -221,  -221,   162,  -221,
     164,  -221,   165,   186,  -221,   188,  -221,  -221,   191,   191,
      99,   231,  -221,  -221,   173,  -221,   191,  -221,    11,   171,
     175,   167,  -221,  -221,   191,  -221,   191,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,   236,   236,  -221,
    -221,  -221,   236,   191,   191,   191,   191,   191,   191,  -221,
    -221,   191,   216,  -221,  -221,  -221,  -221,   177,   218,  -221,
     -22,  -221,  -221,  -221,   178,   179,  -221,  -221,   191,   180,
     190,  -221,   195,   202,  -221,  -221,  -221,  -221,   172,   182,
      66,    41,  -221,  -221,  -221,  -221,  -221,  -221,  -221,   205,
    -221,   246,  -221,     5,   171,   171,   212,  -221,  -221,   191,
     191,  -221,  -221,  -221,  -221,  -221,  -221,     5,    72,  -221,
     240,  -221,   191,   209,   195,    75,  -221,     5,  -221,   171,
    -221,   210,  -221,   217,  -221,  -221,   219,  -221,  -221,  -221
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    38,    39,    40,    41,    58,    60,    56,    52,     0,
       0,    46,     0,     2,     4,     7,     5,     0,     0,     6,
      68,    57,    42,    59,    43,    53,    58,    60,    45,    49,
      58,    60,    44,    47,    48,     1,     3,    17,    37,     0,
      16,    17,    36,     0,     0,     0,     0,     0,    61,     0,
      54,    55,    50,    51,    11,    11,    63,    22,    13,     0,
      14,    62,    12,    47,    48,    74,    67,    71,    65,     0,
       0,     0,    11,     0,     0,     0,     0,     0,    18,    19,
      17,    15,    66,     0,    72,    68,    69,     0,     0,     0,
       0,     0,     0,   142,   156,   157,   158,   159,   162,   161,
     163,   160,     0,    84,    86,     0,     0,    81,    64,    76,
      75,    77,    78,    79,    80,     0,   105,   116,   119,   121,
     124,   132,   136,   141,   140,   148,   149,    47,     0,    10,
       0,    20,     0,     0,    21,    29,    73,    70,     0,     0,
       0,     0,   101,   100,     0,   103,   152,   120,   141,    84,
       0,     0,   143,    85,     0,   114,     0,   117,   129,   125,
     126,   128,   130,   127,   133,   134,   122,     0,     0,   137,
     138,   139,     0,     0,     0,     0,     0,     0,     0,   112,
     113,     0,     0,   104,   144,     8,     9,    25,     0,    24,
       0,    23,    27,    28,     0,     0,    99,    97,    94,     0,
       0,   102,   155,     0,   151,    83,    82,   147,   116,   119,
     123,   131,   135,   111,   109,   110,   107,   108,   106,     0,
     146,     0,    30,     0,     0,     0,     0,    93,    98,     0,
       0,   153,   150,   115,   118,   145,    26,     0,     0,    35,
      89,    90,    96,     0,   155,     0,    31,     0,    34,     0,
      87,     0,    95,     0,   154,    33,    32,    88,    91,    92
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -221,  -221,   269,  -221,  -221,   -42,     2,   -14,  -221,  -221,
    -221,  -221,  -221,  -221,    63,  -221,   163,  -221,  -221,  -220,
       8,     9,  -221,  -221,    33,    50,  -221,  -221,  -221,   215,
     -21,  -221,  -221,  -221,   -69,  -221,   148,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,   -73,  -221,  -133,
      93,   145,    95,  -101,  -221,  -221,  -221,   139,  -221,   150,
    -221,   130,   -92,  -221,  -221,  -221,  -221,  -221,    76,  -165
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    12,    13,    14,    15,    71,   107,    39,    60,    40,
      57,    78,    79,   134,   135,   191,   189,   193,   248,   238,
      73,    74,    32,    28,    22,    24,    19,    20,    48,    49,
      66,    86,    67,    84,   149,   109,   150,   110,   111,   250,
     112,   226,   251,   198,   113,   143,   114,   115,   183,   116,
     155,   117,   157,   118,   119,   166,   167,   120,   168,   121,
     172,   122,   123,   184,   124,   125,   203,   204,   231,   126
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     108,   147,    16,   131,    43,   194,   195,   222,    17,    18,
     148,   132,    33,    75,    37,    41,    16,   245,   144,    65,
      65,   141,    17,    18,    80,    80,    68,   256,    46,    47,
     129,    21,   151,    94,    95,    96,    97,    98,    99,   100,
     101,   223,    82,    38,    42,    81,   148,   148,    38,    42,
      23,   133,    34,    38,    42,   209,    72,    72,   239,    50,
      43,    76,   148,    52,   148,   227,    25,   199,   237,    35,
      26,    27,   239,   202,    72,   148,   148,    51,   181,    54,
     148,    53,   239,   182,    77,   158,   159,   160,   161,   162,
     163,   164,   165,    46,    47,    55,   243,   169,   170,   171,
     213,   214,   215,   216,   217,   218,   148,    56,   219,     1,
       2,     3,     4,     5,     6,     7,     8,    70,    45,    29,
     164,   165,    58,    30,    31,    11,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    62,   246,   148,   247,   255,
      59,   247,   197,    63,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    61,   240,   241,   244,    64,   102,
      11,    69,    80,    65,   196,    83,    85,   127,   105,   252,
     106,   128,   130,   136,    87,    88,    89,    90,   145,   138,
     257,     1,     2,     3,     4,     5,     6,     7,     8,    70,
      45,    91,   139,    92,   140,   146,   152,    11,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   153,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   154,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   185,   156,   186,
     188,   102,   190,   187,   103,   200,   104,   207,   201,   206,
     105,   102,   106,   220,   221,   228,   142,   222,   224,   225,
     105,   102,   106,   173,   174,   175,   176,   177,   178,   229,
     105,   230,   106,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   232,   235,   132,   179,   180,   242,   249,   253,
     258,   181,   259,    36,   236,   247,   182,     1,     2,     3,
       4,     5,     6,     7,     8,    44,    45,   205,   192,   208,
     137,   233,   212,    11,   234,   105,   210,   106,     1,     2,
       3,     4,     5,     6,     7,     8,    70,    45,   211,     0,
     254,     0,     0,     0,    11
};

static const yytype_int16 yycheck[] =
{
      69,   102,     0,    76,    18,   138,   139,    29,     0,     0,
     102,    28,    27,    55,    27,    27,    14,   237,    91,    27,
      27,    90,    14,    14,    27,    27,    47,   247,    20,    20,
      72,    10,   105,    28,    29,    30,    31,    32,    33,    34,
      35,    63,    63,    56,    56,    59,   138,   139,    56,    56,
      10,    68,    27,    56,    56,   156,    54,    55,   223,    26,
      74,    44,   154,    30,   156,   198,    10,   140,    63,     0,
      14,    15,   237,   146,    72,   167,   168,    27,    67,    63,
     172,    31,   247,    72,    67,    48,    49,    50,    51,    52,
      53,    54,    55,    85,    85,    63,   229,    56,    57,    58,
     173,   174,   175,   176,   177,   178,   198,    69,   181,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    10,
      54,    55,    65,    14,    15,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    65,    64,   229,    66,    64,
      66,    66,   140,    27,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    69,   224,   225,   230,    27,    60,
      26,    70,    27,    27,    65,    67,    66,    27,    69,   242,
      71,    64,    64,    68,     3,     4,     5,     6,    65,    69,
     249,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    69,    22,    69,    69,    27,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    65,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    45,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    65,    46,    65,
      44,    60,    44,    68,    63,     4,    65,    70,    65,    64,
      69,    60,    71,    27,    67,    65,    65,    29,    70,    70,
      69,    60,    71,    39,    40,    41,    42,    43,    44,    69,
      69,    66,    71,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    70,    68,    28,    61,    62,    65,    38,    70,
      70,    67,    65,    14,   221,    66,    72,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,   149,   135,   154,
      85,   208,   172,    26,   209,    69,   167,    71,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,   168,    -1,
     244,    -1,    -1,    -1,    26
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    26,    74,    75,    76,    77,    79,    93,    94,    99,
     100,    10,    97,    10,    98,    10,    14,    15,    96,    10,
      14,    15,    95,    27,    27,     0,    75,    27,    56,    80,
      82,    27,    56,    80,    18,    19,    93,    94,   101,   102,
      97,    98,    97,    98,    63,    63,    69,    83,    65,    66,
      81,    69,    65,    27,    27,    27,   103,   105,   103,    70,
      18,    78,    79,    93,    94,    78,    44,    67,    84,    85,
      27,    80,   103,    67,   106,    66,   104,     3,     4,     5,
       6,    20,    22,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    60,    63,    65,    69,    71,    79,   107,   108,
     110,   111,   113,   117,   119,   120,   122,   124,   126,   127,
     130,   132,   134,   135,   137,   138,   142,    27,    64,    78,
      64,   120,    28,    68,    86,    87,    68,   102,    69,    69,
      69,   107,    65,   118,   120,    65,    69,   126,   135,   107,
     109,   120,    27,    65,    45,   123,    46,   125,    48,    49,
      50,    51,    52,    53,    54,    55,   128,   129,   131,    56,
      57,    58,   133,    39,    40,    41,    42,    43,    44,    61,
      62,    67,    72,   121,   136,    65,    65,    68,    44,    89,
      44,    88,    89,    90,   122,   122,    65,    79,   116,   120,
       4,    65,   120,   139,   140,   109,    64,    70,   124,   126,
     130,   132,   134,   120,   120,   120,   120,   120,   120,   120,
      27,    67,    29,    63,    70,    70,   114,   122,    65,    69,
      66,   141,    70,   123,   125,    68,    87,    63,    92,   142,
     107,   107,    65,   122,   120,    92,    64,    66,    91,    38,
     112,   115,   120,    70,   141,    64,    92,   107,    70,    65
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    75,    75,    76,    76,    76,    77,    77,
      78,    78,    79,    79,    80,    81,    81,    83,    82,    84,
      84,    85,    85,    86,    86,    87,    87,    88,    88,    88,
      89,    90,    91,    92,    92,    92,    93,    93,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    95,
      95,    95,    95,    96,    96,    96,    96,    97,    97,    98,
      98,    99,   100,   100,   101,   102,   102,   102,   102,   103,
     104,   104,   105,   106,   106,   107,   107,   107,   107,   107,
     107,   107,   108,   109,   109,   110,   110,   111,   112,   112,
     113,   113,   113,   114,   114,   115,   115,   116,   116,   116,
     117,   118,   118,   119,   120,   120,   121,   121,   121,   121,
     121,   121,   121,   121,   122,   123,   123,   124,   125,   125,
     126,   126,   127,   128,   128,   129,   129,   129,   129,   129,
     129,   130,   130,   131,   131,   132,   132,   133,   133,   133,
     134,   134,   135,   135,   135,   136,   136,   137,   137,   137,
     138,   139,   139,   140,   141,   141,   142,   142,   142,   142,
     142,   142,   142,   142
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     6,     6,
       2,     0,     3,     3,     2,     2,     0,     0,     3,     1,
       2,     2,     0,     2,     2,     2,     4,     1,     1,     0,
       2,     4,     2,     3,     2,     1,     2,     2,     1,     1,
       1,     1,     2,     2,     2,     2,     1,     2,     2,     1,
       2,     2,     0,     1,     2,     2,     0,     1,     0,     1,
       0,     2,     3,     3,     3,     2,     3,     2,     0,     2,
       2,     0,     2,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     0,     2,     1,     6,     2,     0,
       5,     7,     7,     1,     0,     1,     0,     1,     2,     1,
       2,     1,     2,     2,     2,     1,     2,     2,     2,     2,
       2,     2,     1,     1,     2,     3,     0,     2,     3,     0,
       2,     1,     2,     2,     0,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     3,     2,     3,     1,     1,
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
#line 83 "parser2.y"
             {printf("found identifier\n");}
#line 1433 "parser2.tab.c"
    break;

  case 38: /* datatype: INT  */
#line 123 "parser2.y"
      {printf("found int\n");}
#line 1439 "parser2.tab.c"
    break;

  case 143: /* id: '&' identifier  */
#line 288 "parser2.y"
                 {printf("\nwith address\n");}
#line 1445 "parser2.tab.c"
    break;


#line 1449 "parser2.tab.c"

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

#line 323 "parser2.y"


extern FILE *yyin;
extern int yylineno;
extern char *yytext;



int main(int argc, char** argv)
{
char PATH[100]="./test_cases/";
strcat(PATH, argv[1]);

yyin = fopen(PATH, "r");
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
