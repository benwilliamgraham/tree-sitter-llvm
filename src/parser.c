#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 92
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  sym_function_declaration = 2,
  sym_function_definition = 3,
  anon_sym_EQ = 4,
  anon_sym_unnamed_addr = 5,
  anon_sym_local_unnamed_addr = 6,
  anon_sym_global = 7,
  anon_sym_constant = 8,
  anon_sym_private = 9,
  anon_sym_internal = 10,
  anon_sym_availible_externally = 11,
  anon_sym_linkonce = 12,
  anon_sym_weak = 13,
  anon_sym_common = 14,
  anon_sym_appending = 15,
  anon_sym_extern_weak = 16,
  anon_sym_linkonce_odr = 17,
  anon_sym_weak_odr = 18,
  anon_sym_external = 19,
  anon_sym_dso_preemptable = 20,
  anon_sym_dso_local = 21,
  anon_sym_default = 22,
  anon_sym_hidden = 23,
  anon_sym_protected = 24,
  anon_sym_dllimport = 25,
  anon_sym_dllexport = 26,
  anon_sym_localdynamic = 27,
  anon_sym_initialexec = 28,
  anon_sym_localexec = 29,
  anon_sym_addrspace_LPAREN = 30,
  anon_sym_RPAREN = 31,
  sym_externally_initialized = 32,
  anon_sym_void = 33,
  anon_sym_x86_amx = 34,
  anon_sym_x86_mmx = 35,
  anon_sym_label = 36,
  anon_sym_token = 37,
  anon_sym_metadata = 38,
  anon_sym_i = 39,
  anon_sym_half = 40,
  anon_sym_bfloat = 41,
  anon_sym_float = 42,
  anon_sym_double = 43,
  anon_sym_fp128 = 44,
  anon_sym_x86_fp80 = 45,
  anon_sym_ppc_fp128 = 46,
  anon_sym_STAR = 47,
  sym_vector_type = 48,
  anon_sym_LBRACK = 49,
  anon_sym_x = 50,
  anon_sym_RBRACK = 51,
  sym_structure_type = 52,
  anon_sym_TODOinitializer_constant = 53,
  sym_named_metadata = 54,
  sym_identifier = 55,
  anon_sym_true = 56,
  anon_sym_false = 57,
  sym_integer = 58,
  sym_string = 59,
  anon_sym_c = 60,
  sym_source_file = 61,
  sym__expression = 62,
  sym_global_constant = 63,
  sym_linkage = 64,
  sym_preemption_specifier = 65,
  sym_visibility = 66,
  sym_dll_storage_class = 67,
  sym_thread_local = 68,
  sym_addr_space = 69,
  sym_type = 70,
  sym_integer_type = 71,
  sym_floating_point_type = 72,
  sym_pointer_type = 73,
  sym_array_type = 74,
  sym_initializer_constant = 75,
  sym_boolean = 76,
  sym_character_array = 77,
  aux_sym_source_file_repeat1 = 78,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_function_declaration] = "function_declaration",
  [sym_function_definition] = "function_definition",
  [anon_sym_EQ] = "=",
  [anon_sym_unnamed_addr] = "unnamed_addr",
  [anon_sym_local_unnamed_addr] = "local_unnamed_addr",
  [anon_sym_global] = "global",
  [anon_sym_constant] = "constant",
  [anon_sym_private] = "private",
  [anon_sym_internal] = "internal",
  [anon_sym_availible_externally] = "availible_externally",
  [anon_sym_linkonce] = "linkonce",
  [anon_sym_weak] = "weak",
  [anon_sym_common] = "common",
  [anon_sym_appending] = "appending",
  [anon_sym_extern_weak] = "extern_weak",
  [anon_sym_linkonce_odr] = "linkonce_odr",
  [anon_sym_weak_odr] = "weak_odr",
  [anon_sym_external] = "external",
  [anon_sym_dso_preemptable] = "dso_preemptable",
  [anon_sym_dso_local] = "dso_local",
  [anon_sym_default] = "default",
  [anon_sym_hidden] = "hidden",
  [anon_sym_protected] = "protected",
  [anon_sym_dllimport] = "dllimport",
  [anon_sym_dllexport] = "dllexport",
  [anon_sym_localdynamic] = "localdynamic",
  [anon_sym_initialexec] = "initialexec",
  [anon_sym_localexec] = "localexec",
  [anon_sym_addrspace_LPAREN] = "addrspace(",
  [anon_sym_RPAREN] = ")",
  [sym_externally_initialized] = "externally_initialized",
  [anon_sym_void] = "void",
  [anon_sym_x86_amx] = "x86_amx",
  [anon_sym_x86_mmx] = "x86_mmx",
  [anon_sym_label] = "label",
  [anon_sym_token] = "token",
  [anon_sym_metadata] = "metadata",
  [anon_sym_i] = "i",
  [anon_sym_half] = "half",
  [anon_sym_bfloat] = "bfloat",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [anon_sym_fp128] = "fp128",
  [anon_sym_x86_fp80] = "x86_fp80",
  [anon_sym_ppc_fp128] = "ppc_fp128",
  [anon_sym_STAR] = "*",
  [sym_vector_type] = "vector_type",
  [anon_sym_LBRACK] = "[",
  [anon_sym_x] = "x",
  [anon_sym_RBRACK] = "]",
  [sym_structure_type] = "structure_type",
  [anon_sym_TODOinitializer_constant] = "TODO initializer_constant",
  [sym_named_metadata] = "named_metadata",
  [sym_identifier] = "identifier",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer] = "integer",
  [sym_string] = "string",
  [anon_sym_c] = "c",
  [sym_source_file] = "source_file",
  [sym__expression] = "_expression",
  [sym_global_constant] = "global_constant",
  [sym_linkage] = "linkage",
  [sym_preemption_specifier] = "preemption_specifier",
  [sym_visibility] = "visibility",
  [sym_dll_storage_class] = "dll_storage_class",
  [sym_thread_local] = "thread_local",
  [sym_addr_space] = "addr_space",
  [sym_type] = "type",
  [sym_integer_type] = "integer_type",
  [sym_floating_point_type] = "floating_point_type",
  [sym_pointer_type] = "pointer_type",
  [sym_array_type] = "array_type",
  [sym_initializer_constant] = "initializer_constant",
  [sym_boolean] = "boolean",
  [sym_character_array] = "character_array",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_function_declaration] = sym_function_declaration,
  [sym_function_definition] = sym_function_definition,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_unnamed_addr] = anon_sym_unnamed_addr,
  [anon_sym_local_unnamed_addr] = anon_sym_local_unnamed_addr,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_constant] = anon_sym_constant,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_internal] = anon_sym_internal,
  [anon_sym_availible_externally] = anon_sym_availible_externally,
  [anon_sym_linkonce] = anon_sym_linkonce,
  [anon_sym_weak] = anon_sym_weak,
  [anon_sym_common] = anon_sym_common,
  [anon_sym_appending] = anon_sym_appending,
  [anon_sym_extern_weak] = anon_sym_extern_weak,
  [anon_sym_linkonce_odr] = anon_sym_linkonce_odr,
  [anon_sym_weak_odr] = anon_sym_weak_odr,
  [anon_sym_external] = anon_sym_external,
  [anon_sym_dso_preemptable] = anon_sym_dso_preemptable,
  [anon_sym_dso_local] = anon_sym_dso_local,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_hidden] = anon_sym_hidden,
  [anon_sym_protected] = anon_sym_protected,
  [anon_sym_dllimport] = anon_sym_dllimport,
  [anon_sym_dllexport] = anon_sym_dllexport,
  [anon_sym_localdynamic] = anon_sym_localdynamic,
  [anon_sym_initialexec] = anon_sym_initialexec,
  [anon_sym_localexec] = anon_sym_localexec,
  [anon_sym_addrspace_LPAREN] = anon_sym_addrspace_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_externally_initialized] = sym_externally_initialized,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_x86_amx] = anon_sym_x86_amx,
  [anon_sym_x86_mmx] = anon_sym_x86_mmx,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_token] = anon_sym_token,
  [anon_sym_metadata] = anon_sym_metadata,
  [anon_sym_i] = anon_sym_i,
  [anon_sym_half] = anon_sym_half,
  [anon_sym_bfloat] = anon_sym_bfloat,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_fp128] = anon_sym_fp128,
  [anon_sym_x86_fp80] = anon_sym_x86_fp80,
  [anon_sym_ppc_fp128] = anon_sym_ppc_fp128,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_vector_type] = sym_vector_type,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_structure_type] = sym_structure_type,
  [anon_sym_TODOinitializer_constant] = anon_sym_TODOinitializer_constant,
  [sym_named_metadata] = sym_named_metadata,
  [sym_identifier] = sym_identifier,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer] = sym_integer,
  [sym_string] = sym_string,
  [anon_sym_c] = anon_sym_c,
  [sym_source_file] = sym_source_file,
  [sym__expression] = sym__expression,
  [sym_global_constant] = sym_global_constant,
  [sym_linkage] = sym_linkage,
  [sym_preemption_specifier] = sym_preemption_specifier,
  [sym_visibility] = sym_visibility,
  [sym_dll_storage_class] = sym_dll_storage_class,
  [sym_thread_local] = sym_thread_local,
  [sym_addr_space] = sym_addr_space,
  [sym_type] = sym_type,
  [sym_integer_type] = sym_integer_type,
  [sym_floating_point_type] = sym_floating_point_type,
  [sym_pointer_type] = sym_pointer_type,
  [sym_array_type] = sym_array_type,
  [sym_initializer_constant] = sym_initializer_constant,
  [sym_boolean] = sym_boolean,
  [sym_character_array] = sym_character_array,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unnamed_addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local_unnamed_addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_internal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_availible_externally] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_linkonce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weak] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_common] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_appending] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern_weak] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_linkonce_odr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weak_odr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_external] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dso_preemptable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dso_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hidden] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dllimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dllexport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_localdynamic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_initialexec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_localexec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addrspace_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_externally_initialized] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x86_amx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x86_mmx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_token] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_metadata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_half] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bfloat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fp128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x86_fp80] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ppc_fp128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_vector_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_structure_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TODOinitializer_constant] = {
    .visible = true,
    .named = false,
  },
  [sym_named_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_c] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_global_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_linkage] = {
    .visible = true,
    .named = true,
  },
  [sym_preemption_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_visibility] = {
    .visible = true,
    .named = true,
  },
  [sym_dll_storage_class] = {
    .visible = true,
    .named = true,
  },
  [sym_thread_local] = {
    .visible = true,
    .named = true,
  },
  [sym_addr_space] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_type] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_point_type] = {
    .visible = true,
    .named = true,
  },
  [sym_pointer_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_initializer_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_character_array] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(315);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == ')') ADVANCE(346);
      if (lookahead == '*') ADVANCE(363);
      if (lookahead == '-') ADVANCE(312);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == ';') ADVANCE(316);
      if (lookahead == '=') ADVANCE(319);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead == '[') ADVANCE(365);
      if (lookahead == ']') ADVANCE(368);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(141);
      if (lookahead == 'c') ADVANCE(378);
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'g') ADVANCE(174);
      if (lookahead == 'h') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(355);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == 'm') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead == 'p') ADVANCE(235);
      if (lookahead == 't') ADVANCE(219);
      if (lookahead == 'u') ADVANCE(203);
      if (lookahead == 'v') ADVANCE(220);
      if (lookahead == 'w') ADVANCE(113);
      if (lookahead == 'x') ADVANCE(367);
      if (lookahead == '%' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(151);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(376);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(345);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(317);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(318);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(371);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'l') ADVANCE(223);
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(361);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '2') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == '2') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == '6') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == '8') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '8') ADVANCE(360);
      END_STATE();
    case 17:
      if (lookahead == '8') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == '8') ADVANCE(362);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'O') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'O') ADVANCE(1);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(177);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(46);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(297);
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(140);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 'd') ADVANCE(309);
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(81);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(273);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(51);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(134);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(160);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(287);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(64);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead == 'g') ADVANCE(174);
      if (lookahead == 'h') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 'p') ADVANCE(245);
      if (lookahead == 'u') ADVANCE(203);
      if (lookahead == 'w') ADVANCE(113);
      if (lookahead == 'x') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(353);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'f') ADVANCE(236);
      if (lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 67:
      if (lookahead == 'b') ADVANCE(122);
      END_STATE();
    case 68:
      if (lookahead == 'b') ADVANCE(180);
      END_STATE();
    case 69:
      if (lookahead == 'b') ADVANCE(52);
      END_STATE();
    case 70:
      if (lookahead == 'b') ADVANCE(183);
      END_STATE();
    case 71:
      if (lookahead == 'b') ADVANCE(184);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(344);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(343);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(342);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(279);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(277);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(228);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(284);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(85);
      if (lookahead == 'p') ADVANCE(237);
      if (lookahead == 'v') ADVANCE(38);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(250);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(348);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(339);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(347);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(152);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(246);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(247);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(248);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(165);
      if (lookahead == 'o') ADVANCE(290);
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(165);
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 138:
      if (lookahead == 'f') ADVANCE(356);
      END_STATE();
    case 139:
      if (lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 140:
      if (lookahead == 'f') ADVANCE(244);
      END_STATE();
    case 141:
      if (lookahead == 'f') ADVANCE(186);
      END_STATE();
    case 142:
      if (lookahead == 'g') ADVANCE(330);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(296);
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == 's') ADVANCE(275);
      if (lookahead == 'v') ADVANCE(119);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(288);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 161:
      if (lookahead == 'k') ADVANCE(328);
      END_STATE();
    case 162:
      if (lookahead == 'k') ADVANCE(331);
      END_STATE();
    case 163:
      if (lookahead == 'k') ADVANCE(118);
      END_STATE();
    case 164:
      if (lookahead == 'k') ADVANCE(227);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(351);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(322);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(334);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(325);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(336);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(233);
      if (lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 185:
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 186:
      if (lookahead == 'l') ADVANCE(230);
      END_STATE();
    case 187:
      if (lookahead == 'm') ADVANCE(190);
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 188:
      if (lookahead == 'm') ADVANCE(299);
      END_STATE();
    case 189:
      if (lookahead == 'm') ADVANCE(300);
      END_STATE();
    case 190:
      if (lookahead == 'm') ADVANCE(225);
      END_STATE();
    case 191:
      if (lookahead == 'm') ADVANCE(243);
      END_STATE();
    case 192:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 193:
      if (lookahead == 'm') ADVANCE(123);
      END_STATE();
    case 194:
      if (lookahead == 'm') ADVANCE(242);
      END_STATE();
    case 195:
      if (lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(352);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 234:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 235:
      if (lookahead == 'p') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 236:
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 237:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 238:
      if (lookahead == 'p') ADVANCE(224);
      END_STATE();
    case 239:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 240:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 241:
      if (lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 242:
      if (lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 243:
      if (lookahead == 'p') ADVANCE(283);
      END_STATE();
    case 244:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 262:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 264:
      if (lookahead == 's') ADVANCE(285);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(341);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(370);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 290:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 291:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 292:
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 293:
      if (lookahead == 'u') ADVANCE(258);
      END_STATE();
    case 294:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 295:
      if (lookahead == 'u') ADVANCE(216);
      END_STATE();
    case 296:
      if (lookahead == 'v') ADVANCE(62);
      END_STATE();
    case 297:
      if (lookahead == 'w') ADVANCE(129);
      END_STATE();
    case 298:
      if (lookahead == 'x') ADVANCE(274);
      END_STATE();
    case 299:
      if (lookahead == 'x') ADVANCE(349);
      END_STATE();
    case 300:
      if (lookahead == 'x') ADVANCE(350);
      END_STATE();
    case 301:
      if (lookahead == 'x') ADVANCE(238);
      END_STATE();
    case 302:
      if (lookahead == 'x') ADVANCE(121);
      END_STATE();
    case 303:
      if (lookahead == 'x') ADVANCE(124);
      END_STATE();
    case 304:
      if (lookahead == 'x') ADVANCE(289);
      END_STATE();
    case 305:
      if (lookahead == 'y') ADVANCE(326);
      END_STATE();
    case 306:
      if (lookahead == 'y') ADVANCE(31);
      END_STATE();
    case 307:
      if (lookahead == 'y') ADVANCE(240);
      END_STATE();
    case 308:
      if (lookahead == 'y') ADVANCE(241);
      END_STATE();
    case 309:
      if (lookahead == 'y') ADVANCE(209);
      END_STATE();
    case 310:
      if (lookahead == 'z') ADVANCE(133);
      END_STATE();
    case 311:
      if (lookahead == 'z') ADVANCE(127);
      END_STATE();
    case 312:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      END_STATE();
    case 313:
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 314:
      if (eof) ADVANCE(315);
      if (lookahead == '*') ADVANCE(363);
      if (lookahead == '-') ADVANCE(312);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == ';') ADVANCE(316);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead == '[') ADVANCE(365);
      if (lookahead == ']') ADVANCE(368);
      if (lookahead == 'b') ADVANCE(141);
      if (lookahead == 'c') ADVANCE(377);
      if (lookahead == 'd') ADVANCE(218);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'h') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == 'm') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead == 'p') ADVANCE(234);
      if (lookahead == 't') ADVANCE(219);
      if (lookahead == 'v') ADVANCE(220);
      if (lookahead == 'x') ADVANCE(15);
      if (lookahead == '%' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(314)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_function_declaration);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_function_definition);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_unnamed_addr);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_local_unnamed_addr);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_constant);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_availible_externally);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_linkonce);
      if (lookahead == '_') ADVANCE(232);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_weak);
      if (lookahead == '_') ADVANCE(229);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_common);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_appending);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_extern_weak);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_linkonce_odr);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_weak_odr);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_external);
      if (lookahead == 'l') ADVANCE(306);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_dso_preemptable);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_dso_local);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_dllimport);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_dllexport);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_localdynamic);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_initialexec);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_localexec);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_addrspace_LPAREN);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_externally_initialized);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_x86_amx);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_x86_mmx);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_token);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_metadata);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_i);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_half);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_bfloat);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_fp128);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_x86_fp80);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_ppc_fp128);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_vector_type);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '8') ADVANCE(14);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_structure_type);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_TODOinitializer_constant);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_named_metadata);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(376);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_c);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 34},
  [3] = {.lex_state = 314},
  [4] = {.lex_state = 314},
  [5] = {.lex_state = 314},
  [6] = {.lex_state = 314},
  [7] = {.lex_state = 314},
  [8] = {.lex_state = 314},
  [9] = {.lex_state = 314},
  [10] = {.lex_state = 314},
  [11] = {.lex_state = 314},
  [12] = {.lex_state = 314},
  [13] = {.lex_state = 34},
  [14] = {.lex_state = 34},
  [15] = {.lex_state = 34},
  [16] = {.lex_state = 34},
  [17] = {.lex_state = 314},
  [18] = {.lex_state = 314},
  [19] = {.lex_state = 314},
  [20] = {.lex_state = 314},
  [21] = {.lex_state = 314},
  [22] = {.lex_state = 314},
  [23] = {.lex_state = 314},
  [24] = {.lex_state = 314},
  [25] = {.lex_state = 314},
  [26] = {.lex_state = 34},
  [27] = {.lex_state = 34},
  [28] = {.lex_state = 34},
  [29] = {.lex_state = 34},
  [30] = {.lex_state = 314},
  [31] = {.lex_state = 314},
  [32] = {.lex_state = 314},
  [33] = {.lex_state = 314},
  [34] = {.lex_state = 314},
  [35] = {.lex_state = 34},
  [36] = {.lex_state = 34},
  [37] = {.lex_state = 34},
  [38] = {.lex_state = 34},
  [39] = {.lex_state = 34},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 34},
  [43] = {.lex_state = 34},
  [44] = {.lex_state = 34},
  [45] = {.lex_state = 34},
  [46] = {.lex_state = 34},
  [47] = {.lex_state = 34},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 34},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 34},
  [62] = {.lex_state = 34},
  [63] = {.lex_state = 34},
  [64] = {.lex_state = 34},
  [65] = {.lex_state = 34},
  [66] = {.lex_state = 34},
  [67] = {.lex_state = 34},
  [68] = {.lex_state = 34},
  [69] = {.lex_state = 34},
  [70] = {.lex_state = 34},
  [71] = {.lex_state = 34},
  [72] = {.lex_state = 34},
  [73] = {.lex_state = 34},
  [74] = {.lex_state = 34},
  [75] = {.lex_state = 34},
  [76] = {.lex_state = 34},
  [77] = {.lex_state = 34},
  [78] = {.lex_state = 34},
  [79] = {.lex_state = 34},
  [80] = {.lex_state = 34},
  [81] = {.lex_state = 34},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 34},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 34},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_function_declaration] = ACTIONS(1),
    [sym_function_definition] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_unnamed_addr] = ACTIONS(1),
    [anon_sym_local_unnamed_addr] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_constant] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_internal] = ACTIONS(1),
    [anon_sym_availible_externally] = ACTIONS(1),
    [anon_sym_linkonce] = ACTIONS(1),
    [anon_sym_weak] = ACTIONS(1),
    [anon_sym_common] = ACTIONS(1),
    [anon_sym_appending] = ACTIONS(1),
    [anon_sym_extern_weak] = ACTIONS(1),
    [anon_sym_linkonce_odr] = ACTIONS(1),
    [anon_sym_weak_odr] = ACTIONS(1),
    [anon_sym_external] = ACTIONS(1),
    [anon_sym_dso_preemptable] = ACTIONS(1),
    [anon_sym_dso_local] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_hidden] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_dllimport] = ACTIONS(1),
    [anon_sym_dllexport] = ACTIONS(1),
    [anon_sym_localdynamic] = ACTIONS(1),
    [anon_sym_initialexec] = ACTIONS(1),
    [anon_sym_localexec] = ACTIONS(1),
    [anon_sym_addrspace_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_externally_initialized] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_x86_amx] = ACTIONS(1),
    [anon_sym_x86_mmx] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_token] = ACTIONS(1),
    [anon_sym_metadata] = ACTIONS(1),
    [anon_sym_i] = ACTIONS(1),
    [anon_sym_half] = ACTIONS(1),
    [anon_sym_bfloat] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_fp128] = ACTIONS(1),
    [anon_sym_x86_fp80] = ACTIONS(1),
    [anon_sym_ppc_fp128] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_vector_type] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_structure_type] = ACTIONS(1),
    [anon_sym_TODOinitializer_constant] = ACTIONS(1),
    [sym_named_metadata] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_c] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(91),
    [sym__expression] = STATE(40),
    [sym_global_constant] = STATE(40),
    [aux_sym_source_file_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_function_declaration] = ACTIONS(5),
    [sym_function_definition] = ACTIONS(5),
    [sym_named_metadata] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(25), 1,
      anon_sym_addrspace_LPAREN,
    ACTIONS(27), 1,
      sym_externally_initialized,
    STATE(13), 1,
      sym_linkage,
    STATE(14), 1,
      sym_preemption_specifier,
    STATE(29), 1,
      sym_visibility,
    STATE(38), 1,
      sym_dll_storage_class,
    STATE(47), 1,
      sym_thread_local,
    STATE(69), 1,
      sym_addr_space,
    ACTIONS(9), 2,
      anon_sym_unnamed_addr,
      anon_sym_local_unnamed_addr,
    ACTIONS(11), 2,
      anon_sym_global,
      anon_sym_constant,
    ACTIONS(17), 2,
      anon_sym_dso_preemptable,
      anon_sym_dso_local,
    ACTIONS(21), 2,
      anon_sym_dllimport,
      anon_sym_dllexport,
    ACTIONS(15), 3,
      anon_sym_linkonce,
      anon_sym_weak,
      anon_sym_external,
    ACTIONS(19), 3,
      anon_sym_default,
      anon_sym_hidden,
      anon_sym_protected,
    ACTIONS(23), 3,
      anon_sym_localdynamic,
      anon_sym_initialexec,
      anon_sym_localexec,
    ACTIONS(13), 8,
      anon_sym_private,
      anon_sym_internal,
      anon_sym_availible_externally,
      anon_sym_common,
      anon_sym_appending,
      anon_sym_extern_weak,
      anon_sym_linkonce_odr,
      anon_sym_weak_odr,
  [66] = 6,
    ACTIONS(31), 1,
      anon_sym_i,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_type,
    STATE(32), 4,
      sym_integer_type,
      sym_floating_point_type,
      sym_pointer_type,
      sym_array_type,
    ACTIONS(33), 7,
      anon_sym_half,
      anon_sym_bfloat,
      anon_sym_float,
      anon_sym_double,
      anon_sym_fp128,
      anon_sym_x86_fp80,
      anon_sym_ppc_fp128,
    ACTIONS(29), 8,
      anon_sym_void,
      anon_sym_x86_amx,
      anon_sym_x86_mmx,
      anon_sym_label,
      anon_sym_token,
      anon_sym_metadata,
      sym_vector_type,
      sym_structure_type,
  [101] = 6,
    ACTIONS(31), 1,
      anon_sym_i,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      sym_type,
    STATE(32), 4,
      sym_integer_type,
      sym_floating_point_type,
      sym_pointer_type,
      sym_array_type,
    ACTIONS(33), 7,
      anon_sym_half,
      anon_sym_bfloat,
      anon_sym_float,
      anon_sym_double,
      anon_sym_fp128,
      anon_sym_x86_fp80,
      anon_sym_ppc_fp128,
    ACTIONS(29), 8,
      anon_sym_void,
      anon_sym_x86_amx,
      anon_sym_x86_mmx,
      anon_sym_label,
      anon_sym_token,
      anon_sym_metadata,
      sym_vector_type,
      sym_structure_type,
  [136] = 6,
    ACTIONS(31), 1,
      anon_sym_i,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(82), 1,
      sym_type,
    STATE(32), 4,
      sym_integer_type,
      sym_floating_point_type,
      sym_pointer_type,
      sym_array_type,
    ACTIONS(33), 7,
      anon_sym_half,
      anon_sym_bfloat,
      anon_sym_float,
      anon_sym_double,
      anon_sym_fp128,
      anon_sym_x86_fp80,
      anon_sym_ppc_fp128,
    ACTIONS(29), 8,
      anon_sym_void,
      anon_sym_x86_amx,
      anon_sym_x86_mmx,
      anon_sym_label,
      anon_sym_token,
      anon_sym_metadata,
      sym_vector_type,
      sym_structure_type,
  [171] = 6,
    ACTIONS(31), 1,
      anon_sym_i,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_type,
    STATE(32), 4,
      sym_integer_type,
      sym_floating_point_type,
      sym_pointer_type,
      sym_array_type,
    ACTIONS(33), 7,
      anon_sym_half,
      anon_sym_bfloat,
      anon_sym_float,
      anon_sym_double,
      anon_sym_fp128,
      anon_sym_x86_fp80,
      anon_sym_ppc_fp128,
    ACTIONS(29), 8,
      anon_sym_void,
      anon_sym_x86_amx,
      anon_sym_x86_mmx,
      anon_sym_label,
      anon_sym_token,
      anon_sym_metadata,
      sym_vector_type,
      sym_structure_type,
  [206] = 6,
    ACTIONS(31), 1,
      anon_sym_i,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_type,
    STATE(32), 4,
      sym_integer_type,
      sym_floating_point_type,
      sym_pointer_type,
      sym_array_type,
    ACTIONS(33), 7,
      anon_sym_half,
      anon_sym_bfloat,
      anon_sym_float,
      anon_sym_double,
      anon_sym_fp128,
      anon_sym_x86_fp80,
      anon_sym_ppc_fp128,
    ACTIONS(29), 8,
      anon_sym_void,
      anon_sym_x86_amx,
      anon_sym_x86_mmx,
      anon_sym_label,
      anon_sym_token,
      anon_sym_metadata,
      sym_vector_type,
      sym_structure_type,
  [241] = 6,
    ACTIONS(31), 1,
      anon_sym_i,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      sym_type,
    STATE(32), 4,
      sym_integer_type,
      sym_floating_point_type,
      sym_pointer_type,
      sym_array_type,
    ACTIONS(33), 7,
      anon_sym_half,
      anon_sym_bfloat,
      anon_sym_float,
      anon_sym_double,
      anon_sym_fp128,
      anon_sym_x86_fp80,
      anon_sym_ppc_fp128,
    ACTIONS(29), 8,
      anon_sym_void,
      anon_sym_x86_amx,
      anon_sym_x86_mmx,
      anon_sym_label,
      anon_sym_token,
      anon_sym_metadata,
      sym_vector_type,
      sym_structure_type,
  [276] = 6,
    ACTIONS(31), 1,
      anon_sym_i,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_type,
    STATE(32), 4,
      sym_integer_type,
      sym_floating_point_type,
      sym_pointer_type,
      sym_array_type,
    ACTIONS(33), 7,
      anon_sym_half,
      anon_sym_bfloat,
      anon_sym_float,
      anon_sym_double,
      anon_sym_fp128,
      anon_sym_x86_fp80,
      anon_sym_ppc_fp128,
    ACTIONS(29), 8,
      anon_sym_void,
      anon_sym_x86_amx,
      anon_sym_x86_mmx,
      anon_sym_label,
      anon_sym_token,
      anon_sym_metadata,
      sym_vector_type,
      sym_structure_type,
  [311] = 6,
    ACTIONS(31), 1,
      anon_sym_i,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      sym_type,
    STATE(32), 4,
      sym_integer_type,
      sym_floating_point_type,
      sym_pointer_type,
      sym_array_type,
    ACTIONS(33), 7,
      anon_sym_half,
      anon_sym_bfloat,
      anon_sym_float,
      anon_sym_double,
      anon_sym_fp128,
      anon_sym_x86_fp80,
      anon_sym_ppc_fp128,
    ACTIONS(29), 8,
      anon_sym_void,
      anon_sym_x86_amx,
      anon_sym_x86_mmx,
      anon_sym_label,
      anon_sym_token,
      anon_sym_metadata,
      sym_vector_type,
      sym_structure_type,
  [346] = 6,
    ACTIONS(31), 1,
      anon_sym_i,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_type,
    STATE(32), 4,
      sym_integer_type,
      sym_floating_point_type,
      sym_pointer_type,
      sym_array_type,
    ACTIONS(33), 7,
      anon_sym_half,
      anon_sym_bfloat,
      anon_sym_float,
      anon_sym_double,
      anon_sym_fp128,
      anon_sym_x86_fp80,
      anon_sym_ppc_fp128,
    ACTIONS(29), 8,
      anon_sym_void,
      anon_sym_x86_amx,
      anon_sym_x86_mmx,
      anon_sym_label,
      anon_sym_token,
      anon_sym_metadata,
      sym_vector_type,
      sym_structure_type,
  [381] = 6,
    ACTIONS(31), 1,
      anon_sym_i,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym_type,
    STATE(32), 4,
      sym_integer_type,
      sym_floating_point_type,
      sym_pointer_type,
      sym_array_type,
    ACTIONS(33), 7,
      anon_sym_half,
      anon_sym_bfloat,
      anon_sym_float,
      anon_sym_double,
      anon_sym_fp128,
      anon_sym_x86_fp80,
      anon_sym_ppc_fp128,
    ACTIONS(29), 8,
      anon_sym_void,
      anon_sym_x86_amx,
      anon_sym_x86_mmx,
      anon_sym_label,
      anon_sym_token,
      anon_sym_metadata,
      sym_vector_type,
      sym_structure_type,
  [416] = 13,
    ACTIONS(25), 1,
      anon_sym_addrspace_LPAREN,
    ACTIONS(41), 1,
      sym_externally_initialized,
    STATE(15), 1,
      sym_preemption_specifier,
    STATE(26), 1,
      sym_visibility,
    STATE(37), 1,
      sym_dll_storage_class,
    STATE(44), 1,
      sym_thread_local,
    STATE(67), 1,
      sym_addr_space,
    ACTIONS(17), 2,
      anon_sym_dso_preemptable,
      anon_sym_dso_local,
    ACTIONS(21), 2,
      anon_sym_dllimport,
      anon_sym_dllexport,
    ACTIONS(37), 2,
      anon_sym_unnamed_addr,
      anon_sym_local_unnamed_addr,
    ACTIONS(39), 2,
      anon_sym_global,
      anon_sym_constant,
    ACTIONS(19), 3,
      anon_sym_default,
      anon_sym_hidden,
      anon_sym_protected,
    ACTIONS(23), 3,
      anon_sym_localdynamic,
      anon_sym_initialexec,
      anon_sym_localexec,
  [464] = 11,
    ACTIONS(25), 1,
      anon_sym_addrspace_LPAREN,
    ACTIONS(41), 1,
      sym_externally_initialized,
    STATE(26), 1,
      sym_visibility,
    STATE(37), 1,
      sym_dll_storage_class,
    STATE(44), 1,
      sym_thread_local,
    STATE(67), 1,
      sym_addr_space,
    ACTIONS(21), 2,
      anon_sym_dllimport,
      anon_sym_dllexport,
    ACTIONS(37), 2,
      anon_sym_unnamed_addr,
      anon_sym_local_unnamed_addr,
    ACTIONS(39), 2,
      anon_sym_global,
      anon_sym_constant,
    ACTIONS(19), 3,
      anon_sym_default,
      anon_sym_hidden,
      anon_sym_protected,
    ACTIONS(23), 3,
      anon_sym_localdynamic,
      anon_sym_initialexec,
      anon_sym_localexec,
  [505] = 11,
    ACTIONS(25), 1,
      anon_sym_addrspace_LPAREN,
    ACTIONS(47), 1,
      sym_externally_initialized,
    STATE(28), 1,
      sym_visibility,
    STATE(36), 1,
      sym_dll_storage_class,
    STATE(43), 1,
      sym_thread_local,
    STATE(72), 1,
      sym_addr_space,
    ACTIONS(21), 2,
      anon_sym_dllimport,
      anon_sym_dllexport,
    ACTIONS(43), 2,
      anon_sym_unnamed_addr,
      anon_sym_local_unnamed_addr,
    ACTIONS(45), 2,
      anon_sym_global,
      anon_sym_constant,
    ACTIONS(19), 3,
      anon_sym_default,
      anon_sym_hidden,
      anon_sym_protected,
    ACTIONS(23), 3,
      anon_sym_localdynamic,
      anon_sym_initialexec,
      anon_sym_localexec,
  [546] = 1,
    ACTIONS(49), 16,
      anon_sym_unnamed_addr,
      anon_sym_local_unnamed_addr,
      anon_sym_global,
      anon_sym_constant,
      anon_sym_dso_preemptable,
      anon_sym_dso_local,
      anon_sym_default,
      anon_sym_hidden,
      anon_sym_protected,
      anon_sym_dllimport,
      anon_sym_dllexport,
      anon_sym_localdynamic,
      anon_sym_initialexec,
      anon_sym_localexec,
      anon_sym_addrspace_LPAREN,
      sym_externally_initialized,
  [565] = 7,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(59), 1,
      anon_sym_c,
    STATE(48), 1,
      sym_initializer_constant,
    ACTIONS(55), 2,
      anon_sym_TODOinitializer_constant,
      sym_integer,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(50), 2,
      sym_boolean,
      sym_character_array,
    ACTIONS(51), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_function_declaration,
      sym_function_definition,
      sym_named_metadata,
      sym_identifier,
  [595] = 7,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(59), 1,
      anon_sym_c,
    STATE(49), 1,
      sym_initializer_constant,
    ACTIONS(55), 2,
      anon_sym_TODOinitializer_constant,
      sym_integer,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(50), 2,
      sym_boolean,
      sym_character_array,
    ACTIONS(61), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_function_declaration,
      sym_function_definition,
      sym_named_metadata,
      sym_identifier,
  [625] = 7,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(59), 1,
      anon_sym_c,
    STATE(54), 1,
      sym_initializer_constant,
    ACTIONS(55), 2,
      anon_sym_TODOinitializer_constant,
      sym_integer,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(50), 2,
      sym_boolean,
      sym_character_array,
    ACTIONS(63), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_function_declaration,
      sym_function_definition,
      sym_named_metadata,
      sym_identifier,
  [655] = 7,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(59), 1,
      anon_sym_c,
    STATE(59), 1,
      sym_initializer_constant,
    ACTIONS(55), 2,
      anon_sym_TODOinitializer_constant,
      sym_integer,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(50), 2,
      sym_boolean,
      sym_character_array,
    ACTIONS(65), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_function_declaration,
      sym_function_definition,
      sym_named_metadata,
      sym_identifier,
  [685] = 7,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(59), 1,
      anon_sym_c,
    STATE(56), 1,
      sym_initializer_constant,
    ACTIONS(55), 2,
      anon_sym_TODOinitializer_constant,
      sym_integer,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(50), 2,
      sym_boolean,
      sym_character_array,
    ACTIONS(67), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_function_declaration,
      sym_function_definition,
      sym_named_metadata,
      sym_identifier,
  [715] = 7,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(59), 1,
      anon_sym_c,
    STATE(55), 1,
      sym_initializer_constant,
    ACTIONS(55), 2,
      anon_sym_TODOinitializer_constant,
      sym_integer,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(50), 2,
      sym_boolean,
      sym_character_array,
    ACTIONS(69), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_function_declaration,
      sym_function_definition,
      sym_named_metadata,
      sym_identifier,
  [745] = 7,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(59), 1,
      anon_sym_c,
    STATE(57), 1,
      sym_initializer_constant,
    ACTIONS(55), 2,
      anon_sym_TODOinitializer_constant,
      sym_integer,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(50), 2,
      sym_boolean,
      sym_character_array,
    ACTIONS(71), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_function_declaration,
      sym_function_definition,
      sym_named_metadata,
      sym_identifier,
  [775] = 7,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(59), 1,
      anon_sym_c,
    STATE(58), 1,
      sym_initializer_constant,
    ACTIONS(55), 2,
      anon_sym_TODOinitializer_constant,
      sym_integer,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(50), 2,
      sym_boolean,
      sym_character_array,
    ACTIONS(73), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_function_declaration,
      sym_function_definition,
      sym_named_metadata,
      sym_identifier,
  [805] = 7,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(59), 1,
      anon_sym_c,
    STATE(60), 1,
      sym_initializer_constant,
    ACTIONS(55), 2,
      anon_sym_TODOinitializer_constant,
      sym_integer,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(50), 2,
      sym_boolean,
      sym_character_array,
    ACTIONS(75), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_function_declaration,
      sym_function_definition,
      sym_named_metadata,
      sym_identifier,
  [835] = 9,
    ACTIONS(25), 1,
      anon_sym_addrspace_LPAREN,
    ACTIONS(47), 1,
      sym_externally_initialized,
    STATE(36), 1,
      sym_dll_storage_class,
    STATE(43), 1,
      sym_thread_local,
    STATE(72), 1,
      sym_addr_space,
    ACTIONS(21), 2,
      anon_sym_dllimport,
      anon_sym_dllexport,
    ACTIONS(43), 2,
      anon_sym_unnamed_addr,
      anon_sym_local_unnamed_addr,
    ACTIONS(45), 2,
      anon_sym_global,
      anon_sym_constant,
    ACTIONS(23), 3,
      anon_sym_localdynamic,
      anon_sym_initialexec,
      anon_sym_localexec,
  [868] = 1,
    ACTIONS(77), 14,
      anon_sym_unnamed_addr,
      anon_sym_local_unnamed_addr,
      anon_sym_global,
      anon_sym_constant,
      anon_sym_default,
      anon_sym_hidden,
      anon_sym_protected,
      anon_sym_dllimport,
      anon_sym_dllexport,
      anon_sym_localdynamic,
      anon_sym_initialexec,
      anon_sym_localexec,
      anon_sym_addrspace_LPAREN,
      sym_externally_initialized,
  [885] = 9,
    ACTIONS(25), 1,
      anon_sym_addrspace_LPAREN,
    ACTIONS(83), 1,
      sym_externally_initialized,
    STATE(35), 1,
      sym_dll_storage_class,
    STATE(46), 1,
      sym_thread_local,
    STATE(71), 1,
      sym_addr_space,
    ACTIONS(21), 2,
      anon_sym_dllimport,
      anon_sym_dllexport,
    ACTIONS(79), 2,
      anon_sym_unnamed_addr,
      anon_sym_local_unnamed_addr,
    ACTIONS(81), 2,
      anon_sym_global,
      anon_sym_constant,
    ACTIONS(23), 3,
      anon_sym_localdynamic,
      anon_sym_initialexec,
      anon_sym_localexec,
  [918] = 9,
    ACTIONS(25), 1,
      anon_sym_addrspace_LPAREN,
    ACTIONS(41), 1,
      sym_externally_initialized,
    STATE(37), 1,
      sym_dll_storage_class,
    STATE(44), 1,
      sym_thread_local,
    STATE(67), 1,
      sym_addr_space,
    ACTIONS(21), 2,
      anon_sym_dllimport,
      anon_sym_dllexport,
    ACTIONS(37), 2,
      anon_sym_unnamed_addr,
      anon_sym_local_unnamed_addr,
    ACTIONS(39), 2,
      anon_sym_global,
      anon_sym_constant,
    ACTIONS(23), 3,
      anon_sym_localdynamic,
      anon_sym_initialexec,
      anon_sym_localexec,
  [951] = 1,
    ACTIONS(85), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym_function_declaration,
      sym_function_definition,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_TODOinitializer_constant,
      sym_named_metadata,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      anon_sym_c,
  [967] = 1,
    ACTIONS(87), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym_function_declaration,
      sym_function_definition,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_TODOinitializer_constant,
      sym_named_metadata,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      anon_sym_c,
  [983] = 1,
    ACTIONS(89), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym_function_declaration,
      sym_function_definition,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_TODOinitializer_constant,
      sym_named_metadata,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      anon_sym_c,
  [999] = 1,
    ACTIONS(91), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym_function_declaration,
      sym_function_definition,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_TODOinitializer_constant,
      sym_named_metadata,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      anon_sym_c,
  [1015] = 1,
    ACTIONS(93), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym_function_declaration,
      sym_function_definition,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_TODOinitializer_constant,
      sym_named_metadata,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      anon_sym_c,
  [1031] = 7,
    ACTIONS(25), 1,
      anon_sym_addrspace_LPAREN,
    ACTIONS(99), 1,
      sym_externally_initialized,
    STATE(45), 1,
      sym_thread_local,
    STATE(73), 1,
      sym_addr_space,
    ACTIONS(95), 2,
      anon_sym_unnamed_addr,
      anon_sym_local_unnamed_addr,
    ACTIONS(97), 2,
      anon_sym_global,
      anon_sym_constant,
    ACTIONS(23), 3,
      anon_sym_localdynamic,
      anon_sym_initialexec,
      anon_sym_localexec,
  [1057] = 7,
    ACTIONS(25), 1,
      anon_sym_addrspace_LPAREN,
    ACTIONS(83), 1,
      sym_externally_initialized,
    STATE(46), 1,
      sym_thread_local,
    STATE(71), 1,
      sym_addr_space,
    ACTIONS(79), 2,
      anon_sym_unnamed_addr,
      anon_sym_local_unnamed_addr,
    ACTIONS(81), 2,
      anon_sym_global,
      anon_sym_constant,
    ACTIONS(23), 3,
      anon_sym_localdynamic,
      anon_sym_initialexec,
      anon_sym_localexec,
  [1083] = 7,
    ACTIONS(25), 1,
      anon_sym_addrspace_LPAREN,
    ACTIONS(47), 1,
      sym_externally_initialized,
    STATE(43), 1,
      sym_thread_local,
    STATE(72), 1,
      sym_addr_space,
    ACTIONS(43), 2,
      anon_sym_unnamed_addr,
      anon_sym_local_unnamed_addr,
    ACTIONS(45), 2,
      anon_sym_global,
      anon_sym_constant,
    ACTIONS(23), 3,
      anon_sym_localdynamic,
      anon_sym_initialexec,
      anon_sym_localexec,
  [1109] = 7,
    ACTIONS(25), 1,
      anon_sym_addrspace_LPAREN,
    ACTIONS(41), 1,
      sym_externally_initialized,
    STATE(44), 1,
      sym_thread_local,
    STATE(67), 1,
      sym_addr_space,
    ACTIONS(37), 2,
      anon_sym_unnamed_addr,
      anon_sym_local_unnamed_addr,
    ACTIONS(39), 2,
      anon_sym_global,
      anon_sym_constant,
    ACTIONS(23), 3,
      anon_sym_localdynamic,
      anon_sym_initialexec,
      anon_sym_localexec,
  [1135] = 1,
    ACTIONS(101), 11,
      anon_sym_unnamed_addr,
      anon_sym_local_unnamed_addr,
      anon_sym_global,
      anon_sym_constant,
      anon_sym_dllimport,
      anon_sym_dllexport,
      anon_sym_localdynamic,
      anon_sym_initialexec,
      anon_sym_localexec,
      anon_sym_addrspace_LPAREN,
      sym_externally_initialized,
  [1149] = 4,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    STATE(41), 3,
      sym__expression,
      sym_global_constant,
      aux_sym_source_file_repeat1,
    ACTIONS(105), 4,
      sym_comment,
      sym_function_declaration,
      sym_function_definition,
      sym_named_metadata,
  [1167] = 4,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      sym_identifier,
    STATE(41), 3,
      sym__expression,
      sym_global_constant,
      aux_sym_source_file_repeat1,
    ACTIONS(109), 4,
      sym_comment,
      sym_function_declaration,
      sym_function_definition,
      sym_named_metadata,
  [1185] = 1,
    ACTIONS(115), 9,
      anon_sym_unnamed_addr,
      anon_sym_local_unnamed_addr,
      anon_sym_global,
      anon_sym_constant,
      anon_sym_localdynamic,
      anon_sym_initialexec,
      anon_sym_localexec,
      anon_sym_addrspace_LPAREN,
      sym_externally_initialized,
  [1197] = 5,
    ACTIONS(25), 1,
      anon_sym_addrspace_LPAREN,
    ACTIONS(83), 1,
      sym_externally_initialized,
    STATE(71), 1,
      sym_addr_space,
    ACTIONS(79), 2,
      anon_sym_unnamed_addr,
      anon_sym_local_unnamed_addr,
    ACTIONS(81), 2,
      anon_sym_global,
      anon_sym_constant,
  [1215] = 5,
    ACTIONS(25), 1,
      anon_sym_addrspace_LPAREN,
    ACTIONS(47), 1,
      sym_externally_initialized,
    STATE(72), 1,
      sym_addr_space,
    ACTIONS(43), 2,
      anon_sym_unnamed_addr,
      anon_sym_local_unnamed_addr,
    ACTIONS(45), 2,
      anon_sym_global,
      anon_sym_constant,
  [1233] = 5,
    ACTIONS(25), 1,
      anon_sym_addrspace_LPAREN,
    ACTIONS(121), 1,
      sym_externally_initialized,
    STATE(68), 1,
      sym_addr_space,
    ACTIONS(117), 2,
      anon_sym_unnamed_addr,
      anon_sym_local_unnamed_addr,
    ACTIONS(119), 2,
      anon_sym_global,
      anon_sym_constant,
  [1251] = 5,
    ACTIONS(25), 1,
      anon_sym_addrspace_LPAREN,
    ACTIONS(99), 1,
      sym_externally_initialized,
    STATE(73), 1,
      sym_addr_space,
    ACTIONS(95), 2,
      anon_sym_unnamed_addr,
      anon_sym_local_unnamed_addr,
    ACTIONS(97), 2,
      anon_sym_global,
      anon_sym_constant,
  [1269] = 5,
    ACTIONS(25), 1,
      anon_sym_addrspace_LPAREN,
    ACTIONS(41), 1,
      sym_externally_initialized,
    STATE(67), 1,
      sym_addr_space,
    ACTIONS(37), 2,
      anon_sym_unnamed_addr,
      anon_sym_local_unnamed_addr,
    ACTIONS(39), 2,
      anon_sym_global,
      anon_sym_constant,
  [1287] = 1,
    ACTIONS(65), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_function_declaration,
      sym_function_definition,
      sym_named_metadata,
      sym_identifier,
  [1296] = 1,
    ACTIONS(69), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_function_declaration,
      sym_function_definition,
      sym_named_metadata,
      sym_identifier,
  [1305] = 1,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_function_declaration,
      sym_function_definition,
      sym_named_metadata,
      sym_identifier,
  [1314] = 1,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_function_declaration,
      sym_function_definition,
      sym_named_metadata,
      sym_identifier,
  [1323] = 1,
    ACTIONS(127), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_function_declaration,
      sym_function_definition,
      sym_named_metadata,
      sym_identifier,
  [1332] = 1,
    ACTIONS(129), 6,
      anon_sym_unnamed_addr,
      anon_sym_local_unnamed_addr,
      anon_sym_global,
      anon_sym_constant,
      anon_sym_addrspace_LPAREN,
      sym_externally_initialized,
  [1341] = 1,
    ACTIONS(51), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_function_declaration,
      sym_function_definition,
      sym_named_metadata,
      sym_identifier,
  [1350] = 1,
    ACTIONS(73), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_function_declaration,
      sym_function_definition,
      sym_named_metadata,
      sym_identifier,
  [1359] = 1,
    ACTIONS(75), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_function_declaration,
      sym_function_definition,
      sym_named_metadata,
      sym_identifier,
  [1368] = 1,
    ACTIONS(61), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_function_declaration,
      sym_function_definition,
      sym_named_metadata,
      sym_identifier,
  [1377] = 1,
    ACTIONS(63), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_function_declaration,
      sym_function_definition,
      sym_named_metadata,
      sym_identifier,
  [1386] = 1,
    ACTIONS(67), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_function_declaration,
      sym_function_definition,
      sym_named_metadata,
      sym_identifier,
  [1395] = 1,
    ACTIONS(131), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_function_declaration,
      sym_function_definition,
      sym_named_metadata,
      sym_identifier,
  [1404] = 4,
    ACTIONS(25), 1,
      anon_sym_addrspace_LPAREN,
    ACTIONS(135), 1,
      sym_externally_initialized,
    STATE(70), 1,
      sym_addr_space,
    ACTIONS(133), 2,
      anon_sym_global,
      anon_sym_constant,
  [1418] = 4,
    ACTIONS(25), 1,
      anon_sym_addrspace_LPAREN,
    ACTIONS(83), 1,
      sym_externally_initialized,
    STATE(71), 1,
      sym_addr_space,
    ACTIONS(81), 2,
      anon_sym_global,
      anon_sym_constant,
  [1432] = 4,
    ACTIONS(25), 1,
      anon_sym_addrspace_LPAREN,
    ACTIONS(47), 1,
      sym_externally_initialized,
    STATE(72), 1,
      sym_addr_space,
    ACTIONS(45), 2,
      anon_sym_global,
      anon_sym_constant,
  [1446] = 4,
    ACTIONS(25), 1,
      anon_sym_addrspace_LPAREN,
    ACTIONS(99), 1,
      sym_externally_initialized,
    STATE(73), 1,
      sym_addr_space,
    ACTIONS(97), 2,
      anon_sym_global,
      anon_sym_constant,
  [1460] = 4,
    ACTIONS(25), 1,
      anon_sym_addrspace_LPAREN,
    ACTIONS(41), 1,
      sym_externally_initialized,
    STATE(67), 1,
      sym_addr_space,
    ACTIONS(39), 2,
      anon_sym_global,
      anon_sym_constant,
  [1474] = 4,
    ACTIONS(25), 1,
      anon_sym_addrspace_LPAREN,
    ACTIONS(121), 1,
      sym_externally_initialized,
    STATE(68), 1,
      sym_addr_space,
    ACTIONS(119), 2,
      anon_sym_global,
      anon_sym_constant,
  [1488] = 2,
    ACTIONS(47), 1,
      sym_externally_initialized,
    ACTIONS(45), 2,
      anon_sym_global,
      anon_sym_constant,
  [1496] = 2,
    ACTIONS(135), 1,
      sym_externally_initialized,
    ACTIONS(133), 2,
      anon_sym_global,
      anon_sym_constant,
  [1504] = 2,
    ACTIONS(41), 1,
      sym_externally_initialized,
    ACTIONS(39), 2,
      anon_sym_global,
      anon_sym_constant,
  [1512] = 2,
    ACTIONS(139), 1,
      sym_externally_initialized,
    ACTIONS(137), 2,
      anon_sym_global,
      anon_sym_constant,
  [1520] = 2,
    ACTIONS(99), 1,
      sym_externally_initialized,
    ACTIONS(97), 2,
      anon_sym_global,
      anon_sym_constant,
  [1528] = 2,
    ACTIONS(83), 1,
      sym_externally_initialized,
    ACTIONS(81), 2,
      anon_sym_global,
      anon_sym_constant,
  [1536] = 2,
    ACTIONS(121), 1,
      sym_externally_initialized,
    ACTIONS(119), 2,
      anon_sym_global,
      anon_sym_constant,
  [1544] = 1,
    ACTIONS(141), 3,
      anon_sym_global,
      anon_sym_constant,
      sym_externally_initialized,
  [1550] = 1,
    ACTIONS(137), 2,
      anon_sym_global,
      anon_sym_constant,
  [1555] = 1,
    ACTIONS(133), 2,
      anon_sym_global,
      anon_sym_constant,
  [1560] = 1,
    ACTIONS(97), 2,
      anon_sym_global,
      anon_sym_constant,
  [1565] = 1,
    ACTIONS(119), 2,
      anon_sym_global,
      anon_sym_constant,
  [1570] = 1,
    ACTIONS(81), 2,
      anon_sym_global,
      anon_sym_constant,
  [1575] = 1,
    ACTIONS(143), 2,
      anon_sym_global,
      anon_sym_constant,
  [1580] = 1,
    ACTIONS(45), 2,
      anon_sym_global,
      anon_sym_constant,
  [1585] = 2,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
  [1592] = 1,
    ACTIONS(39), 2,
      anon_sym_global,
      anon_sym_constant,
  [1597] = 1,
    ACTIONS(147), 1,
      anon_sym_EQ,
  [1601] = 1,
    ACTIONS(149), 1,
      sym_string,
  [1605] = 1,
    ACTIONS(151), 1,
      anon_sym_x,
  [1609] = 1,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
  [1613] = 1,
    ACTIONS(155), 1,
      sym_integer,
  [1617] = 1,
    ACTIONS(157), 1,
      sym_integer,
  [1621] = 1,
    ACTIONS(159), 1,
      sym_integer,
  [1625] = 1,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 66,
  [SMALL_STATE(4)] = 101,
  [SMALL_STATE(5)] = 136,
  [SMALL_STATE(6)] = 171,
  [SMALL_STATE(7)] = 206,
  [SMALL_STATE(8)] = 241,
  [SMALL_STATE(9)] = 276,
  [SMALL_STATE(10)] = 311,
  [SMALL_STATE(11)] = 346,
  [SMALL_STATE(12)] = 381,
  [SMALL_STATE(13)] = 416,
  [SMALL_STATE(14)] = 464,
  [SMALL_STATE(15)] = 505,
  [SMALL_STATE(16)] = 546,
  [SMALL_STATE(17)] = 565,
  [SMALL_STATE(18)] = 595,
  [SMALL_STATE(19)] = 625,
  [SMALL_STATE(20)] = 655,
  [SMALL_STATE(21)] = 685,
  [SMALL_STATE(22)] = 715,
  [SMALL_STATE(23)] = 745,
  [SMALL_STATE(24)] = 775,
  [SMALL_STATE(25)] = 805,
  [SMALL_STATE(26)] = 835,
  [SMALL_STATE(27)] = 868,
  [SMALL_STATE(28)] = 885,
  [SMALL_STATE(29)] = 918,
  [SMALL_STATE(30)] = 951,
  [SMALL_STATE(31)] = 967,
  [SMALL_STATE(32)] = 983,
  [SMALL_STATE(33)] = 999,
  [SMALL_STATE(34)] = 1015,
  [SMALL_STATE(35)] = 1031,
  [SMALL_STATE(36)] = 1057,
  [SMALL_STATE(37)] = 1083,
  [SMALL_STATE(38)] = 1109,
  [SMALL_STATE(39)] = 1135,
  [SMALL_STATE(40)] = 1149,
  [SMALL_STATE(41)] = 1167,
  [SMALL_STATE(42)] = 1185,
  [SMALL_STATE(43)] = 1197,
  [SMALL_STATE(44)] = 1215,
  [SMALL_STATE(45)] = 1233,
  [SMALL_STATE(46)] = 1251,
  [SMALL_STATE(47)] = 1269,
  [SMALL_STATE(48)] = 1287,
  [SMALL_STATE(49)] = 1296,
  [SMALL_STATE(50)] = 1305,
  [SMALL_STATE(51)] = 1314,
  [SMALL_STATE(52)] = 1323,
  [SMALL_STATE(53)] = 1332,
  [SMALL_STATE(54)] = 1341,
  [SMALL_STATE(55)] = 1350,
  [SMALL_STATE(56)] = 1359,
  [SMALL_STATE(57)] = 1368,
  [SMALL_STATE(58)] = 1377,
  [SMALL_STATE(59)] = 1386,
  [SMALL_STATE(60)] = 1395,
  [SMALL_STATE(61)] = 1404,
  [SMALL_STATE(62)] = 1418,
  [SMALL_STATE(63)] = 1432,
  [SMALL_STATE(64)] = 1446,
  [SMALL_STATE(65)] = 1460,
  [SMALL_STATE(66)] = 1474,
  [SMALL_STATE(67)] = 1488,
  [SMALL_STATE(68)] = 1496,
  [SMALL_STATE(69)] = 1504,
  [SMALL_STATE(70)] = 1512,
  [SMALL_STATE(71)] = 1520,
  [SMALL_STATE(72)] = 1528,
  [SMALL_STATE(73)] = 1536,
  [SMALL_STATE(74)] = 1544,
  [SMALL_STATE(75)] = 1550,
  [SMALL_STATE(76)] = 1555,
  [SMALL_STATE(77)] = 1560,
  [SMALL_STATE(78)] = 1565,
  [SMALL_STATE(79)] = 1570,
  [SMALL_STATE(80)] = 1575,
  [SMALL_STATE(81)] = 1580,
  [SMALL_STATE(82)] = 1585,
  [SMALL_STATE(83)] = 1592,
  [SMALL_STATE(84)] = 1597,
  [SMALL_STATE(85)] = 1601,
  [SMALL_STATE(86)] = 1605,
  [SMALL_STATE(87)] = 1609,
  [SMALL_STATE(88)] = 1613,
  [SMALL_STATE(89)] = 1617,
  [SMALL_STATE(90)] = 1621,
  [SMALL_STATE(91)] = 1625,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linkage, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_constant, 9),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_constant, 5),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_constant, 8),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_constant, 10),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_constant, 11),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_constant, 6),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_constant, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_constant, 7),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_constant, 12),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preemption_specifier, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_type, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_type, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(84),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dll_storage_class, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initializer_constant, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_array, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thread_local, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_constant, 13),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr_space, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [161] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_LLVM(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
