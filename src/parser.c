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
#define STATE_COUNT 14
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 331
#define ALIAS_COUNT 0
#define TOKEN_COUNT 320
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_void = 1,
  anon_sym_half = 2,
  anon_sym_bfloat = 3,
  anon_sym_float = 4,
  anon_sym_double = 5,
  anon_sym_x86_fp80 = 6,
  anon_sym_fp128 = 7,
  anon_sym_pcc_fp128 = 8,
  anon_sym_label = 9,
  anon_sym_metadata = 10,
  anon_sym_x86_mmx = 11,
  anon_sym_x86_amx = 12,
  aux_sym_type_token1 = 13,
  anon_sym_add = 14,
  anon_sym_addrspacecast = 15,
  anon_sym_alloca = 16,
  anon_sym_and = 17,
  anon_sym_arcp = 18,
  anon_sym_ashr = 19,
  anon_sym_atomicrmw = 20,
  anon_sym_bitcast = 21,
  anon_sym_br = 22,
  anon_sym_catchpad = 23,
  anon_sym_catchswitch = 24,
  anon_sym_catchret = 25,
  anon_sym_call = 26,
  anon_sym_callbr = 27,
  anon_sym_cleanuppad = 28,
  anon_sym_cleanupret = 29,
  anon_sym_cmpxchg = 30,
  anon_sym_eq = 31,
  anon_sym_exact = 32,
  anon_sym_extractelement = 33,
  anon_sym_extractvalue = 34,
  anon_sym_fadd = 35,
  anon_sym_fast = 36,
  anon_sym_fcmp = 37,
  anon_sym_fdiv = 38,
  anon_sym_fence = 39,
  anon_sym_fmul = 40,
  anon_sym_fneg = 41,
  anon_sym_fpext = 42,
  anon_sym_fptosi = 43,
  anon_sym_fptoui = 44,
  anon_sym_fptrunc = 45,
  anon_sym_free = 46,
  anon_sym_freeze = 47,
  anon_sym_frem = 48,
  anon_sym_fsub = 49,
  anon_sym_getelementptr = 50,
  anon_sym_icmp = 51,
  anon_sym_inbounds = 52,
  anon_sym_indirectbr = 53,
  anon_sym_insertelement = 54,
  anon_sym_insertvalue = 55,
  anon_sym_inttoptr = 56,
  anon_sym_invoke = 57,
  anon_sym_landingpad = 58,
  anon_sym_load = 59,
  anon_sym_lshr = 60,
  anon_sym_malloc = 61,
  anon_sym_max = 62,
  anon_sym_min = 63,
  anon_sym_mul = 64,
  anon_sym_nand = 65,
  anon_sym_ne = 66,
  anon_sym_ninf = 67,
  anon_sym_nnan = 68,
  anon_sym_nsw = 69,
  anon_sym_nsz = 70,
  anon_sym_nuw = 71,
  anon_sym_oeq = 72,
  anon_sym_oge = 73,
  anon_sym_ogt = 74,
  anon_sym_ole = 75,
  anon_sym_olt = 76,
  anon_sym_one = 77,
  anon_sym_or = 78,
  anon_sym_ord = 79,
  anon_sym_phi = 80,
  anon_sym_ptrtoint = 81,
  anon_sym_resume = 82,
  anon_sym_ret = 83,
  anon_sym_sdiv = 84,
  anon_sym_select = 85,
  anon_sym_sext = 86,
  anon_sym_sge = 87,
  anon_sym_sgt = 88,
  anon_sym_shl = 89,
  anon_sym_shufflevector = 90,
  anon_sym_sitofp = 91,
  anon_sym_sle = 92,
  anon_sym_slt = 93,
  anon_sym_srem = 94,
  anon_sym_store = 95,
  anon_sym_sub = 96,
  anon_sym_switch = 97,
  anon_sym_trunc = 98,
  anon_sym_udiv = 99,
  anon_sym_ueq = 100,
  anon_sym_uge = 101,
  anon_sym_ugt = 102,
  anon_sym_uitofp = 103,
  anon_sym_ule = 104,
  anon_sym_ult = 105,
  anon_sym_umax = 106,
  anon_sym_umin = 107,
  anon_sym_une = 108,
  anon_sym_uno = 109,
  anon_sym_unreachable = 110,
  anon_sym_unwind = 111,
  anon_sym_urem = 112,
  anon_sym_va_arg = 113,
  anon_sym_xchg = 114,
  anon_sym_xor = 115,
  anon_sym_zext = 116,
  anon_sym_acq_rel = 117,
  anon_sym_acquire = 118,
  anon_sym_addrspace = 119,
  anon_sym_alias = 120,
  anon_sym_align = 121,
  anon_sym_alignstack = 122,
  anon_sym_allocsize = 123,
  anon_sym_alwaysinline = 124,
  anon_sym_appending = 125,
  anon_sym_argmemonly = 126,
  anon_sym_arm_aapcs_vfpcc = 127,
  anon_sym_arm_aapcscc = 128,
  anon_sym_arm_apcscc = 129,
  anon_sym_asm = 130,
  anon_sym_atomic = 131,
  anon_sym_available_externally = 132,
  anon_sym_blockaddress = 133,
  anon_sym_builtin = 134,
  anon_sym_byref = 135,
  anon_sym_byval = 136,
  anon_sym_c = 137,
  anon_sym_caller = 138,
  anon_sym_catch = 139,
  anon_sym_cc = 140,
  anon_sym_ccc = 141,
  anon_sym_cleanup = 142,
  anon_sym_cold = 143,
  anon_sym_coldcc = 144,
  anon_sym_comdat = 145,
  anon_sym_common = 146,
  anon_sym_constant = 147,
  anon_sym_convergent = 148,
  anon_sym_datalayout = 149,
  anon_sym_declare = 150,
  anon_sym_default = 151,
  anon_sym_define = 152,
  anon_sym_deplibs = 153,
  anon_sym_dereferenceable = 154,
  anon_sym_dereferenceable_or_null = 155,
  anon_sym_distinct = 156,
  anon_sym_dllexport = 157,
  anon_sym_dllimport = 158,
  anon_sym_dso_local = 159,
  anon_sym_dso_preemptable = 160,
  anon_sym_except = 161,
  anon_sym_extern_weak = 162,
  anon_sym_external = 163,
  anon_sym_externally_initialized = 164,
  anon_sym_fastcc = 165,
  anon_sym_filter = 166,
  anon_sym_from = 167,
  anon_sym_gc = 168,
  anon_sym_global = 169,
  anon_sym_hhvm_ccc = 170,
  anon_sym_hhvmcc = 171,
  anon_sym_hidden = 172,
  anon_sym_hot = 173,
  anon_sym_immarg = 174,
  anon_sym_inaccessiblemem_or_argmemonly = 175,
  anon_sym_inaccessiblememonly = 176,
  anon_sym_inalloca = 177,
  anon_sym_initialexec = 178,
  anon_sym_inlinehint = 179,
  anon_sym_inreg = 180,
  anon_sym_intel_ocl_bicc = 181,
  anon_sym_inteldialect = 182,
  anon_sym_internal = 183,
  anon_sym_jumptable = 184,
  anon_sym_linkonce = 185,
  anon_sym_linkonce_odr = 186,
  anon_sym_local_unnamed_addr = 187,
  anon_sym_localdynamic = 188,
  anon_sym_localexec = 189,
  anon_sym_minsize = 190,
  anon_sym_module = 191,
  anon_sym_monotonic = 192,
  anon_sym_msp430_intrcc = 193,
  anon_sym_mustprogress = 194,
  anon_sym_musttail = 195,
  anon_sym_naked = 196,
  anon_sym_nest = 197,
  anon_sym_noalias = 198,
  anon_sym_nobuiltin = 199,
  anon_sym_nocallback = 200,
  anon_sym_nocapture = 201,
  anon_sym_nocf_check = 202,
  anon_sym_noduplicate = 203,
  anon_sym_nofree = 204,
  anon_sym_noimplicitfloat = 205,
  anon_sym_noinline = 206,
  anon_sym_nomerge = 207,
  anon_sym_nonlazybind = 208,
  anon_sym_nonnull = 209,
  anon_sym_noprofile = 210,
  anon_sym_norecurse = 211,
  anon_sym_noredzone = 212,
  anon_sym_noreturn = 213,
  anon_sym_nosync = 214,
  anon_sym_noundef = 215,
  anon_sym_nounwind = 216,
  anon_sym_nosanitize_coverage = 217,
  anon_sym_null_pointer_is_valid = 218,
  anon_sym_optforfuzzing = 219,
  anon_sym_optnone = 220,
  anon_sym_optsize = 221,
  anon_sym_personality = 222,
  anon_sym_preallocated = 223,
  anon_sym_private = 224,
  anon_sym_protected = 225,
  anon_sym_ptx_device = 226,
  anon_sym_ptx_kernel = 227,
  anon_sym_readnone = 228,
  anon_sym_readonly = 229,
  anon_sym_release = 230,
  anon_sym_returned = 231,
  anon_sym_returns_twice = 232,
  anon_sym_safestack = 233,
  anon_sym_sanitize_address = 234,
  anon_sym_sanitize_hwaddress = 235,
  anon_sym_sanitize_memory = 236,
  anon_sym_sanitize_memtag = 237,
  anon_sym_sanitize_thread = 238,
  anon_sym_section = 239,
  anon_sym_seq_cst = 240,
  anon_sym_shadowcallstack = 241,
  anon_sym_sideeffect = 242,
  anon_sym_signext = 243,
  anon_sym_source_filename = 244,
  anon_sym_speculatable = 245,
  anon_sym_speculative_load_hardening = 246,
  anon_sym_spir_func = 247,
  anon_sym_spir_kernel = 248,
  anon_sym_sret = 249,
  anon_sym_ssp = 250,
  anon_sym_sspreq = 251,
  anon_sym_sspstrong = 252,
  anon_sym_strictfp = 253,
  anon_sym_swiftcc = 254,
  anon_sym_swifterror = 255,
  anon_sym_swifttailcc = 256,
  anon_sym_swiftself = 257,
  anon_sym_syncscope = 258,
  anon_sym_tail = 259,
  anon_sym_tailcc = 260,
  anon_sym_target = 261,
  anon_sym_thread_local = 262,
  anon_sym_to = 263,
  anon_sym_triple = 264,
  anon_sym_unnamed_addr = 265,
  anon_sym_unordered = 266,
  anon_sym_uselistorder = 267,
  anon_sym_uselistorder_bb = 268,
  anon_sym_uwtable = 269,
  anon_sym_volatile = 270,
  anon_sym_weak = 271,
  anon_sym_weak_odr = 272,
  anon_sym_willreturn = 273,
  anon_sym_win64cc = 274,
  anon_sym_within = 275,
  anon_sym_writeonly = 276,
  anon_sym_x = 277,
  anon_sym_x86_64_sysvcc = 278,
  anon_sym_x86_fastcallcc = 279,
  anon_sym_x86_stdcallcc = 280,
  anon_sym_x86_thiscallcc = 281,
  anon_sym_zeroext = 282,
  sym_number = 283,
  aux_sym_float_token1 = 284,
  aux_sym_float_token2 = 285,
  anon_sym_true = 286,
  anon_sym_false = 287,
  anon_sym_zeroinitializer = 288,
  anon_sym_undef = 289,
  anon_sym_null = 290,
  anon_sym_none = 291,
  anon_sym_poison = 292,
  anon_sym_vscale = 293,
  sym_comment = 294,
  sym_string = 295,
  sym_label = 296,
  aux_sym_identifier_token1 = 297,
  aux_sym_identifier_token2 = 298,
  aux_sym_identifier_token3 = 299,
  aux_sym_identifier_token4 = 300,
  aux_sym_identifier_token5 = 301,
  aux_sym_identifier_token6 = 302,
  aux_sym_identifier_token7 = 303,
  aux_sym_identifier_token8 = 304,
  anon_sym_COMMA = 305,
  anon_sym_BANG = 306,
  anon_sym_EQ = 307,
  anon_sym_STAR = 308,
  anon_sym_COLON = 309,
  anon_sym_TILDE = 310,
  anon_sym_CARET = 311,
  anon_sym_DASH = 312,
  anon_sym_PLUS = 313,
  anon_sym_PIPE = 314,
  anon_sym_LPAREN = 315,
  anon_sym_LBRACK = 316,
  anon_sym_RBRACK = 317,
  anon_sym_LBRACE = 318,
  anon_sym_RBRACE = 319,
  sym_module = 320,
  sym_type = 321,
  sym_statement = 322,
  sym_keyword = 323,
  sym_float = 324,
  sym_boolean = 325,
  sym_constant = 326,
  sym_identifier = 327,
  sym_symbol = 328,
  sym_bracket = 329,
  aux_sym_module_repeat1 = 330,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_void] = "void",
  [anon_sym_half] = "half",
  [anon_sym_bfloat] = "bfloat",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [anon_sym_x86_fp80] = "x86_fp80",
  [anon_sym_fp128] = "fp128",
  [anon_sym_pcc_fp128] = "pcc_fp128",
  [anon_sym_label] = "label",
  [anon_sym_metadata] = "metadata",
  [anon_sym_x86_mmx] = "x86_mmx",
  [anon_sym_x86_amx] = "x86_amx",
  [aux_sym_type_token1] = "type_token1",
  [anon_sym_add] = "add",
  [anon_sym_addrspacecast] = "addrspacecast",
  [anon_sym_alloca] = "alloca",
  [anon_sym_and] = "and",
  [anon_sym_arcp] = "arcp",
  [anon_sym_ashr] = "ashr",
  [anon_sym_atomicrmw] = "atomicrmw",
  [anon_sym_bitcast] = "bitcast",
  [anon_sym_br] = "br",
  [anon_sym_catchpad] = "catchpad",
  [anon_sym_catchswitch] = "catchswitch",
  [anon_sym_catchret] = "catchret",
  [anon_sym_call] = "call",
  [anon_sym_callbr] = "callbr",
  [anon_sym_cleanuppad] = "cleanuppad",
  [anon_sym_cleanupret] = "cleanupret",
  [anon_sym_cmpxchg] = "cmpxchg",
  [anon_sym_eq] = "eq",
  [anon_sym_exact] = "exact",
  [anon_sym_extractelement] = "extractelement",
  [anon_sym_extractvalue] = "extractvalue",
  [anon_sym_fadd] = "fadd",
  [anon_sym_fast] = "fast",
  [anon_sym_fcmp] = "fcmp",
  [anon_sym_fdiv] = "fdiv",
  [anon_sym_fence] = "fence",
  [anon_sym_fmul] = "fmul",
  [anon_sym_fneg] = "fneg",
  [anon_sym_fpext] = "fpext",
  [anon_sym_fptosi] = "fptosi",
  [anon_sym_fptoui] = "fptoui",
  [anon_sym_fptrunc] = "fptrunc",
  [anon_sym_free] = "free",
  [anon_sym_freeze] = "freeze",
  [anon_sym_frem] = "frem",
  [anon_sym_fsub] = "fsub",
  [anon_sym_getelementptr] = "getelementptr",
  [anon_sym_icmp] = "icmp",
  [anon_sym_inbounds] = "inbounds",
  [anon_sym_indirectbr] = "indirectbr",
  [anon_sym_insertelement] = "insertelement",
  [anon_sym_insertvalue] = "insertvalue",
  [anon_sym_inttoptr] = "inttoptr",
  [anon_sym_invoke] = "invoke",
  [anon_sym_landingpad] = "landingpad",
  [anon_sym_load] = "load",
  [anon_sym_lshr] = "lshr",
  [anon_sym_malloc] = "malloc",
  [anon_sym_max] = "max",
  [anon_sym_min] = "min",
  [anon_sym_mul] = "mul",
  [anon_sym_nand] = "nand",
  [anon_sym_ne] = "ne",
  [anon_sym_ninf] = "ninf",
  [anon_sym_nnan] = "nnan",
  [anon_sym_nsw] = "nsw",
  [anon_sym_nsz] = "nsz",
  [anon_sym_nuw] = "nuw",
  [anon_sym_oeq] = "oeq",
  [anon_sym_oge] = "oge",
  [anon_sym_ogt] = "ogt",
  [anon_sym_ole] = "ole",
  [anon_sym_olt] = "olt",
  [anon_sym_one] = "one",
  [anon_sym_or] = "or",
  [anon_sym_ord] = "ord",
  [anon_sym_phi] = "phi",
  [anon_sym_ptrtoint] = "ptrtoint",
  [anon_sym_resume] = "resume",
  [anon_sym_ret] = "ret",
  [anon_sym_sdiv] = "sdiv",
  [anon_sym_select] = "select",
  [anon_sym_sext] = "sext",
  [anon_sym_sge] = "sge",
  [anon_sym_sgt] = "sgt",
  [anon_sym_shl] = "shl",
  [anon_sym_shufflevector] = "shufflevector",
  [anon_sym_sitofp] = "sitofp",
  [anon_sym_sle] = "sle",
  [anon_sym_slt] = "slt",
  [anon_sym_srem] = "srem",
  [anon_sym_store] = "store",
  [anon_sym_sub] = "sub",
  [anon_sym_switch] = "switch",
  [anon_sym_trunc] = "trunc",
  [anon_sym_udiv] = "udiv",
  [anon_sym_ueq] = "ueq",
  [anon_sym_uge] = "uge",
  [anon_sym_ugt] = "ugt",
  [anon_sym_uitofp] = "uitofp",
  [anon_sym_ule] = "ule",
  [anon_sym_ult] = "ult",
  [anon_sym_umax] = "umax",
  [anon_sym_umin] = "umin",
  [anon_sym_une] = "une",
  [anon_sym_uno] = "uno",
  [anon_sym_unreachable] = "unreachable",
  [anon_sym_unwind] = "unwind",
  [anon_sym_urem] = "urem",
  [anon_sym_va_arg] = "va_arg",
  [anon_sym_xchg] = "xchg",
  [anon_sym_xor] = "xor",
  [anon_sym_zext] = "zext",
  [anon_sym_acq_rel] = "acq_rel",
  [anon_sym_acquire] = "acquire",
  [anon_sym_addrspace] = "addrspace",
  [anon_sym_alias] = "alias",
  [anon_sym_align] = "align",
  [anon_sym_alignstack] = "alignstack",
  [anon_sym_allocsize] = "allocsize",
  [anon_sym_alwaysinline] = "alwaysinline",
  [anon_sym_appending] = "appending",
  [anon_sym_argmemonly] = "argmemonly",
  [anon_sym_arm_aapcs_vfpcc] = "arm_aapcs_vfpcc",
  [anon_sym_arm_aapcscc] = "arm_aapcscc",
  [anon_sym_arm_apcscc] = "arm_apcscc",
  [anon_sym_asm] = "asm",
  [anon_sym_atomic] = "atomic",
  [anon_sym_available_externally] = "available_externally",
  [anon_sym_blockaddress] = "blockaddress",
  [anon_sym_builtin] = "builtin",
  [anon_sym_byref] = "byref",
  [anon_sym_byval] = "byval",
  [anon_sym_c] = "c",
  [anon_sym_caller] = "caller",
  [anon_sym_catch] = "catch",
  [anon_sym_cc] = "cc",
  [anon_sym_ccc] = "ccc",
  [anon_sym_cleanup] = "cleanup",
  [anon_sym_cold] = "cold",
  [anon_sym_coldcc] = "coldcc",
  [anon_sym_comdat] = "comdat",
  [anon_sym_common] = "common",
  [anon_sym_constant] = "constant",
  [anon_sym_convergent] = "convergent",
  [anon_sym_datalayout] = "datalayout",
  [anon_sym_declare] = "declare",
  [anon_sym_default] = "default",
  [anon_sym_define] = "define",
  [anon_sym_deplibs] = "deplibs",
  [anon_sym_dereferenceable] = "dereferenceable",
  [anon_sym_dereferenceable_or_null] = "dereferenceable_or_null",
  [anon_sym_distinct] = "distinct",
  [anon_sym_dllexport] = "dllexport",
  [anon_sym_dllimport] = "dllimport",
  [anon_sym_dso_local] = "dso_local",
  [anon_sym_dso_preemptable] = "dso_preemptable",
  [anon_sym_except] = "except",
  [anon_sym_extern_weak] = "extern_weak",
  [anon_sym_external] = "external",
  [anon_sym_externally_initialized] = "externally_initialized",
  [anon_sym_fastcc] = "fastcc",
  [anon_sym_filter] = "filter",
  [anon_sym_from] = "from",
  [anon_sym_gc] = "gc",
  [anon_sym_global] = "global",
  [anon_sym_hhvm_ccc] = "hhvm_ccc",
  [anon_sym_hhvmcc] = "hhvmcc",
  [anon_sym_hidden] = "hidden",
  [anon_sym_hot] = "hot",
  [anon_sym_immarg] = "immarg",
  [anon_sym_inaccessiblemem_or_argmemonly] = "inaccessiblemem_or_argmemonly",
  [anon_sym_inaccessiblememonly] = "inaccessiblememonly",
  [anon_sym_inalloca] = "inalloca",
  [anon_sym_initialexec] = "initialexec",
  [anon_sym_inlinehint] = "inlinehint",
  [anon_sym_inreg] = "inreg",
  [anon_sym_intel_ocl_bicc] = "intel_ocl_bicc",
  [anon_sym_inteldialect] = "inteldialect",
  [anon_sym_internal] = "internal",
  [anon_sym_jumptable] = "jumptable",
  [anon_sym_linkonce] = "linkonce",
  [anon_sym_linkonce_odr] = "linkonce_odr",
  [anon_sym_local_unnamed_addr] = "local_unnamed_addr",
  [anon_sym_localdynamic] = "localdynamic",
  [anon_sym_localexec] = "localexec",
  [anon_sym_minsize] = "minsize",
  [anon_sym_module] = "module",
  [anon_sym_monotonic] = "monotonic",
  [anon_sym_msp430_intrcc] = "msp430_intrcc",
  [anon_sym_mustprogress] = "mustprogress",
  [anon_sym_musttail] = "musttail",
  [anon_sym_naked] = "naked",
  [anon_sym_nest] = "nest",
  [anon_sym_noalias] = "noalias",
  [anon_sym_nobuiltin] = "nobuiltin",
  [anon_sym_nocallback] = "nocallback",
  [anon_sym_nocapture] = "nocapture",
  [anon_sym_nocf_check] = "nocf_check",
  [anon_sym_noduplicate] = "noduplicate",
  [anon_sym_nofree] = "nofree",
  [anon_sym_noimplicitfloat] = "noimplicitfloat",
  [anon_sym_noinline] = "noinline",
  [anon_sym_nomerge] = "nomerge",
  [anon_sym_nonlazybind] = "nonlazybind",
  [anon_sym_nonnull] = "nonnull",
  [anon_sym_noprofile] = "noprofile",
  [anon_sym_norecurse] = "norecurse",
  [anon_sym_noredzone] = "noredzone",
  [anon_sym_noreturn] = "noreturn",
  [anon_sym_nosync] = "nosync",
  [anon_sym_noundef] = "noundef",
  [anon_sym_nounwind] = "nounwind",
  [anon_sym_nosanitize_coverage] = "nosanitize_coverage",
  [anon_sym_null_pointer_is_valid] = "null_pointer_is_valid",
  [anon_sym_optforfuzzing] = "optforfuzzing",
  [anon_sym_optnone] = "optnone",
  [anon_sym_optsize] = "optsize",
  [anon_sym_personality] = "personality",
  [anon_sym_preallocated] = "preallocated",
  [anon_sym_private] = "private",
  [anon_sym_protected] = "protected",
  [anon_sym_ptx_device] = "ptx_device",
  [anon_sym_ptx_kernel] = "ptx_kernel",
  [anon_sym_readnone] = "readnone",
  [anon_sym_readonly] = "readonly",
  [anon_sym_release] = "release",
  [anon_sym_returned] = "returned",
  [anon_sym_returns_twice] = "returns_twice",
  [anon_sym_safestack] = "safestack",
  [anon_sym_sanitize_address] = "sanitize_address",
  [anon_sym_sanitize_hwaddress] = "sanitize_hwaddress",
  [anon_sym_sanitize_memory] = "sanitize_memory",
  [anon_sym_sanitize_memtag] = "sanitize_memtag",
  [anon_sym_sanitize_thread] = "sanitize_thread",
  [anon_sym_section] = "section",
  [anon_sym_seq_cst] = "seq_cst",
  [anon_sym_shadowcallstack] = "shadowcallstack",
  [anon_sym_sideeffect] = "sideeffect",
  [anon_sym_signext] = "signext",
  [anon_sym_source_filename] = "source_filename",
  [anon_sym_speculatable] = "speculatable",
  [anon_sym_speculative_load_hardening] = "speculative_load_hardening",
  [anon_sym_spir_func] = "spir_func",
  [anon_sym_spir_kernel] = "spir_kernel",
  [anon_sym_sret] = "sret",
  [anon_sym_ssp] = "ssp",
  [anon_sym_sspreq] = "sspreq",
  [anon_sym_sspstrong] = "sspstrong",
  [anon_sym_strictfp] = "strictfp",
  [anon_sym_swiftcc] = "swiftcc",
  [anon_sym_swifterror] = "swifterror",
  [anon_sym_swifttailcc] = "swifttailcc",
  [anon_sym_swiftself] = "swiftself",
  [anon_sym_syncscope] = "syncscope",
  [anon_sym_tail] = "tail",
  [anon_sym_tailcc] = "tailcc",
  [anon_sym_target] = "target",
  [anon_sym_thread_local] = "thread_local",
  [anon_sym_to] = "to",
  [anon_sym_triple] = "triple",
  [anon_sym_unnamed_addr] = "unnamed_addr",
  [anon_sym_unordered] = "unordered",
  [anon_sym_uselistorder] = "uselistorder",
  [anon_sym_uselistorder_bb] = "uselistorder_bb",
  [anon_sym_uwtable] = "uwtable",
  [anon_sym_volatile] = "volatile",
  [anon_sym_weak] = "weak",
  [anon_sym_weak_odr] = "weak_odr",
  [anon_sym_willreturn] = "willreturn",
  [anon_sym_win64cc] = "win64cc",
  [anon_sym_within] = "within",
  [anon_sym_writeonly] = "writeonly",
  [anon_sym_x] = "x",
  [anon_sym_x86_64_sysvcc] = "x86_64_sysvcc",
  [anon_sym_x86_fastcallcc] = "x86_fastcallcc",
  [anon_sym_x86_stdcallcc] = "x86_stdcallcc",
  [anon_sym_x86_thiscallcc] = "x86_thiscallcc",
  [anon_sym_zeroext] = "zeroext",
  [sym_number] = "number",
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_float_token2] = "float_token2",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_zeroinitializer] = "zeroinitializer",
  [anon_sym_undef] = "undef",
  [anon_sym_null] = "null",
  [anon_sym_none] = "none",
  [anon_sym_poison] = "poison",
  [anon_sym_vscale] = "vscale",
  [sym_comment] = "comment",
  [sym_string] = "string",
  [sym_label] = "label",
  [aux_sym_identifier_token1] = "identifier_token1",
  [aux_sym_identifier_token2] = "identifier_token2",
  [aux_sym_identifier_token3] = "identifier_token3",
  [aux_sym_identifier_token4] = "identifier_token4",
  [aux_sym_identifier_token5] = "identifier_token5",
  [aux_sym_identifier_token6] = "identifier_token6",
  [aux_sym_identifier_token7] = "identifier_token7",
  [aux_sym_identifier_token8] = "identifier_token8",
  [anon_sym_COMMA] = ",",
  [anon_sym_BANG] = "!",
  [anon_sym_EQ] = "=",
  [anon_sym_STAR] = "*",
  [anon_sym_COLON] = ":",
  [anon_sym_TILDE] = "~",
  [anon_sym_CARET] = "^",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_PIPE] = "|",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_module] = "module",
  [sym_type] = "type",
  [sym_statement] = "statement",
  [sym_keyword] = "keyword",
  [sym_float] = "float",
  [sym_boolean] = "boolean",
  [sym_constant] = "constant",
  [sym_identifier] = "identifier",
  [sym_symbol] = "symbol",
  [sym_bracket] = "bracket",
  [aux_sym_module_repeat1] = "module_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_half] = anon_sym_half,
  [anon_sym_bfloat] = anon_sym_bfloat,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_x86_fp80] = anon_sym_x86_fp80,
  [anon_sym_fp128] = anon_sym_fp128,
  [anon_sym_pcc_fp128] = anon_sym_pcc_fp128,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_metadata] = anon_sym_metadata,
  [anon_sym_x86_mmx] = anon_sym_x86_mmx,
  [anon_sym_x86_amx] = anon_sym_x86_amx,
  [aux_sym_type_token1] = aux_sym_type_token1,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_addrspacecast] = anon_sym_addrspacecast,
  [anon_sym_alloca] = anon_sym_alloca,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_arcp] = anon_sym_arcp,
  [anon_sym_ashr] = anon_sym_ashr,
  [anon_sym_atomicrmw] = anon_sym_atomicrmw,
  [anon_sym_bitcast] = anon_sym_bitcast,
  [anon_sym_br] = anon_sym_br,
  [anon_sym_catchpad] = anon_sym_catchpad,
  [anon_sym_catchswitch] = anon_sym_catchswitch,
  [anon_sym_catchret] = anon_sym_catchret,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_callbr] = anon_sym_callbr,
  [anon_sym_cleanuppad] = anon_sym_cleanuppad,
  [anon_sym_cleanupret] = anon_sym_cleanupret,
  [anon_sym_cmpxchg] = anon_sym_cmpxchg,
  [anon_sym_eq] = anon_sym_eq,
  [anon_sym_exact] = anon_sym_exact,
  [anon_sym_extractelement] = anon_sym_extractelement,
  [anon_sym_extractvalue] = anon_sym_extractvalue,
  [anon_sym_fadd] = anon_sym_fadd,
  [anon_sym_fast] = anon_sym_fast,
  [anon_sym_fcmp] = anon_sym_fcmp,
  [anon_sym_fdiv] = anon_sym_fdiv,
  [anon_sym_fence] = anon_sym_fence,
  [anon_sym_fmul] = anon_sym_fmul,
  [anon_sym_fneg] = anon_sym_fneg,
  [anon_sym_fpext] = anon_sym_fpext,
  [anon_sym_fptosi] = anon_sym_fptosi,
  [anon_sym_fptoui] = anon_sym_fptoui,
  [anon_sym_fptrunc] = anon_sym_fptrunc,
  [anon_sym_free] = anon_sym_free,
  [anon_sym_freeze] = anon_sym_freeze,
  [anon_sym_frem] = anon_sym_frem,
  [anon_sym_fsub] = anon_sym_fsub,
  [anon_sym_getelementptr] = anon_sym_getelementptr,
  [anon_sym_icmp] = anon_sym_icmp,
  [anon_sym_inbounds] = anon_sym_inbounds,
  [anon_sym_indirectbr] = anon_sym_indirectbr,
  [anon_sym_insertelement] = anon_sym_insertelement,
  [anon_sym_insertvalue] = anon_sym_insertvalue,
  [anon_sym_inttoptr] = anon_sym_inttoptr,
  [anon_sym_invoke] = anon_sym_invoke,
  [anon_sym_landingpad] = anon_sym_landingpad,
  [anon_sym_load] = anon_sym_load,
  [anon_sym_lshr] = anon_sym_lshr,
  [anon_sym_malloc] = anon_sym_malloc,
  [anon_sym_max] = anon_sym_max,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_mul] = anon_sym_mul,
  [anon_sym_nand] = anon_sym_nand,
  [anon_sym_ne] = anon_sym_ne,
  [anon_sym_ninf] = anon_sym_ninf,
  [anon_sym_nnan] = anon_sym_nnan,
  [anon_sym_nsw] = anon_sym_nsw,
  [anon_sym_nsz] = anon_sym_nsz,
  [anon_sym_nuw] = anon_sym_nuw,
  [anon_sym_oeq] = anon_sym_oeq,
  [anon_sym_oge] = anon_sym_oge,
  [anon_sym_ogt] = anon_sym_ogt,
  [anon_sym_ole] = anon_sym_ole,
  [anon_sym_olt] = anon_sym_olt,
  [anon_sym_one] = anon_sym_one,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_ord] = anon_sym_ord,
  [anon_sym_phi] = anon_sym_phi,
  [anon_sym_ptrtoint] = anon_sym_ptrtoint,
  [anon_sym_resume] = anon_sym_resume,
  [anon_sym_ret] = anon_sym_ret,
  [anon_sym_sdiv] = anon_sym_sdiv,
  [anon_sym_select] = anon_sym_select,
  [anon_sym_sext] = anon_sym_sext,
  [anon_sym_sge] = anon_sym_sge,
  [anon_sym_sgt] = anon_sym_sgt,
  [anon_sym_shl] = anon_sym_shl,
  [anon_sym_shufflevector] = anon_sym_shufflevector,
  [anon_sym_sitofp] = anon_sym_sitofp,
  [anon_sym_sle] = anon_sym_sle,
  [anon_sym_slt] = anon_sym_slt,
  [anon_sym_srem] = anon_sym_srem,
  [anon_sym_store] = anon_sym_store,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_trunc] = anon_sym_trunc,
  [anon_sym_udiv] = anon_sym_udiv,
  [anon_sym_ueq] = anon_sym_ueq,
  [anon_sym_uge] = anon_sym_uge,
  [anon_sym_ugt] = anon_sym_ugt,
  [anon_sym_uitofp] = anon_sym_uitofp,
  [anon_sym_ule] = anon_sym_ule,
  [anon_sym_ult] = anon_sym_ult,
  [anon_sym_umax] = anon_sym_umax,
  [anon_sym_umin] = anon_sym_umin,
  [anon_sym_une] = anon_sym_une,
  [anon_sym_uno] = anon_sym_uno,
  [anon_sym_unreachable] = anon_sym_unreachable,
  [anon_sym_unwind] = anon_sym_unwind,
  [anon_sym_urem] = anon_sym_urem,
  [anon_sym_va_arg] = anon_sym_va_arg,
  [anon_sym_xchg] = anon_sym_xchg,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_zext] = anon_sym_zext,
  [anon_sym_acq_rel] = anon_sym_acq_rel,
  [anon_sym_acquire] = anon_sym_acquire,
  [anon_sym_addrspace] = anon_sym_addrspace,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_align] = anon_sym_align,
  [anon_sym_alignstack] = anon_sym_alignstack,
  [anon_sym_allocsize] = anon_sym_allocsize,
  [anon_sym_alwaysinline] = anon_sym_alwaysinline,
  [anon_sym_appending] = anon_sym_appending,
  [anon_sym_argmemonly] = anon_sym_argmemonly,
  [anon_sym_arm_aapcs_vfpcc] = anon_sym_arm_aapcs_vfpcc,
  [anon_sym_arm_aapcscc] = anon_sym_arm_aapcscc,
  [anon_sym_arm_apcscc] = anon_sym_arm_apcscc,
  [anon_sym_asm] = anon_sym_asm,
  [anon_sym_atomic] = anon_sym_atomic,
  [anon_sym_available_externally] = anon_sym_available_externally,
  [anon_sym_blockaddress] = anon_sym_blockaddress,
  [anon_sym_builtin] = anon_sym_builtin,
  [anon_sym_byref] = anon_sym_byref,
  [anon_sym_byval] = anon_sym_byval,
  [anon_sym_c] = anon_sym_c,
  [anon_sym_caller] = anon_sym_caller,
  [anon_sym_catch] = anon_sym_catch,
  [anon_sym_cc] = anon_sym_cc,
  [anon_sym_ccc] = anon_sym_ccc,
  [anon_sym_cleanup] = anon_sym_cleanup,
  [anon_sym_cold] = anon_sym_cold,
  [anon_sym_coldcc] = anon_sym_coldcc,
  [anon_sym_comdat] = anon_sym_comdat,
  [anon_sym_common] = anon_sym_common,
  [anon_sym_constant] = anon_sym_constant,
  [anon_sym_convergent] = anon_sym_convergent,
  [anon_sym_datalayout] = anon_sym_datalayout,
  [anon_sym_declare] = anon_sym_declare,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_deplibs] = anon_sym_deplibs,
  [anon_sym_dereferenceable] = anon_sym_dereferenceable,
  [anon_sym_dereferenceable_or_null] = anon_sym_dereferenceable_or_null,
  [anon_sym_distinct] = anon_sym_distinct,
  [anon_sym_dllexport] = anon_sym_dllexport,
  [anon_sym_dllimport] = anon_sym_dllimport,
  [anon_sym_dso_local] = anon_sym_dso_local,
  [anon_sym_dso_preemptable] = anon_sym_dso_preemptable,
  [anon_sym_except] = anon_sym_except,
  [anon_sym_extern_weak] = anon_sym_extern_weak,
  [anon_sym_external] = anon_sym_external,
  [anon_sym_externally_initialized] = anon_sym_externally_initialized,
  [anon_sym_fastcc] = anon_sym_fastcc,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_gc] = anon_sym_gc,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_hhvm_ccc] = anon_sym_hhvm_ccc,
  [anon_sym_hhvmcc] = anon_sym_hhvmcc,
  [anon_sym_hidden] = anon_sym_hidden,
  [anon_sym_hot] = anon_sym_hot,
  [anon_sym_immarg] = anon_sym_immarg,
  [anon_sym_inaccessiblemem_or_argmemonly] = anon_sym_inaccessiblemem_or_argmemonly,
  [anon_sym_inaccessiblememonly] = anon_sym_inaccessiblememonly,
  [anon_sym_inalloca] = anon_sym_inalloca,
  [anon_sym_initialexec] = anon_sym_initialexec,
  [anon_sym_inlinehint] = anon_sym_inlinehint,
  [anon_sym_inreg] = anon_sym_inreg,
  [anon_sym_intel_ocl_bicc] = anon_sym_intel_ocl_bicc,
  [anon_sym_inteldialect] = anon_sym_inteldialect,
  [anon_sym_internal] = anon_sym_internal,
  [anon_sym_jumptable] = anon_sym_jumptable,
  [anon_sym_linkonce] = anon_sym_linkonce,
  [anon_sym_linkonce_odr] = anon_sym_linkonce_odr,
  [anon_sym_local_unnamed_addr] = anon_sym_local_unnamed_addr,
  [anon_sym_localdynamic] = anon_sym_localdynamic,
  [anon_sym_localexec] = anon_sym_localexec,
  [anon_sym_minsize] = anon_sym_minsize,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_monotonic] = anon_sym_monotonic,
  [anon_sym_msp430_intrcc] = anon_sym_msp430_intrcc,
  [anon_sym_mustprogress] = anon_sym_mustprogress,
  [anon_sym_musttail] = anon_sym_musttail,
  [anon_sym_naked] = anon_sym_naked,
  [anon_sym_nest] = anon_sym_nest,
  [anon_sym_noalias] = anon_sym_noalias,
  [anon_sym_nobuiltin] = anon_sym_nobuiltin,
  [anon_sym_nocallback] = anon_sym_nocallback,
  [anon_sym_nocapture] = anon_sym_nocapture,
  [anon_sym_nocf_check] = anon_sym_nocf_check,
  [anon_sym_noduplicate] = anon_sym_noduplicate,
  [anon_sym_nofree] = anon_sym_nofree,
  [anon_sym_noimplicitfloat] = anon_sym_noimplicitfloat,
  [anon_sym_noinline] = anon_sym_noinline,
  [anon_sym_nomerge] = anon_sym_nomerge,
  [anon_sym_nonlazybind] = anon_sym_nonlazybind,
  [anon_sym_nonnull] = anon_sym_nonnull,
  [anon_sym_noprofile] = anon_sym_noprofile,
  [anon_sym_norecurse] = anon_sym_norecurse,
  [anon_sym_noredzone] = anon_sym_noredzone,
  [anon_sym_noreturn] = anon_sym_noreturn,
  [anon_sym_nosync] = anon_sym_nosync,
  [anon_sym_noundef] = anon_sym_noundef,
  [anon_sym_nounwind] = anon_sym_nounwind,
  [anon_sym_nosanitize_coverage] = anon_sym_nosanitize_coverage,
  [anon_sym_null_pointer_is_valid] = anon_sym_null_pointer_is_valid,
  [anon_sym_optforfuzzing] = anon_sym_optforfuzzing,
  [anon_sym_optnone] = anon_sym_optnone,
  [anon_sym_optsize] = anon_sym_optsize,
  [anon_sym_personality] = anon_sym_personality,
  [anon_sym_preallocated] = anon_sym_preallocated,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_protected] = anon_sym_protected,
  [anon_sym_ptx_device] = anon_sym_ptx_device,
  [anon_sym_ptx_kernel] = anon_sym_ptx_kernel,
  [anon_sym_readnone] = anon_sym_readnone,
  [anon_sym_readonly] = anon_sym_readonly,
  [anon_sym_release] = anon_sym_release,
  [anon_sym_returned] = anon_sym_returned,
  [anon_sym_returns_twice] = anon_sym_returns_twice,
  [anon_sym_safestack] = anon_sym_safestack,
  [anon_sym_sanitize_address] = anon_sym_sanitize_address,
  [anon_sym_sanitize_hwaddress] = anon_sym_sanitize_hwaddress,
  [anon_sym_sanitize_memory] = anon_sym_sanitize_memory,
  [anon_sym_sanitize_memtag] = anon_sym_sanitize_memtag,
  [anon_sym_sanitize_thread] = anon_sym_sanitize_thread,
  [anon_sym_section] = anon_sym_section,
  [anon_sym_seq_cst] = anon_sym_seq_cst,
  [anon_sym_shadowcallstack] = anon_sym_shadowcallstack,
  [anon_sym_sideeffect] = anon_sym_sideeffect,
  [anon_sym_signext] = anon_sym_signext,
  [anon_sym_source_filename] = anon_sym_source_filename,
  [anon_sym_speculatable] = anon_sym_speculatable,
  [anon_sym_speculative_load_hardening] = anon_sym_speculative_load_hardening,
  [anon_sym_spir_func] = anon_sym_spir_func,
  [anon_sym_spir_kernel] = anon_sym_spir_kernel,
  [anon_sym_sret] = anon_sym_sret,
  [anon_sym_ssp] = anon_sym_ssp,
  [anon_sym_sspreq] = anon_sym_sspreq,
  [anon_sym_sspstrong] = anon_sym_sspstrong,
  [anon_sym_strictfp] = anon_sym_strictfp,
  [anon_sym_swiftcc] = anon_sym_swiftcc,
  [anon_sym_swifterror] = anon_sym_swifterror,
  [anon_sym_swifttailcc] = anon_sym_swifttailcc,
  [anon_sym_swiftself] = anon_sym_swiftself,
  [anon_sym_syncscope] = anon_sym_syncscope,
  [anon_sym_tail] = anon_sym_tail,
  [anon_sym_tailcc] = anon_sym_tailcc,
  [anon_sym_target] = anon_sym_target,
  [anon_sym_thread_local] = anon_sym_thread_local,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_triple] = anon_sym_triple,
  [anon_sym_unnamed_addr] = anon_sym_unnamed_addr,
  [anon_sym_unordered] = anon_sym_unordered,
  [anon_sym_uselistorder] = anon_sym_uselistorder,
  [anon_sym_uselistorder_bb] = anon_sym_uselistorder_bb,
  [anon_sym_uwtable] = anon_sym_uwtable,
  [anon_sym_volatile] = anon_sym_volatile,
  [anon_sym_weak] = anon_sym_weak,
  [anon_sym_weak_odr] = anon_sym_weak_odr,
  [anon_sym_willreturn] = anon_sym_willreturn,
  [anon_sym_win64cc] = anon_sym_win64cc,
  [anon_sym_within] = anon_sym_within,
  [anon_sym_writeonly] = anon_sym_writeonly,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_x86_64_sysvcc] = anon_sym_x86_64_sysvcc,
  [anon_sym_x86_fastcallcc] = anon_sym_x86_fastcallcc,
  [anon_sym_x86_stdcallcc] = anon_sym_x86_stdcallcc,
  [anon_sym_x86_thiscallcc] = anon_sym_x86_thiscallcc,
  [anon_sym_zeroext] = anon_sym_zeroext,
  [sym_number] = sym_number,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_float_token2] = aux_sym_float_token2,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_zeroinitializer] = anon_sym_zeroinitializer,
  [anon_sym_undef] = anon_sym_undef,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_none] = anon_sym_none,
  [anon_sym_poison] = anon_sym_poison,
  [anon_sym_vscale] = anon_sym_vscale,
  [sym_comment] = sym_comment,
  [sym_string] = sym_string,
  [sym_label] = sym_label,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [aux_sym_identifier_token2] = aux_sym_identifier_token2,
  [aux_sym_identifier_token3] = aux_sym_identifier_token3,
  [aux_sym_identifier_token4] = aux_sym_identifier_token4,
  [aux_sym_identifier_token5] = aux_sym_identifier_token5,
  [aux_sym_identifier_token6] = aux_sym_identifier_token6,
  [aux_sym_identifier_token7] = aux_sym_identifier_token7,
  [aux_sym_identifier_token8] = aux_sym_identifier_token8,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_module] = sym_module,
  [sym_type] = sym_type,
  [sym_statement] = sym_statement,
  [sym_keyword] = sym_keyword,
  [sym_float] = sym_float,
  [sym_boolean] = sym_boolean,
  [sym_constant] = sym_constant,
  [sym_identifier] = sym_identifier,
  [sym_symbol] = sym_symbol,
  [sym_bracket] = sym_bracket,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_void] = {
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
  [anon_sym_x86_fp80] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fp128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pcc_fp128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_metadata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x86_mmx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x86_amx] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addrspacecast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alloca] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ashr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_atomicrmw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bitcast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_br] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catchpad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catchswitch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catchret] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_callbr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cleanuppad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cleanupret] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmpxchg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exact] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extractelement] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extractvalue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fadd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fcmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fdiv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fence] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fmul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fneg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fpext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fptosi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fptoui] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fptrunc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_free] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_freeze] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_frem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fsub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_getelementptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_icmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inbounds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_indirectbr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_insertelement] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_insertvalue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inttoptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invoke] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_landingpad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_load] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lshr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_malloc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ninf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nnan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nsw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nsz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nuw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oeq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ogt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ole] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_olt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_one] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ord] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_phi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ptrtoint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resume] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ret] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sdiv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_select] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sgt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shufflevector] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sitofp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_slt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_srem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_store] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trunc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_udiv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ueq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ugt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uitofp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ult] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_umax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_umin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_une] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uno] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unreachable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unwind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_urem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_va_arg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xchg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_acq_rel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_acquire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addrspace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_align] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alignstack] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allocsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alwaysinline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_appending] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_argmemonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arm_aapcs_vfpcc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arm_aapcscc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arm_apcscc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_atomic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_available_externally] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blockaddress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_builtin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byval] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_caller] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ccc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cleanup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cold] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coldcc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comdat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_common] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_convergent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_datalayout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deplibs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dereferenceable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dereferenceable_or_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_distinct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dllexport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dllimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dso_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dso_preemptable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_except] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern_weak] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_external] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_externally_initialized] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fastcc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hhvm_ccc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hhvmcc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hidden] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_immarg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inaccessiblemem_or_argmemonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inaccessiblememonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inalloca] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_initialexec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inlinehint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inreg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_intel_ocl_bicc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inteldialect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_internal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jumptable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_linkonce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_linkonce_odr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local_unnamed_addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_localdynamic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_localexec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_monotonic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_msp430_intrcc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mustprogress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_musttail] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_naked] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noalias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nobuiltin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nocallback] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nocapture] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nocf_check] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noduplicate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nofree] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noimplicitfloat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noinline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nomerge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nonlazybind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nonnull] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noprofile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_norecurse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noredzone] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noreturn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nosync] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noundef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nounwind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nosanitize_coverage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null_pointer_is_valid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optforfuzzing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optnone] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_personality] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_preallocated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ptx_device] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ptx_kernel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readnone] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_release] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_returned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_returns_twice] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_safestack] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sanitize_address] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sanitize_hwaddress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sanitize_memory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sanitize_memtag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sanitize_thread] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_section] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seq_cst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shadowcallstack] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sideeffect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_signext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source_filename] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_speculatable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_speculative_load_hardening] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_spir_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_spir_kernel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sret] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ssp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sspreq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sspstrong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strictfp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swiftcc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swifterror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swifttailcc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swiftself] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_syncscope] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tail] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tailcc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_target] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_thread_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_triple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unnamed_addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unordered] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uselistorder] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uselistorder_bb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uwtable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_volatile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weak] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weak_odr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_willreturn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_win64cc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_within] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_writeonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x86_64_sysvcc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x86_fastcallcc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x86_stdcallcc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x86_thiscallcc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zeroext] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zeroinitializer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_undef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_none] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_poison] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vscale] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token8] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_module_repeat1] = {
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
      if (eof) ADVANCE(1276);
      if (lookahead == '!') ADVANCE(1584);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(1593);
      if (lookahead == '*') ADVANCE(1586);
      if (lookahead == '+') ADVANCE(1591);
      if (lookahead == ',') ADVANCE(1583);
      if (lookahead == '-') ADVANCE(1590);
      if (lookahead == '0') ADVANCE(1559);
      if (lookahead == ':') ADVANCE(1587);
      if (lookahead == ';') ADVANCE(1572);
      if (lookahead == '=') ADVANCE(1585);
      if (lookahead == 'D') ADVANCE(28);
      if (lookahead == '[') ADVANCE(1594);
      if (lookahead == ']') ADVANCE(1595);
      if (lookahead == '^') ADVANCE(1589);
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == 'b') ADVANCE(537);
      if (lookahead == 'c') ADVANCE(1413);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(977);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 'g') ADVANCE(212);
      if (lookahead == 'h') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(291);
      if (lookahead == 'j') ADVANCE(1196);
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == 'm') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(431);
      if (lookahead == 'p') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(369);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == 'u') ADVANCE(355);
      if (lookahead == 'v') ADVANCE(92);
      if (lookahead == 'w') ADVANCE(433);
      if (lookahead == 'x') ADVANCE(1553);
      if (lookahead == 'z') ADVANCE(432);
      if (lookahead == '{') ADVANCE(1596);
      if (lookahead == '|') ADVANCE(1592);
      if (lookahead == '}') ADVANCE(1597);
      if (lookahead == '~') ADVANCE(1588);
      if (lookahead == '%' ||
          lookahead == '@') ADVANCE(1273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('k' <= lookahead && lookahead <= 'y')) ADVANCE(1269);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(1573);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '+') ADVANCE(1274);
      if (lookahead == '-') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(1282);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(72);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(7);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 't') ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(16);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(17);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 9:
      if (lookahead == '3') ADVANCE(4);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 10:
      if (lookahead == '4') ADVANCE(9);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(57);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 12:
      if (lookahead == '4') ADVANCE(268);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 13:
      if (lookahead == '6') ADVANCE(12);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 14:
      if (lookahead == '6') ADVANCE(11);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(794);
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 'm') ADVANCE(797);
      if (lookahead == 's') ADVANCE(1140);
      if (lookahead == 't') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 15:
      if (lookahead == '6') ADVANCE(43);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 16:
      if (lookahead == '8') ADVANCE(1283);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 17:
      if (lookahead == '8') ADVANCE(1284);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 18:
      if (lookahead == '8') ADVANCE(3);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '?') ADVANCE(1562);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'A') ADVANCE(35);
      if (lookahead == 'L') ADVANCE(21);
      if (lookahead == 'O') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(22);
      if (lookahead == 'V') ADVANCE(29);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'A') ADVANCE(32);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'A') ADVANCE(26);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'A') ADVANCE(31);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'E') ADVANCE(46);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'F') ADVANCE(712);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'G') ADVANCE(47);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'G') ADVANCE(49);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'I') ADVANCE(25);
      if (lookahead == 'W') ADVANCE(40);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'I') ADVANCE(34);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'I') ADVANCE(37);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'L') ADVANCE(30);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'N') ADVANCE(27);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'P') ADVANCE(45);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'R') ADVANCE(36);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'T') ADVANCE(24);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'T') ADVANCE(38);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'T') ADVANCE(39);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'U') ADVANCE(23);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'Y') ADVANCE(50);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(758);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(349);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(1262);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(1265);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(1267);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(179);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(1263);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(1268);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(1222);
      if (lookahead == 'a') ADVANCE(697);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(546);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(1215);
      if (lookahead == 'c') ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(590);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(298);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(1079);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(297);
      if (lookahead == 'c') ADVANCE(219);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(249);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(612);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(876);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(261);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(1157);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(1217);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(199);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(115);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(1189);
      if (lookahead == 'd') ADVANCE(1248);
      if (lookahead == 'e') ADVANCE(1234);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(1037);
      if (lookahead == 'u') ADVANCE(657);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(137);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(915);
      if (lookahead == 'd') ADVANCE(669);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(920);
      if (lookahead == 'o') ADVANCE(856);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(655);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(751);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(556);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(150);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(506);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(180);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(783);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(334);
      if (lookahead == 'c') ADVANCE(793);
      if (lookahead == 'd') ADVANCE(601);
      if (lookahead == 'e') ADVANCE(834);
      if (lookahead == 'i') ADVANCE(750);
      if (lookahead == 'l') ADVANCE(900);
      if (lookahead == 'm') ADVANCE(1185);
      if (lookahead == 'n') ADVANCE(370);
      if (lookahead == 'p') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(371);
      if (lookahead == 's') ADVANCE(1182);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(816);
      if (lookahead == 'o') ADVANCE(104);
      if (lookahead == 's') ADVANCE(586);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(749);
      if (lookahead == 'e') ADVANCE(1130);
      if (lookahead == 'i') ADVANCE(817);
      if (lookahead == 'o') ADVANCE(351);
      if (lookahead == 's') ADVANCE(949);
      if (lookahead == 'u') ADVANCE(685);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(681);
      if (lookahead == 'e') ADVANCE(1342);
      if (lookahead == 'i') ADVANCE(833);
      if (lookahead == 'n') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == 's') ADVANCE(1219);
      if (lookahead == 'u') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'd') ADVANCE(602);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead == 'g') ADVANCE(375);
      if (lookahead == 'h') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(341);
      if (lookahead == 'l') ADVANCE(376);
      if (lookahead == 'o') ADVANCE(1184);
      if (lookahead == 'p') ADVANCE(442);
      if (lookahead == 'r') ADVANCE(377);
      if (lookahead == 's') ADVANCE(950);
      if (lookahead == 't') ADVANCE(928);
      if (lookahead == 'u') ADVANCE(191);
      if (lookahead == 'w') ADVANCE(597);
      if (lookahead == 'y') ADVANCE(835);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(606);
      if (lookahead == 'h') ADVANCE(1013);
      if (lookahead == 'o') ADVANCE(1539);
      if (lookahead == 'r') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'b') ADVANCE(901);
      if (lookahead == 'd') ADVANCE(647);
      if (lookahead == 'i') ADVANCE(1137);
      if (lookahead == 'l') ADVANCE(638);
      if (lookahead == 'r') ADVANCE(436);
      if (lookahead == 's') ADVANCE(450);
      if (lookahead == 't') ADVANCE(382);
      if (lookahead == 'v') ADVANCE(899);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1246);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1292);
      if (lookahead == 's') ADVANCE(641);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1453);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1286);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(607);
      if (lookahead == 's') ADVANCE(300);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1158);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == 'i') ADVANCE(1061);
      if (lookahead == 'l') ADVANCE(705);
      if (lookahead == 'o') ADVANCE(1181);
      if (lookahead == 's') ADVANCE(894);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(673);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1249);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(722);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1251);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1226);
      if (lookahead == 'i') ADVANCE(820);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(684);
      if (lookahead == 'h') ADVANCE(1210);
      if (lookahead == 'i') ADVANCE(335);
      if (lookahead == 'o') ADVANCE(1090);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1052);
      if (lookahead == 'g') ADVANCE(821);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(818);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == 'c') ADVANCE(447);
      if (lookahead == 't') ADVANCE(446);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(316);
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 105:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(678);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 106:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(318);
      if (lookahead == 'l') ADVANCE(462);
      if (lookahead == 's') ADVANCE(1194);
      if (lookahead == 't') ADVANCE(1359);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 107:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1054);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 108:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1000);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 109:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(338);
      if (lookahead == 'l') ADVANCE(1365);
      if (lookahead == 'u') ADVANCE(544);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 110:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1087);
      if (lookahead == 'p') ADVANCE(18);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 111:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(871);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 112:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 113:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(886);
      if (lookahead == 'y') ADVANCE(843);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 114:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(342);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 115:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1001);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 116:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 117:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 118:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(693);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 119:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1098);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 120:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(778);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 121:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(963);
      if (lookahead == 'p') ADVANCE(294);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 122:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(694);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 123:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1160);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 124:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1101);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 125:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1102);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 126:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(322);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 127:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(698);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 128:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(855);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 129:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 130:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(327);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 131:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 132:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(700);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 133:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(717);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 134:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(331);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 135:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(343);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 136:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(703);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 137:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1009);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 138:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 139:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1127);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 140:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(636);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 141:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1077);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 142:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(339);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 143:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(247);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 144:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(721);
      if (lookahead == 'b') ADVANCE(1206);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 'd') ADVANCE(1186);
      if (lookahead == 'f') ADVANCE(1031);
      if (lookahead == 'i') ADVANCE(808);
      if (lookahead == 'm') ADVANCE(452);
      if (lookahead == 'n') ADVANCE(383);
      if (lookahead == 'p') ADVANCE(1007);
      if (lookahead == 'r') ADVANCE(384);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 'u') ADVANCE(819);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 145:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(730);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 146:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1048);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 147:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(754);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 148:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1074);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 149:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1197);
      if (lookahead == 'i') ADVANCE(854);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 150:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 151:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(801);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 152:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 153:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(773);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 154:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(616);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 155:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(577);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 156:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 157:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(725);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 158:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(308);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 159:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(732);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 160:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 161:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1144);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 162:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1150);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 163:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(802);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 164:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(287);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 165:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(737);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 166:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1076);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 167:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(256);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 168:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1152);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 169:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(755);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 170:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1024);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 171:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(765);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 172:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(740);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 173:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1154);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 174:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(767);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 175:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(728);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 176:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(780);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 177:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 178:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(805);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 179:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == 'h') ADVANCE(1225);
      if (lookahead == 'm') ADVANCE(451);
      if (lookahead == 't') ADVANCE(593);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 180:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 181:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 182:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(366);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 183:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 184:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 185:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(1213);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 186:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 187:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 188:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(777);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 189:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(779);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 190:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(814);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 191:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'b') ADVANCE(1372);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 192:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'b') ADVANCE(1325);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 193:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'b') ADVANCE(1544);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 194:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'b') ADVANCE(1053);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 195:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'b') ADVANCE(193);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 196:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'b') ADVANCE(731);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 197:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'b') ADVANCE(990);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 198:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'b') ADVANCE(455);
      if (lookahead == 'n') ADVANCE(353);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 199:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'b') ADVANCE(660);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 200:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'b') ADVANCE(122);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 201:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 202:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'b') ADVANCE(742);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 203:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'b') ADVANCE(743);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 204:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'b') ADVANCE(745);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 205:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'b') ADVANCE(756);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 206:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'b') ADVANCE(746);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 207:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'b') ADVANCE(747);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 208:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'b') ADVANCE(748);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 209:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'b') ADVANCE(644);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 210:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'b') ADVANCE(156);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 211:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(978);
      if (lookahead == 'd') ADVANCE(312);
      if (lookahead == 'l') ADVANCE(595);
      if (lookahead == 'n') ADVANCE(313);
      if (lookahead == 'p') ADVANCE(959);
      if (lookahead == 'r') ADVANCE(245);
      if (lookahead == 's') ADVANCE(585);
      if (lookahead == 't') ADVANCE(897);
      if (lookahead == 'v') ADVANCE(140);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 212:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1444);
      if (lookahead == 'e') ADVANCE(1134);
      if (lookahead == 'l') ADVANCE(898);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 213:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead == 'e') ADVANCE(999);
      if (lookahead == 'h') ADVANCE(596);
      if (lookahead == 'o') ADVANCE(665);
      if (lookahead == 'r') ADVANCE(508);
      if (lookahead == 't') ADVANCE(1030);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 214:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 215:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1374);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 216:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1407);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 217:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1420);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 218:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1441);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 219:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1447);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 220:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1337);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 221:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1490);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 222:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1536);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 223:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 224:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1530);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 225:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1550);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 226:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1446);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 227:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1465);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 228:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1468);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 229:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1523);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 230:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1405);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 231:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1404);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 232:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1454);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 233:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1532);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 234:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1464);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 235:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1469);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 236:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1554);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 237:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1556);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 238:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1457);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 239:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1555);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 240:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1557);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 241:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1403);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 242:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(682);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 243:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 244:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(581);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 245:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(951);
      if (lookahead == 'g') ADVANCE(803);
      if (lookahead == 'm') ADVANCE(56);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 246:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(582);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 247:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(674);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 248:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1071);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 249:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(589);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 250:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(675);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 251:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(594);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 252:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(676);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 253:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(583);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 254:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(677);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 255:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1193);
      if (lookahead == 'd') ADVANCE(1261);
      if (lookahead == 't') ADVANCE(1198);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 256:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(679);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 257:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 258:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1097);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 259:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1060);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 260:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(921);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 261:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(932);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 262:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1105);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 263:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 264:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1165);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 265:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(387);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 266:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(629);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 267:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(224);
      if (lookahead == 'e') ADVANCE(1041);
      if (lookahead == 's') ADVANCE(470);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 268:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(225);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 269:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(226);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 270:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(723);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 271:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(230);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 272:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1114);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 273:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1129);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 274:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 275:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(445);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 276:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(235);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 277:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(236);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 278:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(237);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 279:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(238);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 280:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(239);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 281:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(240);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 282:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 283:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 284:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1122);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 285:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 286:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(407);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 287:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(411);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 288:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 289:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(532);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 290:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(426);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 291:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(795);
      if (lookahead == 'm') ADVANCE(796);
      if (lookahead == 'n') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1289);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 292:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 293:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(720);
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead == 'p') ADVANCE(718);
      if (lookahead == 'r') ADVANCE(438);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 294:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1085);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 295:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(275);
      if (lookahead == 'l') ADVANCE(761);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 296:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1139);
      if (lookahead == 'l') ADVANCE(495);
      if (lookahead == 'q') ADVANCE(55);
      if (lookahead == 'x') ADVANCE(1095);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 297:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(269);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 298:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1075);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 299:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1202);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 300:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 301:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1168);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 302:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1151);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 303:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 304:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 305:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(153);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 306:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(136);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 307:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 308:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1171);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 309:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(173);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 310:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(188);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 311:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(189);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 312:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1290);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 313:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1293);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 314:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1419);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 315:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1311);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 316:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1335);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 317:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1341);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 318:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(887);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 319:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1277);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 320:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1472);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 321:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1387);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 322:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1299);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 323:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1492);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 324:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1507);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 325:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1501);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 326:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1542);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 327:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1304);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 328:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1334);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 329:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1484);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 330:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1499);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 331:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1514);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 332:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1494);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 333:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1440);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 334:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'l') ADVANCE(1072);
      if (lookahead == 's') ADVANCE(1092);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 335:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(352);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 336:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1055);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 337:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 338:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(893);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 339:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(361);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 340:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(989);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 341:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(475);
      if (lookahead == 'g') ADVANCE(851);
      if (lookahead == 't') ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 342:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(161);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 343:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 344:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(444);
      if (lookahead == 'e') ADVANCE(1384);
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(1385);
      if (lookahead == 'r') ADVANCE(464);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 345:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(992);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 346:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(993);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 347:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(998);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 348:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(449);
      if (lookahead == 'w') ADVANCE(639);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 349:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(439);
      if (lookahead == 'k') ADVANCE(463);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 350:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(474);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 351:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1199);
      if (lookahead == 'n') ADVANCE(930);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 352:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(456);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 353:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(611);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 354:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(76);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 355:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(603);
      if (lookahead == 'e') ADVANCE(980);
      if (lookahead == 'g') ADVANCE(378);
      if (lookahead == 'i') ADVANCE(1172);
      if (lookahead == 'l') ADVANCE(379);
      if (lookahead == 'm') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(344);
      if (lookahead == 'r') ADVANCE(440);
      if (lookahead == 's') ADVANCE(503);
      if (lookahead == 'w') ADVANCE(1133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 356:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(346);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 357:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'm') ADVANCE(906);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 358:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(347);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 359:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(485);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 360:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(618);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 361:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1028);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 362:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1040);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 363:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1042);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 364:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(362);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 365:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(522);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 366:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(363);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 367:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(305);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 368:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 369:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 370:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(562);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 371:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 372:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1349);
      if (lookahead == 't') ADVANCE(1350);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 373:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1351);
      if (lookahead == 't') ADVANCE(1352);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 374:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1353);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 375:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1363);
      if (lookahead == 't') ADVANCE(1364);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 376:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1368);
      if (lookahead == 't') ADVANCE(1369);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 377:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(788);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 378:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1377);
      if (lookahead == 't') ADVANCE(1378);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 379:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1380);
      if (lookahead == 't') ADVANCE(1381);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 380:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 381:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1322);
      if (lookahead == 'm') ADVANCE(1324);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 382:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(691);
      if (lookahead == 't') ADVANCE(923);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 383:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1569);
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(1188);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 384:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 385:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1564);
      if (lookahead == 'n') ADVANCE(215);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 386:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1565);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 387:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1315);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 388:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1371);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 389:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1428);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 390:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1281);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 391:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1323);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 392:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1333);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 393:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1467);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 394:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1480);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 395:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1358);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 396:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1540);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 397:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1571);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 398:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1394);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 399:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1426);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 400:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1466);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 401:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1483);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 402:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1496);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 403:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1497);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 404:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1500);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 405:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1506);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 406:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1545);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 407:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1461);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 408:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1482);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 409:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1504);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 410:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1546);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 411:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1395);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 412:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1399);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 413:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1460);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 414:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1477);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 415:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1486);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 416:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1487);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 417:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1488);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 418:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1534);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 419:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1502);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 420:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1331);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 421:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1479);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 422:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1386);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 423:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1400);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 424:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1310);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 425:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1521);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 426:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1508);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 427:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1430);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 428:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1436);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 429:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1520);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 430:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1493);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 431:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(979);
      if (lookahead == 'g') ADVANCE(372);
      if (lookahead == 'l') ADVANCE(373);
      if (lookahead == 'n') ADVANCE(374);
      if (lookahead == 'p') ADVANCE(1091);
      if (lookahead == 'r') ADVANCE(1354);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 432:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1004);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 433:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(713);
      if (lookahead == 'r') ADVANCE(643);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 434:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(981);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 435:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1230);
      if (lookahead == 'i') ADVANCE(813);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 436:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(564);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 437:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(540);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 438:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 439:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1212);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 440:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(789);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 441:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1218);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 442:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'i') ADVANCE(1002);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 443:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(806);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 444:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 445:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1080);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 446:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1008);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 447:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(961);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 448:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(884);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 449:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 450:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1014);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 451:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(790);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 452:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1029);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 453:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(791);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 454:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 455:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(692);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 456:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(824);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 457:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(987);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 458:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 459:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1065);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 460:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 461:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 462:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 463:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 464:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 465:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(695);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 466:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 467:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 468:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(325);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 469:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 470:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(715);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 471:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1106);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 472:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1010);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 473:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 474:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(994);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 475:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 476:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 477:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(701);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 478:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 479:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(997);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 480:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(333);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 481:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1175);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 482:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1016);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 483:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(702);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 484:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 485:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(882);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 486:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 487:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(394);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 488:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1118);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 489:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(536);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 490:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1083);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 491:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 492:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1232);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 493:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 494:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 495:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 496:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1235);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 497:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 498:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 499:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(733);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 500:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1066);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 501:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1233);
      if (lookahead == 'i') ADVANCE(888);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 502:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 503:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(724);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 504:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1068);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 505:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(860);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 506:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1236);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 507:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(810);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 508:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'i') ADVANCE(1211);
      if (lookahead == 'o') ADVANCE(1146);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 509:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1070);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 510:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(861);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 511:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 512:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1051);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 513:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 514:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 515:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(926);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 516:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 517:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(864);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 518:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 519:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(865);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 520:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1025);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 521:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 522:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1026);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 523:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(804);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 524:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(592);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 525:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(807);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 526:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1034);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 527:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1046);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 528:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(885);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 529:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(879);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 530:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(811);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 531:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(812);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 532:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 533:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 534:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(784);
      if (lookahead == 'v') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 535:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(785);
      if (lookahead == 'v') ADVANCE(147);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 536:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(815);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 537:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'f') ADVANCE(771);
      if (lookahead == 'i') ADVANCE(1156);
      if (lookahead == 'l') ADVANCE(895);
      if (lookahead == 'r') ADVANCE(1298);
      if (lookahead == 'u') ADVANCE(633);
      if (lookahead == 'y') ADVANCE(1003);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 538:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'f') ADVANCE(1278);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 539:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'f') ADVANCE(1343);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 540:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'f') ADVANCE(1411);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 541:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'f') ADVANCE(1567);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 542:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'f') ADVANCE(1491);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 543:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'f') ADVANCE(1533);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 544:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'f') ADVANCE(557);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 545:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'f') ADVANCE(1183);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 546:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'f') ADVANCE(954);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 547:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'f') ADVANCE(955);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 548:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'f') ADVANCE(907);
      if (lookahead == 'n') ADVANCE(935);
      if (lookahead == 's') ADVANCE(632);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 549:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'f') ADVANCE(956);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 550:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'f') ADVANCE(1100);
      if (lookahead == 't') ADVANCE(246);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 551:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'f') ADVANCE(490);
      if (lookahead == 'n') ADVANCE(648);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 552:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'f') ADVANCE(958);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 553:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'f') ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 554:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'f') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 555:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'f') ADVANCE(972);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 556:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'f') ADVANCE(624);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 557:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'f') ADVANCE(738);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 558:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'f') ADVANCE(1204);
      if (lookahead == 'k') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 559:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'f') ADVANCE(662);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 560:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'f') ADVANCE(516);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 561:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'f') ADVANCE(775);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 562:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'g') ADVANCE(1317);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 563:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'g') ADVANCE(1390);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 564:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'g') ADVANCE(1456);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 565:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'g') ADVANCE(1266);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 566:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'g') ADVANCE(1450);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 567:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'g') ADVANCE(1389);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 568:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'g') ADVANCE(1306);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 569:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'g') ADVANCE(1401);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 570:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'g') ADVANCE(1528);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 571:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'g') ADVANCE(1495);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 572:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'g') ADVANCE(1513);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 573:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'g') ADVANCE(1522);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 574:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'g') ADVANCE(970);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 575:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'g') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 576:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'g') ADVANCE(401);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 577:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'g') ADVANCE(430);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 578:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'g') ADVANCE(505);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 579:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'g') ADVANCE(1032);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 580:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'g') ADVANCE(809);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 581:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'h') ADVANCE(1415);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 582:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'h') ADVANCE(1373);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 583:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'h') ADVANCE(1300);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 584:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'h') ADVANCE(563);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 585:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'h') ADVANCE(983);
      if (lookahead == 'm') ADVANCE(1406);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 586:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'h') ADVANCE(984);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 587:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 588:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'h') ADVANCE(609);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 589:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'h') ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 590:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'h') ADVANCE(146);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 591:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'h') ADVANCE(613);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 592:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'h') ADVANCE(651);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 593:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'h') ADVANCE(1050);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 594:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'h') ADVANCE(184);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 595:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 'l') ADVANCE(902);
      if (lookahead == 'w') ADVANCE(87);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 596:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1356);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 597:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(550);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 598:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 599:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1319);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 600:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1320);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 601:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1207);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 602:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1208);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 603:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1209);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 604:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 605:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(968);
      if (lookahead == 'u') ADVANCE(385);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 606:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(689);
      if (lookahead == 'r') ADVANCE(575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 607:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(319);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 608:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(840);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 609:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1089);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 610:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 611:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(836);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 612:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1069);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 613:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(827);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 614:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 615:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(828);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 616:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(699);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 617:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 618:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(837);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 619:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(763);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 620:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(266);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 621:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 622:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(831);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 623:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(228);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 624:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(760);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 625:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(880);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 626:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(839);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 627:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(841);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 628:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(234);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 629:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1135);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 630:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1131);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 631:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 632:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1254);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 633:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(759);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 634:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(857);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 635:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1255);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 636:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(781);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 637:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 638:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(859);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 639:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(845);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 640:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(874);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 641:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1256);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 642:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(307);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 643:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1148);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 644:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(850);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 645:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1084);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 646:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1257);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 647:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1049);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 648:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1164);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 649:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(867);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 650:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 651:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(862);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 652:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1258);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 653:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(288);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 654:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1169);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 655:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(863);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 656:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1259);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 657:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1023);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 658:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(290);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 659:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(741);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 660:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 661:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(870);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 662:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(744);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 663:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 664:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 665:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1082);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 666:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1173);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 667:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 668:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1176);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 669:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 670:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(205);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 671:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(774);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 672:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(889);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 673:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'k') ADVANCE(1547);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 674:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'k') ADVANCE(1509);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 675:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'k') ADVANCE(1398);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 676:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'k') ADVANCE(1476);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 677:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'k') ADVANCE(1478);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 678:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'k') ADVANCE(1438);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 679:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'k') ADVANCE(1517);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 680:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'k') ADVANCE(943);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 681:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'k') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(317);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 682:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'k') ADVANCE(142);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 683:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'k') ADVANCE(392);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 684:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(538);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 685:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1340);
      if (lookahead == 's') ADVANCE(1093);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 686:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1302);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 687:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1316);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 688:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1568);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 689:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1535);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 690:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1412);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 691:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(878);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 692:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1285);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 693:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 694:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1445);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 695:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1393);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 696:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1485);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 697:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1439);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 698:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1459);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 699:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1471);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 700:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1435);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 701:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1503);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 702:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1524);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 703:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1538);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 704:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1431);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 705:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 706:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(314);
      if (lookahead == 'm') ADVANCE(357);
      if (lookahead == 'n') ADVANCE(1064);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 707:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1237);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 708:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(686);
      if (lookahead == 't') ADVANCE(244);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 709:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1238);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 710:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1239);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 711:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(688);
      if (lookahead == 'w') ADVANCE(1347);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 712:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 713:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(764);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 't') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 714:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1242);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 715:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 716:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1243);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 717:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1191);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 718:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 719:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1244);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 720:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 721:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(614);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 722:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(752);
      if (lookahead == 'p') ADVANCE(1132);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 723:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 724:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(645);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 725:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 726:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(696);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 727:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(642);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 728:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(621);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 729:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1108);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 730:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(782);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 731:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(390);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 732:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(716);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 733:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(507);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 734:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(704);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 735:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 736:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(396);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 737:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(397);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 738:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(441);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 739:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(406);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 740:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(496);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 741:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(410);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 742:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(460);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 743:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 744:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 745:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(422);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 746:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(425);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 747:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 748:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(428);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 749:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(757);
      if (lookahead == 'x') ADVANCE(1338);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 750:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 751:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(941);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 752:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 753:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(620);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 754:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1192);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 755:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 756:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 757:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(910);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 758:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(944);
      if (lookahead == 'p') ADVANCE(1039);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 759:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1167);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 760:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(528);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 761:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(927);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 762:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 763:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(274);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 764:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1022);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 765:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 766:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(947);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 767:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(656);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 768:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(278);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 769:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(280);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 770:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(281);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 771:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(929);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 772:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 773:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(768);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 774:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1170);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 775:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(938);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 776:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 777:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(769);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 778:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(766);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 779:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(770);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 780:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(521);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 781:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(181);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 782:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1088);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 783:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(946);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 784:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(530);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 785:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 786:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(1443);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 787:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 788:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(1370);
      if (lookahead == 't') ADVANCE(1525);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 789:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(1388);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 790:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(918);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 791:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 792:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(1220);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 793:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(952);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 794:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(1227);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 795:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(953);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 796:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 797:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(1228);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 798:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(975);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 799:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(610);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 800:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(395);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 801:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 802:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(429);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 803:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(443);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 804:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(453);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 805:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(628);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 806:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(934);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 807:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(937);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 808:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(971);
      if (lookahead == 'n') ADVANCE(772);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 809:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 810:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 811:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(517);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 812:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 813:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(974);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 814:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(533);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 815:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(976);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 816:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(680);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 817:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1339);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 818:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1344);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 819:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(348);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 820:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1383);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 821:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1397);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 822:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1422);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 823:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 824:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1448);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 825:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1570);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 826:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(467);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 827:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1551);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 828:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1410);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 829:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1515);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 830:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1489);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 831:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1475);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 832:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1549);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 833:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(539);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 834:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(265);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 835:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(248);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 836:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 837:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 838:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(570);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 839:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 840:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 841:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(573);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 842:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(336);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 843:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(221);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 844:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(707);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 845:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(323);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 846:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(223);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 847:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(709);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 848:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 849:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(710);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 850:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(329);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 851:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 852:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(891);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 853:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(229);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 854:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(389);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 855:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 856:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(714);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 857:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1115);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 858:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 859:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(524);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 860:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1119);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 861:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1163);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 862:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1121);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 863:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1143);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 864:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 865:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 866:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 867:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(408);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 868:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(409);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 869:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(417);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 870:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(423);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 871:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1187);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 872:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 873:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 874:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(272);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 875:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 876:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1203);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 877:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 878:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 879:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 880:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1153);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 881:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 882:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(627);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 883:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(159);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 884:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(360);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 885:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 886:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(654);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 887:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(939);
      if (lookahead == 'o') ADVANCE(844);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 888:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 889:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(668);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 890:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(776);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 891:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(190);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 892:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1067);
      if (lookahead == 'r') ADVANCE(1201);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 893:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1224);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 894:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 895:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(242);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 896:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(501);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 897:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(799);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 898:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(200);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 899:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(683);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 900:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 901:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1195);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 902:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 903:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(559);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 904:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(579);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 905:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1190);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 906:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(822);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 907:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1006);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 908:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(340);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 909:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(825);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 910:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(220);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 911:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1035);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 912:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(991);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 913:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(872);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 914:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(829);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 915:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(270);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 916:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(996);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 917:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(838);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 918:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1005);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 919:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1015);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 920:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1047);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 921:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(966);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 922:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(547);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 923:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(964);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 924:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1020);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 925:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(345);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 926:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(847);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 927:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(263);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 928:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1018);
      if (lookahead == 'r') ADVANCE(637);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 929:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(124);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 930:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1166);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 931:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(549);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 932:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1214);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 933:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1021);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 934:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(849);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 935:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(866);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 936:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(634);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 937:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(858);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 938:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 939:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(868);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 940:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(869);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 941:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 942:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(625);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 943:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(873);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 944:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(303);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 945:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(881);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 946:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(306);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 947:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(309);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 948:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(1229);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 949:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 950:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(1526);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 951:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(1294);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 952:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(1313);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 953:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(1327);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 954:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(6);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 955:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(1367);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 956:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(1379);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 957:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(1418);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 958:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(1529);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 959:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 960:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(924);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 961:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(1103);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 962:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(164);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 963:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(259);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 964:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 965:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(1147);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 966:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(418);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 967:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(1011);
      if (lookahead == 't') ADVANCE(154);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 968:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(736);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 969:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(727);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 970:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(131);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 971:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(753);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 972:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(282);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 973:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(942);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 974:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(933);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 975:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(1179);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 976:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(1180);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 977:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'q') ADVANCE(1307);
      if (lookahead == 'x') ADVANCE(102);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 978:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'q') ADVANCE(68);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 979:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'q') ADVANCE(1348);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 980:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'q') ADVANCE(1376);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 981:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'q') ADVANCE(1527);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 982:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1391);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 983:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1295);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 984:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1336);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 985:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1303);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 986:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1414);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 987:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1442);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 988:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1332);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 989:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1548);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 990:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1329);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 991:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1531);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 992:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1462);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 993:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1541);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 994:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1543);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 995:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1326);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 996:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1366);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 997:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1566);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 998:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1463);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 999:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1000:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1001:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1002:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1003:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(437);
      if (lookahead == 'v') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1004:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(896);
      if (lookahead == 'x') ADVANCE(1096);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1005:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1241);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1006:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(545);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1007:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(903);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1008:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(823);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1009:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1010:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1011:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(904);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1012:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(826);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1013:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(497);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1014:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1104);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1015:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1016:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(155);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1017:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(830);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1018:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(388);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1019:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(832);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1020:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1021:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1117);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1022:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1023:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(398);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1024:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1025:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(529);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1026:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(469);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1027:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(414);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1028:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1029:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(576);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1030:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1138);
      if (lookahead == 'x') ADVANCE(42);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1031:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(487);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1032:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(500);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1033:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1078);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1034:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(578);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1035:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(350);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1036:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(283);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1037:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(465);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1038:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(912);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1039:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1040:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1041:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1038);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1042:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(509);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1043:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(276);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1044:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(875);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1045:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(917);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1046:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(877);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1047:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1048:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(359);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1049:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1050:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1051:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(883);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1052:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1396);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1053:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1429);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1054:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1474);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1055:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1328);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1056:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1409);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1057:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1470);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1058:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1510);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1059:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1511);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1060:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(53);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1061:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1136);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1062:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1216);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1063:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(962);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1064:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1161);
      if (lookahead == 'v') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1065:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1056);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1066:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1057);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1067:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(599);
      if (lookahead == 'u') ADVANCE(600);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1068:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1058);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1069:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1070:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1059);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1071:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1072:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(386);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1073:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(670);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1074:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1107);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1075:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1109);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1076:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1124);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1077:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1078:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(416);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1079:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1247);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1080:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1073);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1081:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1082:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(909);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1083:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1142);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1084:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1159);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1085:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1086:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(617);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1087:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1178);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1088:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1177);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1089:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(311);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1090:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1449);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1091:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(548);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1092:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1312);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1093:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(967);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1094:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1473);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1095:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1362);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1096:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1392);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1097:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1308);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1098:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1280);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1099:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1318);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1100:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(267);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1101:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1279);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1102:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1421);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1103:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1437);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1104:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(534);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1105:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1361);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1106:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1537);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1107:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1297);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1108:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1427);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1109:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1516);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1110:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1519);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1111:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1558);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1112:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1301);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1113:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1423);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1114:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1432);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1115:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1357);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1116:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1433);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1117:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1434);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1118:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1305);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1119:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1424);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1120:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1425);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1121:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1455);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1122:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1518);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1123:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1458);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1124:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1291);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1125:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1330);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1126:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1309);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1127:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1481);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1128:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1129:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1130:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1131:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1240);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1132:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1205);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1133:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1134:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1135:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(561);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1136:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(640);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1137:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(667);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1138:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(936);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1139:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(650);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1140:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(367);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1141:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(988);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1142:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1143:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1043);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1144:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1145:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(457);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1146:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1147:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(995);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1148:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(515);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1149:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(253);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1150:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(404);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1151:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(468);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1152:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(421);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1153:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1154:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1155:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1156:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(257);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1157:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1223);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1158:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(157);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1159:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(911);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1160:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(659);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1161:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1162:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1045);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1163:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(965);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1164:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1165:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(552);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1166:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(913);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1167:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(615);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1168:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(916);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1169:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1170:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(622);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1171:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(535);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1172:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(931);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1173:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(663);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1174:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1175:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1200);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1176:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(664);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1177:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1178:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(310);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1179:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1180:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1181:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(196);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1182:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1183:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(1252);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1184:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(1036);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1185:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(687);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1186:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(969);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1187:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(957);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1188:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(726);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1189:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(852);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1190:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(1120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1191:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(420);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1192:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(424);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1193:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(1033);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1194:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(800);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1195:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1196:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(798);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1197:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(729);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1198:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(1017);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1199:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(735);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1200:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(1019);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1201:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(846);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1202:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(762);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1203:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(734);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1204:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(853);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1205:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(1027);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1206:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(671);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1207:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'v') ADVANCE(1314);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1208:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'v') ADVANCE(1360);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1209:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'v') ADVANCE(1375);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1210:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'v') ADVANCE(787);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1211:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'v') ADVANCE(162);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1212:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'v') ADVANCE(653);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1213:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'v') ADVANCE(498);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1214:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'v') ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1215:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'v') ADVANCE(555);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1216:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'v') ADVANCE(277);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1217:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'v') ADVANCE(175);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1218:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'v') ADVANCE(518);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1219:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'w') ADVANCE(1345);
      if (lookahead == 'z') ADVANCE(1346);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1269);
      END_STATE();
    case 1220:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'w') ADVANCE(1296);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1221:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'w') ADVANCE(631);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1222:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'w') ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1223:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'w') ADVANCE(658);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1224:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'w') ADVANCE(304);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1225:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'w') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1226:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'x') ADVANCE(1382);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1227:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'x') ADVANCE(1288);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1228:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'x') ADVANCE(1287);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1229:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'x') ADVANCE(292);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1230:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'x') ADVANCE(960);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1231:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'x') ADVANCE(1099);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1232:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'x') ADVANCE(1110);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1233:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'x') ADVANCE(1111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1234:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'x') ADVANCE(478);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1235:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'x') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1236:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'x') ADVANCE(1155);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1237:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'y') ADVANCE(1505);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1238:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'y') ADVANCE(1552);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1239:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'y') ADVANCE(1402);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1240:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'y') ADVANCE(1498);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1241:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'y') ADVANCE(1512);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1242:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'y') ADVANCE(1452);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1243:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'y') ADVANCE(1408);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1244:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'y') ADVANCE(1451);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1245:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'y') ADVANCE(209);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1246:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'y') ADVANCE(1086);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1247:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'y') ADVANCE(1062);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1248:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'y') ADVANCE(848);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1249:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'y') ADVANCE(905);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1250:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'y') ADVANCE(73);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1251:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'z') ADVANCE(1245);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1269);
      END_STATE();
    case 1252:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'z') ADVANCE(1260);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1269);
      END_STATE();
    case 1253:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'z') ADVANCE(400);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1269);
      END_STATE();
    case 1254:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'z') ADVANCE(403);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1269);
      END_STATE();
    case 1255:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'z') ADVANCE(458);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1269);
      END_STATE();
    case 1256:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'z') ADVANCE(412);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1269);
      END_STATE();
    case 1257:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'z') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1269);
      END_STATE();
    case 1258:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'z') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1269);
      END_STATE();
    case 1259:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'z') ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1269);
      END_STATE();
    case 1260:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'z') ADVANCE(626);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1269);
      END_STATE();
    case 1261:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'z') ADVANCE(940);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1269);
      END_STATE();
    case 1262:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1579);
      END_STATE();
    case 1263:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1580);
      END_STATE();
    case 1264:
      if (lookahead == ':') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1265:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(1269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1578);
      END_STATE();
    case 1266:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(1269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1582);
      END_STATE();
    case 1267:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1577);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1269);
      END_STATE();
    case 1268:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1581);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1269);
      END_STATE();
    case 1269:
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1270:
      if (lookahead == '?') ADVANCE(1562);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1270);
      END_STATE();
    case 1271:
      if (lookahead == 'e') ADVANCE(1272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1271);
      END_STATE();
    case 1272:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(1274);
      END_STATE();
    case 1273:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1274:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1270);
      END_STATE();
    case 1275:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1563);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(anon_sym_half);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(anon_sym_bfloat);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(anon_sym_double);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(anon_sym_x86_fp80);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(anon_sym_fp128);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(anon_sym_pcc_fp128);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(anon_sym_label);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(anon_sym_metadata);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(anon_sym_x86_mmx);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(anon_sym_x86_amx);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == ':') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1289);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(anon_sym_add);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1063);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(anon_sym_addrspacecast);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(anon_sym_alloca);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(anon_sym_arcp);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(anon_sym_ashr);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(anon_sym_atomicrmw);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(anon_sym_bitcast);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(anon_sym_br);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(anon_sym_catchpad);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(anon_sym_catchswitch);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(anon_sym_catchret);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'b') ADVANCE(985);
      if (lookahead == 'e') ADVANCE(986);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(anon_sym_callbr);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(anon_sym_cleanuppad);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(anon_sym_cleanupret);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(anon_sym_cmpxchg);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(anon_sym_eq);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(anon_sym_exact);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(anon_sym_extractelement);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(anon_sym_extractvalue);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(anon_sym_fadd);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(anon_sym_fast);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(218);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(anon_sym_fcmp);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(anon_sym_fdiv);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(anon_sym_fence);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(anon_sym_fmul);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(anon_sym_fneg);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(anon_sym_fpext);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(anon_sym_fptosi);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(anon_sym_fptoui);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(anon_sym_fptrunc);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(anon_sym_free);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'z') ADVANCE(391);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1269);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(anon_sym_freeze);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(anon_sym_frem);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(anon_sym_fsub);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(anon_sym_getelementptr);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(anon_sym_icmp);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(anon_sym_inbounds);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(anon_sym_indirectbr);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(anon_sym_insertelement);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(anon_sym_insertvalue);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(anon_sym_inttoptr);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(anon_sym_invoke);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(anon_sym_landingpad);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(anon_sym_lshr);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(anon_sym_malloc);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(anon_sym_max);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(anon_sym_min);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(anon_sym_mul);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(anon_sym_nand);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(anon_sym_ne);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1094);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(anon_sym_ninf);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(anon_sym_nnan);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(anon_sym_nsw);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(anon_sym_nsz);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(anon_sym_nuw);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(anon_sym_oeq);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(anon_sym_oge);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(anon_sym_ogt);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(anon_sym_ole);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(anon_sym_olt);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(anon_sym_one);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1355);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(anon_sym_ord);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(anon_sym_phi);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(anon_sym_ptrtoint);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(anon_sym_resume);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(anon_sym_ret);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(1012);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(anon_sym_sdiv);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(anon_sym_select);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(anon_sym_sext);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(anon_sym_sge);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(anon_sym_sgt);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(anon_sym_shl);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(anon_sym_shufflevector);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(anon_sym_sitofp);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(anon_sym_sle);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(anon_sym_slt);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(anon_sym_srem);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(anon_sym_sub);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(anon_sym_switch);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(anon_sym_trunc);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(anon_sym_udiv);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(anon_sym_ueq);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(anon_sym_uge);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(anon_sym_ugt);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(anon_sym_uitofp);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(anon_sym_ule);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(anon_sym_ult);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(anon_sym_umax);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(anon_sym_umin);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(anon_sym_une);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(anon_sym_uno);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(anon_sym_unreachable);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(anon_sym_unwind);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(anon_sym_urem);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(anon_sym_va_arg);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(anon_sym_xchg);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(anon_sym_zext);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(anon_sym_acq_rel);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(anon_sym_acquire);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(anon_sym_addrspace);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(166);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1174);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(anon_sym_alignstack);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(anon_sym_allocsize);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(anon_sym_alwaysinline);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(anon_sym_appending);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(anon_sym_argmemonly);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(anon_sym_arm_aapcs_vfpcc);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(anon_sym_arm_aapcscc);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(anon_sym_arm_apcscc);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(anon_sym_asm);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(anon_sym_atomic);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(792);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(anon_sym_available_externally);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(anon_sym_blockaddress);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(anon_sym_builtin);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(anon_sym_byref);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(anon_sym_byval);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(708);
      if (lookahead == 'c') ADVANCE(1416);
      if (lookahead == 'l') ADVANCE(491);
      if (lookahead == 'm') ADVANCE(948);
      if (lookahead == 'o') ADVANCE(706);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(anon_sym_caller);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(anon_sym_catch);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(484);
      if (lookahead == 's') ADVANCE(1221);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(anon_sym_cc);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1417);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(anon_sym_ccc);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(anon_sym_cleanup);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(anon_sym_cold);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(anon_sym_coldcc);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(anon_sym_comdat);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(anon_sym_common);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(anon_sym_constant);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(anon_sym_convergent);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(anon_sym_datalayout);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(anon_sym_declare);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(anon_sym_define);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(anon_sym_deplibs);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(anon_sym_dereferenceable);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(919);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(anon_sym_dereferenceable_or_null);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(anon_sym_distinct);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(anon_sym_dllexport);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(anon_sym_dllimport);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(anon_sym_dso_local);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(anon_sym_dso_preemptable);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(anon_sym_except);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(anon_sym_extern_weak);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(anon_sym_external);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1250);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(anon_sym_externally_initialized);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(anon_sym_fastcc);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(anon_sym_filter);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(anon_sym_from);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(anon_sym_gc);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(anon_sym_hhvm_ccc);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(anon_sym_hhvmcc);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(anon_sym_hidden);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(anon_sym_hot);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(anon_sym_immarg);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(anon_sym_inaccessiblemem_or_argmemonly);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(anon_sym_inaccessiblememonly);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(anon_sym_inalloca);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(anon_sym_initialexec);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_inlinehint);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(anon_sym_inreg);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(anon_sym_intel_ocl_bicc);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(anon_sym_inteldialect);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(anon_sym_internal);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(anon_sym_jumptable);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(anon_sym_linkonce);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(925);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(anon_sym_linkonce_odr);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(anon_sym_local_unnamed_addr);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(anon_sym_localdynamic);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(anon_sym_localexec);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(anon_sym_minsize);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(anon_sym_monotonic);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(anon_sym_msp430_intrcc);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(anon_sym_mustprogress);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(anon_sym_musttail);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(anon_sym_naked);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(anon_sym_nest);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(anon_sym_noalias);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(anon_sym_nobuiltin);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(anon_sym_nocallback);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(anon_sym_nocapture);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(anon_sym_nocf_check);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(anon_sym_noduplicate);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(anon_sym_nofree);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(anon_sym_noimplicitfloat);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(anon_sym_noinline);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(anon_sym_nomerge);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(anon_sym_nonlazybind);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(anon_sym_nonnull);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(anon_sym_noprofile);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(anon_sym_norecurse);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(anon_sym_noredzone);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(anon_sym_noreturn);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(anon_sym_nosync);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(anon_sym_noundef);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(anon_sym_nounwind);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(anon_sym_nosanitize_coverage);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(anon_sym_null_pointer_is_valid);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(anon_sym_optforfuzzing);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(anon_sym_optnone);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(anon_sym_optsize);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(anon_sym_personality);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(anon_sym_preallocated);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(anon_sym_protected);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(anon_sym_ptx_device);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(anon_sym_ptx_kernel);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(anon_sym_readnone);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(anon_sym_readonly);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(anon_sym_release);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(anon_sym_returned);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(anon_sym_returns_twice);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(anon_sym_safestack);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(anon_sym_sanitize_address);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(anon_sym_sanitize_hwaddress);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(anon_sym_sanitize_memory);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(anon_sym_sanitize_memtag);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(anon_sym_sanitize_thread);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(anon_sym_seq_cst);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(anon_sym_shadowcallstack);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(anon_sym_sideeffect);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(anon_sym_signext);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(anon_sym_source_filename);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(anon_sym_speculatable);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(anon_sym_speculative_load_hardening);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(anon_sym_spir_func);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(anon_sym_spir_kernel);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(anon_sym_sret);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(anon_sym_ssp);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(434);
      if (lookahead == 's') ADVANCE(1162);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(anon_sym_sspreq);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(anon_sym_sspstrong);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(anon_sym_strictfp);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(anon_sym_swiftcc);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(anon_sym_swifterror);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(anon_sym_swifttailcc);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(anon_sym_swiftself);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(anon_sym_syncscope);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(anon_sym_tail);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(222);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(anon_sym_tailcc);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(anon_sym_target);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(anon_sym_thread_local);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(anon_sym_to);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(anon_sym_triple);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(anon_sym_unnamed_addr);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(anon_sym_unordered);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(anon_sym_uselistorder);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(anon_sym_uselistorder_bb);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(anon_sym_uwtable);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(anon_sym_weak);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(908);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(anon_sym_weak_odr);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(anon_sym_willreturn);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(anon_sym_win64cc);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(anon_sym_within);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(anon_sym_writeonly);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '8') ADVANCE(15);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(584);
      if (lookahead == 'o') ADVANCE(982);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(anon_sym_x86_64_sysvcc);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(anon_sym_x86_fastcallcc);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(anon_sym_x86_stdcallcc);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(anon_sym_x86_thiscallcc);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(anon_sym_zeroext);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1271);
      if (lookahead == 'x') ADVANCE(1275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1560);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1560);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == ':') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1561);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(aux_sym_float_token1);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1563);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(anon_sym_zeroinitializer);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(anon_sym_undef);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_') ADVANCE(973);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(anon_sym_poison);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(anon_sym_vscale);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1572);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(1573);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1575);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(aux_sym_identifier_token3);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1577);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1269);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(aux_sym_identifier_token4);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(1269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1578);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(aux_sym_identifier_token5);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1579);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(aux_sym_identifier_token6);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1580);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(aux_sym_identifier_token7);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1581);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1269);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(aux_sym_identifier_token8);
      if (lookahead == ':') ADVANCE(1574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(1269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1582);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '"') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1576);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == ':') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1561);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_half] = ACTIONS(1),
    [anon_sym_bfloat] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_x86_fp80] = ACTIONS(1),
    [anon_sym_fp128] = ACTIONS(1),
    [anon_sym_pcc_fp128] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_metadata] = ACTIONS(1),
    [anon_sym_x86_mmx] = ACTIONS(1),
    [anon_sym_x86_amx] = ACTIONS(1),
    [aux_sym_type_token1] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
    [anon_sym_addrspacecast] = ACTIONS(1),
    [anon_sym_alloca] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_arcp] = ACTIONS(1),
    [anon_sym_ashr] = ACTIONS(1),
    [anon_sym_atomicrmw] = ACTIONS(1),
    [anon_sym_bitcast] = ACTIONS(1),
    [anon_sym_br] = ACTIONS(1),
    [anon_sym_catchpad] = ACTIONS(1),
    [anon_sym_catchswitch] = ACTIONS(1),
    [anon_sym_catchret] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_callbr] = ACTIONS(1),
    [anon_sym_cleanuppad] = ACTIONS(1),
    [anon_sym_cleanupret] = ACTIONS(1),
    [anon_sym_cmpxchg] = ACTIONS(1),
    [anon_sym_eq] = ACTIONS(1),
    [anon_sym_exact] = ACTIONS(1),
    [anon_sym_extractelement] = ACTIONS(1),
    [anon_sym_extractvalue] = ACTIONS(1),
    [anon_sym_fadd] = ACTIONS(1),
    [anon_sym_fast] = ACTIONS(1),
    [anon_sym_fcmp] = ACTIONS(1),
    [anon_sym_fdiv] = ACTIONS(1),
    [anon_sym_fence] = ACTIONS(1),
    [anon_sym_fmul] = ACTIONS(1),
    [anon_sym_fneg] = ACTIONS(1),
    [anon_sym_fpext] = ACTIONS(1),
    [anon_sym_fptosi] = ACTIONS(1),
    [anon_sym_fptoui] = ACTIONS(1),
    [anon_sym_fptrunc] = ACTIONS(1),
    [anon_sym_free] = ACTIONS(1),
    [anon_sym_freeze] = ACTIONS(1),
    [anon_sym_frem] = ACTIONS(1),
    [anon_sym_fsub] = ACTIONS(1),
    [anon_sym_getelementptr] = ACTIONS(1),
    [anon_sym_icmp] = ACTIONS(1),
    [anon_sym_inbounds] = ACTIONS(1),
    [anon_sym_indirectbr] = ACTIONS(1),
    [anon_sym_insertelement] = ACTIONS(1),
    [anon_sym_insertvalue] = ACTIONS(1),
    [anon_sym_inttoptr] = ACTIONS(1),
    [anon_sym_invoke] = ACTIONS(1),
    [anon_sym_landingpad] = ACTIONS(1),
    [anon_sym_load] = ACTIONS(1),
    [anon_sym_lshr] = ACTIONS(1),
    [anon_sym_malloc] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_mul] = ACTIONS(1),
    [anon_sym_nand] = ACTIONS(1),
    [anon_sym_ne] = ACTIONS(1),
    [anon_sym_ninf] = ACTIONS(1),
    [anon_sym_nnan] = ACTIONS(1),
    [anon_sym_nsw] = ACTIONS(1),
    [anon_sym_nsz] = ACTIONS(1),
    [anon_sym_nuw] = ACTIONS(1),
    [anon_sym_oeq] = ACTIONS(1),
    [anon_sym_oge] = ACTIONS(1),
    [anon_sym_ogt] = ACTIONS(1),
    [anon_sym_ole] = ACTIONS(1),
    [anon_sym_olt] = ACTIONS(1),
    [anon_sym_one] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_ord] = ACTIONS(1),
    [anon_sym_phi] = ACTIONS(1),
    [anon_sym_ptrtoint] = ACTIONS(1),
    [anon_sym_resume] = ACTIONS(1),
    [anon_sym_ret] = ACTIONS(1),
    [anon_sym_sdiv] = ACTIONS(1),
    [anon_sym_select] = ACTIONS(1),
    [anon_sym_sext] = ACTIONS(1),
    [anon_sym_sge] = ACTIONS(1),
    [anon_sym_sgt] = ACTIONS(1),
    [anon_sym_shl] = ACTIONS(1),
    [anon_sym_shufflevector] = ACTIONS(1),
    [anon_sym_sitofp] = ACTIONS(1),
    [anon_sym_sle] = ACTIONS(1),
    [anon_sym_slt] = ACTIONS(1),
    [anon_sym_srem] = ACTIONS(1),
    [anon_sym_store] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_trunc] = ACTIONS(1),
    [anon_sym_udiv] = ACTIONS(1),
    [anon_sym_ueq] = ACTIONS(1),
    [anon_sym_uge] = ACTIONS(1),
    [anon_sym_ugt] = ACTIONS(1),
    [anon_sym_uitofp] = ACTIONS(1),
    [anon_sym_ule] = ACTIONS(1),
    [anon_sym_ult] = ACTIONS(1),
    [anon_sym_umax] = ACTIONS(1),
    [anon_sym_umin] = ACTIONS(1),
    [anon_sym_une] = ACTIONS(1),
    [anon_sym_uno] = ACTIONS(1),
    [anon_sym_unreachable] = ACTIONS(1),
    [anon_sym_unwind] = ACTIONS(1),
    [anon_sym_urem] = ACTIONS(1),
    [anon_sym_va_arg] = ACTIONS(1),
    [anon_sym_xchg] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_zext] = ACTIONS(1),
    [anon_sym_acq_rel] = ACTIONS(1),
    [anon_sym_acquire] = ACTIONS(1),
    [anon_sym_addrspace] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_align] = ACTIONS(1),
    [anon_sym_alignstack] = ACTIONS(1),
    [anon_sym_allocsize] = ACTIONS(1),
    [anon_sym_alwaysinline] = ACTIONS(1),
    [anon_sym_appending] = ACTIONS(1),
    [anon_sym_argmemonly] = ACTIONS(1),
    [anon_sym_arm_aapcs_vfpcc] = ACTIONS(1),
    [anon_sym_arm_aapcscc] = ACTIONS(1),
    [anon_sym_arm_apcscc] = ACTIONS(1),
    [anon_sym_asm] = ACTIONS(1),
    [anon_sym_atomic] = ACTIONS(1),
    [anon_sym_available_externally] = ACTIONS(1),
    [anon_sym_blockaddress] = ACTIONS(1),
    [anon_sym_builtin] = ACTIONS(1),
    [anon_sym_byref] = ACTIONS(1),
    [anon_sym_byval] = ACTIONS(1),
    [anon_sym_c] = ACTIONS(1),
    [anon_sym_caller] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [anon_sym_cc] = ACTIONS(1),
    [anon_sym_ccc] = ACTIONS(1),
    [anon_sym_cleanup] = ACTIONS(1),
    [anon_sym_cold] = ACTIONS(1),
    [anon_sym_coldcc] = ACTIONS(1),
    [anon_sym_comdat] = ACTIONS(1),
    [anon_sym_common] = ACTIONS(1),
    [anon_sym_constant] = ACTIONS(1),
    [anon_sym_convergent] = ACTIONS(1),
    [anon_sym_datalayout] = ACTIONS(1),
    [anon_sym_declare] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_deplibs] = ACTIONS(1),
    [anon_sym_dereferenceable] = ACTIONS(1),
    [anon_sym_dereferenceable_or_null] = ACTIONS(1),
    [anon_sym_distinct] = ACTIONS(1),
    [anon_sym_dllexport] = ACTIONS(1),
    [anon_sym_dllimport] = ACTIONS(1),
    [anon_sym_dso_local] = ACTIONS(1),
    [anon_sym_dso_preemptable] = ACTIONS(1),
    [anon_sym_except] = ACTIONS(1),
    [anon_sym_extern_weak] = ACTIONS(1),
    [anon_sym_external] = ACTIONS(1),
    [anon_sym_externally_initialized] = ACTIONS(1),
    [anon_sym_fastcc] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_gc] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_hhvm_ccc] = ACTIONS(1),
    [anon_sym_hhvmcc] = ACTIONS(1),
    [anon_sym_hidden] = ACTIONS(1),
    [anon_sym_hot] = ACTIONS(1),
    [anon_sym_immarg] = ACTIONS(1),
    [anon_sym_inaccessiblemem_or_argmemonly] = ACTIONS(1),
    [anon_sym_inaccessiblememonly] = ACTIONS(1),
    [anon_sym_inalloca] = ACTIONS(1),
    [anon_sym_initialexec] = ACTIONS(1),
    [anon_sym_inlinehint] = ACTIONS(1),
    [anon_sym_inreg] = ACTIONS(1),
    [anon_sym_intel_ocl_bicc] = ACTIONS(1),
    [anon_sym_inteldialect] = ACTIONS(1),
    [anon_sym_internal] = ACTIONS(1),
    [anon_sym_jumptable] = ACTIONS(1),
    [anon_sym_linkonce] = ACTIONS(1),
    [anon_sym_linkonce_odr] = ACTIONS(1),
    [anon_sym_local_unnamed_addr] = ACTIONS(1),
    [anon_sym_localdynamic] = ACTIONS(1),
    [anon_sym_localexec] = ACTIONS(1),
    [anon_sym_minsize] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_monotonic] = ACTIONS(1),
    [anon_sym_msp430_intrcc] = ACTIONS(1),
    [anon_sym_mustprogress] = ACTIONS(1),
    [anon_sym_musttail] = ACTIONS(1),
    [anon_sym_naked] = ACTIONS(1),
    [anon_sym_nest] = ACTIONS(1),
    [anon_sym_noalias] = ACTIONS(1),
    [anon_sym_nobuiltin] = ACTIONS(1),
    [anon_sym_nocallback] = ACTIONS(1),
    [anon_sym_nocapture] = ACTIONS(1),
    [anon_sym_nocf_check] = ACTIONS(1),
    [anon_sym_noduplicate] = ACTIONS(1),
    [anon_sym_nofree] = ACTIONS(1),
    [anon_sym_noimplicitfloat] = ACTIONS(1),
    [anon_sym_noinline] = ACTIONS(1),
    [anon_sym_nomerge] = ACTIONS(1),
    [anon_sym_nonlazybind] = ACTIONS(1),
    [anon_sym_nonnull] = ACTIONS(1),
    [anon_sym_noprofile] = ACTIONS(1),
    [anon_sym_norecurse] = ACTIONS(1),
    [anon_sym_noredzone] = ACTIONS(1),
    [anon_sym_noreturn] = ACTIONS(1),
    [anon_sym_nosync] = ACTIONS(1),
    [anon_sym_noundef] = ACTIONS(1),
    [anon_sym_nounwind] = ACTIONS(1),
    [anon_sym_nosanitize_coverage] = ACTIONS(1),
    [anon_sym_null_pointer_is_valid] = ACTIONS(1),
    [anon_sym_optforfuzzing] = ACTIONS(1),
    [anon_sym_optnone] = ACTIONS(1),
    [anon_sym_optsize] = ACTIONS(1),
    [anon_sym_personality] = ACTIONS(1),
    [anon_sym_preallocated] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_ptx_device] = ACTIONS(1),
    [anon_sym_ptx_kernel] = ACTIONS(1),
    [anon_sym_readnone] = ACTIONS(1),
    [anon_sym_readonly] = ACTIONS(1),
    [anon_sym_release] = ACTIONS(1),
    [anon_sym_returned] = ACTIONS(1),
    [anon_sym_returns_twice] = ACTIONS(1),
    [anon_sym_safestack] = ACTIONS(1),
    [anon_sym_sanitize_address] = ACTIONS(1),
    [anon_sym_sanitize_hwaddress] = ACTIONS(1),
    [anon_sym_sanitize_memory] = ACTIONS(1),
    [anon_sym_sanitize_memtag] = ACTIONS(1),
    [anon_sym_sanitize_thread] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [anon_sym_seq_cst] = ACTIONS(1),
    [anon_sym_shadowcallstack] = ACTIONS(1),
    [anon_sym_sideeffect] = ACTIONS(1),
    [anon_sym_signext] = ACTIONS(1),
    [anon_sym_source_filename] = ACTIONS(1),
    [anon_sym_speculatable] = ACTIONS(1),
    [anon_sym_speculative_load_hardening] = ACTIONS(1),
    [anon_sym_spir_func] = ACTIONS(1),
    [anon_sym_spir_kernel] = ACTIONS(1),
    [anon_sym_sret] = ACTIONS(1),
    [anon_sym_ssp] = ACTIONS(1),
    [anon_sym_sspreq] = ACTIONS(1),
    [anon_sym_sspstrong] = ACTIONS(1),
    [anon_sym_strictfp] = ACTIONS(1),
    [anon_sym_swiftcc] = ACTIONS(1),
    [anon_sym_swifterror] = ACTIONS(1),
    [anon_sym_swifttailcc] = ACTIONS(1),
    [anon_sym_swiftself] = ACTIONS(1),
    [anon_sym_syncscope] = ACTIONS(1),
    [anon_sym_tail] = ACTIONS(1),
    [anon_sym_tailcc] = ACTIONS(1),
    [anon_sym_target] = ACTIONS(1),
    [anon_sym_thread_local] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_triple] = ACTIONS(1),
    [anon_sym_unnamed_addr] = ACTIONS(1),
    [anon_sym_unordered] = ACTIONS(1),
    [anon_sym_uselistorder] = ACTIONS(1),
    [anon_sym_uselistorder_bb] = ACTIONS(1),
    [anon_sym_uwtable] = ACTIONS(1),
    [anon_sym_volatile] = ACTIONS(1),
    [anon_sym_weak] = ACTIONS(1),
    [anon_sym_weak_odr] = ACTIONS(1),
    [anon_sym_willreturn] = ACTIONS(1),
    [anon_sym_win64cc] = ACTIONS(1),
    [anon_sym_within] = ACTIONS(1),
    [anon_sym_writeonly] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_x86_64_sysvcc] = ACTIONS(1),
    [anon_sym_x86_fastcallcc] = ACTIONS(1),
    [anon_sym_x86_stdcallcc] = ACTIONS(1),
    [anon_sym_x86_thiscallcc] = ACTIONS(1),
    [anon_sym_zeroext] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
    [aux_sym_float_token2] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_zeroinitializer] = ACTIONS(1),
    [anon_sym_undef] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_none] = ACTIONS(1),
    [anon_sym_poison] = ACTIONS(1),
    [anon_sym_vscale] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [aux_sym_identifier_token2] = ACTIONS(1),
    [aux_sym_identifier_token3] = ACTIONS(1),
    [aux_sym_identifier_token4] = ACTIONS(1),
    [aux_sym_identifier_token5] = ACTIONS(1),
    [aux_sym_identifier_token6] = ACTIONS(1),
    [aux_sym_identifier_token7] = ACTIONS(1),
    [aux_sym_identifier_token8] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(13),
    [sym_type] = STATE(2),
    [sym_statement] = STATE(2),
    [sym_keyword] = STATE(2),
    [sym_float] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_constant] = STATE(2),
    [sym_identifier] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_bracket] = STATE(2),
    [aux_sym_module_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_void] = ACTIONS(5),
    [anon_sym_half] = ACTIONS(5),
    [anon_sym_bfloat] = ACTIONS(5),
    [anon_sym_float] = ACTIONS(5),
    [anon_sym_double] = ACTIONS(5),
    [anon_sym_x86_fp80] = ACTIONS(5),
    [anon_sym_fp128] = ACTIONS(5),
    [anon_sym_pcc_fp128] = ACTIONS(5),
    [anon_sym_label] = ACTIONS(5),
    [anon_sym_metadata] = ACTIONS(5),
    [anon_sym_x86_mmx] = ACTIONS(5),
    [anon_sym_x86_amx] = ACTIONS(5),
    [aux_sym_type_token1] = ACTIONS(5),
    [anon_sym_add] = ACTIONS(7),
    [anon_sym_addrspacecast] = ACTIONS(7),
    [anon_sym_alloca] = ACTIONS(7),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_arcp] = ACTIONS(7),
    [anon_sym_ashr] = ACTIONS(7),
    [anon_sym_atomicrmw] = ACTIONS(7),
    [anon_sym_bitcast] = ACTIONS(7),
    [anon_sym_br] = ACTIONS(7),
    [anon_sym_catchpad] = ACTIONS(7),
    [anon_sym_catchswitch] = ACTIONS(7),
    [anon_sym_catchret] = ACTIONS(7),
    [anon_sym_call] = ACTIONS(7),
    [anon_sym_callbr] = ACTIONS(7),
    [anon_sym_cleanuppad] = ACTIONS(7),
    [anon_sym_cleanupret] = ACTIONS(7),
    [anon_sym_cmpxchg] = ACTIONS(7),
    [anon_sym_eq] = ACTIONS(7),
    [anon_sym_exact] = ACTIONS(7),
    [anon_sym_extractelement] = ACTIONS(7),
    [anon_sym_extractvalue] = ACTIONS(7),
    [anon_sym_fadd] = ACTIONS(7),
    [anon_sym_fast] = ACTIONS(7),
    [anon_sym_fcmp] = ACTIONS(7),
    [anon_sym_fdiv] = ACTIONS(7),
    [anon_sym_fence] = ACTIONS(7),
    [anon_sym_fmul] = ACTIONS(7),
    [anon_sym_fneg] = ACTIONS(7),
    [anon_sym_fpext] = ACTIONS(7),
    [anon_sym_fptosi] = ACTIONS(7),
    [anon_sym_fptoui] = ACTIONS(7),
    [anon_sym_fptrunc] = ACTIONS(7),
    [anon_sym_free] = ACTIONS(7),
    [anon_sym_freeze] = ACTIONS(7),
    [anon_sym_frem] = ACTIONS(7),
    [anon_sym_fsub] = ACTIONS(7),
    [anon_sym_getelementptr] = ACTIONS(7),
    [anon_sym_icmp] = ACTIONS(7),
    [anon_sym_inbounds] = ACTIONS(7),
    [anon_sym_indirectbr] = ACTIONS(7),
    [anon_sym_insertelement] = ACTIONS(7),
    [anon_sym_insertvalue] = ACTIONS(7),
    [anon_sym_inttoptr] = ACTIONS(7),
    [anon_sym_invoke] = ACTIONS(7),
    [anon_sym_landingpad] = ACTIONS(7),
    [anon_sym_load] = ACTIONS(7),
    [anon_sym_lshr] = ACTIONS(7),
    [anon_sym_malloc] = ACTIONS(7),
    [anon_sym_max] = ACTIONS(7),
    [anon_sym_min] = ACTIONS(7),
    [anon_sym_mul] = ACTIONS(7),
    [anon_sym_nand] = ACTIONS(7),
    [anon_sym_ne] = ACTIONS(7),
    [anon_sym_ninf] = ACTIONS(7),
    [anon_sym_nnan] = ACTIONS(7),
    [anon_sym_nsw] = ACTIONS(7),
    [anon_sym_nsz] = ACTIONS(7),
    [anon_sym_nuw] = ACTIONS(7),
    [anon_sym_oeq] = ACTIONS(7),
    [anon_sym_oge] = ACTIONS(7),
    [anon_sym_ogt] = ACTIONS(7),
    [anon_sym_ole] = ACTIONS(7),
    [anon_sym_olt] = ACTIONS(7),
    [anon_sym_one] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_ord] = ACTIONS(7),
    [anon_sym_phi] = ACTIONS(7),
    [anon_sym_ptrtoint] = ACTIONS(7),
    [anon_sym_resume] = ACTIONS(7),
    [anon_sym_ret] = ACTIONS(7),
    [anon_sym_sdiv] = ACTIONS(7),
    [anon_sym_select] = ACTIONS(7),
    [anon_sym_sext] = ACTIONS(7),
    [anon_sym_sge] = ACTIONS(7),
    [anon_sym_sgt] = ACTIONS(7),
    [anon_sym_shl] = ACTIONS(7),
    [anon_sym_shufflevector] = ACTIONS(7),
    [anon_sym_sitofp] = ACTIONS(7),
    [anon_sym_sle] = ACTIONS(7),
    [anon_sym_slt] = ACTIONS(7),
    [anon_sym_srem] = ACTIONS(7),
    [anon_sym_store] = ACTIONS(7),
    [anon_sym_sub] = ACTIONS(7),
    [anon_sym_switch] = ACTIONS(7),
    [anon_sym_trunc] = ACTIONS(7),
    [anon_sym_udiv] = ACTIONS(7),
    [anon_sym_ueq] = ACTIONS(7),
    [anon_sym_uge] = ACTIONS(7),
    [anon_sym_ugt] = ACTIONS(7),
    [anon_sym_uitofp] = ACTIONS(7),
    [anon_sym_ule] = ACTIONS(7),
    [anon_sym_ult] = ACTIONS(7),
    [anon_sym_umax] = ACTIONS(7),
    [anon_sym_umin] = ACTIONS(7),
    [anon_sym_une] = ACTIONS(7),
    [anon_sym_uno] = ACTIONS(7),
    [anon_sym_unreachable] = ACTIONS(7),
    [anon_sym_unwind] = ACTIONS(7),
    [anon_sym_urem] = ACTIONS(7),
    [anon_sym_va_arg] = ACTIONS(7),
    [anon_sym_xchg] = ACTIONS(7),
    [anon_sym_xor] = ACTIONS(7),
    [anon_sym_zext] = ACTIONS(7),
    [anon_sym_acq_rel] = ACTIONS(9),
    [anon_sym_acquire] = ACTIONS(9),
    [anon_sym_addrspace] = ACTIONS(9),
    [anon_sym_alias] = ACTIONS(9),
    [anon_sym_align] = ACTIONS(9),
    [anon_sym_alignstack] = ACTIONS(9),
    [anon_sym_allocsize] = ACTIONS(9),
    [anon_sym_alwaysinline] = ACTIONS(9),
    [anon_sym_appending] = ACTIONS(9),
    [anon_sym_argmemonly] = ACTIONS(9),
    [anon_sym_arm_aapcs_vfpcc] = ACTIONS(9),
    [anon_sym_arm_aapcscc] = ACTIONS(9),
    [anon_sym_arm_apcscc] = ACTIONS(9),
    [anon_sym_asm] = ACTIONS(9),
    [anon_sym_atomic] = ACTIONS(9),
    [anon_sym_available_externally] = ACTIONS(9),
    [anon_sym_blockaddress] = ACTIONS(9),
    [anon_sym_builtin] = ACTIONS(9),
    [anon_sym_byref] = ACTIONS(9),
    [anon_sym_byval] = ACTIONS(9),
    [anon_sym_c] = ACTIONS(9),
    [anon_sym_caller] = ACTIONS(9),
    [anon_sym_catch] = ACTIONS(9),
    [anon_sym_cc] = ACTIONS(9),
    [anon_sym_ccc] = ACTIONS(9),
    [anon_sym_cleanup] = ACTIONS(9),
    [anon_sym_cold] = ACTIONS(9),
    [anon_sym_coldcc] = ACTIONS(9),
    [anon_sym_comdat] = ACTIONS(9),
    [anon_sym_common] = ACTIONS(9),
    [anon_sym_constant] = ACTIONS(9),
    [anon_sym_convergent] = ACTIONS(9),
    [anon_sym_datalayout] = ACTIONS(9),
    [anon_sym_declare] = ACTIONS(9),
    [anon_sym_default] = ACTIONS(9),
    [anon_sym_define] = ACTIONS(9),
    [anon_sym_deplibs] = ACTIONS(9),
    [anon_sym_dereferenceable] = ACTIONS(9),
    [anon_sym_dereferenceable_or_null] = ACTIONS(9),
    [anon_sym_distinct] = ACTIONS(9),
    [anon_sym_dllexport] = ACTIONS(9),
    [anon_sym_dllimport] = ACTIONS(9),
    [anon_sym_dso_local] = ACTIONS(9),
    [anon_sym_dso_preemptable] = ACTIONS(9),
    [anon_sym_except] = ACTIONS(9),
    [anon_sym_extern_weak] = ACTIONS(9),
    [anon_sym_external] = ACTIONS(9),
    [anon_sym_externally_initialized] = ACTIONS(9),
    [anon_sym_fastcc] = ACTIONS(9),
    [anon_sym_filter] = ACTIONS(9),
    [anon_sym_from] = ACTIONS(9),
    [anon_sym_gc] = ACTIONS(9),
    [anon_sym_global] = ACTIONS(9),
    [anon_sym_hhvm_ccc] = ACTIONS(9),
    [anon_sym_hhvmcc] = ACTIONS(9),
    [anon_sym_hidden] = ACTIONS(9),
    [anon_sym_hot] = ACTIONS(9),
    [anon_sym_immarg] = ACTIONS(9),
    [anon_sym_inaccessiblemem_or_argmemonly] = ACTIONS(9),
    [anon_sym_inaccessiblememonly] = ACTIONS(9),
    [anon_sym_inalloca] = ACTIONS(9),
    [anon_sym_initialexec] = ACTIONS(9),
    [anon_sym_inlinehint] = ACTIONS(9),
    [anon_sym_inreg] = ACTIONS(9),
    [anon_sym_intel_ocl_bicc] = ACTIONS(9),
    [anon_sym_inteldialect] = ACTIONS(9),
    [anon_sym_internal] = ACTIONS(9),
    [anon_sym_jumptable] = ACTIONS(9),
    [anon_sym_linkonce] = ACTIONS(9),
    [anon_sym_linkonce_odr] = ACTIONS(9),
    [anon_sym_local_unnamed_addr] = ACTIONS(9),
    [anon_sym_localdynamic] = ACTIONS(9),
    [anon_sym_localexec] = ACTIONS(9),
    [anon_sym_minsize] = ACTIONS(9),
    [anon_sym_module] = ACTIONS(9),
    [anon_sym_monotonic] = ACTIONS(9),
    [anon_sym_msp430_intrcc] = ACTIONS(9),
    [anon_sym_mustprogress] = ACTIONS(9),
    [anon_sym_musttail] = ACTIONS(9),
    [anon_sym_naked] = ACTIONS(9),
    [anon_sym_nest] = ACTIONS(9),
    [anon_sym_noalias] = ACTIONS(9),
    [anon_sym_nobuiltin] = ACTIONS(9),
    [anon_sym_nocallback] = ACTIONS(9),
    [anon_sym_nocapture] = ACTIONS(9),
    [anon_sym_nocf_check] = ACTIONS(9),
    [anon_sym_noduplicate] = ACTIONS(9),
    [anon_sym_nofree] = ACTIONS(9),
    [anon_sym_noimplicitfloat] = ACTIONS(9),
    [anon_sym_noinline] = ACTIONS(9),
    [anon_sym_nomerge] = ACTIONS(9),
    [anon_sym_nonlazybind] = ACTIONS(9),
    [anon_sym_nonnull] = ACTIONS(9),
    [anon_sym_noprofile] = ACTIONS(9),
    [anon_sym_norecurse] = ACTIONS(9),
    [anon_sym_noredzone] = ACTIONS(9),
    [anon_sym_noreturn] = ACTIONS(9),
    [anon_sym_nosync] = ACTIONS(9),
    [anon_sym_noundef] = ACTIONS(9),
    [anon_sym_nounwind] = ACTIONS(9),
    [anon_sym_nosanitize_coverage] = ACTIONS(9),
    [anon_sym_null_pointer_is_valid] = ACTIONS(9),
    [anon_sym_optforfuzzing] = ACTIONS(9),
    [anon_sym_optnone] = ACTIONS(9),
    [anon_sym_optsize] = ACTIONS(9),
    [anon_sym_personality] = ACTIONS(9),
    [anon_sym_preallocated] = ACTIONS(9),
    [anon_sym_private] = ACTIONS(9),
    [anon_sym_protected] = ACTIONS(9),
    [anon_sym_ptx_device] = ACTIONS(9),
    [anon_sym_ptx_kernel] = ACTIONS(9),
    [anon_sym_readnone] = ACTIONS(9),
    [anon_sym_readonly] = ACTIONS(9),
    [anon_sym_release] = ACTIONS(9),
    [anon_sym_returned] = ACTIONS(9),
    [anon_sym_returns_twice] = ACTIONS(9),
    [anon_sym_safestack] = ACTIONS(9),
    [anon_sym_sanitize_address] = ACTIONS(9),
    [anon_sym_sanitize_hwaddress] = ACTIONS(9),
    [anon_sym_sanitize_memory] = ACTIONS(9),
    [anon_sym_sanitize_memtag] = ACTIONS(9),
    [anon_sym_sanitize_thread] = ACTIONS(9),
    [anon_sym_section] = ACTIONS(9),
    [anon_sym_seq_cst] = ACTIONS(9),
    [anon_sym_shadowcallstack] = ACTIONS(9),
    [anon_sym_sideeffect] = ACTIONS(9),
    [anon_sym_signext] = ACTIONS(9),
    [anon_sym_source_filename] = ACTIONS(9),
    [anon_sym_speculatable] = ACTIONS(9),
    [anon_sym_speculative_load_hardening] = ACTIONS(9),
    [anon_sym_spir_func] = ACTIONS(9),
    [anon_sym_spir_kernel] = ACTIONS(9),
    [anon_sym_sret] = ACTIONS(9),
    [anon_sym_ssp] = ACTIONS(9),
    [anon_sym_sspreq] = ACTIONS(9),
    [anon_sym_sspstrong] = ACTIONS(9),
    [anon_sym_strictfp] = ACTIONS(9),
    [anon_sym_swiftcc] = ACTIONS(9),
    [anon_sym_swifterror] = ACTIONS(9),
    [anon_sym_swifttailcc] = ACTIONS(9),
    [anon_sym_swiftself] = ACTIONS(9),
    [anon_sym_syncscope] = ACTIONS(9),
    [anon_sym_tail] = ACTIONS(9),
    [anon_sym_tailcc] = ACTIONS(9),
    [anon_sym_target] = ACTIONS(9),
    [anon_sym_thread_local] = ACTIONS(9),
    [anon_sym_to] = ACTIONS(9),
    [anon_sym_triple] = ACTIONS(9),
    [anon_sym_unnamed_addr] = ACTIONS(9),
    [anon_sym_unordered] = ACTIONS(9),
    [anon_sym_uselistorder] = ACTIONS(9),
    [anon_sym_uselistorder_bb] = ACTIONS(9),
    [anon_sym_uwtable] = ACTIONS(9),
    [anon_sym_volatile] = ACTIONS(9),
    [anon_sym_weak] = ACTIONS(9),
    [anon_sym_weak_odr] = ACTIONS(9),
    [anon_sym_willreturn] = ACTIONS(9),
    [anon_sym_win64cc] = ACTIONS(9),
    [anon_sym_within] = ACTIONS(9),
    [anon_sym_writeonly] = ACTIONS(9),
    [anon_sym_x] = ACTIONS(9),
    [anon_sym_x86_64_sysvcc] = ACTIONS(9),
    [anon_sym_x86_fastcallcc] = ACTIONS(9),
    [anon_sym_x86_stdcallcc] = ACTIONS(9),
    [anon_sym_x86_thiscallcc] = ACTIONS(9),
    [anon_sym_zeroext] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_zeroinitializer] = ACTIONS(17),
    [anon_sym_undef] = ACTIONS(17),
    [anon_sym_null] = ACTIONS(17),
    [anon_sym_none] = ACTIONS(17),
    [anon_sym_poison] = ACTIONS(17),
    [anon_sym_vscale] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [sym_string] = ACTIONS(19),
    [sym_label] = ACTIONS(19),
    [aux_sym_identifier_token1] = ACTIONS(21),
    [aux_sym_identifier_token2] = ACTIONS(21),
    [aux_sym_identifier_token3] = ACTIONS(23),
    [aux_sym_identifier_token4] = ACTIONS(23),
    [aux_sym_identifier_token5] = ACTIONS(23),
    [aux_sym_identifier_token6] = ACTIONS(23),
    [aux_sym_identifier_token7] = ACTIONS(23),
    [aux_sym_identifier_token8] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_EQ] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(29),
  },
  [2] = {
    [sym_type] = STATE(3),
    [sym_statement] = STATE(3),
    [sym_keyword] = STATE(3),
    [sym_float] = STATE(3),
    [sym_boolean] = STATE(3),
    [sym_constant] = STATE(3),
    [sym_identifier] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_bracket] = STATE(3),
    [aux_sym_module_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_void] = ACTIONS(5),
    [anon_sym_half] = ACTIONS(5),
    [anon_sym_bfloat] = ACTIONS(5),
    [anon_sym_float] = ACTIONS(5),
    [anon_sym_double] = ACTIONS(5),
    [anon_sym_x86_fp80] = ACTIONS(5),
    [anon_sym_fp128] = ACTIONS(5),
    [anon_sym_pcc_fp128] = ACTIONS(5),
    [anon_sym_label] = ACTIONS(5),
    [anon_sym_metadata] = ACTIONS(5),
    [anon_sym_x86_mmx] = ACTIONS(5),
    [anon_sym_x86_amx] = ACTIONS(5),
    [aux_sym_type_token1] = ACTIONS(5),
    [anon_sym_add] = ACTIONS(7),
    [anon_sym_addrspacecast] = ACTIONS(7),
    [anon_sym_alloca] = ACTIONS(7),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_arcp] = ACTIONS(7),
    [anon_sym_ashr] = ACTIONS(7),
    [anon_sym_atomicrmw] = ACTIONS(7),
    [anon_sym_bitcast] = ACTIONS(7),
    [anon_sym_br] = ACTIONS(7),
    [anon_sym_catchpad] = ACTIONS(7),
    [anon_sym_catchswitch] = ACTIONS(7),
    [anon_sym_catchret] = ACTIONS(7),
    [anon_sym_call] = ACTIONS(7),
    [anon_sym_callbr] = ACTIONS(7),
    [anon_sym_cleanuppad] = ACTIONS(7),
    [anon_sym_cleanupret] = ACTIONS(7),
    [anon_sym_cmpxchg] = ACTIONS(7),
    [anon_sym_eq] = ACTIONS(7),
    [anon_sym_exact] = ACTIONS(7),
    [anon_sym_extractelement] = ACTIONS(7),
    [anon_sym_extractvalue] = ACTIONS(7),
    [anon_sym_fadd] = ACTIONS(7),
    [anon_sym_fast] = ACTIONS(7),
    [anon_sym_fcmp] = ACTIONS(7),
    [anon_sym_fdiv] = ACTIONS(7),
    [anon_sym_fence] = ACTIONS(7),
    [anon_sym_fmul] = ACTIONS(7),
    [anon_sym_fneg] = ACTIONS(7),
    [anon_sym_fpext] = ACTIONS(7),
    [anon_sym_fptosi] = ACTIONS(7),
    [anon_sym_fptoui] = ACTIONS(7),
    [anon_sym_fptrunc] = ACTIONS(7),
    [anon_sym_free] = ACTIONS(7),
    [anon_sym_freeze] = ACTIONS(7),
    [anon_sym_frem] = ACTIONS(7),
    [anon_sym_fsub] = ACTIONS(7),
    [anon_sym_getelementptr] = ACTIONS(7),
    [anon_sym_icmp] = ACTIONS(7),
    [anon_sym_inbounds] = ACTIONS(7),
    [anon_sym_indirectbr] = ACTIONS(7),
    [anon_sym_insertelement] = ACTIONS(7),
    [anon_sym_insertvalue] = ACTIONS(7),
    [anon_sym_inttoptr] = ACTIONS(7),
    [anon_sym_invoke] = ACTIONS(7),
    [anon_sym_landingpad] = ACTIONS(7),
    [anon_sym_load] = ACTIONS(7),
    [anon_sym_lshr] = ACTIONS(7),
    [anon_sym_malloc] = ACTIONS(7),
    [anon_sym_max] = ACTIONS(7),
    [anon_sym_min] = ACTIONS(7),
    [anon_sym_mul] = ACTIONS(7),
    [anon_sym_nand] = ACTIONS(7),
    [anon_sym_ne] = ACTIONS(7),
    [anon_sym_ninf] = ACTIONS(7),
    [anon_sym_nnan] = ACTIONS(7),
    [anon_sym_nsw] = ACTIONS(7),
    [anon_sym_nsz] = ACTIONS(7),
    [anon_sym_nuw] = ACTIONS(7),
    [anon_sym_oeq] = ACTIONS(7),
    [anon_sym_oge] = ACTIONS(7),
    [anon_sym_ogt] = ACTIONS(7),
    [anon_sym_ole] = ACTIONS(7),
    [anon_sym_olt] = ACTIONS(7),
    [anon_sym_one] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_ord] = ACTIONS(7),
    [anon_sym_phi] = ACTIONS(7),
    [anon_sym_ptrtoint] = ACTIONS(7),
    [anon_sym_resume] = ACTIONS(7),
    [anon_sym_ret] = ACTIONS(7),
    [anon_sym_sdiv] = ACTIONS(7),
    [anon_sym_select] = ACTIONS(7),
    [anon_sym_sext] = ACTIONS(7),
    [anon_sym_sge] = ACTIONS(7),
    [anon_sym_sgt] = ACTIONS(7),
    [anon_sym_shl] = ACTIONS(7),
    [anon_sym_shufflevector] = ACTIONS(7),
    [anon_sym_sitofp] = ACTIONS(7),
    [anon_sym_sle] = ACTIONS(7),
    [anon_sym_slt] = ACTIONS(7),
    [anon_sym_srem] = ACTIONS(7),
    [anon_sym_store] = ACTIONS(7),
    [anon_sym_sub] = ACTIONS(7),
    [anon_sym_switch] = ACTIONS(7),
    [anon_sym_trunc] = ACTIONS(7),
    [anon_sym_udiv] = ACTIONS(7),
    [anon_sym_ueq] = ACTIONS(7),
    [anon_sym_uge] = ACTIONS(7),
    [anon_sym_ugt] = ACTIONS(7),
    [anon_sym_uitofp] = ACTIONS(7),
    [anon_sym_ule] = ACTIONS(7),
    [anon_sym_ult] = ACTIONS(7),
    [anon_sym_umax] = ACTIONS(7),
    [anon_sym_umin] = ACTIONS(7),
    [anon_sym_une] = ACTIONS(7),
    [anon_sym_uno] = ACTIONS(7),
    [anon_sym_unreachable] = ACTIONS(7),
    [anon_sym_unwind] = ACTIONS(7),
    [anon_sym_urem] = ACTIONS(7),
    [anon_sym_va_arg] = ACTIONS(7),
    [anon_sym_xchg] = ACTIONS(7),
    [anon_sym_xor] = ACTIONS(7),
    [anon_sym_zext] = ACTIONS(7),
    [anon_sym_acq_rel] = ACTIONS(9),
    [anon_sym_acquire] = ACTIONS(9),
    [anon_sym_addrspace] = ACTIONS(9),
    [anon_sym_alias] = ACTIONS(9),
    [anon_sym_align] = ACTIONS(9),
    [anon_sym_alignstack] = ACTIONS(9),
    [anon_sym_allocsize] = ACTIONS(9),
    [anon_sym_alwaysinline] = ACTIONS(9),
    [anon_sym_appending] = ACTIONS(9),
    [anon_sym_argmemonly] = ACTIONS(9),
    [anon_sym_arm_aapcs_vfpcc] = ACTIONS(9),
    [anon_sym_arm_aapcscc] = ACTIONS(9),
    [anon_sym_arm_apcscc] = ACTIONS(9),
    [anon_sym_asm] = ACTIONS(9),
    [anon_sym_atomic] = ACTIONS(9),
    [anon_sym_available_externally] = ACTIONS(9),
    [anon_sym_blockaddress] = ACTIONS(9),
    [anon_sym_builtin] = ACTIONS(9),
    [anon_sym_byref] = ACTIONS(9),
    [anon_sym_byval] = ACTIONS(9),
    [anon_sym_c] = ACTIONS(9),
    [anon_sym_caller] = ACTIONS(9),
    [anon_sym_catch] = ACTIONS(9),
    [anon_sym_cc] = ACTIONS(9),
    [anon_sym_ccc] = ACTIONS(9),
    [anon_sym_cleanup] = ACTIONS(9),
    [anon_sym_cold] = ACTIONS(9),
    [anon_sym_coldcc] = ACTIONS(9),
    [anon_sym_comdat] = ACTIONS(9),
    [anon_sym_common] = ACTIONS(9),
    [anon_sym_constant] = ACTIONS(9),
    [anon_sym_convergent] = ACTIONS(9),
    [anon_sym_datalayout] = ACTIONS(9),
    [anon_sym_declare] = ACTIONS(9),
    [anon_sym_default] = ACTIONS(9),
    [anon_sym_define] = ACTIONS(9),
    [anon_sym_deplibs] = ACTIONS(9),
    [anon_sym_dereferenceable] = ACTIONS(9),
    [anon_sym_dereferenceable_or_null] = ACTIONS(9),
    [anon_sym_distinct] = ACTIONS(9),
    [anon_sym_dllexport] = ACTIONS(9),
    [anon_sym_dllimport] = ACTIONS(9),
    [anon_sym_dso_local] = ACTIONS(9),
    [anon_sym_dso_preemptable] = ACTIONS(9),
    [anon_sym_except] = ACTIONS(9),
    [anon_sym_extern_weak] = ACTIONS(9),
    [anon_sym_external] = ACTIONS(9),
    [anon_sym_externally_initialized] = ACTIONS(9),
    [anon_sym_fastcc] = ACTIONS(9),
    [anon_sym_filter] = ACTIONS(9),
    [anon_sym_from] = ACTIONS(9),
    [anon_sym_gc] = ACTIONS(9),
    [anon_sym_global] = ACTIONS(9),
    [anon_sym_hhvm_ccc] = ACTIONS(9),
    [anon_sym_hhvmcc] = ACTIONS(9),
    [anon_sym_hidden] = ACTIONS(9),
    [anon_sym_hot] = ACTIONS(9),
    [anon_sym_immarg] = ACTIONS(9),
    [anon_sym_inaccessiblemem_or_argmemonly] = ACTIONS(9),
    [anon_sym_inaccessiblememonly] = ACTIONS(9),
    [anon_sym_inalloca] = ACTIONS(9),
    [anon_sym_initialexec] = ACTIONS(9),
    [anon_sym_inlinehint] = ACTIONS(9),
    [anon_sym_inreg] = ACTIONS(9),
    [anon_sym_intel_ocl_bicc] = ACTIONS(9),
    [anon_sym_inteldialect] = ACTIONS(9),
    [anon_sym_internal] = ACTIONS(9),
    [anon_sym_jumptable] = ACTIONS(9),
    [anon_sym_linkonce] = ACTIONS(9),
    [anon_sym_linkonce_odr] = ACTIONS(9),
    [anon_sym_local_unnamed_addr] = ACTIONS(9),
    [anon_sym_localdynamic] = ACTIONS(9),
    [anon_sym_localexec] = ACTIONS(9),
    [anon_sym_minsize] = ACTIONS(9),
    [anon_sym_module] = ACTIONS(9),
    [anon_sym_monotonic] = ACTIONS(9),
    [anon_sym_msp430_intrcc] = ACTIONS(9),
    [anon_sym_mustprogress] = ACTIONS(9),
    [anon_sym_musttail] = ACTIONS(9),
    [anon_sym_naked] = ACTIONS(9),
    [anon_sym_nest] = ACTIONS(9),
    [anon_sym_noalias] = ACTIONS(9),
    [anon_sym_nobuiltin] = ACTIONS(9),
    [anon_sym_nocallback] = ACTIONS(9),
    [anon_sym_nocapture] = ACTIONS(9),
    [anon_sym_nocf_check] = ACTIONS(9),
    [anon_sym_noduplicate] = ACTIONS(9),
    [anon_sym_nofree] = ACTIONS(9),
    [anon_sym_noimplicitfloat] = ACTIONS(9),
    [anon_sym_noinline] = ACTIONS(9),
    [anon_sym_nomerge] = ACTIONS(9),
    [anon_sym_nonlazybind] = ACTIONS(9),
    [anon_sym_nonnull] = ACTIONS(9),
    [anon_sym_noprofile] = ACTIONS(9),
    [anon_sym_norecurse] = ACTIONS(9),
    [anon_sym_noredzone] = ACTIONS(9),
    [anon_sym_noreturn] = ACTIONS(9),
    [anon_sym_nosync] = ACTIONS(9),
    [anon_sym_noundef] = ACTIONS(9),
    [anon_sym_nounwind] = ACTIONS(9),
    [anon_sym_nosanitize_coverage] = ACTIONS(9),
    [anon_sym_null_pointer_is_valid] = ACTIONS(9),
    [anon_sym_optforfuzzing] = ACTIONS(9),
    [anon_sym_optnone] = ACTIONS(9),
    [anon_sym_optsize] = ACTIONS(9),
    [anon_sym_personality] = ACTIONS(9),
    [anon_sym_preallocated] = ACTIONS(9),
    [anon_sym_private] = ACTIONS(9),
    [anon_sym_protected] = ACTIONS(9),
    [anon_sym_ptx_device] = ACTIONS(9),
    [anon_sym_ptx_kernel] = ACTIONS(9),
    [anon_sym_readnone] = ACTIONS(9),
    [anon_sym_readonly] = ACTIONS(9),
    [anon_sym_release] = ACTIONS(9),
    [anon_sym_returned] = ACTIONS(9),
    [anon_sym_returns_twice] = ACTIONS(9),
    [anon_sym_safestack] = ACTIONS(9),
    [anon_sym_sanitize_address] = ACTIONS(9),
    [anon_sym_sanitize_hwaddress] = ACTIONS(9),
    [anon_sym_sanitize_memory] = ACTIONS(9),
    [anon_sym_sanitize_memtag] = ACTIONS(9),
    [anon_sym_sanitize_thread] = ACTIONS(9),
    [anon_sym_section] = ACTIONS(9),
    [anon_sym_seq_cst] = ACTIONS(9),
    [anon_sym_shadowcallstack] = ACTIONS(9),
    [anon_sym_sideeffect] = ACTIONS(9),
    [anon_sym_signext] = ACTIONS(9),
    [anon_sym_source_filename] = ACTIONS(9),
    [anon_sym_speculatable] = ACTIONS(9),
    [anon_sym_speculative_load_hardening] = ACTIONS(9),
    [anon_sym_spir_func] = ACTIONS(9),
    [anon_sym_spir_kernel] = ACTIONS(9),
    [anon_sym_sret] = ACTIONS(9),
    [anon_sym_ssp] = ACTIONS(9),
    [anon_sym_sspreq] = ACTIONS(9),
    [anon_sym_sspstrong] = ACTIONS(9),
    [anon_sym_strictfp] = ACTIONS(9),
    [anon_sym_swiftcc] = ACTIONS(9),
    [anon_sym_swifterror] = ACTIONS(9),
    [anon_sym_swifttailcc] = ACTIONS(9),
    [anon_sym_swiftself] = ACTIONS(9),
    [anon_sym_syncscope] = ACTIONS(9),
    [anon_sym_tail] = ACTIONS(9),
    [anon_sym_tailcc] = ACTIONS(9),
    [anon_sym_target] = ACTIONS(9),
    [anon_sym_thread_local] = ACTIONS(9),
    [anon_sym_to] = ACTIONS(9),
    [anon_sym_triple] = ACTIONS(9),
    [anon_sym_unnamed_addr] = ACTIONS(9),
    [anon_sym_unordered] = ACTIONS(9),
    [anon_sym_uselistorder] = ACTIONS(9),
    [anon_sym_uselistorder_bb] = ACTIONS(9),
    [anon_sym_uwtable] = ACTIONS(9),
    [anon_sym_volatile] = ACTIONS(9),
    [anon_sym_weak] = ACTIONS(9),
    [anon_sym_weak_odr] = ACTIONS(9),
    [anon_sym_willreturn] = ACTIONS(9),
    [anon_sym_win64cc] = ACTIONS(9),
    [anon_sym_within] = ACTIONS(9),
    [anon_sym_writeonly] = ACTIONS(9),
    [anon_sym_x] = ACTIONS(9),
    [anon_sym_x86_64_sysvcc] = ACTIONS(9),
    [anon_sym_x86_fastcallcc] = ACTIONS(9),
    [anon_sym_x86_stdcallcc] = ACTIONS(9),
    [anon_sym_x86_thiscallcc] = ACTIONS(9),
    [anon_sym_zeroext] = ACTIONS(9),
    [sym_number] = ACTIONS(33),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_zeroinitializer] = ACTIONS(17),
    [anon_sym_undef] = ACTIONS(17),
    [anon_sym_null] = ACTIONS(17),
    [anon_sym_none] = ACTIONS(17),
    [anon_sym_poison] = ACTIONS(17),
    [anon_sym_vscale] = ACTIONS(17),
    [sym_comment] = ACTIONS(35),
    [sym_string] = ACTIONS(35),
    [sym_label] = ACTIONS(35),
    [aux_sym_identifier_token1] = ACTIONS(21),
    [aux_sym_identifier_token2] = ACTIONS(21),
    [aux_sym_identifier_token3] = ACTIONS(23),
    [aux_sym_identifier_token4] = ACTIONS(23),
    [aux_sym_identifier_token5] = ACTIONS(23),
    [aux_sym_identifier_token6] = ACTIONS(23),
    [aux_sym_identifier_token7] = ACTIONS(23),
    [aux_sym_identifier_token8] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_EQ] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(29),
  },
  [3] = {
    [sym_type] = STATE(3),
    [sym_statement] = STATE(3),
    [sym_keyword] = STATE(3),
    [sym_float] = STATE(3),
    [sym_boolean] = STATE(3),
    [sym_constant] = STATE(3),
    [sym_identifier] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_bracket] = STATE(3),
    [aux_sym_module_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_void] = ACTIONS(39),
    [anon_sym_half] = ACTIONS(39),
    [anon_sym_bfloat] = ACTIONS(39),
    [anon_sym_float] = ACTIONS(39),
    [anon_sym_double] = ACTIONS(39),
    [anon_sym_x86_fp80] = ACTIONS(39),
    [anon_sym_fp128] = ACTIONS(39),
    [anon_sym_pcc_fp128] = ACTIONS(39),
    [anon_sym_label] = ACTIONS(39),
    [anon_sym_metadata] = ACTIONS(39),
    [anon_sym_x86_mmx] = ACTIONS(39),
    [anon_sym_x86_amx] = ACTIONS(39),
    [aux_sym_type_token1] = ACTIONS(39),
    [anon_sym_add] = ACTIONS(42),
    [anon_sym_addrspacecast] = ACTIONS(42),
    [anon_sym_alloca] = ACTIONS(42),
    [anon_sym_and] = ACTIONS(42),
    [anon_sym_arcp] = ACTIONS(42),
    [anon_sym_ashr] = ACTIONS(42),
    [anon_sym_atomicrmw] = ACTIONS(42),
    [anon_sym_bitcast] = ACTIONS(42),
    [anon_sym_br] = ACTIONS(42),
    [anon_sym_catchpad] = ACTIONS(42),
    [anon_sym_catchswitch] = ACTIONS(42),
    [anon_sym_catchret] = ACTIONS(42),
    [anon_sym_call] = ACTIONS(42),
    [anon_sym_callbr] = ACTIONS(42),
    [anon_sym_cleanuppad] = ACTIONS(42),
    [anon_sym_cleanupret] = ACTIONS(42),
    [anon_sym_cmpxchg] = ACTIONS(42),
    [anon_sym_eq] = ACTIONS(42),
    [anon_sym_exact] = ACTIONS(42),
    [anon_sym_extractelement] = ACTIONS(42),
    [anon_sym_extractvalue] = ACTIONS(42),
    [anon_sym_fadd] = ACTIONS(42),
    [anon_sym_fast] = ACTIONS(42),
    [anon_sym_fcmp] = ACTIONS(42),
    [anon_sym_fdiv] = ACTIONS(42),
    [anon_sym_fence] = ACTIONS(42),
    [anon_sym_fmul] = ACTIONS(42),
    [anon_sym_fneg] = ACTIONS(42),
    [anon_sym_fpext] = ACTIONS(42),
    [anon_sym_fptosi] = ACTIONS(42),
    [anon_sym_fptoui] = ACTIONS(42),
    [anon_sym_fptrunc] = ACTIONS(42),
    [anon_sym_free] = ACTIONS(42),
    [anon_sym_freeze] = ACTIONS(42),
    [anon_sym_frem] = ACTIONS(42),
    [anon_sym_fsub] = ACTIONS(42),
    [anon_sym_getelementptr] = ACTIONS(42),
    [anon_sym_icmp] = ACTIONS(42),
    [anon_sym_inbounds] = ACTIONS(42),
    [anon_sym_indirectbr] = ACTIONS(42),
    [anon_sym_insertelement] = ACTIONS(42),
    [anon_sym_insertvalue] = ACTIONS(42),
    [anon_sym_inttoptr] = ACTIONS(42),
    [anon_sym_invoke] = ACTIONS(42),
    [anon_sym_landingpad] = ACTIONS(42),
    [anon_sym_load] = ACTIONS(42),
    [anon_sym_lshr] = ACTIONS(42),
    [anon_sym_malloc] = ACTIONS(42),
    [anon_sym_max] = ACTIONS(42),
    [anon_sym_min] = ACTIONS(42),
    [anon_sym_mul] = ACTIONS(42),
    [anon_sym_nand] = ACTIONS(42),
    [anon_sym_ne] = ACTIONS(42),
    [anon_sym_ninf] = ACTIONS(42),
    [anon_sym_nnan] = ACTIONS(42),
    [anon_sym_nsw] = ACTIONS(42),
    [anon_sym_nsz] = ACTIONS(42),
    [anon_sym_nuw] = ACTIONS(42),
    [anon_sym_oeq] = ACTIONS(42),
    [anon_sym_oge] = ACTIONS(42),
    [anon_sym_ogt] = ACTIONS(42),
    [anon_sym_ole] = ACTIONS(42),
    [anon_sym_olt] = ACTIONS(42),
    [anon_sym_one] = ACTIONS(42),
    [anon_sym_or] = ACTIONS(42),
    [anon_sym_ord] = ACTIONS(42),
    [anon_sym_phi] = ACTIONS(42),
    [anon_sym_ptrtoint] = ACTIONS(42),
    [anon_sym_resume] = ACTIONS(42),
    [anon_sym_ret] = ACTIONS(42),
    [anon_sym_sdiv] = ACTIONS(42),
    [anon_sym_select] = ACTIONS(42),
    [anon_sym_sext] = ACTIONS(42),
    [anon_sym_sge] = ACTIONS(42),
    [anon_sym_sgt] = ACTIONS(42),
    [anon_sym_shl] = ACTIONS(42),
    [anon_sym_shufflevector] = ACTIONS(42),
    [anon_sym_sitofp] = ACTIONS(42),
    [anon_sym_sle] = ACTIONS(42),
    [anon_sym_slt] = ACTIONS(42),
    [anon_sym_srem] = ACTIONS(42),
    [anon_sym_store] = ACTIONS(42),
    [anon_sym_sub] = ACTIONS(42),
    [anon_sym_switch] = ACTIONS(42),
    [anon_sym_trunc] = ACTIONS(42),
    [anon_sym_udiv] = ACTIONS(42),
    [anon_sym_ueq] = ACTIONS(42),
    [anon_sym_uge] = ACTIONS(42),
    [anon_sym_ugt] = ACTIONS(42),
    [anon_sym_uitofp] = ACTIONS(42),
    [anon_sym_ule] = ACTIONS(42),
    [anon_sym_ult] = ACTIONS(42),
    [anon_sym_umax] = ACTIONS(42),
    [anon_sym_umin] = ACTIONS(42),
    [anon_sym_une] = ACTIONS(42),
    [anon_sym_uno] = ACTIONS(42),
    [anon_sym_unreachable] = ACTIONS(42),
    [anon_sym_unwind] = ACTIONS(42),
    [anon_sym_urem] = ACTIONS(42),
    [anon_sym_va_arg] = ACTIONS(42),
    [anon_sym_xchg] = ACTIONS(42),
    [anon_sym_xor] = ACTIONS(42),
    [anon_sym_zext] = ACTIONS(42),
    [anon_sym_acq_rel] = ACTIONS(45),
    [anon_sym_acquire] = ACTIONS(45),
    [anon_sym_addrspace] = ACTIONS(45),
    [anon_sym_alias] = ACTIONS(45),
    [anon_sym_align] = ACTIONS(45),
    [anon_sym_alignstack] = ACTIONS(45),
    [anon_sym_allocsize] = ACTIONS(45),
    [anon_sym_alwaysinline] = ACTIONS(45),
    [anon_sym_appending] = ACTIONS(45),
    [anon_sym_argmemonly] = ACTIONS(45),
    [anon_sym_arm_aapcs_vfpcc] = ACTIONS(45),
    [anon_sym_arm_aapcscc] = ACTIONS(45),
    [anon_sym_arm_apcscc] = ACTIONS(45),
    [anon_sym_asm] = ACTIONS(45),
    [anon_sym_atomic] = ACTIONS(45),
    [anon_sym_available_externally] = ACTIONS(45),
    [anon_sym_blockaddress] = ACTIONS(45),
    [anon_sym_builtin] = ACTIONS(45),
    [anon_sym_byref] = ACTIONS(45),
    [anon_sym_byval] = ACTIONS(45),
    [anon_sym_c] = ACTIONS(45),
    [anon_sym_caller] = ACTIONS(45),
    [anon_sym_catch] = ACTIONS(45),
    [anon_sym_cc] = ACTIONS(45),
    [anon_sym_ccc] = ACTIONS(45),
    [anon_sym_cleanup] = ACTIONS(45),
    [anon_sym_cold] = ACTIONS(45),
    [anon_sym_coldcc] = ACTIONS(45),
    [anon_sym_comdat] = ACTIONS(45),
    [anon_sym_common] = ACTIONS(45),
    [anon_sym_constant] = ACTIONS(45),
    [anon_sym_convergent] = ACTIONS(45),
    [anon_sym_datalayout] = ACTIONS(45),
    [anon_sym_declare] = ACTIONS(45),
    [anon_sym_default] = ACTIONS(45),
    [anon_sym_define] = ACTIONS(45),
    [anon_sym_deplibs] = ACTIONS(45),
    [anon_sym_dereferenceable] = ACTIONS(45),
    [anon_sym_dereferenceable_or_null] = ACTIONS(45),
    [anon_sym_distinct] = ACTIONS(45),
    [anon_sym_dllexport] = ACTIONS(45),
    [anon_sym_dllimport] = ACTIONS(45),
    [anon_sym_dso_local] = ACTIONS(45),
    [anon_sym_dso_preemptable] = ACTIONS(45),
    [anon_sym_except] = ACTIONS(45),
    [anon_sym_extern_weak] = ACTIONS(45),
    [anon_sym_external] = ACTIONS(45),
    [anon_sym_externally_initialized] = ACTIONS(45),
    [anon_sym_fastcc] = ACTIONS(45),
    [anon_sym_filter] = ACTIONS(45),
    [anon_sym_from] = ACTIONS(45),
    [anon_sym_gc] = ACTIONS(45),
    [anon_sym_global] = ACTIONS(45),
    [anon_sym_hhvm_ccc] = ACTIONS(45),
    [anon_sym_hhvmcc] = ACTIONS(45),
    [anon_sym_hidden] = ACTIONS(45),
    [anon_sym_hot] = ACTIONS(45),
    [anon_sym_immarg] = ACTIONS(45),
    [anon_sym_inaccessiblemem_or_argmemonly] = ACTIONS(45),
    [anon_sym_inaccessiblememonly] = ACTIONS(45),
    [anon_sym_inalloca] = ACTIONS(45),
    [anon_sym_initialexec] = ACTIONS(45),
    [anon_sym_inlinehint] = ACTIONS(45),
    [anon_sym_inreg] = ACTIONS(45),
    [anon_sym_intel_ocl_bicc] = ACTIONS(45),
    [anon_sym_inteldialect] = ACTIONS(45),
    [anon_sym_internal] = ACTIONS(45),
    [anon_sym_jumptable] = ACTIONS(45),
    [anon_sym_linkonce] = ACTIONS(45),
    [anon_sym_linkonce_odr] = ACTIONS(45),
    [anon_sym_local_unnamed_addr] = ACTIONS(45),
    [anon_sym_localdynamic] = ACTIONS(45),
    [anon_sym_localexec] = ACTIONS(45),
    [anon_sym_minsize] = ACTIONS(45),
    [anon_sym_module] = ACTIONS(45),
    [anon_sym_monotonic] = ACTIONS(45),
    [anon_sym_msp430_intrcc] = ACTIONS(45),
    [anon_sym_mustprogress] = ACTIONS(45),
    [anon_sym_musttail] = ACTIONS(45),
    [anon_sym_naked] = ACTIONS(45),
    [anon_sym_nest] = ACTIONS(45),
    [anon_sym_noalias] = ACTIONS(45),
    [anon_sym_nobuiltin] = ACTIONS(45),
    [anon_sym_nocallback] = ACTIONS(45),
    [anon_sym_nocapture] = ACTIONS(45),
    [anon_sym_nocf_check] = ACTIONS(45),
    [anon_sym_noduplicate] = ACTIONS(45),
    [anon_sym_nofree] = ACTIONS(45),
    [anon_sym_noimplicitfloat] = ACTIONS(45),
    [anon_sym_noinline] = ACTIONS(45),
    [anon_sym_nomerge] = ACTIONS(45),
    [anon_sym_nonlazybind] = ACTIONS(45),
    [anon_sym_nonnull] = ACTIONS(45),
    [anon_sym_noprofile] = ACTIONS(45),
    [anon_sym_norecurse] = ACTIONS(45),
    [anon_sym_noredzone] = ACTIONS(45),
    [anon_sym_noreturn] = ACTIONS(45),
    [anon_sym_nosync] = ACTIONS(45),
    [anon_sym_noundef] = ACTIONS(45),
    [anon_sym_nounwind] = ACTIONS(45),
    [anon_sym_nosanitize_coverage] = ACTIONS(45),
    [anon_sym_null_pointer_is_valid] = ACTIONS(45),
    [anon_sym_optforfuzzing] = ACTIONS(45),
    [anon_sym_optnone] = ACTIONS(45),
    [anon_sym_optsize] = ACTIONS(45),
    [anon_sym_personality] = ACTIONS(45),
    [anon_sym_preallocated] = ACTIONS(45),
    [anon_sym_private] = ACTIONS(45),
    [anon_sym_protected] = ACTIONS(45),
    [anon_sym_ptx_device] = ACTIONS(45),
    [anon_sym_ptx_kernel] = ACTIONS(45),
    [anon_sym_readnone] = ACTIONS(45),
    [anon_sym_readonly] = ACTIONS(45),
    [anon_sym_release] = ACTIONS(45),
    [anon_sym_returned] = ACTIONS(45),
    [anon_sym_returns_twice] = ACTIONS(45),
    [anon_sym_safestack] = ACTIONS(45),
    [anon_sym_sanitize_address] = ACTIONS(45),
    [anon_sym_sanitize_hwaddress] = ACTIONS(45),
    [anon_sym_sanitize_memory] = ACTIONS(45),
    [anon_sym_sanitize_memtag] = ACTIONS(45),
    [anon_sym_sanitize_thread] = ACTIONS(45),
    [anon_sym_section] = ACTIONS(45),
    [anon_sym_seq_cst] = ACTIONS(45),
    [anon_sym_shadowcallstack] = ACTIONS(45),
    [anon_sym_sideeffect] = ACTIONS(45),
    [anon_sym_signext] = ACTIONS(45),
    [anon_sym_source_filename] = ACTIONS(45),
    [anon_sym_speculatable] = ACTIONS(45),
    [anon_sym_speculative_load_hardening] = ACTIONS(45),
    [anon_sym_spir_func] = ACTIONS(45),
    [anon_sym_spir_kernel] = ACTIONS(45),
    [anon_sym_sret] = ACTIONS(45),
    [anon_sym_ssp] = ACTIONS(45),
    [anon_sym_sspreq] = ACTIONS(45),
    [anon_sym_sspstrong] = ACTIONS(45),
    [anon_sym_strictfp] = ACTIONS(45),
    [anon_sym_swiftcc] = ACTIONS(45),
    [anon_sym_swifterror] = ACTIONS(45),
    [anon_sym_swifttailcc] = ACTIONS(45),
    [anon_sym_swiftself] = ACTIONS(45),
    [anon_sym_syncscope] = ACTIONS(45),
    [anon_sym_tail] = ACTIONS(45),
    [anon_sym_tailcc] = ACTIONS(45),
    [anon_sym_target] = ACTIONS(45),
    [anon_sym_thread_local] = ACTIONS(45),
    [anon_sym_to] = ACTIONS(45),
    [anon_sym_triple] = ACTIONS(45),
    [anon_sym_unnamed_addr] = ACTIONS(45),
    [anon_sym_unordered] = ACTIONS(45),
    [anon_sym_uselistorder] = ACTIONS(45),
    [anon_sym_uselistorder_bb] = ACTIONS(45),
    [anon_sym_uwtable] = ACTIONS(45),
    [anon_sym_volatile] = ACTIONS(45),
    [anon_sym_weak] = ACTIONS(45),
    [anon_sym_weak_odr] = ACTIONS(45),
    [anon_sym_willreturn] = ACTIONS(45),
    [anon_sym_win64cc] = ACTIONS(45),
    [anon_sym_within] = ACTIONS(45),
    [anon_sym_writeonly] = ACTIONS(45),
    [anon_sym_x] = ACTIONS(45),
    [anon_sym_x86_64_sysvcc] = ACTIONS(45),
    [anon_sym_x86_fastcallcc] = ACTIONS(45),
    [anon_sym_x86_stdcallcc] = ACTIONS(45),
    [anon_sym_x86_thiscallcc] = ACTIONS(45),
    [anon_sym_zeroext] = ACTIONS(45),
    [sym_number] = ACTIONS(48),
    [aux_sym_float_token1] = ACTIONS(51),
    [aux_sym_float_token2] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(54),
    [anon_sym_false] = ACTIONS(54),
    [anon_sym_zeroinitializer] = ACTIONS(57),
    [anon_sym_undef] = ACTIONS(57),
    [anon_sym_null] = ACTIONS(57),
    [anon_sym_none] = ACTIONS(57),
    [anon_sym_poison] = ACTIONS(57),
    [anon_sym_vscale] = ACTIONS(57),
    [sym_comment] = ACTIONS(60),
    [sym_string] = ACTIONS(60),
    [sym_label] = ACTIONS(60),
    [aux_sym_identifier_token1] = ACTIONS(63),
    [aux_sym_identifier_token2] = ACTIONS(63),
    [aux_sym_identifier_token3] = ACTIONS(66),
    [aux_sym_identifier_token4] = ACTIONS(66),
    [aux_sym_identifier_token5] = ACTIONS(66),
    [aux_sym_identifier_token6] = ACTIONS(66),
    [aux_sym_identifier_token7] = ACTIONS(66),
    [aux_sym_identifier_token8] = ACTIONS(66),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(72),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(69),
    [anon_sym_CARET] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_RBRACK] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(75),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_void] = ACTIONS(80),
    [anon_sym_half] = ACTIONS(80),
    [anon_sym_bfloat] = ACTIONS(80),
    [anon_sym_float] = ACTIONS(80),
    [anon_sym_double] = ACTIONS(80),
    [anon_sym_x86_fp80] = ACTIONS(80),
    [anon_sym_fp128] = ACTIONS(80),
    [anon_sym_pcc_fp128] = ACTIONS(80),
    [anon_sym_label] = ACTIONS(80),
    [anon_sym_metadata] = ACTIONS(80),
    [anon_sym_x86_mmx] = ACTIONS(80),
    [anon_sym_x86_amx] = ACTIONS(80),
    [aux_sym_type_token1] = ACTIONS(80),
    [anon_sym_add] = ACTIONS(80),
    [anon_sym_addrspacecast] = ACTIONS(80),
    [anon_sym_alloca] = ACTIONS(80),
    [anon_sym_and] = ACTIONS(80),
    [anon_sym_arcp] = ACTIONS(80),
    [anon_sym_ashr] = ACTIONS(80),
    [anon_sym_atomicrmw] = ACTIONS(80),
    [anon_sym_bitcast] = ACTIONS(80),
    [anon_sym_br] = ACTIONS(80),
    [anon_sym_catchpad] = ACTIONS(80),
    [anon_sym_catchswitch] = ACTIONS(80),
    [anon_sym_catchret] = ACTIONS(80),
    [anon_sym_call] = ACTIONS(80),
    [anon_sym_callbr] = ACTIONS(80),
    [anon_sym_cleanuppad] = ACTIONS(80),
    [anon_sym_cleanupret] = ACTIONS(80),
    [anon_sym_cmpxchg] = ACTIONS(80),
    [anon_sym_eq] = ACTIONS(80),
    [anon_sym_exact] = ACTIONS(80),
    [anon_sym_extractelement] = ACTIONS(80),
    [anon_sym_extractvalue] = ACTIONS(80),
    [anon_sym_fadd] = ACTIONS(80),
    [anon_sym_fast] = ACTIONS(80),
    [anon_sym_fcmp] = ACTIONS(80),
    [anon_sym_fdiv] = ACTIONS(80),
    [anon_sym_fence] = ACTIONS(80),
    [anon_sym_fmul] = ACTIONS(80),
    [anon_sym_fneg] = ACTIONS(80),
    [anon_sym_fpext] = ACTIONS(80),
    [anon_sym_fptosi] = ACTIONS(80),
    [anon_sym_fptoui] = ACTIONS(80),
    [anon_sym_fptrunc] = ACTIONS(80),
    [anon_sym_free] = ACTIONS(80),
    [anon_sym_freeze] = ACTIONS(80),
    [anon_sym_frem] = ACTIONS(80),
    [anon_sym_fsub] = ACTIONS(80),
    [anon_sym_getelementptr] = ACTIONS(80),
    [anon_sym_icmp] = ACTIONS(80),
    [anon_sym_inbounds] = ACTIONS(80),
    [anon_sym_indirectbr] = ACTIONS(80),
    [anon_sym_insertelement] = ACTIONS(80),
    [anon_sym_insertvalue] = ACTIONS(80),
    [anon_sym_inttoptr] = ACTIONS(80),
    [anon_sym_invoke] = ACTIONS(80),
    [anon_sym_landingpad] = ACTIONS(80),
    [anon_sym_load] = ACTIONS(80),
    [anon_sym_lshr] = ACTIONS(80),
    [anon_sym_malloc] = ACTIONS(80),
    [anon_sym_max] = ACTIONS(80),
    [anon_sym_min] = ACTIONS(80),
    [anon_sym_mul] = ACTIONS(80),
    [anon_sym_nand] = ACTIONS(80),
    [anon_sym_ne] = ACTIONS(80),
    [anon_sym_ninf] = ACTIONS(80),
    [anon_sym_nnan] = ACTIONS(80),
    [anon_sym_nsw] = ACTIONS(80),
    [anon_sym_nsz] = ACTIONS(80),
    [anon_sym_nuw] = ACTIONS(80),
    [anon_sym_oeq] = ACTIONS(80),
    [anon_sym_oge] = ACTIONS(80),
    [anon_sym_ogt] = ACTIONS(80),
    [anon_sym_ole] = ACTIONS(80),
    [anon_sym_olt] = ACTIONS(80),
    [anon_sym_one] = ACTIONS(80),
    [anon_sym_or] = ACTIONS(80),
    [anon_sym_ord] = ACTIONS(80),
    [anon_sym_phi] = ACTIONS(80),
    [anon_sym_ptrtoint] = ACTIONS(80),
    [anon_sym_resume] = ACTIONS(80),
    [anon_sym_ret] = ACTIONS(80),
    [anon_sym_sdiv] = ACTIONS(80),
    [anon_sym_select] = ACTIONS(80),
    [anon_sym_sext] = ACTIONS(80),
    [anon_sym_sge] = ACTIONS(80),
    [anon_sym_sgt] = ACTIONS(80),
    [anon_sym_shl] = ACTIONS(80),
    [anon_sym_shufflevector] = ACTIONS(80),
    [anon_sym_sitofp] = ACTIONS(80),
    [anon_sym_sle] = ACTIONS(80),
    [anon_sym_slt] = ACTIONS(80),
    [anon_sym_srem] = ACTIONS(80),
    [anon_sym_store] = ACTIONS(80),
    [anon_sym_sub] = ACTIONS(80),
    [anon_sym_switch] = ACTIONS(80),
    [anon_sym_trunc] = ACTIONS(80),
    [anon_sym_udiv] = ACTIONS(80),
    [anon_sym_ueq] = ACTIONS(80),
    [anon_sym_uge] = ACTIONS(80),
    [anon_sym_ugt] = ACTIONS(80),
    [anon_sym_uitofp] = ACTIONS(80),
    [anon_sym_ule] = ACTIONS(80),
    [anon_sym_ult] = ACTIONS(80),
    [anon_sym_umax] = ACTIONS(80),
    [anon_sym_umin] = ACTIONS(80),
    [anon_sym_une] = ACTIONS(80),
    [anon_sym_uno] = ACTIONS(80),
    [anon_sym_unreachable] = ACTIONS(80),
    [anon_sym_unwind] = ACTIONS(80),
    [anon_sym_urem] = ACTIONS(80),
    [anon_sym_va_arg] = ACTIONS(80),
    [anon_sym_xchg] = ACTIONS(80),
    [anon_sym_xor] = ACTIONS(80),
    [anon_sym_zext] = ACTIONS(80),
    [anon_sym_acq_rel] = ACTIONS(80),
    [anon_sym_acquire] = ACTIONS(80),
    [anon_sym_addrspace] = ACTIONS(80),
    [anon_sym_alias] = ACTIONS(80),
    [anon_sym_align] = ACTIONS(80),
    [anon_sym_alignstack] = ACTIONS(80),
    [anon_sym_allocsize] = ACTIONS(80),
    [anon_sym_alwaysinline] = ACTIONS(80),
    [anon_sym_appending] = ACTIONS(80),
    [anon_sym_argmemonly] = ACTIONS(80),
    [anon_sym_arm_aapcs_vfpcc] = ACTIONS(80),
    [anon_sym_arm_aapcscc] = ACTIONS(80),
    [anon_sym_arm_apcscc] = ACTIONS(80),
    [anon_sym_asm] = ACTIONS(80),
    [anon_sym_atomic] = ACTIONS(80),
    [anon_sym_available_externally] = ACTIONS(80),
    [anon_sym_blockaddress] = ACTIONS(80),
    [anon_sym_builtin] = ACTIONS(80),
    [anon_sym_byref] = ACTIONS(80),
    [anon_sym_byval] = ACTIONS(80),
    [anon_sym_c] = ACTIONS(80),
    [anon_sym_caller] = ACTIONS(80),
    [anon_sym_catch] = ACTIONS(80),
    [anon_sym_cc] = ACTIONS(80),
    [anon_sym_ccc] = ACTIONS(80),
    [anon_sym_cleanup] = ACTIONS(80),
    [anon_sym_cold] = ACTIONS(80),
    [anon_sym_coldcc] = ACTIONS(80),
    [anon_sym_comdat] = ACTIONS(80),
    [anon_sym_common] = ACTIONS(80),
    [anon_sym_constant] = ACTIONS(80),
    [anon_sym_convergent] = ACTIONS(80),
    [anon_sym_datalayout] = ACTIONS(80),
    [anon_sym_declare] = ACTIONS(80),
    [anon_sym_default] = ACTIONS(80),
    [anon_sym_define] = ACTIONS(80),
    [anon_sym_deplibs] = ACTIONS(80),
    [anon_sym_dereferenceable] = ACTIONS(80),
    [anon_sym_dereferenceable_or_null] = ACTIONS(80),
    [anon_sym_distinct] = ACTIONS(80),
    [anon_sym_dllexport] = ACTIONS(80),
    [anon_sym_dllimport] = ACTIONS(80),
    [anon_sym_dso_local] = ACTIONS(80),
    [anon_sym_dso_preemptable] = ACTIONS(80),
    [anon_sym_except] = ACTIONS(80),
    [anon_sym_extern_weak] = ACTIONS(80),
    [anon_sym_external] = ACTIONS(80),
    [anon_sym_externally_initialized] = ACTIONS(80),
    [anon_sym_fastcc] = ACTIONS(80),
    [anon_sym_filter] = ACTIONS(80),
    [anon_sym_from] = ACTIONS(80),
    [anon_sym_gc] = ACTIONS(80),
    [anon_sym_global] = ACTIONS(80),
    [anon_sym_hhvm_ccc] = ACTIONS(80),
    [anon_sym_hhvmcc] = ACTIONS(80),
    [anon_sym_hidden] = ACTIONS(80),
    [anon_sym_hot] = ACTIONS(80),
    [anon_sym_immarg] = ACTIONS(80),
    [anon_sym_inaccessiblemem_or_argmemonly] = ACTIONS(80),
    [anon_sym_inaccessiblememonly] = ACTIONS(80),
    [anon_sym_inalloca] = ACTIONS(80),
    [anon_sym_initialexec] = ACTIONS(80),
    [anon_sym_inlinehint] = ACTIONS(80),
    [anon_sym_inreg] = ACTIONS(80),
    [anon_sym_intel_ocl_bicc] = ACTIONS(80),
    [anon_sym_inteldialect] = ACTIONS(80),
    [anon_sym_internal] = ACTIONS(80),
    [anon_sym_jumptable] = ACTIONS(80),
    [anon_sym_linkonce] = ACTIONS(80),
    [anon_sym_linkonce_odr] = ACTIONS(80),
    [anon_sym_local_unnamed_addr] = ACTIONS(80),
    [anon_sym_localdynamic] = ACTIONS(80),
    [anon_sym_localexec] = ACTIONS(80),
    [anon_sym_minsize] = ACTIONS(80),
    [anon_sym_module] = ACTIONS(80),
    [anon_sym_monotonic] = ACTIONS(80),
    [anon_sym_msp430_intrcc] = ACTIONS(80),
    [anon_sym_mustprogress] = ACTIONS(80),
    [anon_sym_musttail] = ACTIONS(80),
    [anon_sym_naked] = ACTIONS(80),
    [anon_sym_nest] = ACTIONS(80),
    [anon_sym_noalias] = ACTIONS(80),
    [anon_sym_nobuiltin] = ACTIONS(80),
    [anon_sym_nocallback] = ACTIONS(80),
    [anon_sym_nocapture] = ACTIONS(80),
    [anon_sym_nocf_check] = ACTIONS(80),
    [anon_sym_noduplicate] = ACTIONS(80),
    [anon_sym_nofree] = ACTIONS(80),
    [anon_sym_noimplicitfloat] = ACTIONS(80),
    [anon_sym_noinline] = ACTIONS(80),
    [anon_sym_nomerge] = ACTIONS(80),
    [anon_sym_nonlazybind] = ACTIONS(80),
    [anon_sym_nonnull] = ACTIONS(80),
    [anon_sym_noprofile] = ACTIONS(80),
    [anon_sym_norecurse] = ACTIONS(80),
    [anon_sym_noredzone] = ACTIONS(80),
    [anon_sym_noreturn] = ACTIONS(80),
    [anon_sym_nosync] = ACTIONS(80),
    [anon_sym_noundef] = ACTIONS(80),
    [anon_sym_nounwind] = ACTIONS(80),
    [anon_sym_nosanitize_coverage] = ACTIONS(80),
    [anon_sym_null_pointer_is_valid] = ACTIONS(80),
    [anon_sym_optforfuzzing] = ACTIONS(80),
    [anon_sym_optnone] = ACTIONS(80),
    [anon_sym_optsize] = ACTIONS(80),
    [anon_sym_personality] = ACTIONS(80),
    [anon_sym_preallocated] = ACTIONS(80),
    [anon_sym_private] = ACTIONS(80),
    [anon_sym_protected] = ACTIONS(80),
    [anon_sym_ptx_device] = ACTIONS(80),
    [anon_sym_ptx_kernel] = ACTIONS(80),
    [anon_sym_readnone] = ACTIONS(80),
    [anon_sym_readonly] = ACTIONS(80),
    [anon_sym_release] = ACTIONS(80),
    [anon_sym_returned] = ACTIONS(80),
    [anon_sym_returns_twice] = ACTIONS(80),
    [anon_sym_safestack] = ACTIONS(80),
    [anon_sym_sanitize_address] = ACTIONS(80),
    [anon_sym_sanitize_hwaddress] = ACTIONS(80),
    [anon_sym_sanitize_memory] = ACTIONS(80),
    [anon_sym_sanitize_memtag] = ACTIONS(80),
    [anon_sym_sanitize_thread] = ACTIONS(80),
    [anon_sym_section] = ACTIONS(80),
    [anon_sym_seq_cst] = ACTIONS(80),
    [anon_sym_shadowcallstack] = ACTIONS(80),
    [anon_sym_sideeffect] = ACTIONS(80),
    [anon_sym_signext] = ACTIONS(80),
    [anon_sym_source_filename] = ACTIONS(80),
    [anon_sym_speculatable] = ACTIONS(80),
    [anon_sym_speculative_load_hardening] = ACTIONS(80),
    [anon_sym_spir_func] = ACTIONS(80),
    [anon_sym_spir_kernel] = ACTIONS(80),
    [anon_sym_sret] = ACTIONS(80),
    [anon_sym_ssp] = ACTIONS(80),
    [anon_sym_sspreq] = ACTIONS(80),
    [anon_sym_sspstrong] = ACTIONS(80),
    [anon_sym_strictfp] = ACTIONS(80),
    [anon_sym_swiftcc] = ACTIONS(80),
    [anon_sym_swifterror] = ACTIONS(80),
    [anon_sym_swifttailcc] = ACTIONS(80),
    [anon_sym_swiftself] = ACTIONS(80),
    [anon_sym_syncscope] = ACTIONS(80),
    [anon_sym_tail] = ACTIONS(80),
    [anon_sym_tailcc] = ACTIONS(80),
    [anon_sym_target] = ACTIONS(80),
    [anon_sym_thread_local] = ACTIONS(80),
    [anon_sym_to] = ACTIONS(80),
    [anon_sym_triple] = ACTIONS(80),
    [anon_sym_unnamed_addr] = ACTIONS(80),
    [anon_sym_unordered] = ACTIONS(80),
    [anon_sym_uselistorder] = ACTIONS(80),
    [anon_sym_uselistorder_bb] = ACTIONS(80),
    [anon_sym_uwtable] = ACTIONS(80),
    [anon_sym_volatile] = ACTIONS(80),
    [anon_sym_weak] = ACTIONS(80),
    [anon_sym_weak_odr] = ACTIONS(80),
    [anon_sym_willreturn] = ACTIONS(80),
    [anon_sym_win64cc] = ACTIONS(80),
    [anon_sym_within] = ACTIONS(80),
    [anon_sym_writeonly] = ACTIONS(80),
    [anon_sym_x] = ACTIONS(80),
    [anon_sym_x86_64_sysvcc] = ACTIONS(80),
    [anon_sym_x86_fastcallcc] = ACTIONS(80),
    [anon_sym_x86_stdcallcc] = ACTIONS(80),
    [anon_sym_x86_thiscallcc] = ACTIONS(80),
    [anon_sym_zeroext] = ACTIONS(80),
    [sym_number] = ACTIONS(80),
    [aux_sym_float_token1] = ACTIONS(78),
    [aux_sym_float_token2] = ACTIONS(78),
    [anon_sym_true] = ACTIONS(80),
    [anon_sym_false] = ACTIONS(80),
    [anon_sym_zeroinitializer] = ACTIONS(80),
    [anon_sym_undef] = ACTIONS(80),
    [anon_sym_null] = ACTIONS(80),
    [anon_sym_none] = ACTIONS(80),
    [anon_sym_poison] = ACTIONS(80),
    [anon_sym_vscale] = ACTIONS(80),
    [sym_comment] = ACTIONS(78),
    [sym_string] = ACTIONS(78),
    [sym_label] = ACTIONS(78),
    [aux_sym_identifier_token1] = ACTIONS(78),
    [aux_sym_identifier_token2] = ACTIONS(78),
    [aux_sym_identifier_token3] = ACTIONS(80),
    [aux_sym_identifier_token4] = ACTIONS(80),
    [aux_sym_identifier_token5] = ACTIONS(80),
    [aux_sym_identifier_token6] = ACTIONS(80),
    [aux_sym_identifier_token7] = ACTIONS(80),
    [aux_sym_identifier_token8] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(78),
    [anon_sym_BANG] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(78),
    [anon_sym_TILDE] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(80),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_RBRACK] = ACTIONS(78),
    [anon_sym_LBRACE] = ACTIONS(78),
    [anon_sym_RBRACE] = ACTIONS(78),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_void] = ACTIONS(84),
    [anon_sym_half] = ACTIONS(84),
    [anon_sym_bfloat] = ACTIONS(84),
    [anon_sym_float] = ACTIONS(84),
    [anon_sym_double] = ACTIONS(84),
    [anon_sym_x86_fp80] = ACTIONS(84),
    [anon_sym_fp128] = ACTIONS(84),
    [anon_sym_pcc_fp128] = ACTIONS(84),
    [anon_sym_label] = ACTIONS(84),
    [anon_sym_metadata] = ACTIONS(84),
    [anon_sym_x86_mmx] = ACTIONS(84),
    [anon_sym_x86_amx] = ACTIONS(84),
    [aux_sym_type_token1] = ACTIONS(84),
    [anon_sym_add] = ACTIONS(84),
    [anon_sym_addrspacecast] = ACTIONS(84),
    [anon_sym_alloca] = ACTIONS(84),
    [anon_sym_and] = ACTIONS(84),
    [anon_sym_arcp] = ACTIONS(84),
    [anon_sym_ashr] = ACTIONS(84),
    [anon_sym_atomicrmw] = ACTIONS(84),
    [anon_sym_bitcast] = ACTIONS(84),
    [anon_sym_br] = ACTIONS(84),
    [anon_sym_catchpad] = ACTIONS(84),
    [anon_sym_catchswitch] = ACTIONS(84),
    [anon_sym_catchret] = ACTIONS(84),
    [anon_sym_call] = ACTIONS(84),
    [anon_sym_callbr] = ACTIONS(84),
    [anon_sym_cleanuppad] = ACTIONS(84),
    [anon_sym_cleanupret] = ACTIONS(84),
    [anon_sym_cmpxchg] = ACTIONS(84),
    [anon_sym_eq] = ACTIONS(84),
    [anon_sym_exact] = ACTIONS(84),
    [anon_sym_extractelement] = ACTIONS(84),
    [anon_sym_extractvalue] = ACTIONS(84),
    [anon_sym_fadd] = ACTIONS(84),
    [anon_sym_fast] = ACTIONS(84),
    [anon_sym_fcmp] = ACTIONS(84),
    [anon_sym_fdiv] = ACTIONS(84),
    [anon_sym_fence] = ACTIONS(84),
    [anon_sym_fmul] = ACTIONS(84),
    [anon_sym_fneg] = ACTIONS(84),
    [anon_sym_fpext] = ACTIONS(84),
    [anon_sym_fptosi] = ACTIONS(84),
    [anon_sym_fptoui] = ACTIONS(84),
    [anon_sym_fptrunc] = ACTIONS(84),
    [anon_sym_free] = ACTIONS(84),
    [anon_sym_freeze] = ACTIONS(84),
    [anon_sym_frem] = ACTIONS(84),
    [anon_sym_fsub] = ACTIONS(84),
    [anon_sym_getelementptr] = ACTIONS(84),
    [anon_sym_icmp] = ACTIONS(84),
    [anon_sym_inbounds] = ACTIONS(84),
    [anon_sym_indirectbr] = ACTIONS(84),
    [anon_sym_insertelement] = ACTIONS(84),
    [anon_sym_insertvalue] = ACTIONS(84),
    [anon_sym_inttoptr] = ACTIONS(84),
    [anon_sym_invoke] = ACTIONS(84),
    [anon_sym_landingpad] = ACTIONS(84),
    [anon_sym_load] = ACTIONS(84),
    [anon_sym_lshr] = ACTIONS(84),
    [anon_sym_malloc] = ACTIONS(84),
    [anon_sym_max] = ACTIONS(84),
    [anon_sym_min] = ACTIONS(84),
    [anon_sym_mul] = ACTIONS(84),
    [anon_sym_nand] = ACTIONS(84),
    [anon_sym_ne] = ACTIONS(84),
    [anon_sym_ninf] = ACTIONS(84),
    [anon_sym_nnan] = ACTIONS(84),
    [anon_sym_nsw] = ACTIONS(84),
    [anon_sym_nsz] = ACTIONS(84),
    [anon_sym_nuw] = ACTIONS(84),
    [anon_sym_oeq] = ACTIONS(84),
    [anon_sym_oge] = ACTIONS(84),
    [anon_sym_ogt] = ACTIONS(84),
    [anon_sym_ole] = ACTIONS(84),
    [anon_sym_olt] = ACTIONS(84),
    [anon_sym_one] = ACTIONS(84),
    [anon_sym_or] = ACTIONS(84),
    [anon_sym_ord] = ACTIONS(84),
    [anon_sym_phi] = ACTIONS(84),
    [anon_sym_ptrtoint] = ACTIONS(84),
    [anon_sym_resume] = ACTIONS(84),
    [anon_sym_ret] = ACTIONS(84),
    [anon_sym_sdiv] = ACTIONS(84),
    [anon_sym_select] = ACTIONS(84),
    [anon_sym_sext] = ACTIONS(84),
    [anon_sym_sge] = ACTIONS(84),
    [anon_sym_sgt] = ACTIONS(84),
    [anon_sym_shl] = ACTIONS(84),
    [anon_sym_shufflevector] = ACTIONS(84),
    [anon_sym_sitofp] = ACTIONS(84),
    [anon_sym_sle] = ACTIONS(84),
    [anon_sym_slt] = ACTIONS(84),
    [anon_sym_srem] = ACTIONS(84),
    [anon_sym_store] = ACTIONS(84),
    [anon_sym_sub] = ACTIONS(84),
    [anon_sym_switch] = ACTIONS(84),
    [anon_sym_trunc] = ACTIONS(84),
    [anon_sym_udiv] = ACTIONS(84),
    [anon_sym_ueq] = ACTIONS(84),
    [anon_sym_uge] = ACTIONS(84),
    [anon_sym_ugt] = ACTIONS(84),
    [anon_sym_uitofp] = ACTIONS(84),
    [anon_sym_ule] = ACTIONS(84),
    [anon_sym_ult] = ACTIONS(84),
    [anon_sym_umax] = ACTIONS(84),
    [anon_sym_umin] = ACTIONS(84),
    [anon_sym_une] = ACTIONS(84),
    [anon_sym_uno] = ACTIONS(84),
    [anon_sym_unreachable] = ACTIONS(84),
    [anon_sym_unwind] = ACTIONS(84),
    [anon_sym_urem] = ACTIONS(84),
    [anon_sym_va_arg] = ACTIONS(84),
    [anon_sym_xchg] = ACTIONS(84),
    [anon_sym_xor] = ACTIONS(84),
    [anon_sym_zext] = ACTIONS(84),
    [anon_sym_acq_rel] = ACTIONS(84),
    [anon_sym_acquire] = ACTIONS(84),
    [anon_sym_addrspace] = ACTIONS(84),
    [anon_sym_alias] = ACTIONS(84),
    [anon_sym_align] = ACTIONS(84),
    [anon_sym_alignstack] = ACTIONS(84),
    [anon_sym_allocsize] = ACTIONS(84),
    [anon_sym_alwaysinline] = ACTIONS(84),
    [anon_sym_appending] = ACTIONS(84),
    [anon_sym_argmemonly] = ACTIONS(84),
    [anon_sym_arm_aapcs_vfpcc] = ACTIONS(84),
    [anon_sym_arm_aapcscc] = ACTIONS(84),
    [anon_sym_arm_apcscc] = ACTIONS(84),
    [anon_sym_asm] = ACTIONS(84),
    [anon_sym_atomic] = ACTIONS(84),
    [anon_sym_available_externally] = ACTIONS(84),
    [anon_sym_blockaddress] = ACTIONS(84),
    [anon_sym_builtin] = ACTIONS(84),
    [anon_sym_byref] = ACTIONS(84),
    [anon_sym_byval] = ACTIONS(84),
    [anon_sym_c] = ACTIONS(84),
    [anon_sym_caller] = ACTIONS(84),
    [anon_sym_catch] = ACTIONS(84),
    [anon_sym_cc] = ACTIONS(84),
    [anon_sym_ccc] = ACTIONS(84),
    [anon_sym_cleanup] = ACTIONS(84),
    [anon_sym_cold] = ACTIONS(84),
    [anon_sym_coldcc] = ACTIONS(84),
    [anon_sym_comdat] = ACTIONS(84),
    [anon_sym_common] = ACTIONS(84),
    [anon_sym_constant] = ACTIONS(84),
    [anon_sym_convergent] = ACTIONS(84),
    [anon_sym_datalayout] = ACTIONS(84),
    [anon_sym_declare] = ACTIONS(84),
    [anon_sym_default] = ACTIONS(84),
    [anon_sym_define] = ACTIONS(84),
    [anon_sym_deplibs] = ACTIONS(84),
    [anon_sym_dereferenceable] = ACTIONS(84),
    [anon_sym_dereferenceable_or_null] = ACTIONS(84),
    [anon_sym_distinct] = ACTIONS(84),
    [anon_sym_dllexport] = ACTIONS(84),
    [anon_sym_dllimport] = ACTIONS(84),
    [anon_sym_dso_local] = ACTIONS(84),
    [anon_sym_dso_preemptable] = ACTIONS(84),
    [anon_sym_except] = ACTIONS(84),
    [anon_sym_extern_weak] = ACTIONS(84),
    [anon_sym_external] = ACTIONS(84),
    [anon_sym_externally_initialized] = ACTIONS(84),
    [anon_sym_fastcc] = ACTIONS(84),
    [anon_sym_filter] = ACTIONS(84),
    [anon_sym_from] = ACTIONS(84),
    [anon_sym_gc] = ACTIONS(84),
    [anon_sym_global] = ACTIONS(84),
    [anon_sym_hhvm_ccc] = ACTIONS(84),
    [anon_sym_hhvmcc] = ACTIONS(84),
    [anon_sym_hidden] = ACTIONS(84),
    [anon_sym_hot] = ACTIONS(84),
    [anon_sym_immarg] = ACTIONS(84),
    [anon_sym_inaccessiblemem_or_argmemonly] = ACTIONS(84),
    [anon_sym_inaccessiblememonly] = ACTIONS(84),
    [anon_sym_inalloca] = ACTIONS(84),
    [anon_sym_initialexec] = ACTIONS(84),
    [anon_sym_inlinehint] = ACTIONS(84),
    [anon_sym_inreg] = ACTIONS(84),
    [anon_sym_intel_ocl_bicc] = ACTIONS(84),
    [anon_sym_inteldialect] = ACTIONS(84),
    [anon_sym_internal] = ACTIONS(84),
    [anon_sym_jumptable] = ACTIONS(84),
    [anon_sym_linkonce] = ACTIONS(84),
    [anon_sym_linkonce_odr] = ACTIONS(84),
    [anon_sym_local_unnamed_addr] = ACTIONS(84),
    [anon_sym_localdynamic] = ACTIONS(84),
    [anon_sym_localexec] = ACTIONS(84),
    [anon_sym_minsize] = ACTIONS(84),
    [anon_sym_module] = ACTIONS(84),
    [anon_sym_monotonic] = ACTIONS(84),
    [anon_sym_msp430_intrcc] = ACTIONS(84),
    [anon_sym_mustprogress] = ACTIONS(84),
    [anon_sym_musttail] = ACTIONS(84),
    [anon_sym_naked] = ACTIONS(84),
    [anon_sym_nest] = ACTIONS(84),
    [anon_sym_noalias] = ACTIONS(84),
    [anon_sym_nobuiltin] = ACTIONS(84),
    [anon_sym_nocallback] = ACTIONS(84),
    [anon_sym_nocapture] = ACTIONS(84),
    [anon_sym_nocf_check] = ACTIONS(84),
    [anon_sym_noduplicate] = ACTIONS(84),
    [anon_sym_nofree] = ACTIONS(84),
    [anon_sym_noimplicitfloat] = ACTIONS(84),
    [anon_sym_noinline] = ACTIONS(84),
    [anon_sym_nomerge] = ACTIONS(84),
    [anon_sym_nonlazybind] = ACTIONS(84),
    [anon_sym_nonnull] = ACTIONS(84),
    [anon_sym_noprofile] = ACTIONS(84),
    [anon_sym_norecurse] = ACTIONS(84),
    [anon_sym_noredzone] = ACTIONS(84),
    [anon_sym_noreturn] = ACTIONS(84),
    [anon_sym_nosync] = ACTIONS(84),
    [anon_sym_noundef] = ACTIONS(84),
    [anon_sym_nounwind] = ACTIONS(84),
    [anon_sym_nosanitize_coverage] = ACTIONS(84),
    [anon_sym_null_pointer_is_valid] = ACTIONS(84),
    [anon_sym_optforfuzzing] = ACTIONS(84),
    [anon_sym_optnone] = ACTIONS(84),
    [anon_sym_optsize] = ACTIONS(84),
    [anon_sym_personality] = ACTIONS(84),
    [anon_sym_preallocated] = ACTIONS(84),
    [anon_sym_private] = ACTIONS(84),
    [anon_sym_protected] = ACTIONS(84),
    [anon_sym_ptx_device] = ACTIONS(84),
    [anon_sym_ptx_kernel] = ACTIONS(84),
    [anon_sym_readnone] = ACTIONS(84),
    [anon_sym_readonly] = ACTIONS(84),
    [anon_sym_release] = ACTIONS(84),
    [anon_sym_returned] = ACTIONS(84),
    [anon_sym_returns_twice] = ACTIONS(84),
    [anon_sym_safestack] = ACTIONS(84),
    [anon_sym_sanitize_address] = ACTIONS(84),
    [anon_sym_sanitize_hwaddress] = ACTIONS(84),
    [anon_sym_sanitize_memory] = ACTIONS(84),
    [anon_sym_sanitize_memtag] = ACTIONS(84),
    [anon_sym_sanitize_thread] = ACTIONS(84),
    [anon_sym_section] = ACTIONS(84),
    [anon_sym_seq_cst] = ACTIONS(84),
    [anon_sym_shadowcallstack] = ACTIONS(84),
    [anon_sym_sideeffect] = ACTIONS(84),
    [anon_sym_signext] = ACTIONS(84),
    [anon_sym_source_filename] = ACTIONS(84),
    [anon_sym_speculatable] = ACTIONS(84),
    [anon_sym_speculative_load_hardening] = ACTIONS(84),
    [anon_sym_spir_func] = ACTIONS(84),
    [anon_sym_spir_kernel] = ACTIONS(84),
    [anon_sym_sret] = ACTIONS(84),
    [anon_sym_ssp] = ACTIONS(84),
    [anon_sym_sspreq] = ACTIONS(84),
    [anon_sym_sspstrong] = ACTIONS(84),
    [anon_sym_strictfp] = ACTIONS(84),
    [anon_sym_swiftcc] = ACTIONS(84),
    [anon_sym_swifterror] = ACTIONS(84),
    [anon_sym_swifttailcc] = ACTIONS(84),
    [anon_sym_swiftself] = ACTIONS(84),
    [anon_sym_syncscope] = ACTIONS(84),
    [anon_sym_tail] = ACTIONS(84),
    [anon_sym_tailcc] = ACTIONS(84),
    [anon_sym_target] = ACTIONS(84),
    [anon_sym_thread_local] = ACTIONS(84),
    [anon_sym_to] = ACTIONS(84),
    [anon_sym_triple] = ACTIONS(84),
    [anon_sym_unnamed_addr] = ACTIONS(84),
    [anon_sym_unordered] = ACTIONS(84),
    [anon_sym_uselistorder] = ACTIONS(84),
    [anon_sym_uselistorder_bb] = ACTIONS(84),
    [anon_sym_uwtable] = ACTIONS(84),
    [anon_sym_volatile] = ACTIONS(84),
    [anon_sym_weak] = ACTIONS(84),
    [anon_sym_weak_odr] = ACTIONS(84),
    [anon_sym_willreturn] = ACTIONS(84),
    [anon_sym_win64cc] = ACTIONS(84),
    [anon_sym_within] = ACTIONS(84),
    [anon_sym_writeonly] = ACTIONS(84),
    [anon_sym_x] = ACTIONS(84),
    [anon_sym_x86_64_sysvcc] = ACTIONS(84),
    [anon_sym_x86_fastcallcc] = ACTIONS(84),
    [anon_sym_x86_stdcallcc] = ACTIONS(84),
    [anon_sym_x86_thiscallcc] = ACTIONS(84),
    [anon_sym_zeroext] = ACTIONS(84),
    [sym_number] = ACTIONS(84),
    [aux_sym_float_token1] = ACTIONS(82),
    [aux_sym_float_token2] = ACTIONS(82),
    [anon_sym_true] = ACTIONS(84),
    [anon_sym_false] = ACTIONS(84),
    [anon_sym_zeroinitializer] = ACTIONS(84),
    [anon_sym_undef] = ACTIONS(84),
    [anon_sym_null] = ACTIONS(84),
    [anon_sym_none] = ACTIONS(84),
    [anon_sym_poison] = ACTIONS(84),
    [anon_sym_vscale] = ACTIONS(84),
    [sym_comment] = ACTIONS(82),
    [sym_string] = ACTIONS(82),
    [sym_label] = ACTIONS(82),
    [aux_sym_identifier_token1] = ACTIONS(82),
    [aux_sym_identifier_token2] = ACTIONS(82),
    [aux_sym_identifier_token3] = ACTIONS(84),
    [aux_sym_identifier_token4] = ACTIONS(84),
    [aux_sym_identifier_token5] = ACTIONS(84),
    [aux_sym_identifier_token6] = ACTIONS(84),
    [aux_sym_identifier_token7] = ACTIONS(84),
    [aux_sym_identifier_token8] = ACTIONS(84),
    [anon_sym_COMMA] = ACTIONS(82),
    [anon_sym_BANG] = ACTIONS(84),
    [anon_sym_EQ] = ACTIONS(82),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_COLON] = ACTIONS(82),
    [anon_sym_TILDE] = ACTIONS(82),
    [anon_sym_CARET] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_PLUS] = ACTIONS(82),
    [anon_sym_PIPE] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_RBRACK] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_RBRACE] = ACTIONS(82),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_void] = ACTIONS(88),
    [anon_sym_half] = ACTIONS(88),
    [anon_sym_bfloat] = ACTIONS(88),
    [anon_sym_float] = ACTIONS(88),
    [anon_sym_double] = ACTIONS(88),
    [anon_sym_x86_fp80] = ACTIONS(88),
    [anon_sym_fp128] = ACTIONS(88),
    [anon_sym_pcc_fp128] = ACTIONS(88),
    [anon_sym_label] = ACTIONS(88),
    [anon_sym_metadata] = ACTIONS(88),
    [anon_sym_x86_mmx] = ACTIONS(88),
    [anon_sym_x86_amx] = ACTIONS(88),
    [aux_sym_type_token1] = ACTIONS(88),
    [anon_sym_add] = ACTIONS(88),
    [anon_sym_addrspacecast] = ACTIONS(88),
    [anon_sym_alloca] = ACTIONS(88),
    [anon_sym_and] = ACTIONS(88),
    [anon_sym_arcp] = ACTIONS(88),
    [anon_sym_ashr] = ACTIONS(88),
    [anon_sym_atomicrmw] = ACTIONS(88),
    [anon_sym_bitcast] = ACTIONS(88),
    [anon_sym_br] = ACTIONS(88),
    [anon_sym_catchpad] = ACTIONS(88),
    [anon_sym_catchswitch] = ACTIONS(88),
    [anon_sym_catchret] = ACTIONS(88),
    [anon_sym_call] = ACTIONS(88),
    [anon_sym_callbr] = ACTIONS(88),
    [anon_sym_cleanuppad] = ACTIONS(88),
    [anon_sym_cleanupret] = ACTIONS(88),
    [anon_sym_cmpxchg] = ACTIONS(88),
    [anon_sym_eq] = ACTIONS(88),
    [anon_sym_exact] = ACTIONS(88),
    [anon_sym_extractelement] = ACTIONS(88),
    [anon_sym_extractvalue] = ACTIONS(88),
    [anon_sym_fadd] = ACTIONS(88),
    [anon_sym_fast] = ACTIONS(88),
    [anon_sym_fcmp] = ACTIONS(88),
    [anon_sym_fdiv] = ACTIONS(88),
    [anon_sym_fence] = ACTIONS(88),
    [anon_sym_fmul] = ACTIONS(88),
    [anon_sym_fneg] = ACTIONS(88),
    [anon_sym_fpext] = ACTIONS(88),
    [anon_sym_fptosi] = ACTIONS(88),
    [anon_sym_fptoui] = ACTIONS(88),
    [anon_sym_fptrunc] = ACTIONS(88),
    [anon_sym_free] = ACTIONS(88),
    [anon_sym_freeze] = ACTIONS(88),
    [anon_sym_frem] = ACTIONS(88),
    [anon_sym_fsub] = ACTIONS(88),
    [anon_sym_getelementptr] = ACTIONS(88),
    [anon_sym_icmp] = ACTIONS(88),
    [anon_sym_inbounds] = ACTIONS(88),
    [anon_sym_indirectbr] = ACTIONS(88),
    [anon_sym_insertelement] = ACTIONS(88),
    [anon_sym_insertvalue] = ACTIONS(88),
    [anon_sym_inttoptr] = ACTIONS(88),
    [anon_sym_invoke] = ACTIONS(88),
    [anon_sym_landingpad] = ACTIONS(88),
    [anon_sym_load] = ACTIONS(88),
    [anon_sym_lshr] = ACTIONS(88),
    [anon_sym_malloc] = ACTIONS(88),
    [anon_sym_max] = ACTIONS(88),
    [anon_sym_min] = ACTIONS(88),
    [anon_sym_mul] = ACTIONS(88),
    [anon_sym_nand] = ACTIONS(88),
    [anon_sym_ne] = ACTIONS(88),
    [anon_sym_ninf] = ACTIONS(88),
    [anon_sym_nnan] = ACTIONS(88),
    [anon_sym_nsw] = ACTIONS(88),
    [anon_sym_nsz] = ACTIONS(88),
    [anon_sym_nuw] = ACTIONS(88),
    [anon_sym_oeq] = ACTIONS(88),
    [anon_sym_oge] = ACTIONS(88),
    [anon_sym_ogt] = ACTIONS(88),
    [anon_sym_ole] = ACTIONS(88),
    [anon_sym_olt] = ACTIONS(88),
    [anon_sym_one] = ACTIONS(88),
    [anon_sym_or] = ACTIONS(88),
    [anon_sym_ord] = ACTIONS(88),
    [anon_sym_phi] = ACTIONS(88),
    [anon_sym_ptrtoint] = ACTIONS(88),
    [anon_sym_resume] = ACTIONS(88),
    [anon_sym_ret] = ACTIONS(88),
    [anon_sym_sdiv] = ACTIONS(88),
    [anon_sym_select] = ACTIONS(88),
    [anon_sym_sext] = ACTIONS(88),
    [anon_sym_sge] = ACTIONS(88),
    [anon_sym_sgt] = ACTIONS(88),
    [anon_sym_shl] = ACTIONS(88),
    [anon_sym_shufflevector] = ACTIONS(88),
    [anon_sym_sitofp] = ACTIONS(88),
    [anon_sym_sle] = ACTIONS(88),
    [anon_sym_slt] = ACTIONS(88),
    [anon_sym_srem] = ACTIONS(88),
    [anon_sym_store] = ACTIONS(88),
    [anon_sym_sub] = ACTIONS(88),
    [anon_sym_switch] = ACTIONS(88),
    [anon_sym_trunc] = ACTIONS(88),
    [anon_sym_udiv] = ACTIONS(88),
    [anon_sym_ueq] = ACTIONS(88),
    [anon_sym_uge] = ACTIONS(88),
    [anon_sym_ugt] = ACTIONS(88),
    [anon_sym_uitofp] = ACTIONS(88),
    [anon_sym_ule] = ACTIONS(88),
    [anon_sym_ult] = ACTIONS(88),
    [anon_sym_umax] = ACTIONS(88),
    [anon_sym_umin] = ACTIONS(88),
    [anon_sym_une] = ACTIONS(88),
    [anon_sym_uno] = ACTIONS(88),
    [anon_sym_unreachable] = ACTIONS(88),
    [anon_sym_unwind] = ACTIONS(88),
    [anon_sym_urem] = ACTIONS(88),
    [anon_sym_va_arg] = ACTIONS(88),
    [anon_sym_xchg] = ACTIONS(88),
    [anon_sym_xor] = ACTIONS(88),
    [anon_sym_zext] = ACTIONS(88),
    [anon_sym_acq_rel] = ACTIONS(88),
    [anon_sym_acquire] = ACTIONS(88),
    [anon_sym_addrspace] = ACTIONS(88),
    [anon_sym_alias] = ACTIONS(88),
    [anon_sym_align] = ACTIONS(88),
    [anon_sym_alignstack] = ACTIONS(88),
    [anon_sym_allocsize] = ACTIONS(88),
    [anon_sym_alwaysinline] = ACTIONS(88),
    [anon_sym_appending] = ACTIONS(88),
    [anon_sym_argmemonly] = ACTIONS(88),
    [anon_sym_arm_aapcs_vfpcc] = ACTIONS(88),
    [anon_sym_arm_aapcscc] = ACTIONS(88),
    [anon_sym_arm_apcscc] = ACTIONS(88),
    [anon_sym_asm] = ACTIONS(88),
    [anon_sym_atomic] = ACTIONS(88),
    [anon_sym_available_externally] = ACTIONS(88),
    [anon_sym_blockaddress] = ACTIONS(88),
    [anon_sym_builtin] = ACTIONS(88),
    [anon_sym_byref] = ACTIONS(88),
    [anon_sym_byval] = ACTIONS(88),
    [anon_sym_c] = ACTIONS(88),
    [anon_sym_caller] = ACTIONS(88),
    [anon_sym_catch] = ACTIONS(88),
    [anon_sym_cc] = ACTIONS(88),
    [anon_sym_ccc] = ACTIONS(88),
    [anon_sym_cleanup] = ACTIONS(88),
    [anon_sym_cold] = ACTIONS(88),
    [anon_sym_coldcc] = ACTIONS(88),
    [anon_sym_comdat] = ACTIONS(88),
    [anon_sym_common] = ACTIONS(88),
    [anon_sym_constant] = ACTIONS(88),
    [anon_sym_convergent] = ACTIONS(88),
    [anon_sym_datalayout] = ACTIONS(88),
    [anon_sym_declare] = ACTIONS(88),
    [anon_sym_default] = ACTIONS(88),
    [anon_sym_define] = ACTIONS(88),
    [anon_sym_deplibs] = ACTIONS(88),
    [anon_sym_dereferenceable] = ACTIONS(88),
    [anon_sym_dereferenceable_or_null] = ACTIONS(88),
    [anon_sym_distinct] = ACTIONS(88),
    [anon_sym_dllexport] = ACTIONS(88),
    [anon_sym_dllimport] = ACTIONS(88),
    [anon_sym_dso_local] = ACTIONS(88),
    [anon_sym_dso_preemptable] = ACTIONS(88),
    [anon_sym_except] = ACTIONS(88),
    [anon_sym_extern_weak] = ACTIONS(88),
    [anon_sym_external] = ACTIONS(88),
    [anon_sym_externally_initialized] = ACTIONS(88),
    [anon_sym_fastcc] = ACTIONS(88),
    [anon_sym_filter] = ACTIONS(88),
    [anon_sym_from] = ACTIONS(88),
    [anon_sym_gc] = ACTIONS(88),
    [anon_sym_global] = ACTIONS(88),
    [anon_sym_hhvm_ccc] = ACTIONS(88),
    [anon_sym_hhvmcc] = ACTIONS(88),
    [anon_sym_hidden] = ACTIONS(88),
    [anon_sym_hot] = ACTIONS(88),
    [anon_sym_immarg] = ACTIONS(88),
    [anon_sym_inaccessiblemem_or_argmemonly] = ACTIONS(88),
    [anon_sym_inaccessiblememonly] = ACTIONS(88),
    [anon_sym_inalloca] = ACTIONS(88),
    [anon_sym_initialexec] = ACTIONS(88),
    [anon_sym_inlinehint] = ACTIONS(88),
    [anon_sym_inreg] = ACTIONS(88),
    [anon_sym_intel_ocl_bicc] = ACTIONS(88),
    [anon_sym_inteldialect] = ACTIONS(88),
    [anon_sym_internal] = ACTIONS(88),
    [anon_sym_jumptable] = ACTIONS(88),
    [anon_sym_linkonce] = ACTIONS(88),
    [anon_sym_linkonce_odr] = ACTIONS(88),
    [anon_sym_local_unnamed_addr] = ACTIONS(88),
    [anon_sym_localdynamic] = ACTIONS(88),
    [anon_sym_localexec] = ACTIONS(88),
    [anon_sym_minsize] = ACTIONS(88),
    [anon_sym_module] = ACTIONS(88),
    [anon_sym_monotonic] = ACTIONS(88),
    [anon_sym_msp430_intrcc] = ACTIONS(88),
    [anon_sym_mustprogress] = ACTIONS(88),
    [anon_sym_musttail] = ACTIONS(88),
    [anon_sym_naked] = ACTIONS(88),
    [anon_sym_nest] = ACTIONS(88),
    [anon_sym_noalias] = ACTIONS(88),
    [anon_sym_nobuiltin] = ACTIONS(88),
    [anon_sym_nocallback] = ACTIONS(88),
    [anon_sym_nocapture] = ACTIONS(88),
    [anon_sym_nocf_check] = ACTIONS(88),
    [anon_sym_noduplicate] = ACTIONS(88),
    [anon_sym_nofree] = ACTIONS(88),
    [anon_sym_noimplicitfloat] = ACTIONS(88),
    [anon_sym_noinline] = ACTIONS(88),
    [anon_sym_nomerge] = ACTIONS(88),
    [anon_sym_nonlazybind] = ACTIONS(88),
    [anon_sym_nonnull] = ACTIONS(88),
    [anon_sym_noprofile] = ACTIONS(88),
    [anon_sym_norecurse] = ACTIONS(88),
    [anon_sym_noredzone] = ACTIONS(88),
    [anon_sym_noreturn] = ACTIONS(88),
    [anon_sym_nosync] = ACTIONS(88),
    [anon_sym_noundef] = ACTIONS(88),
    [anon_sym_nounwind] = ACTIONS(88),
    [anon_sym_nosanitize_coverage] = ACTIONS(88),
    [anon_sym_null_pointer_is_valid] = ACTIONS(88),
    [anon_sym_optforfuzzing] = ACTIONS(88),
    [anon_sym_optnone] = ACTIONS(88),
    [anon_sym_optsize] = ACTIONS(88),
    [anon_sym_personality] = ACTIONS(88),
    [anon_sym_preallocated] = ACTIONS(88),
    [anon_sym_private] = ACTIONS(88),
    [anon_sym_protected] = ACTIONS(88),
    [anon_sym_ptx_device] = ACTIONS(88),
    [anon_sym_ptx_kernel] = ACTIONS(88),
    [anon_sym_readnone] = ACTIONS(88),
    [anon_sym_readonly] = ACTIONS(88),
    [anon_sym_release] = ACTIONS(88),
    [anon_sym_returned] = ACTIONS(88),
    [anon_sym_returns_twice] = ACTIONS(88),
    [anon_sym_safestack] = ACTIONS(88),
    [anon_sym_sanitize_address] = ACTIONS(88),
    [anon_sym_sanitize_hwaddress] = ACTIONS(88),
    [anon_sym_sanitize_memory] = ACTIONS(88),
    [anon_sym_sanitize_memtag] = ACTIONS(88),
    [anon_sym_sanitize_thread] = ACTIONS(88),
    [anon_sym_section] = ACTIONS(88),
    [anon_sym_seq_cst] = ACTIONS(88),
    [anon_sym_shadowcallstack] = ACTIONS(88),
    [anon_sym_sideeffect] = ACTIONS(88),
    [anon_sym_signext] = ACTIONS(88),
    [anon_sym_source_filename] = ACTIONS(88),
    [anon_sym_speculatable] = ACTIONS(88),
    [anon_sym_speculative_load_hardening] = ACTIONS(88),
    [anon_sym_spir_func] = ACTIONS(88),
    [anon_sym_spir_kernel] = ACTIONS(88),
    [anon_sym_sret] = ACTIONS(88),
    [anon_sym_ssp] = ACTIONS(88),
    [anon_sym_sspreq] = ACTIONS(88),
    [anon_sym_sspstrong] = ACTIONS(88),
    [anon_sym_strictfp] = ACTIONS(88),
    [anon_sym_swiftcc] = ACTIONS(88),
    [anon_sym_swifterror] = ACTIONS(88),
    [anon_sym_swifttailcc] = ACTIONS(88),
    [anon_sym_swiftself] = ACTIONS(88),
    [anon_sym_syncscope] = ACTIONS(88),
    [anon_sym_tail] = ACTIONS(88),
    [anon_sym_tailcc] = ACTIONS(88),
    [anon_sym_target] = ACTIONS(88),
    [anon_sym_thread_local] = ACTIONS(88),
    [anon_sym_to] = ACTIONS(88),
    [anon_sym_triple] = ACTIONS(88),
    [anon_sym_unnamed_addr] = ACTIONS(88),
    [anon_sym_unordered] = ACTIONS(88),
    [anon_sym_uselistorder] = ACTIONS(88),
    [anon_sym_uselistorder_bb] = ACTIONS(88),
    [anon_sym_uwtable] = ACTIONS(88),
    [anon_sym_volatile] = ACTIONS(88),
    [anon_sym_weak] = ACTIONS(88),
    [anon_sym_weak_odr] = ACTIONS(88),
    [anon_sym_willreturn] = ACTIONS(88),
    [anon_sym_win64cc] = ACTIONS(88),
    [anon_sym_within] = ACTIONS(88),
    [anon_sym_writeonly] = ACTIONS(88),
    [anon_sym_x] = ACTIONS(88),
    [anon_sym_x86_64_sysvcc] = ACTIONS(88),
    [anon_sym_x86_fastcallcc] = ACTIONS(88),
    [anon_sym_x86_stdcallcc] = ACTIONS(88),
    [anon_sym_x86_thiscallcc] = ACTIONS(88),
    [anon_sym_zeroext] = ACTIONS(88),
    [sym_number] = ACTIONS(88),
    [aux_sym_float_token1] = ACTIONS(86),
    [aux_sym_float_token2] = ACTIONS(86),
    [anon_sym_true] = ACTIONS(88),
    [anon_sym_false] = ACTIONS(88),
    [anon_sym_zeroinitializer] = ACTIONS(88),
    [anon_sym_undef] = ACTIONS(88),
    [anon_sym_null] = ACTIONS(88),
    [anon_sym_none] = ACTIONS(88),
    [anon_sym_poison] = ACTIONS(88),
    [anon_sym_vscale] = ACTIONS(88),
    [sym_comment] = ACTIONS(86),
    [sym_string] = ACTIONS(86),
    [sym_label] = ACTIONS(86),
    [aux_sym_identifier_token1] = ACTIONS(86),
    [aux_sym_identifier_token2] = ACTIONS(86),
    [aux_sym_identifier_token3] = ACTIONS(88),
    [aux_sym_identifier_token4] = ACTIONS(88),
    [aux_sym_identifier_token5] = ACTIONS(88),
    [aux_sym_identifier_token6] = ACTIONS(88),
    [aux_sym_identifier_token7] = ACTIONS(88),
    [aux_sym_identifier_token8] = ACTIONS(88),
    [anon_sym_COMMA] = ACTIONS(86),
    [anon_sym_BANG] = ACTIONS(88),
    [anon_sym_EQ] = ACTIONS(86),
    [anon_sym_STAR] = ACTIONS(86),
    [anon_sym_COLON] = ACTIONS(86),
    [anon_sym_TILDE] = ACTIONS(86),
    [anon_sym_CARET] = ACTIONS(86),
    [anon_sym_DASH] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(86),
    [anon_sym_PIPE] = ACTIONS(86),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(86),
    [anon_sym_RBRACK] = ACTIONS(86),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(86),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_void] = ACTIONS(92),
    [anon_sym_half] = ACTIONS(92),
    [anon_sym_bfloat] = ACTIONS(92),
    [anon_sym_float] = ACTIONS(92),
    [anon_sym_double] = ACTIONS(92),
    [anon_sym_x86_fp80] = ACTIONS(92),
    [anon_sym_fp128] = ACTIONS(92),
    [anon_sym_pcc_fp128] = ACTIONS(92),
    [anon_sym_label] = ACTIONS(92),
    [anon_sym_metadata] = ACTIONS(92),
    [anon_sym_x86_mmx] = ACTIONS(92),
    [anon_sym_x86_amx] = ACTIONS(92),
    [aux_sym_type_token1] = ACTIONS(92),
    [anon_sym_add] = ACTIONS(92),
    [anon_sym_addrspacecast] = ACTIONS(92),
    [anon_sym_alloca] = ACTIONS(92),
    [anon_sym_and] = ACTIONS(92),
    [anon_sym_arcp] = ACTIONS(92),
    [anon_sym_ashr] = ACTIONS(92),
    [anon_sym_atomicrmw] = ACTIONS(92),
    [anon_sym_bitcast] = ACTIONS(92),
    [anon_sym_br] = ACTIONS(92),
    [anon_sym_catchpad] = ACTIONS(92),
    [anon_sym_catchswitch] = ACTIONS(92),
    [anon_sym_catchret] = ACTIONS(92),
    [anon_sym_call] = ACTIONS(92),
    [anon_sym_callbr] = ACTIONS(92),
    [anon_sym_cleanuppad] = ACTIONS(92),
    [anon_sym_cleanupret] = ACTIONS(92),
    [anon_sym_cmpxchg] = ACTIONS(92),
    [anon_sym_eq] = ACTIONS(92),
    [anon_sym_exact] = ACTIONS(92),
    [anon_sym_extractelement] = ACTIONS(92),
    [anon_sym_extractvalue] = ACTIONS(92),
    [anon_sym_fadd] = ACTIONS(92),
    [anon_sym_fast] = ACTIONS(92),
    [anon_sym_fcmp] = ACTIONS(92),
    [anon_sym_fdiv] = ACTIONS(92),
    [anon_sym_fence] = ACTIONS(92),
    [anon_sym_fmul] = ACTIONS(92),
    [anon_sym_fneg] = ACTIONS(92),
    [anon_sym_fpext] = ACTIONS(92),
    [anon_sym_fptosi] = ACTIONS(92),
    [anon_sym_fptoui] = ACTIONS(92),
    [anon_sym_fptrunc] = ACTIONS(92),
    [anon_sym_free] = ACTIONS(92),
    [anon_sym_freeze] = ACTIONS(92),
    [anon_sym_frem] = ACTIONS(92),
    [anon_sym_fsub] = ACTIONS(92),
    [anon_sym_getelementptr] = ACTIONS(92),
    [anon_sym_icmp] = ACTIONS(92),
    [anon_sym_inbounds] = ACTIONS(92),
    [anon_sym_indirectbr] = ACTIONS(92),
    [anon_sym_insertelement] = ACTIONS(92),
    [anon_sym_insertvalue] = ACTIONS(92),
    [anon_sym_inttoptr] = ACTIONS(92),
    [anon_sym_invoke] = ACTIONS(92),
    [anon_sym_landingpad] = ACTIONS(92),
    [anon_sym_load] = ACTIONS(92),
    [anon_sym_lshr] = ACTIONS(92),
    [anon_sym_malloc] = ACTIONS(92),
    [anon_sym_max] = ACTIONS(92),
    [anon_sym_min] = ACTIONS(92),
    [anon_sym_mul] = ACTIONS(92),
    [anon_sym_nand] = ACTIONS(92),
    [anon_sym_ne] = ACTIONS(92),
    [anon_sym_ninf] = ACTIONS(92),
    [anon_sym_nnan] = ACTIONS(92),
    [anon_sym_nsw] = ACTIONS(92),
    [anon_sym_nsz] = ACTIONS(92),
    [anon_sym_nuw] = ACTIONS(92),
    [anon_sym_oeq] = ACTIONS(92),
    [anon_sym_oge] = ACTIONS(92),
    [anon_sym_ogt] = ACTIONS(92),
    [anon_sym_ole] = ACTIONS(92),
    [anon_sym_olt] = ACTIONS(92),
    [anon_sym_one] = ACTIONS(92),
    [anon_sym_or] = ACTIONS(92),
    [anon_sym_ord] = ACTIONS(92),
    [anon_sym_phi] = ACTIONS(92),
    [anon_sym_ptrtoint] = ACTIONS(92),
    [anon_sym_resume] = ACTIONS(92),
    [anon_sym_ret] = ACTIONS(92),
    [anon_sym_sdiv] = ACTIONS(92),
    [anon_sym_select] = ACTIONS(92),
    [anon_sym_sext] = ACTIONS(92),
    [anon_sym_sge] = ACTIONS(92),
    [anon_sym_sgt] = ACTIONS(92),
    [anon_sym_shl] = ACTIONS(92),
    [anon_sym_shufflevector] = ACTIONS(92),
    [anon_sym_sitofp] = ACTIONS(92),
    [anon_sym_sle] = ACTIONS(92),
    [anon_sym_slt] = ACTIONS(92),
    [anon_sym_srem] = ACTIONS(92),
    [anon_sym_store] = ACTIONS(92),
    [anon_sym_sub] = ACTIONS(92),
    [anon_sym_switch] = ACTIONS(92),
    [anon_sym_trunc] = ACTIONS(92),
    [anon_sym_udiv] = ACTIONS(92),
    [anon_sym_ueq] = ACTIONS(92),
    [anon_sym_uge] = ACTIONS(92),
    [anon_sym_ugt] = ACTIONS(92),
    [anon_sym_uitofp] = ACTIONS(92),
    [anon_sym_ule] = ACTIONS(92),
    [anon_sym_ult] = ACTIONS(92),
    [anon_sym_umax] = ACTIONS(92),
    [anon_sym_umin] = ACTIONS(92),
    [anon_sym_une] = ACTIONS(92),
    [anon_sym_uno] = ACTIONS(92),
    [anon_sym_unreachable] = ACTIONS(92),
    [anon_sym_unwind] = ACTIONS(92),
    [anon_sym_urem] = ACTIONS(92),
    [anon_sym_va_arg] = ACTIONS(92),
    [anon_sym_xchg] = ACTIONS(92),
    [anon_sym_xor] = ACTIONS(92),
    [anon_sym_zext] = ACTIONS(92),
    [anon_sym_acq_rel] = ACTIONS(92),
    [anon_sym_acquire] = ACTIONS(92),
    [anon_sym_addrspace] = ACTIONS(92),
    [anon_sym_alias] = ACTIONS(92),
    [anon_sym_align] = ACTIONS(92),
    [anon_sym_alignstack] = ACTIONS(92),
    [anon_sym_allocsize] = ACTIONS(92),
    [anon_sym_alwaysinline] = ACTIONS(92),
    [anon_sym_appending] = ACTIONS(92),
    [anon_sym_argmemonly] = ACTIONS(92),
    [anon_sym_arm_aapcs_vfpcc] = ACTIONS(92),
    [anon_sym_arm_aapcscc] = ACTIONS(92),
    [anon_sym_arm_apcscc] = ACTIONS(92),
    [anon_sym_asm] = ACTIONS(92),
    [anon_sym_atomic] = ACTIONS(92),
    [anon_sym_available_externally] = ACTIONS(92),
    [anon_sym_blockaddress] = ACTIONS(92),
    [anon_sym_builtin] = ACTIONS(92),
    [anon_sym_byref] = ACTIONS(92),
    [anon_sym_byval] = ACTIONS(92),
    [anon_sym_c] = ACTIONS(92),
    [anon_sym_caller] = ACTIONS(92),
    [anon_sym_catch] = ACTIONS(92),
    [anon_sym_cc] = ACTIONS(92),
    [anon_sym_ccc] = ACTIONS(92),
    [anon_sym_cleanup] = ACTIONS(92),
    [anon_sym_cold] = ACTIONS(92),
    [anon_sym_coldcc] = ACTIONS(92),
    [anon_sym_comdat] = ACTIONS(92),
    [anon_sym_common] = ACTIONS(92),
    [anon_sym_constant] = ACTIONS(92),
    [anon_sym_convergent] = ACTIONS(92),
    [anon_sym_datalayout] = ACTIONS(92),
    [anon_sym_declare] = ACTIONS(92),
    [anon_sym_default] = ACTIONS(92),
    [anon_sym_define] = ACTIONS(92),
    [anon_sym_deplibs] = ACTIONS(92),
    [anon_sym_dereferenceable] = ACTIONS(92),
    [anon_sym_dereferenceable_or_null] = ACTIONS(92),
    [anon_sym_distinct] = ACTIONS(92),
    [anon_sym_dllexport] = ACTIONS(92),
    [anon_sym_dllimport] = ACTIONS(92),
    [anon_sym_dso_local] = ACTIONS(92),
    [anon_sym_dso_preemptable] = ACTIONS(92),
    [anon_sym_except] = ACTIONS(92),
    [anon_sym_extern_weak] = ACTIONS(92),
    [anon_sym_external] = ACTIONS(92),
    [anon_sym_externally_initialized] = ACTIONS(92),
    [anon_sym_fastcc] = ACTIONS(92),
    [anon_sym_filter] = ACTIONS(92),
    [anon_sym_from] = ACTIONS(92),
    [anon_sym_gc] = ACTIONS(92),
    [anon_sym_global] = ACTIONS(92),
    [anon_sym_hhvm_ccc] = ACTIONS(92),
    [anon_sym_hhvmcc] = ACTIONS(92),
    [anon_sym_hidden] = ACTIONS(92),
    [anon_sym_hot] = ACTIONS(92),
    [anon_sym_immarg] = ACTIONS(92),
    [anon_sym_inaccessiblemem_or_argmemonly] = ACTIONS(92),
    [anon_sym_inaccessiblememonly] = ACTIONS(92),
    [anon_sym_inalloca] = ACTIONS(92),
    [anon_sym_initialexec] = ACTIONS(92),
    [anon_sym_inlinehint] = ACTIONS(92),
    [anon_sym_inreg] = ACTIONS(92),
    [anon_sym_intel_ocl_bicc] = ACTIONS(92),
    [anon_sym_inteldialect] = ACTIONS(92),
    [anon_sym_internal] = ACTIONS(92),
    [anon_sym_jumptable] = ACTIONS(92),
    [anon_sym_linkonce] = ACTIONS(92),
    [anon_sym_linkonce_odr] = ACTIONS(92),
    [anon_sym_local_unnamed_addr] = ACTIONS(92),
    [anon_sym_localdynamic] = ACTIONS(92),
    [anon_sym_localexec] = ACTIONS(92),
    [anon_sym_minsize] = ACTIONS(92),
    [anon_sym_module] = ACTIONS(92),
    [anon_sym_monotonic] = ACTIONS(92),
    [anon_sym_msp430_intrcc] = ACTIONS(92),
    [anon_sym_mustprogress] = ACTIONS(92),
    [anon_sym_musttail] = ACTIONS(92),
    [anon_sym_naked] = ACTIONS(92),
    [anon_sym_nest] = ACTIONS(92),
    [anon_sym_noalias] = ACTIONS(92),
    [anon_sym_nobuiltin] = ACTIONS(92),
    [anon_sym_nocallback] = ACTIONS(92),
    [anon_sym_nocapture] = ACTIONS(92),
    [anon_sym_nocf_check] = ACTIONS(92),
    [anon_sym_noduplicate] = ACTIONS(92),
    [anon_sym_nofree] = ACTIONS(92),
    [anon_sym_noimplicitfloat] = ACTIONS(92),
    [anon_sym_noinline] = ACTIONS(92),
    [anon_sym_nomerge] = ACTIONS(92),
    [anon_sym_nonlazybind] = ACTIONS(92),
    [anon_sym_nonnull] = ACTIONS(92),
    [anon_sym_noprofile] = ACTIONS(92),
    [anon_sym_norecurse] = ACTIONS(92),
    [anon_sym_noredzone] = ACTIONS(92),
    [anon_sym_noreturn] = ACTIONS(92),
    [anon_sym_nosync] = ACTIONS(92),
    [anon_sym_noundef] = ACTIONS(92),
    [anon_sym_nounwind] = ACTIONS(92),
    [anon_sym_nosanitize_coverage] = ACTIONS(92),
    [anon_sym_null_pointer_is_valid] = ACTIONS(92),
    [anon_sym_optforfuzzing] = ACTIONS(92),
    [anon_sym_optnone] = ACTIONS(92),
    [anon_sym_optsize] = ACTIONS(92),
    [anon_sym_personality] = ACTIONS(92),
    [anon_sym_preallocated] = ACTIONS(92),
    [anon_sym_private] = ACTIONS(92),
    [anon_sym_protected] = ACTIONS(92),
    [anon_sym_ptx_device] = ACTIONS(92),
    [anon_sym_ptx_kernel] = ACTIONS(92),
    [anon_sym_readnone] = ACTIONS(92),
    [anon_sym_readonly] = ACTIONS(92),
    [anon_sym_release] = ACTIONS(92),
    [anon_sym_returned] = ACTIONS(92),
    [anon_sym_returns_twice] = ACTIONS(92),
    [anon_sym_safestack] = ACTIONS(92),
    [anon_sym_sanitize_address] = ACTIONS(92),
    [anon_sym_sanitize_hwaddress] = ACTIONS(92),
    [anon_sym_sanitize_memory] = ACTIONS(92),
    [anon_sym_sanitize_memtag] = ACTIONS(92),
    [anon_sym_sanitize_thread] = ACTIONS(92),
    [anon_sym_section] = ACTIONS(92),
    [anon_sym_seq_cst] = ACTIONS(92),
    [anon_sym_shadowcallstack] = ACTIONS(92),
    [anon_sym_sideeffect] = ACTIONS(92),
    [anon_sym_signext] = ACTIONS(92),
    [anon_sym_source_filename] = ACTIONS(92),
    [anon_sym_speculatable] = ACTIONS(92),
    [anon_sym_speculative_load_hardening] = ACTIONS(92),
    [anon_sym_spir_func] = ACTIONS(92),
    [anon_sym_spir_kernel] = ACTIONS(92),
    [anon_sym_sret] = ACTIONS(92),
    [anon_sym_ssp] = ACTIONS(92),
    [anon_sym_sspreq] = ACTIONS(92),
    [anon_sym_sspstrong] = ACTIONS(92),
    [anon_sym_strictfp] = ACTIONS(92),
    [anon_sym_swiftcc] = ACTIONS(92),
    [anon_sym_swifterror] = ACTIONS(92),
    [anon_sym_swifttailcc] = ACTIONS(92),
    [anon_sym_swiftself] = ACTIONS(92),
    [anon_sym_syncscope] = ACTIONS(92),
    [anon_sym_tail] = ACTIONS(92),
    [anon_sym_tailcc] = ACTIONS(92),
    [anon_sym_target] = ACTIONS(92),
    [anon_sym_thread_local] = ACTIONS(92),
    [anon_sym_to] = ACTIONS(92),
    [anon_sym_triple] = ACTIONS(92),
    [anon_sym_unnamed_addr] = ACTIONS(92),
    [anon_sym_unordered] = ACTIONS(92),
    [anon_sym_uselistorder] = ACTIONS(92),
    [anon_sym_uselistorder_bb] = ACTIONS(92),
    [anon_sym_uwtable] = ACTIONS(92),
    [anon_sym_volatile] = ACTIONS(92),
    [anon_sym_weak] = ACTIONS(92),
    [anon_sym_weak_odr] = ACTIONS(92),
    [anon_sym_willreturn] = ACTIONS(92),
    [anon_sym_win64cc] = ACTIONS(92),
    [anon_sym_within] = ACTIONS(92),
    [anon_sym_writeonly] = ACTIONS(92),
    [anon_sym_x] = ACTIONS(92),
    [anon_sym_x86_64_sysvcc] = ACTIONS(92),
    [anon_sym_x86_fastcallcc] = ACTIONS(92),
    [anon_sym_x86_stdcallcc] = ACTIONS(92),
    [anon_sym_x86_thiscallcc] = ACTIONS(92),
    [anon_sym_zeroext] = ACTIONS(92),
    [sym_number] = ACTIONS(92),
    [aux_sym_float_token1] = ACTIONS(90),
    [aux_sym_float_token2] = ACTIONS(90),
    [anon_sym_true] = ACTIONS(92),
    [anon_sym_false] = ACTIONS(92),
    [anon_sym_zeroinitializer] = ACTIONS(92),
    [anon_sym_undef] = ACTIONS(92),
    [anon_sym_null] = ACTIONS(92),
    [anon_sym_none] = ACTIONS(92),
    [anon_sym_poison] = ACTIONS(92),
    [anon_sym_vscale] = ACTIONS(92),
    [sym_comment] = ACTIONS(90),
    [sym_string] = ACTIONS(90),
    [sym_label] = ACTIONS(90),
    [aux_sym_identifier_token1] = ACTIONS(90),
    [aux_sym_identifier_token2] = ACTIONS(90),
    [aux_sym_identifier_token3] = ACTIONS(92),
    [aux_sym_identifier_token4] = ACTIONS(92),
    [aux_sym_identifier_token5] = ACTIONS(92),
    [aux_sym_identifier_token6] = ACTIONS(92),
    [aux_sym_identifier_token7] = ACTIONS(92),
    [aux_sym_identifier_token8] = ACTIONS(92),
    [anon_sym_COMMA] = ACTIONS(90),
    [anon_sym_BANG] = ACTIONS(92),
    [anon_sym_EQ] = ACTIONS(90),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_COLON] = ACTIONS(90),
    [anon_sym_TILDE] = ACTIONS(90),
    [anon_sym_CARET] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(90),
    [anon_sym_PIPE] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(90),
    [anon_sym_RBRACK] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(90),
    [anon_sym_RBRACE] = ACTIONS(90),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [anon_sym_void] = ACTIONS(96),
    [anon_sym_half] = ACTIONS(96),
    [anon_sym_bfloat] = ACTIONS(96),
    [anon_sym_float] = ACTIONS(96),
    [anon_sym_double] = ACTIONS(96),
    [anon_sym_x86_fp80] = ACTIONS(96),
    [anon_sym_fp128] = ACTIONS(96),
    [anon_sym_pcc_fp128] = ACTIONS(96),
    [anon_sym_label] = ACTIONS(96),
    [anon_sym_metadata] = ACTIONS(96),
    [anon_sym_x86_mmx] = ACTIONS(96),
    [anon_sym_x86_amx] = ACTIONS(96),
    [aux_sym_type_token1] = ACTIONS(96),
    [anon_sym_add] = ACTIONS(96),
    [anon_sym_addrspacecast] = ACTIONS(96),
    [anon_sym_alloca] = ACTIONS(96),
    [anon_sym_and] = ACTIONS(96),
    [anon_sym_arcp] = ACTIONS(96),
    [anon_sym_ashr] = ACTIONS(96),
    [anon_sym_atomicrmw] = ACTIONS(96),
    [anon_sym_bitcast] = ACTIONS(96),
    [anon_sym_br] = ACTIONS(96),
    [anon_sym_catchpad] = ACTIONS(96),
    [anon_sym_catchswitch] = ACTIONS(96),
    [anon_sym_catchret] = ACTIONS(96),
    [anon_sym_call] = ACTIONS(96),
    [anon_sym_callbr] = ACTIONS(96),
    [anon_sym_cleanuppad] = ACTIONS(96),
    [anon_sym_cleanupret] = ACTIONS(96),
    [anon_sym_cmpxchg] = ACTIONS(96),
    [anon_sym_eq] = ACTIONS(96),
    [anon_sym_exact] = ACTIONS(96),
    [anon_sym_extractelement] = ACTIONS(96),
    [anon_sym_extractvalue] = ACTIONS(96),
    [anon_sym_fadd] = ACTIONS(96),
    [anon_sym_fast] = ACTIONS(96),
    [anon_sym_fcmp] = ACTIONS(96),
    [anon_sym_fdiv] = ACTIONS(96),
    [anon_sym_fence] = ACTIONS(96),
    [anon_sym_fmul] = ACTIONS(96),
    [anon_sym_fneg] = ACTIONS(96),
    [anon_sym_fpext] = ACTIONS(96),
    [anon_sym_fptosi] = ACTIONS(96),
    [anon_sym_fptoui] = ACTIONS(96),
    [anon_sym_fptrunc] = ACTIONS(96),
    [anon_sym_free] = ACTIONS(96),
    [anon_sym_freeze] = ACTIONS(96),
    [anon_sym_frem] = ACTIONS(96),
    [anon_sym_fsub] = ACTIONS(96),
    [anon_sym_getelementptr] = ACTIONS(96),
    [anon_sym_icmp] = ACTIONS(96),
    [anon_sym_inbounds] = ACTIONS(96),
    [anon_sym_indirectbr] = ACTIONS(96),
    [anon_sym_insertelement] = ACTIONS(96),
    [anon_sym_insertvalue] = ACTIONS(96),
    [anon_sym_inttoptr] = ACTIONS(96),
    [anon_sym_invoke] = ACTIONS(96),
    [anon_sym_landingpad] = ACTIONS(96),
    [anon_sym_load] = ACTIONS(96),
    [anon_sym_lshr] = ACTIONS(96),
    [anon_sym_malloc] = ACTIONS(96),
    [anon_sym_max] = ACTIONS(96),
    [anon_sym_min] = ACTIONS(96),
    [anon_sym_mul] = ACTIONS(96),
    [anon_sym_nand] = ACTIONS(96),
    [anon_sym_ne] = ACTIONS(96),
    [anon_sym_ninf] = ACTIONS(96),
    [anon_sym_nnan] = ACTIONS(96),
    [anon_sym_nsw] = ACTIONS(96),
    [anon_sym_nsz] = ACTIONS(96),
    [anon_sym_nuw] = ACTIONS(96),
    [anon_sym_oeq] = ACTIONS(96),
    [anon_sym_oge] = ACTIONS(96),
    [anon_sym_ogt] = ACTIONS(96),
    [anon_sym_ole] = ACTIONS(96),
    [anon_sym_olt] = ACTIONS(96),
    [anon_sym_one] = ACTIONS(96),
    [anon_sym_or] = ACTIONS(96),
    [anon_sym_ord] = ACTIONS(96),
    [anon_sym_phi] = ACTIONS(96),
    [anon_sym_ptrtoint] = ACTIONS(96),
    [anon_sym_resume] = ACTIONS(96),
    [anon_sym_ret] = ACTIONS(96),
    [anon_sym_sdiv] = ACTIONS(96),
    [anon_sym_select] = ACTIONS(96),
    [anon_sym_sext] = ACTIONS(96),
    [anon_sym_sge] = ACTIONS(96),
    [anon_sym_sgt] = ACTIONS(96),
    [anon_sym_shl] = ACTIONS(96),
    [anon_sym_shufflevector] = ACTIONS(96),
    [anon_sym_sitofp] = ACTIONS(96),
    [anon_sym_sle] = ACTIONS(96),
    [anon_sym_slt] = ACTIONS(96),
    [anon_sym_srem] = ACTIONS(96),
    [anon_sym_store] = ACTIONS(96),
    [anon_sym_sub] = ACTIONS(96),
    [anon_sym_switch] = ACTIONS(96),
    [anon_sym_trunc] = ACTIONS(96),
    [anon_sym_udiv] = ACTIONS(96),
    [anon_sym_ueq] = ACTIONS(96),
    [anon_sym_uge] = ACTIONS(96),
    [anon_sym_ugt] = ACTIONS(96),
    [anon_sym_uitofp] = ACTIONS(96),
    [anon_sym_ule] = ACTIONS(96),
    [anon_sym_ult] = ACTIONS(96),
    [anon_sym_umax] = ACTIONS(96),
    [anon_sym_umin] = ACTIONS(96),
    [anon_sym_une] = ACTIONS(96),
    [anon_sym_uno] = ACTIONS(96),
    [anon_sym_unreachable] = ACTIONS(96),
    [anon_sym_unwind] = ACTIONS(96),
    [anon_sym_urem] = ACTIONS(96),
    [anon_sym_va_arg] = ACTIONS(96),
    [anon_sym_xchg] = ACTIONS(96),
    [anon_sym_xor] = ACTIONS(96),
    [anon_sym_zext] = ACTIONS(96),
    [anon_sym_acq_rel] = ACTIONS(96),
    [anon_sym_acquire] = ACTIONS(96),
    [anon_sym_addrspace] = ACTIONS(96),
    [anon_sym_alias] = ACTIONS(96),
    [anon_sym_align] = ACTIONS(96),
    [anon_sym_alignstack] = ACTIONS(96),
    [anon_sym_allocsize] = ACTIONS(96),
    [anon_sym_alwaysinline] = ACTIONS(96),
    [anon_sym_appending] = ACTIONS(96),
    [anon_sym_argmemonly] = ACTIONS(96),
    [anon_sym_arm_aapcs_vfpcc] = ACTIONS(96),
    [anon_sym_arm_aapcscc] = ACTIONS(96),
    [anon_sym_arm_apcscc] = ACTIONS(96),
    [anon_sym_asm] = ACTIONS(96),
    [anon_sym_atomic] = ACTIONS(96),
    [anon_sym_available_externally] = ACTIONS(96),
    [anon_sym_blockaddress] = ACTIONS(96),
    [anon_sym_builtin] = ACTIONS(96),
    [anon_sym_byref] = ACTIONS(96),
    [anon_sym_byval] = ACTIONS(96),
    [anon_sym_c] = ACTIONS(96),
    [anon_sym_caller] = ACTIONS(96),
    [anon_sym_catch] = ACTIONS(96),
    [anon_sym_cc] = ACTIONS(96),
    [anon_sym_ccc] = ACTIONS(96),
    [anon_sym_cleanup] = ACTIONS(96),
    [anon_sym_cold] = ACTIONS(96),
    [anon_sym_coldcc] = ACTIONS(96),
    [anon_sym_comdat] = ACTIONS(96),
    [anon_sym_common] = ACTIONS(96),
    [anon_sym_constant] = ACTIONS(96),
    [anon_sym_convergent] = ACTIONS(96),
    [anon_sym_datalayout] = ACTIONS(96),
    [anon_sym_declare] = ACTIONS(96),
    [anon_sym_default] = ACTIONS(96),
    [anon_sym_define] = ACTIONS(96),
    [anon_sym_deplibs] = ACTIONS(96),
    [anon_sym_dereferenceable] = ACTIONS(96),
    [anon_sym_dereferenceable_or_null] = ACTIONS(96),
    [anon_sym_distinct] = ACTIONS(96),
    [anon_sym_dllexport] = ACTIONS(96),
    [anon_sym_dllimport] = ACTIONS(96),
    [anon_sym_dso_local] = ACTIONS(96),
    [anon_sym_dso_preemptable] = ACTIONS(96),
    [anon_sym_except] = ACTIONS(96),
    [anon_sym_extern_weak] = ACTIONS(96),
    [anon_sym_external] = ACTIONS(96),
    [anon_sym_externally_initialized] = ACTIONS(96),
    [anon_sym_fastcc] = ACTIONS(96),
    [anon_sym_filter] = ACTIONS(96),
    [anon_sym_from] = ACTIONS(96),
    [anon_sym_gc] = ACTIONS(96),
    [anon_sym_global] = ACTIONS(96),
    [anon_sym_hhvm_ccc] = ACTIONS(96),
    [anon_sym_hhvmcc] = ACTIONS(96),
    [anon_sym_hidden] = ACTIONS(96),
    [anon_sym_hot] = ACTIONS(96),
    [anon_sym_immarg] = ACTIONS(96),
    [anon_sym_inaccessiblemem_or_argmemonly] = ACTIONS(96),
    [anon_sym_inaccessiblememonly] = ACTIONS(96),
    [anon_sym_inalloca] = ACTIONS(96),
    [anon_sym_initialexec] = ACTIONS(96),
    [anon_sym_inlinehint] = ACTIONS(96),
    [anon_sym_inreg] = ACTIONS(96),
    [anon_sym_intel_ocl_bicc] = ACTIONS(96),
    [anon_sym_inteldialect] = ACTIONS(96),
    [anon_sym_internal] = ACTIONS(96),
    [anon_sym_jumptable] = ACTIONS(96),
    [anon_sym_linkonce] = ACTIONS(96),
    [anon_sym_linkonce_odr] = ACTIONS(96),
    [anon_sym_local_unnamed_addr] = ACTIONS(96),
    [anon_sym_localdynamic] = ACTIONS(96),
    [anon_sym_localexec] = ACTIONS(96),
    [anon_sym_minsize] = ACTIONS(96),
    [anon_sym_module] = ACTIONS(96),
    [anon_sym_monotonic] = ACTIONS(96),
    [anon_sym_msp430_intrcc] = ACTIONS(96),
    [anon_sym_mustprogress] = ACTIONS(96),
    [anon_sym_musttail] = ACTIONS(96),
    [anon_sym_naked] = ACTIONS(96),
    [anon_sym_nest] = ACTIONS(96),
    [anon_sym_noalias] = ACTIONS(96),
    [anon_sym_nobuiltin] = ACTIONS(96),
    [anon_sym_nocallback] = ACTIONS(96),
    [anon_sym_nocapture] = ACTIONS(96),
    [anon_sym_nocf_check] = ACTIONS(96),
    [anon_sym_noduplicate] = ACTIONS(96),
    [anon_sym_nofree] = ACTIONS(96),
    [anon_sym_noimplicitfloat] = ACTIONS(96),
    [anon_sym_noinline] = ACTIONS(96),
    [anon_sym_nomerge] = ACTIONS(96),
    [anon_sym_nonlazybind] = ACTIONS(96),
    [anon_sym_nonnull] = ACTIONS(96),
    [anon_sym_noprofile] = ACTIONS(96),
    [anon_sym_norecurse] = ACTIONS(96),
    [anon_sym_noredzone] = ACTIONS(96),
    [anon_sym_noreturn] = ACTIONS(96),
    [anon_sym_nosync] = ACTIONS(96),
    [anon_sym_noundef] = ACTIONS(96),
    [anon_sym_nounwind] = ACTIONS(96),
    [anon_sym_nosanitize_coverage] = ACTIONS(96),
    [anon_sym_null_pointer_is_valid] = ACTIONS(96),
    [anon_sym_optforfuzzing] = ACTIONS(96),
    [anon_sym_optnone] = ACTIONS(96),
    [anon_sym_optsize] = ACTIONS(96),
    [anon_sym_personality] = ACTIONS(96),
    [anon_sym_preallocated] = ACTIONS(96),
    [anon_sym_private] = ACTIONS(96),
    [anon_sym_protected] = ACTIONS(96),
    [anon_sym_ptx_device] = ACTIONS(96),
    [anon_sym_ptx_kernel] = ACTIONS(96),
    [anon_sym_readnone] = ACTIONS(96),
    [anon_sym_readonly] = ACTIONS(96),
    [anon_sym_release] = ACTIONS(96),
    [anon_sym_returned] = ACTIONS(96),
    [anon_sym_returns_twice] = ACTIONS(96),
    [anon_sym_safestack] = ACTIONS(96),
    [anon_sym_sanitize_address] = ACTIONS(96),
    [anon_sym_sanitize_hwaddress] = ACTIONS(96),
    [anon_sym_sanitize_memory] = ACTIONS(96),
    [anon_sym_sanitize_memtag] = ACTIONS(96),
    [anon_sym_sanitize_thread] = ACTIONS(96),
    [anon_sym_section] = ACTIONS(96),
    [anon_sym_seq_cst] = ACTIONS(96),
    [anon_sym_shadowcallstack] = ACTIONS(96),
    [anon_sym_sideeffect] = ACTIONS(96),
    [anon_sym_signext] = ACTIONS(96),
    [anon_sym_source_filename] = ACTIONS(96),
    [anon_sym_speculatable] = ACTIONS(96),
    [anon_sym_speculative_load_hardening] = ACTIONS(96),
    [anon_sym_spir_func] = ACTIONS(96),
    [anon_sym_spir_kernel] = ACTIONS(96),
    [anon_sym_sret] = ACTIONS(96),
    [anon_sym_ssp] = ACTIONS(96),
    [anon_sym_sspreq] = ACTIONS(96),
    [anon_sym_sspstrong] = ACTIONS(96),
    [anon_sym_strictfp] = ACTIONS(96),
    [anon_sym_swiftcc] = ACTIONS(96),
    [anon_sym_swifterror] = ACTIONS(96),
    [anon_sym_swifttailcc] = ACTIONS(96),
    [anon_sym_swiftself] = ACTIONS(96),
    [anon_sym_syncscope] = ACTIONS(96),
    [anon_sym_tail] = ACTIONS(96),
    [anon_sym_tailcc] = ACTIONS(96),
    [anon_sym_target] = ACTIONS(96),
    [anon_sym_thread_local] = ACTIONS(96),
    [anon_sym_to] = ACTIONS(96),
    [anon_sym_triple] = ACTIONS(96),
    [anon_sym_unnamed_addr] = ACTIONS(96),
    [anon_sym_unordered] = ACTIONS(96),
    [anon_sym_uselistorder] = ACTIONS(96),
    [anon_sym_uselistorder_bb] = ACTIONS(96),
    [anon_sym_uwtable] = ACTIONS(96),
    [anon_sym_volatile] = ACTIONS(96),
    [anon_sym_weak] = ACTIONS(96),
    [anon_sym_weak_odr] = ACTIONS(96),
    [anon_sym_willreturn] = ACTIONS(96),
    [anon_sym_win64cc] = ACTIONS(96),
    [anon_sym_within] = ACTIONS(96),
    [anon_sym_writeonly] = ACTIONS(96),
    [anon_sym_x] = ACTIONS(96),
    [anon_sym_x86_64_sysvcc] = ACTIONS(96),
    [anon_sym_x86_fastcallcc] = ACTIONS(96),
    [anon_sym_x86_stdcallcc] = ACTIONS(96),
    [anon_sym_x86_thiscallcc] = ACTIONS(96),
    [anon_sym_zeroext] = ACTIONS(96),
    [sym_number] = ACTIONS(96),
    [aux_sym_float_token1] = ACTIONS(94),
    [aux_sym_float_token2] = ACTIONS(94),
    [anon_sym_true] = ACTIONS(96),
    [anon_sym_false] = ACTIONS(96),
    [anon_sym_zeroinitializer] = ACTIONS(96),
    [anon_sym_undef] = ACTIONS(96),
    [anon_sym_null] = ACTIONS(96),
    [anon_sym_none] = ACTIONS(96),
    [anon_sym_poison] = ACTIONS(96),
    [anon_sym_vscale] = ACTIONS(96),
    [sym_comment] = ACTIONS(94),
    [sym_string] = ACTIONS(94),
    [sym_label] = ACTIONS(94),
    [aux_sym_identifier_token1] = ACTIONS(94),
    [aux_sym_identifier_token2] = ACTIONS(94),
    [aux_sym_identifier_token3] = ACTIONS(96),
    [aux_sym_identifier_token4] = ACTIONS(96),
    [aux_sym_identifier_token5] = ACTIONS(96),
    [aux_sym_identifier_token6] = ACTIONS(96),
    [aux_sym_identifier_token7] = ACTIONS(96),
    [aux_sym_identifier_token8] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(94),
    [anon_sym_BANG] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_STAR] = ACTIONS(94),
    [anon_sym_COLON] = ACTIONS(94),
    [anon_sym_TILDE] = ACTIONS(94),
    [anon_sym_CARET] = ACTIONS(94),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(94),
    [anon_sym_RBRACK] = ACTIONS(94),
    [anon_sym_LBRACE] = ACTIONS(94),
    [anon_sym_RBRACE] = ACTIONS(94),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_void] = ACTIONS(100),
    [anon_sym_half] = ACTIONS(100),
    [anon_sym_bfloat] = ACTIONS(100),
    [anon_sym_float] = ACTIONS(100),
    [anon_sym_double] = ACTIONS(100),
    [anon_sym_x86_fp80] = ACTIONS(100),
    [anon_sym_fp128] = ACTIONS(100),
    [anon_sym_pcc_fp128] = ACTIONS(100),
    [anon_sym_label] = ACTIONS(100),
    [anon_sym_metadata] = ACTIONS(100),
    [anon_sym_x86_mmx] = ACTIONS(100),
    [anon_sym_x86_amx] = ACTIONS(100),
    [aux_sym_type_token1] = ACTIONS(100),
    [anon_sym_add] = ACTIONS(100),
    [anon_sym_addrspacecast] = ACTIONS(100),
    [anon_sym_alloca] = ACTIONS(100),
    [anon_sym_and] = ACTIONS(100),
    [anon_sym_arcp] = ACTIONS(100),
    [anon_sym_ashr] = ACTIONS(100),
    [anon_sym_atomicrmw] = ACTIONS(100),
    [anon_sym_bitcast] = ACTIONS(100),
    [anon_sym_br] = ACTIONS(100),
    [anon_sym_catchpad] = ACTIONS(100),
    [anon_sym_catchswitch] = ACTIONS(100),
    [anon_sym_catchret] = ACTIONS(100),
    [anon_sym_call] = ACTIONS(100),
    [anon_sym_callbr] = ACTIONS(100),
    [anon_sym_cleanuppad] = ACTIONS(100),
    [anon_sym_cleanupret] = ACTIONS(100),
    [anon_sym_cmpxchg] = ACTIONS(100),
    [anon_sym_eq] = ACTIONS(100),
    [anon_sym_exact] = ACTIONS(100),
    [anon_sym_extractelement] = ACTIONS(100),
    [anon_sym_extractvalue] = ACTIONS(100),
    [anon_sym_fadd] = ACTIONS(100),
    [anon_sym_fast] = ACTIONS(100),
    [anon_sym_fcmp] = ACTIONS(100),
    [anon_sym_fdiv] = ACTIONS(100),
    [anon_sym_fence] = ACTIONS(100),
    [anon_sym_fmul] = ACTIONS(100),
    [anon_sym_fneg] = ACTIONS(100),
    [anon_sym_fpext] = ACTIONS(100),
    [anon_sym_fptosi] = ACTIONS(100),
    [anon_sym_fptoui] = ACTIONS(100),
    [anon_sym_fptrunc] = ACTIONS(100),
    [anon_sym_free] = ACTIONS(100),
    [anon_sym_freeze] = ACTIONS(100),
    [anon_sym_frem] = ACTIONS(100),
    [anon_sym_fsub] = ACTIONS(100),
    [anon_sym_getelementptr] = ACTIONS(100),
    [anon_sym_icmp] = ACTIONS(100),
    [anon_sym_inbounds] = ACTIONS(100),
    [anon_sym_indirectbr] = ACTIONS(100),
    [anon_sym_insertelement] = ACTIONS(100),
    [anon_sym_insertvalue] = ACTIONS(100),
    [anon_sym_inttoptr] = ACTIONS(100),
    [anon_sym_invoke] = ACTIONS(100),
    [anon_sym_landingpad] = ACTIONS(100),
    [anon_sym_load] = ACTIONS(100),
    [anon_sym_lshr] = ACTIONS(100),
    [anon_sym_malloc] = ACTIONS(100),
    [anon_sym_max] = ACTIONS(100),
    [anon_sym_min] = ACTIONS(100),
    [anon_sym_mul] = ACTIONS(100),
    [anon_sym_nand] = ACTIONS(100),
    [anon_sym_ne] = ACTIONS(100),
    [anon_sym_ninf] = ACTIONS(100),
    [anon_sym_nnan] = ACTIONS(100),
    [anon_sym_nsw] = ACTIONS(100),
    [anon_sym_nsz] = ACTIONS(100),
    [anon_sym_nuw] = ACTIONS(100),
    [anon_sym_oeq] = ACTIONS(100),
    [anon_sym_oge] = ACTIONS(100),
    [anon_sym_ogt] = ACTIONS(100),
    [anon_sym_ole] = ACTIONS(100),
    [anon_sym_olt] = ACTIONS(100),
    [anon_sym_one] = ACTIONS(100),
    [anon_sym_or] = ACTIONS(100),
    [anon_sym_ord] = ACTIONS(100),
    [anon_sym_phi] = ACTIONS(100),
    [anon_sym_ptrtoint] = ACTIONS(100),
    [anon_sym_resume] = ACTIONS(100),
    [anon_sym_ret] = ACTIONS(100),
    [anon_sym_sdiv] = ACTIONS(100),
    [anon_sym_select] = ACTIONS(100),
    [anon_sym_sext] = ACTIONS(100),
    [anon_sym_sge] = ACTIONS(100),
    [anon_sym_sgt] = ACTIONS(100),
    [anon_sym_shl] = ACTIONS(100),
    [anon_sym_shufflevector] = ACTIONS(100),
    [anon_sym_sitofp] = ACTIONS(100),
    [anon_sym_sle] = ACTIONS(100),
    [anon_sym_slt] = ACTIONS(100),
    [anon_sym_srem] = ACTIONS(100),
    [anon_sym_store] = ACTIONS(100),
    [anon_sym_sub] = ACTIONS(100),
    [anon_sym_switch] = ACTIONS(100),
    [anon_sym_trunc] = ACTIONS(100),
    [anon_sym_udiv] = ACTIONS(100),
    [anon_sym_ueq] = ACTIONS(100),
    [anon_sym_uge] = ACTIONS(100),
    [anon_sym_ugt] = ACTIONS(100),
    [anon_sym_uitofp] = ACTIONS(100),
    [anon_sym_ule] = ACTIONS(100),
    [anon_sym_ult] = ACTIONS(100),
    [anon_sym_umax] = ACTIONS(100),
    [anon_sym_umin] = ACTIONS(100),
    [anon_sym_une] = ACTIONS(100),
    [anon_sym_uno] = ACTIONS(100),
    [anon_sym_unreachable] = ACTIONS(100),
    [anon_sym_unwind] = ACTIONS(100),
    [anon_sym_urem] = ACTIONS(100),
    [anon_sym_va_arg] = ACTIONS(100),
    [anon_sym_xchg] = ACTIONS(100),
    [anon_sym_xor] = ACTIONS(100),
    [anon_sym_zext] = ACTIONS(100),
    [anon_sym_acq_rel] = ACTIONS(100),
    [anon_sym_acquire] = ACTIONS(100),
    [anon_sym_addrspace] = ACTIONS(100),
    [anon_sym_alias] = ACTIONS(100),
    [anon_sym_align] = ACTIONS(100),
    [anon_sym_alignstack] = ACTIONS(100),
    [anon_sym_allocsize] = ACTIONS(100),
    [anon_sym_alwaysinline] = ACTIONS(100),
    [anon_sym_appending] = ACTIONS(100),
    [anon_sym_argmemonly] = ACTIONS(100),
    [anon_sym_arm_aapcs_vfpcc] = ACTIONS(100),
    [anon_sym_arm_aapcscc] = ACTIONS(100),
    [anon_sym_arm_apcscc] = ACTIONS(100),
    [anon_sym_asm] = ACTIONS(100),
    [anon_sym_atomic] = ACTIONS(100),
    [anon_sym_available_externally] = ACTIONS(100),
    [anon_sym_blockaddress] = ACTIONS(100),
    [anon_sym_builtin] = ACTIONS(100),
    [anon_sym_byref] = ACTIONS(100),
    [anon_sym_byval] = ACTIONS(100),
    [anon_sym_c] = ACTIONS(100),
    [anon_sym_caller] = ACTIONS(100),
    [anon_sym_catch] = ACTIONS(100),
    [anon_sym_cc] = ACTIONS(100),
    [anon_sym_ccc] = ACTIONS(100),
    [anon_sym_cleanup] = ACTIONS(100),
    [anon_sym_cold] = ACTIONS(100),
    [anon_sym_coldcc] = ACTIONS(100),
    [anon_sym_comdat] = ACTIONS(100),
    [anon_sym_common] = ACTIONS(100),
    [anon_sym_constant] = ACTIONS(100),
    [anon_sym_convergent] = ACTIONS(100),
    [anon_sym_datalayout] = ACTIONS(100),
    [anon_sym_declare] = ACTIONS(100),
    [anon_sym_default] = ACTIONS(100),
    [anon_sym_define] = ACTIONS(100),
    [anon_sym_deplibs] = ACTIONS(100),
    [anon_sym_dereferenceable] = ACTIONS(100),
    [anon_sym_dereferenceable_or_null] = ACTIONS(100),
    [anon_sym_distinct] = ACTIONS(100),
    [anon_sym_dllexport] = ACTIONS(100),
    [anon_sym_dllimport] = ACTIONS(100),
    [anon_sym_dso_local] = ACTIONS(100),
    [anon_sym_dso_preemptable] = ACTIONS(100),
    [anon_sym_except] = ACTIONS(100),
    [anon_sym_extern_weak] = ACTIONS(100),
    [anon_sym_external] = ACTIONS(100),
    [anon_sym_externally_initialized] = ACTIONS(100),
    [anon_sym_fastcc] = ACTIONS(100),
    [anon_sym_filter] = ACTIONS(100),
    [anon_sym_from] = ACTIONS(100),
    [anon_sym_gc] = ACTIONS(100),
    [anon_sym_global] = ACTIONS(100),
    [anon_sym_hhvm_ccc] = ACTIONS(100),
    [anon_sym_hhvmcc] = ACTIONS(100),
    [anon_sym_hidden] = ACTIONS(100),
    [anon_sym_hot] = ACTIONS(100),
    [anon_sym_immarg] = ACTIONS(100),
    [anon_sym_inaccessiblemem_or_argmemonly] = ACTIONS(100),
    [anon_sym_inaccessiblememonly] = ACTIONS(100),
    [anon_sym_inalloca] = ACTIONS(100),
    [anon_sym_initialexec] = ACTIONS(100),
    [anon_sym_inlinehint] = ACTIONS(100),
    [anon_sym_inreg] = ACTIONS(100),
    [anon_sym_intel_ocl_bicc] = ACTIONS(100),
    [anon_sym_inteldialect] = ACTIONS(100),
    [anon_sym_internal] = ACTIONS(100),
    [anon_sym_jumptable] = ACTIONS(100),
    [anon_sym_linkonce] = ACTIONS(100),
    [anon_sym_linkonce_odr] = ACTIONS(100),
    [anon_sym_local_unnamed_addr] = ACTIONS(100),
    [anon_sym_localdynamic] = ACTIONS(100),
    [anon_sym_localexec] = ACTIONS(100),
    [anon_sym_minsize] = ACTIONS(100),
    [anon_sym_module] = ACTIONS(100),
    [anon_sym_monotonic] = ACTIONS(100),
    [anon_sym_msp430_intrcc] = ACTIONS(100),
    [anon_sym_mustprogress] = ACTIONS(100),
    [anon_sym_musttail] = ACTIONS(100),
    [anon_sym_naked] = ACTIONS(100),
    [anon_sym_nest] = ACTIONS(100),
    [anon_sym_noalias] = ACTIONS(100),
    [anon_sym_nobuiltin] = ACTIONS(100),
    [anon_sym_nocallback] = ACTIONS(100),
    [anon_sym_nocapture] = ACTIONS(100),
    [anon_sym_nocf_check] = ACTIONS(100),
    [anon_sym_noduplicate] = ACTIONS(100),
    [anon_sym_nofree] = ACTIONS(100),
    [anon_sym_noimplicitfloat] = ACTIONS(100),
    [anon_sym_noinline] = ACTIONS(100),
    [anon_sym_nomerge] = ACTIONS(100),
    [anon_sym_nonlazybind] = ACTIONS(100),
    [anon_sym_nonnull] = ACTIONS(100),
    [anon_sym_noprofile] = ACTIONS(100),
    [anon_sym_norecurse] = ACTIONS(100),
    [anon_sym_noredzone] = ACTIONS(100),
    [anon_sym_noreturn] = ACTIONS(100),
    [anon_sym_nosync] = ACTIONS(100),
    [anon_sym_noundef] = ACTIONS(100),
    [anon_sym_nounwind] = ACTIONS(100),
    [anon_sym_nosanitize_coverage] = ACTIONS(100),
    [anon_sym_null_pointer_is_valid] = ACTIONS(100),
    [anon_sym_optforfuzzing] = ACTIONS(100),
    [anon_sym_optnone] = ACTIONS(100),
    [anon_sym_optsize] = ACTIONS(100),
    [anon_sym_personality] = ACTIONS(100),
    [anon_sym_preallocated] = ACTIONS(100),
    [anon_sym_private] = ACTIONS(100),
    [anon_sym_protected] = ACTIONS(100),
    [anon_sym_ptx_device] = ACTIONS(100),
    [anon_sym_ptx_kernel] = ACTIONS(100),
    [anon_sym_readnone] = ACTIONS(100),
    [anon_sym_readonly] = ACTIONS(100),
    [anon_sym_release] = ACTIONS(100),
    [anon_sym_returned] = ACTIONS(100),
    [anon_sym_returns_twice] = ACTIONS(100),
    [anon_sym_safestack] = ACTIONS(100),
    [anon_sym_sanitize_address] = ACTIONS(100),
    [anon_sym_sanitize_hwaddress] = ACTIONS(100),
    [anon_sym_sanitize_memory] = ACTIONS(100),
    [anon_sym_sanitize_memtag] = ACTIONS(100),
    [anon_sym_sanitize_thread] = ACTIONS(100),
    [anon_sym_section] = ACTIONS(100),
    [anon_sym_seq_cst] = ACTIONS(100),
    [anon_sym_shadowcallstack] = ACTIONS(100),
    [anon_sym_sideeffect] = ACTIONS(100),
    [anon_sym_signext] = ACTIONS(100),
    [anon_sym_source_filename] = ACTIONS(100),
    [anon_sym_speculatable] = ACTIONS(100),
    [anon_sym_speculative_load_hardening] = ACTIONS(100),
    [anon_sym_spir_func] = ACTIONS(100),
    [anon_sym_spir_kernel] = ACTIONS(100),
    [anon_sym_sret] = ACTIONS(100),
    [anon_sym_ssp] = ACTIONS(100),
    [anon_sym_sspreq] = ACTIONS(100),
    [anon_sym_sspstrong] = ACTIONS(100),
    [anon_sym_strictfp] = ACTIONS(100),
    [anon_sym_swiftcc] = ACTIONS(100),
    [anon_sym_swifterror] = ACTIONS(100),
    [anon_sym_swifttailcc] = ACTIONS(100),
    [anon_sym_swiftself] = ACTIONS(100),
    [anon_sym_syncscope] = ACTIONS(100),
    [anon_sym_tail] = ACTIONS(100),
    [anon_sym_tailcc] = ACTIONS(100),
    [anon_sym_target] = ACTIONS(100),
    [anon_sym_thread_local] = ACTIONS(100),
    [anon_sym_to] = ACTIONS(100),
    [anon_sym_triple] = ACTIONS(100),
    [anon_sym_unnamed_addr] = ACTIONS(100),
    [anon_sym_unordered] = ACTIONS(100),
    [anon_sym_uselistorder] = ACTIONS(100),
    [anon_sym_uselistorder_bb] = ACTIONS(100),
    [anon_sym_uwtable] = ACTIONS(100),
    [anon_sym_volatile] = ACTIONS(100),
    [anon_sym_weak] = ACTIONS(100),
    [anon_sym_weak_odr] = ACTIONS(100),
    [anon_sym_willreturn] = ACTIONS(100),
    [anon_sym_win64cc] = ACTIONS(100),
    [anon_sym_within] = ACTIONS(100),
    [anon_sym_writeonly] = ACTIONS(100),
    [anon_sym_x] = ACTIONS(100),
    [anon_sym_x86_64_sysvcc] = ACTIONS(100),
    [anon_sym_x86_fastcallcc] = ACTIONS(100),
    [anon_sym_x86_stdcallcc] = ACTIONS(100),
    [anon_sym_x86_thiscallcc] = ACTIONS(100),
    [anon_sym_zeroext] = ACTIONS(100),
    [sym_number] = ACTIONS(100),
    [aux_sym_float_token1] = ACTIONS(98),
    [aux_sym_float_token2] = ACTIONS(98),
    [anon_sym_true] = ACTIONS(100),
    [anon_sym_false] = ACTIONS(100),
    [anon_sym_zeroinitializer] = ACTIONS(100),
    [anon_sym_undef] = ACTIONS(100),
    [anon_sym_null] = ACTIONS(100),
    [anon_sym_none] = ACTIONS(100),
    [anon_sym_poison] = ACTIONS(100),
    [anon_sym_vscale] = ACTIONS(100),
    [sym_comment] = ACTIONS(98),
    [sym_string] = ACTIONS(98),
    [sym_label] = ACTIONS(98),
    [aux_sym_identifier_token1] = ACTIONS(98),
    [aux_sym_identifier_token2] = ACTIONS(98),
    [aux_sym_identifier_token3] = ACTIONS(100),
    [aux_sym_identifier_token4] = ACTIONS(100),
    [aux_sym_identifier_token5] = ACTIONS(100),
    [aux_sym_identifier_token6] = ACTIONS(100),
    [aux_sym_identifier_token7] = ACTIONS(100),
    [aux_sym_identifier_token8] = ACTIONS(100),
    [anon_sym_COMMA] = ACTIONS(98),
    [anon_sym_BANG] = ACTIONS(100),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_COLON] = ACTIONS(98),
    [anon_sym_TILDE] = ACTIONS(98),
    [anon_sym_CARET] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_RBRACK] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_RBRACE] = ACTIONS(98),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [anon_sym_void] = ACTIONS(104),
    [anon_sym_half] = ACTIONS(104),
    [anon_sym_bfloat] = ACTIONS(104),
    [anon_sym_float] = ACTIONS(104),
    [anon_sym_double] = ACTIONS(104),
    [anon_sym_x86_fp80] = ACTIONS(104),
    [anon_sym_fp128] = ACTIONS(104),
    [anon_sym_pcc_fp128] = ACTIONS(104),
    [anon_sym_label] = ACTIONS(104),
    [anon_sym_metadata] = ACTIONS(104),
    [anon_sym_x86_mmx] = ACTIONS(104),
    [anon_sym_x86_amx] = ACTIONS(104),
    [aux_sym_type_token1] = ACTIONS(104),
    [anon_sym_add] = ACTIONS(104),
    [anon_sym_addrspacecast] = ACTIONS(104),
    [anon_sym_alloca] = ACTIONS(104),
    [anon_sym_and] = ACTIONS(104),
    [anon_sym_arcp] = ACTIONS(104),
    [anon_sym_ashr] = ACTIONS(104),
    [anon_sym_atomicrmw] = ACTIONS(104),
    [anon_sym_bitcast] = ACTIONS(104),
    [anon_sym_br] = ACTIONS(104),
    [anon_sym_catchpad] = ACTIONS(104),
    [anon_sym_catchswitch] = ACTIONS(104),
    [anon_sym_catchret] = ACTIONS(104),
    [anon_sym_call] = ACTIONS(104),
    [anon_sym_callbr] = ACTIONS(104),
    [anon_sym_cleanuppad] = ACTIONS(104),
    [anon_sym_cleanupret] = ACTIONS(104),
    [anon_sym_cmpxchg] = ACTIONS(104),
    [anon_sym_eq] = ACTIONS(104),
    [anon_sym_exact] = ACTIONS(104),
    [anon_sym_extractelement] = ACTIONS(104),
    [anon_sym_extractvalue] = ACTIONS(104),
    [anon_sym_fadd] = ACTIONS(104),
    [anon_sym_fast] = ACTIONS(104),
    [anon_sym_fcmp] = ACTIONS(104),
    [anon_sym_fdiv] = ACTIONS(104),
    [anon_sym_fence] = ACTIONS(104),
    [anon_sym_fmul] = ACTIONS(104),
    [anon_sym_fneg] = ACTIONS(104),
    [anon_sym_fpext] = ACTIONS(104),
    [anon_sym_fptosi] = ACTIONS(104),
    [anon_sym_fptoui] = ACTIONS(104),
    [anon_sym_fptrunc] = ACTIONS(104),
    [anon_sym_free] = ACTIONS(104),
    [anon_sym_freeze] = ACTIONS(104),
    [anon_sym_frem] = ACTIONS(104),
    [anon_sym_fsub] = ACTIONS(104),
    [anon_sym_getelementptr] = ACTIONS(104),
    [anon_sym_icmp] = ACTIONS(104),
    [anon_sym_inbounds] = ACTIONS(104),
    [anon_sym_indirectbr] = ACTIONS(104),
    [anon_sym_insertelement] = ACTIONS(104),
    [anon_sym_insertvalue] = ACTIONS(104),
    [anon_sym_inttoptr] = ACTIONS(104),
    [anon_sym_invoke] = ACTIONS(104),
    [anon_sym_landingpad] = ACTIONS(104),
    [anon_sym_load] = ACTIONS(104),
    [anon_sym_lshr] = ACTIONS(104),
    [anon_sym_malloc] = ACTIONS(104),
    [anon_sym_max] = ACTIONS(104),
    [anon_sym_min] = ACTIONS(104),
    [anon_sym_mul] = ACTIONS(104),
    [anon_sym_nand] = ACTIONS(104),
    [anon_sym_ne] = ACTIONS(104),
    [anon_sym_ninf] = ACTIONS(104),
    [anon_sym_nnan] = ACTIONS(104),
    [anon_sym_nsw] = ACTIONS(104),
    [anon_sym_nsz] = ACTIONS(104),
    [anon_sym_nuw] = ACTIONS(104),
    [anon_sym_oeq] = ACTIONS(104),
    [anon_sym_oge] = ACTIONS(104),
    [anon_sym_ogt] = ACTIONS(104),
    [anon_sym_ole] = ACTIONS(104),
    [anon_sym_olt] = ACTIONS(104),
    [anon_sym_one] = ACTIONS(104),
    [anon_sym_or] = ACTIONS(104),
    [anon_sym_ord] = ACTIONS(104),
    [anon_sym_phi] = ACTIONS(104),
    [anon_sym_ptrtoint] = ACTIONS(104),
    [anon_sym_resume] = ACTIONS(104),
    [anon_sym_ret] = ACTIONS(104),
    [anon_sym_sdiv] = ACTIONS(104),
    [anon_sym_select] = ACTIONS(104),
    [anon_sym_sext] = ACTIONS(104),
    [anon_sym_sge] = ACTIONS(104),
    [anon_sym_sgt] = ACTIONS(104),
    [anon_sym_shl] = ACTIONS(104),
    [anon_sym_shufflevector] = ACTIONS(104),
    [anon_sym_sitofp] = ACTIONS(104),
    [anon_sym_sle] = ACTIONS(104),
    [anon_sym_slt] = ACTIONS(104),
    [anon_sym_srem] = ACTIONS(104),
    [anon_sym_store] = ACTIONS(104),
    [anon_sym_sub] = ACTIONS(104),
    [anon_sym_switch] = ACTIONS(104),
    [anon_sym_trunc] = ACTIONS(104),
    [anon_sym_udiv] = ACTIONS(104),
    [anon_sym_ueq] = ACTIONS(104),
    [anon_sym_uge] = ACTIONS(104),
    [anon_sym_ugt] = ACTIONS(104),
    [anon_sym_uitofp] = ACTIONS(104),
    [anon_sym_ule] = ACTIONS(104),
    [anon_sym_ult] = ACTIONS(104),
    [anon_sym_umax] = ACTIONS(104),
    [anon_sym_umin] = ACTIONS(104),
    [anon_sym_une] = ACTIONS(104),
    [anon_sym_uno] = ACTIONS(104),
    [anon_sym_unreachable] = ACTIONS(104),
    [anon_sym_unwind] = ACTIONS(104),
    [anon_sym_urem] = ACTIONS(104),
    [anon_sym_va_arg] = ACTIONS(104),
    [anon_sym_xchg] = ACTIONS(104),
    [anon_sym_xor] = ACTIONS(104),
    [anon_sym_zext] = ACTIONS(104),
    [anon_sym_acq_rel] = ACTIONS(104),
    [anon_sym_acquire] = ACTIONS(104),
    [anon_sym_addrspace] = ACTIONS(104),
    [anon_sym_alias] = ACTIONS(104),
    [anon_sym_align] = ACTIONS(104),
    [anon_sym_alignstack] = ACTIONS(104),
    [anon_sym_allocsize] = ACTIONS(104),
    [anon_sym_alwaysinline] = ACTIONS(104),
    [anon_sym_appending] = ACTIONS(104),
    [anon_sym_argmemonly] = ACTIONS(104),
    [anon_sym_arm_aapcs_vfpcc] = ACTIONS(104),
    [anon_sym_arm_aapcscc] = ACTIONS(104),
    [anon_sym_arm_apcscc] = ACTIONS(104),
    [anon_sym_asm] = ACTIONS(104),
    [anon_sym_atomic] = ACTIONS(104),
    [anon_sym_available_externally] = ACTIONS(104),
    [anon_sym_blockaddress] = ACTIONS(104),
    [anon_sym_builtin] = ACTIONS(104),
    [anon_sym_byref] = ACTIONS(104),
    [anon_sym_byval] = ACTIONS(104),
    [anon_sym_c] = ACTIONS(104),
    [anon_sym_caller] = ACTIONS(104),
    [anon_sym_catch] = ACTIONS(104),
    [anon_sym_cc] = ACTIONS(104),
    [anon_sym_ccc] = ACTIONS(104),
    [anon_sym_cleanup] = ACTIONS(104),
    [anon_sym_cold] = ACTIONS(104),
    [anon_sym_coldcc] = ACTIONS(104),
    [anon_sym_comdat] = ACTIONS(104),
    [anon_sym_common] = ACTIONS(104),
    [anon_sym_constant] = ACTIONS(104),
    [anon_sym_convergent] = ACTIONS(104),
    [anon_sym_datalayout] = ACTIONS(104),
    [anon_sym_declare] = ACTIONS(104),
    [anon_sym_default] = ACTIONS(104),
    [anon_sym_define] = ACTIONS(104),
    [anon_sym_deplibs] = ACTIONS(104),
    [anon_sym_dereferenceable] = ACTIONS(104),
    [anon_sym_dereferenceable_or_null] = ACTIONS(104),
    [anon_sym_distinct] = ACTIONS(104),
    [anon_sym_dllexport] = ACTIONS(104),
    [anon_sym_dllimport] = ACTIONS(104),
    [anon_sym_dso_local] = ACTIONS(104),
    [anon_sym_dso_preemptable] = ACTIONS(104),
    [anon_sym_except] = ACTIONS(104),
    [anon_sym_extern_weak] = ACTIONS(104),
    [anon_sym_external] = ACTIONS(104),
    [anon_sym_externally_initialized] = ACTIONS(104),
    [anon_sym_fastcc] = ACTIONS(104),
    [anon_sym_filter] = ACTIONS(104),
    [anon_sym_from] = ACTIONS(104),
    [anon_sym_gc] = ACTIONS(104),
    [anon_sym_global] = ACTIONS(104),
    [anon_sym_hhvm_ccc] = ACTIONS(104),
    [anon_sym_hhvmcc] = ACTIONS(104),
    [anon_sym_hidden] = ACTIONS(104),
    [anon_sym_hot] = ACTIONS(104),
    [anon_sym_immarg] = ACTIONS(104),
    [anon_sym_inaccessiblemem_or_argmemonly] = ACTIONS(104),
    [anon_sym_inaccessiblememonly] = ACTIONS(104),
    [anon_sym_inalloca] = ACTIONS(104),
    [anon_sym_initialexec] = ACTIONS(104),
    [anon_sym_inlinehint] = ACTIONS(104),
    [anon_sym_inreg] = ACTIONS(104),
    [anon_sym_intel_ocl_bicc] = ACTIONS(104),
    [anon_sym_inteldialect] = ACTIONS(104),
    [anon_sym_internal] = ACTIONS(104),
    [anon_sym_jumptable] = ACTIONS(104),
    [anon_sym_linkonce] = ACTIONS(104),
    [anon_sym_linkonce_odr] = ACTIONS(104),
    [anon_sym_local_unnamed_addr] = ACTIONS(104),
    [anon_sym_localdynamic] = ACTIONS(104),
    [anon_sym_localexec] = ACTIONS(104),
    [anon_sym_minsize] = ACTIONS(104),
    [anon_sym_module] = ACTIONS(104),
    [anon_sym_monotonic] = ACTIONS(104),
    [anon_sym_msp430_intrcc] = ACTIONS(104),
    [anon_sym_mustprogress] = ACTIONS(104),
    [anon_sym_musttail] = ACTIONS(104),
    [anon_sym_naked] = ACTIONS(104),
    [anon_sym_nest] = ACTIONS(104),
    [anon_sym_noalias] = ACTIONS(104),
    [anon_sym_nobuiltin] = ACTIONS(104),
    [anon_sym_nocallback] = ACTIONS(104),
    [anon_sym_nocapture] = ACTIONS(104),
    [anon_sym_nocf_check] = ACTIONS(104),
    [anon_sym_noduplicate] = ACTIONS(104),
    [anon_sym_nofree] = ACTIONS(104),
    [anon_sym_noimplicitfloat] = ACTIONS(104),
    [anon_sym_noinline] = ACTIONS(104),
    [anon_sym_nomerge] = ACTIONS(104),
    [anon_sym_nonlazybind] = ACTIONS(104),
    [anon_sym_nonnull] = ACTIONS(104),
    [anon_sym_noprofile] = ACTIONS(104),
    [anon_sym_norecurse] = ACTIONS(104),
    [anon_sym_noredzone] = ACTIONS(104),
    [anon_sym_noreturn] = ACTIONS(104),
    [anon_sym_nosync] = ACTIONS(104),
    [anon_sym_noundef] = ACTIONS(104),
    [anon_sym_nounwind] = ACTIONS(104),
    [anon_sym_nosanitize_coverage] = ACTIONS(104),
    [anon_sym_null_pointer_is_valid] = ACTIONS(104),
    [anon_sym_optforfuzzing] = ACTIONS(104),
    [anon_sym_optnone] = ACTIONS(104),
    [anon_sym_optsize] = ACTIONS(104),
    [anon_sym_personality] = ACTIONS(104),
    [anon_sym_preallocated] = ACTIONS(104),
    [anon_sym_private] = ACTIONS(104),
    [anon_sym_protected] = ACTIONS(104),
    [anon_sym_ptx_device] = ACTIONS(104),
    [anon_sym_ptx_kernel] = ACTIONS(104),
    [anon_sym_readnone] = ACTIONS(104),
    [anon_sym_readonly] = ACTIONS(104),
    [anon_sym_release] = ACTIONS(104),
    [anon_sym_returned] = ACTIONS(104),
    [anon_sym_returns_twice] = ACTIONS(104),
    [anon_sym_safestack] = ACTIONS(104),
    [anon_sym_sanitize_address] = ACTIONS(104),
    [anon_sym_sanitize_hwaddress] = ACTIONS(104),
    [anon_sym_sanitize_memory] = ACTIONS(104),
    [anon_sym_sanitize_memtag] = ACTIONS(104),
    [anon_sym_sanitize_thread] = ACTIONS(104),
    [anon_sym_section] = ACTIONS(104),
    [anon_sym_seq_cst] = ACTIONS(104),
    [anon_sym_shadowcallstack] = ACTIONS(104),
    [anon_sym_sideeffect] = ACTIONS(104),
    [anon_sym_signext] = ACTIONS(104),
    [anon_sym_source_filename] = ACTIONS(104),
    [anon_sym_speculatable] = ACTIONS(104),
    [anon_sym_speculative_load_hardening] = ACTIONS(104),
    [anon_sym_spir_func] = ACTIONS(104),
    [anon_sym_spir_kernel] = ACTIONS(104),
    [anon_sym_sret] = ACTIONS(104),
    [anon_sym_ssp] = ACTIONS(104),
    [anon_sym_sspreq] = ACTIONS(104),
    [anon_sym_sspstrong] = ACTIONS(104),
    [anon_sym_strictfp] = ACTIONS(104),
    [anon_sym_swiftcc] = ACTIONS(104),
    [anon_sym_swifterror] = ACTIONS(104),
    [anon_sym_swifttailcc] = ACTIONS(104),
    [anon_sym_swiftself] = ACTIONS(104),
    [anon_sym_syncscope] = ACTIONS(104),
    [anon_sym_tail] = ACTIONS(104),
    [anon_sym_tailcc] = ACTIONS(104),
    [anon_sym_target] = ACTIONS(104),
    [anon_sym_thread_local] = ACTIONS(104),
    [anon_sym_to] = ACTIONS(104),
    [anon_sym_triple] = ACTIONS(104),
    [anon_sym_unnamed_addr] = ACTIONS(104),
    [anon_sym_unordered] = ACTIONS(104),
    [anon_sym_uselistorder] = ACTIONS(104),
    [anon_sym_uselistorder_bb] = ACTIONS(104),
    [anon_sym_uwtable] = ACTIONS(104),
    [anon_sym_volatile] = ACTIONS(104),
    [anon_sym_weak] = ACTIONS(104),
    [anon_sym_weak_odr] = ACTIONS(104),
    [anon_sym_willreturn] = ACTIONS(104),
    [anon_sym_win64cc] = ACTIONS(104),
    [anon_sym_within] = ACTIONS(104),
    [anon_sym_writeonly] = ACTIONS(104),
    [anon_sym_x] = ACTIONS(104),
    [anon_sym_x86_64_sysvcc] = ACTIONS(104),
    [anon_sym_x86_fastcallcc] = ACTIONS(104),
    [anon_sym_x86_stdcallcc] = ACTIONS(104),
    [anon_sym_x86_thiscallcc] = ACTIONS(104),
    [anon_sym_zeroext] = ACTIONS(104),
    [sym_number] = ACTIONS(104),
    [aux_sym_float_token1] = ACTIONS(102),
    [aux_sym_float_token2] = ACTIONS(102),
    [anon_sym_true] = ACTIONS(104),
    [anon_sym_false] = ACTIONS(104),
    [anon_sym_zeroinitializer] = ACTIONS(104),
    [anon_sym_undef] = ACTIONS(104),
    [anon_sym_null] = ACTIONS(104),
    [anon_sym_none] = ACTIONS(104),
    [anon_sym_poison] = ACTIONS(104),
    [anon_sym_vscale] = ACTIONS(104),
    [sym_comment] = ACTIONS(102),
    [sym_string] = ACTIONS(102),
    [sym_label] = ACTIONS(102),
    [aux_sym_identifier_token1] = ACTIONS(102),
    [aux_sym_identifier_token2] = ACTIONS(102),
    [aux_sym_identifier_token3] = ACTIONS(104),
    [aux_sym_identifier_token4] = ACTIONS(104),
    [aux_sym_identifier_token5] = ACTIONS(104),
    [aux_sym_identifier_token6] = ACTIONS(104),
    [aux_sym_identifier_token7] = ACTIONS(104),
    [aux_sym_identifier_token8] = ACTIONS(104),
    [anon_sym_COMMA] = ACTIONS(102),
    [anon_sym_BANG] = ACTIONS(104),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(102),
    [anon_sym_COLON] = ACTIONS(102),
    [anon_sym_TILDE] = ACTIONS(102),
    [anon_sym_CARET] = ACTIONS(102),
    [anon_sym_DASH] = ACTIONS(104),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_LPAREN] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(102),
    [anon_sym_RBRACK] = ACTIONS(102),
    [anon_sym_LBRACE] = ACTIONS(102),
    [anon_sym_RBRACE] = ACTIONS(102),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_void] = ACTIONS(108),
    [anon_sym_half] = ACTIONS(108),
    [anon_sym_bfloat] = ACTIONS(108),
    [anon_sym_float] = ACTIONS(108),
    [anon_sym_double] = ACTIONS(108),
    [anon_sym_x86_fp80] = ACTIONS(108),
    [anon_sym_fp128] = ACTIONS(108),
    [anon_sym_pcc_fp128] = ACTIONS(108),
    [anon_sym_label] = ACTIONS(108),
    [anon_sym_metadata] = ACTIONS(108),
    [anon_sym_x86_mmx] = ACTIONS(108),
    [anon_sym_x86_amx] = ACTIONS(108),
    [aux_sym_type_token1] = ACTIONS(108),
    [anon_sym_add] = ACTIONS(108),
    [anon_sym_addrspacecast] = ACTIONS(108),
    [anon_sym_alloca] = ACTIONS(108),
    [anon_sym_and] = ACTIONS(108),
    [anon_sym_arcp] = ACTIONS(108),
    [anon_sym_ashr] = ACTIONS(108),
    [anon_sym_atomicrmw] = ACTIONS(108),
    [anon_sym_bitcast] = ACTIONS(108),
    [anon_sym_br] = ACTIONS(108),
    [anon_sym_catchpad] = ACTIONS(108),
    [anon_sym_catchswitch] = ACTIONS(108),
    [anon_sym_catchret] = ACTIONS(108),
    [anon_sym_call] = ACTIONS(108),
    [anon_sym_callbr] = ACTIONS(108),
    [anon_sym_cleanuppad] = ACTIONS(108),
    [anon_sym_cleanupret] = ACTIONS(108),
    [anon_sym_cmpxchg] = ACTIONS(108),
    [anon_sym_eq] = ACTIONS(108),
    [anon_sym_exact] = ACTIONS(108),
    [anon_sym_extractelement] = ACTIONS(108),
    [anon_sym_extractvalue] = ACTIONS(108),
    [anon_sym_fadd] = ACTIONS(108),
    [anon_sym_fast] = ACTIONS(108),
    [anon_sym_fcmp] = ACTIONS(108),
    [anon_sym_fdiv] = ACTIONS(108),
    [anon_sym_fence] = ACTIONS(108),
    [anon_sym_fmul] = ACTIONS(108),
    [anon_sym_fneg] = ACTIONS(108),
    [anon_sym_fpext] = ACTIONS(108),
    [anon_sym_fptosi] = ACTIONS(108),
    [anon_sym_fptoui] = ACTIONS(108),
    [anon_sym_fptrunc] = ACTIONS(108),
    [anon_sym_free] = ACTIONS(108),
    [anon_sym_freeze] = ACTIONS(108),
    [anon_sym_frem] = ACTIONS(108),
    [anon_sym_fsub] = ACTIONS(108),
    [anon_sym_getelementptr] = ACTIONS(108),
    [anon_sym_icmp] = ACTIONS(108),
    [anon_sym_inbounds] = ACTIONS(108),
    [anon_sym_indirectbr] = ACTIONS(108),
    [anon_sym_insertelement] = ACTIONS(108),
    [anon_sym_insertvalue] = ACTIONS(108),
    [anon_sym_inttoptr] = ACTIONS(108),
    [anon_sym_invoke] = ACTIONS(108),
    [anon_sym_landingpad] = ACTIONS(108),
    [anon_sym_load] = ACTIONS(108),
    [anon_sym_lshr] = ACTIONS(108),
    [anon_sym_malloc] = ACTIONS(108),
    [anon_sym_max] = ACTIONS(108),
    [anon_sym_min] = ACTIONS(108),
    [anon_sym_mul] = ACTIONS(108),
    [anon_sym_nand] = ACTIONS(108),
    [anon_sym_ne] = ACTIONS(108),
    [anon_sym_ninf] = ACTIONS(108),
    [anon_sym_nnan] = ACTIONS(108),
    [anon_sym_nsw] = ACTIONS(108),
    [anon_sym_nsz] = ACTIONS(108),
    [anon_sym_nuw] = ACTIONS(108),
    [anon_sym_oeq] = ACTIONS(108),
    [anon_sym_oge] = ACTIONS(108),
    [anon_sym_ogt] = ACTIONS(108),
    [anon_sym_ole] = ACTIONS(108),
    [anon_sym_olt] = ACTIONS(108),
    [anon_sym_one] = ACTIONS(108),
    [anon_sym_or] = ACTIONS(108),
    [anon_sym_ord] = ACTIONS(108),
    [anon_sym_phi] = ACTIONS(108),
    [anon_sym_ptrtoint] = ACTIONS(108),
    [anon_sym_resume] = ACTIONS(108),
    [anon_sym_ret] = ACTIONS(108),
    [anon_sym_sdiv] = ACTIONS(108),
    [anon_sym_select] = ACTIONS(108),
    [anon_sym_sext] = ACTIONS(108),
    [anon_sym_sge] = ACTIONS(108),
    [anon_sym_sgt] = ACTIONS(108),
    [anon_sym_shl] = ACTIONS(108),
    [anon_sym_shufflevector] = ACTIONS(108),
    [anon_sym_sitofp] = ACTIONS(108),
    [anon_sym_sle] = ACTIONS(108),
    [anon_sym_slt] = ACTIONS(108),
    [anon_sym_srem] = ACTIONS(108),
    [anon_sym_store] = ACTIONS(108),
    [anon_sym_sub] = ACTIONS(108),
    [anon_sym_switch] = ACTIONS(108),
    [anon_sym_trunc] = ACTIONS(108),
    [anon_sym_udiv] = ACTIONS(108),
    [anon_sym_ueq] = ACTIONS(108),
    [anon_sym_uge] = ACTIONS(108),
    [anon_sym_ugt] = ACTIONS(108),
    [anon_sym_uitofp] = ACTIONS(108),
    [anon_sym_ule] = ACTIONS(108),
    [anon_sym_ult] = ACTIONS(108),
    [anon_sym_umax] = ACTIONS(108),
    [anon_sym_umin] = ACTIONS(108),
    [anon_sym_une] = ACTIONS(108),
    [anon_sym_uno] = ACTIONS(108),
    [anon_sym_unreachable] = ACTIONS(108),
    [anon_sym_unwind] = ACTIONS(108),
    [anon_sym_urem] = ACTIONS(108),
    [anon_sym_va_arg] = ACTIONS(108),
    [anon_sym_xchg] = ACTIONS(108),
    [anon_sym_xor] = ACTIONS(108),
    [anon_sym_zext] = ACTIONS(108),
    [anon_sym_acq_rel] = ACTIONS(108),
    [anon_sym_acquire] = ACTIONS(108),
    [anon_sym_addrspace] = ACTIONS(108),
    [anon_sym_alias] = ACTIONS(108),
    [anon_sym_align] = ACTIONS(108),
    [anon_sym_alignstack] = ACTIONS(108),
    [anon_sym_allocsize] = ACTIONS(108),
    [anon_sym_alwaysinline] = ACTIONS(108),
    [anon_sym_appending] = ACTIONS(108),
    [anon_sym_argmemonly] = ACTIONS(108),
    [anon_sym_arm_aapcs_vfpcc] = ACTIONS(108),
    [anon_sym_arm_aapcscc] = ACTIONS(108),
    [anon_sym_arm_apcscc] = ACTIONS(108),
    [anon_sym_asm] = ACTIONS(108),
    [anon_sym_atomic] = ACTIONS(108),
    [anon_sym_available_externally] = ACTIONS(108),
    [anon_sym_blockaddress] = ACTIONS(108),
    [anon_sym_builtin] = ACTIONS(108),
    [anon_sym_byref] = ACTIONS(108),
    [anon_sym_byval] = ACTIONS(108),
    [anon_sym_c] = ACTIONS(108),
    [anon_sym_caller] = ACTIONS(108),
    [anon_sym_catch] = ACTIONS(108),
    [anon_sym_cc] = ACTIONS(108),
    [anon_sym_ccc] = ACTIONS(108),
    [anon_sym_cleanup] = ACTIONS(108),
    [anon_sym_cold] = ACTIONS(108),
    [anon_sym_coldcc] = ACTIONS(108),
    [anon_sym_comdat] = ACTIONS(108),
    [anon_sym_common] = ACTIONS(108),
    [anon_sym_constant] = ACTIONS(108),
    [anon_sym_convergent] = ACTIONS(108),
    [anon_sym_datalayout] = ACTIONS(108),
    [anon_sym_declare] = ACTIONS(108),
    [anon_sym_default] = ACTIONS(108),
    [anon_sym_define] = ACTIONS(108),
    [anon_sym_deplibs] = ACTIONS(108),
    [anon_sym_dereferenceable] = ACTIONS(108),
    [anon_sym_dereferenceable_or_null] = ACTIONS(108),
    [anon_sym_distinct] = ACTIONS(108),
    [anon_sym_dllexport] = ACTIONS(108),
    [anon_sym_dllimport] = ACTIONS(108),
    [anon_sym_dso_local] = ACTIONS(108),
    [anon_sym_dso_preemptable] = ACTIONS(108),
    [anon_sym_except] = ACTIONS(108),
    [anon_sym_extern_weak] = ACTIONS(108),
    [anon_sym_external] = ACTIONS(108),
    [anon_sym_externally_initialized] = ACTIONS(108),
    [anon_sym_fastcc] = ACTIONS(108),
    [anon_sym_filter] = ACTIONS(108),
    [anon_sym_from] = ACTIONS(108),
    [anon_sym_gc] = ACTIONS(108),
    [anon_sym_global] = ACTIONS(108),
    [anon_sym_hhvm_ccc] = ACTIONS(108),
    [anon_sym_hhvmcc] = ACTIONS(108),
    [anon_sym_hidden] = ACTIONS(108),
    [anon_sym_hot] = ACTIONS(108),
    [anon_sym_immarg] = ACTIONS(108),
    [anon_sym_inaccessiblemem_or_argmemonly] = ACTIONS(108),
    [anon_sym_inaccessiblememonly] = ACTIONS(108),
    [anon_sym_inalloca] = ACTIONS(108),
    [anon_sym_initialexec] = ACTIONS(108),
    [anon_sym_inlinehint] = ACTIONS(108),
    [anon_sym_inreg] = ACTIONS(108),
    [anon_sym_intel_ocl_bicc] = ACTIONS(108),
    [anon_sym_inteldialect] = ACTIONS(108),
    [anon_sym_internal] = ACTIONS(108),
    [anon_sym_jumptable] = ACTIONS(108),
    [anon_sym_linkonce] = ACTIONS(108),
    [anon_sym_linkonce_odr] = ACTIONS(108),
    [anon_sym_local_unnamed_addr] = ACTIONS(108),
    [anon_sym_localdynamic] = ACTIONS(108),
    [anon_sym_localexec] = ACTIONS(108),
    [anon_sym_minsize] = ACTIONS(108),
    [anon_sym_module] = ACTIONS(108),
    [anon_sym_monotonic] = ACTIONS(108),
    [anon_sym_msp430_intrcc] = ACTIONS(108),
    [anon_sym_mustprogress] = ACTIONS(108),
    [anon_sym_musttail] = ACTIONS(108),
    [anon_sym_naked] = ACTIONS(108),
    [anon_sym_nest] = ACTIONS(108),
    [anon_sym_noalias] = ACTIONS(108),
    [anon_sym_nobuiltin] = ACTIONS(108),
    [anon_sym_nocallback] = ACTIONS(108),
    [anon_sym_nocapture] = ACTIONS(108),
    [anon_sym_nocf_check] = ACTIONS(108),
    [anon_sym_noduplicate] = ACTIONS(108),
    [anon_sym_nofree] = ACTIONS(108),
    [anon_sym_noimplicitfloat] = ACTIONS(108),
    [anon_sym_noinline] = ACTIONS(108),
    [anon_sym_nomerge] = ACTIONS(108),
    [anon_sym_nonlazybind] = ACTIONS(108),
    [anon_sym_nonnull] = ACTIONS(108),
    [anon_sym_noprofile] = ACTIONS(108),
    [anon_sym_norecurse] = ACTIONS(108),
    [anon_sym_noredzone] = ACTIONS(108),
    [anon_sym_noreturn] = ACTIONS(108),
    [anon_sym_nosync] = ACTIONS(108),
    [anon_sym_noundef] = ACTIONS(108),
    [anon_sym_nounwind] = ACTIONS(108),
    [anon_sym_nosanitize_coverage] = ACTIONS(108),
    [anon_sym_null_pointer_is_valid] = ACTIONS(108),
    [anon_sym_optforfuzzing] = ACTIONS(108),
    [anon_sym_optnone] = ACTIONS(108),
    [anon_sym_optsize] = ACTIONS(108),
    [anon_sym_personality] = ACTIONS(108),
    [anon_sym_preallocated] = ACTIONS(108),
    [anon_sym_private] = ACTIONS(108),
    [anon_sym_protected] = ACTIONS(108),
    [anon_sym_ptx_device] = ACTIONS(108),
    [anon_sym_ptx_kernel] = ACTIONS(108),
    [anon_sym_readnone] = ACTIONS(108),
    [anon_sym_readonly] = ACTIONS(108),
    [anon_sym_release] = ACTIONS(108),
    [anon_sym_returned] = ACTIONS(108),
    [anon_sym_returns_twice] = ACTIONS(108),
    [anon_sym_safestack] = ACTIONS(108),
    [anon_sym_sanitize_address] = ACTIONS(108),
    [anon_sym_sanitize_hwaddress] = ACTIONS(108),
    [anon_sym_sanitize_memory] = ACTIONS(108),
    [anon_sym_sanitize_memtag] = ACTIONS(108),
    [anon_sym_sanitize_thread] = ACTIONS(108),
    [anon_sym_section] = ACTIONS(108),
    [anon_sym_seq_cst] = ACTIONS(108),
    [anon_sym_shadowcallstack] = ACTIONS(108),
    [anon_sym_sideeffect] = ACTIONS(108),
    [anon_sym_signext] = ACTIONS(108),
    [anon_sym_source_filename] = ACTIONS(108),
    [anon_sym_speculatable] = ACTIONS(108),
    [anon_sym_speculative_load_hardening] = ACTIONS(108),
    [anon_sym_spir_func] = ACTIONS(108),
    [anon_sym_spir_kernel] = ACTIONS(108),
    [anon_sym_sret] = ACTIONS(108),
    [anon_sym_ssp] = ACTIONS(108),
    [anon_sym_sspreq] = ACTIONS(108),
    [anon_sym_sspstrong] = ACTIONS(108),
    [anon_sym_strictfp] = ACTIONS(108),
    [anon_sym_swiftcc] = ACTIONS(108),
    [anon_sym_swifterror] = ACTIONS(108),
    [anon_sym_swifttailcc] = ACTIONS(108),
    [anon_sym_swiftself] = ACTIONS(108),
    [anon_sym_syncscope] = ACTIONS(108),
    [anon_sym_tail] = ACTIONS(108),
    [anon_sym_tailcc] = ACTIONS(108),
    [anon_sym_target] = ACTIONS(108),
    [anon_sym_thread_local] = ACTIONS(108),
    [anon_sym_to] = ACTIONS(108),
    [anon_sym_triple] = ACTIONS(108),
    [anon_sym_unnamed_addr] = ACTIONS(108),
    [anon_sym_unordered] = ACTIONS(108),
    [anon_sym_uselistorder] = ACTIONS(108),
    [anon_sym_uselistorder_bb] = ACTIONS(108),
    [anon_sym_uwtable] = ACTIONS(108),
    [anon_sym_volatile] = ACTIONS(108),
    [anon_sym_weak] = ACTIONS(108),
    [anon_sym_weak_odr] = ACTIONS(108),
    [anon_sym_willreturn] = ACTIONS(108),
    [anon_sym_win64cc] = ACTIONS(108),
    [anon_sym_within] = ACTIONS(108),
    [anon_sym_writeonly] = ACTIONS(108),
    [anon_sym_x] = ACTIONS(108),
    [anon_sym_x86_64_sysvcc] = ACTIONS(108),
    [anon_sym_x86_fastcallcc] = ACTIONS(108),
    [anon_sym_x86_stdcallcc] = ACTIONS(108),
    [anon_sym_x86_thiscallcc] = ACTIONS(108),
    [anon_sym_zeroext] = ACTIONS(108),
    [sym_number] = ACTIONS(108),
    [aux_sym_float_token1] = ACTIONS(106),
    [aux_sym_float_token2] = ACTIONS(106),
    [anon_sym_true] = ACTIONS(108),
    [anon_sym_false] = ACTIONS(108),
    [anon_sym_zeroinitializer] = ACTIONS(108),
    [anon_sym_undef] = ACTIONS(108),
    [anon_sym_null] = ACTIONS(108),
    [anon_sym_none] = ACTIONS(108),
    [anon_sym_poison] = ACTIONS(108),
    [anon_sym_vscale] = ACTIONS(108),
    [sym_comment] = ACTIONS(106),
    [sym_string] = ACTIONS(106),
    [sym_label] = ACTIONS(106),
    [aux_sym_identifier_token1] = ACTIONS(106),
    [aux_sym_identifier_token2] = ACTIONS(106),
    [aux_sym_identifier_token3] = ACTIONS(108),
    [aux_sym_identifier_token4] = ACTIONS(108),
    [aux_sym_identifier_token5] = ACTIONS(108),
    [aux_sym_identifier_token6] = ACTIONS(108),
    [aux_sym_identifier_token7] = ACTIONS(108),
    [aux_sym_identifier_token8] = ACTIONS(108),
    [anon_sym_COMMA] = ACTIONS(106),
    [anon_sym_BANG] = ACTIONS(108),
    [anon_sym_EQ] = ACTIONS(106),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_COLON] = ACTIONS(106),
    [anon_sym_TILDE] = ACTIONS(106),
    [anon_sym_CARET] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(106),
    [anon_sym_PIPE] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(106),
    [anon_sym_RBRACK] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(106),
    [anon_sym_RBRACE] = ACTIONS(106),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [anon_sym_void] = ACTIONS(112),
    [anon_sym_half] = ACTIONS(112),
    [anon_sym_bfloat] = ACTIONS(112),
    [anon_sym_float] = ACTIONS(112),
    [anon_sym_double] = ACTIONS(112),
    [anon_sym_x86_fp80] = ACTIONS(112),
    [anon_sym_fp128] = ACTIONS(112),
    [anon_sym_pcc_fp128] = ACTIONS(112),
    [anon_sym_label] = ACTIONS(112),
    [anon_sym_metadata] = ACTIONS(112),
    [anon_sym_x86_mmx] = ACTIONS(112),
    [anon_sym_x86_amx] = ACTIONS(112),
    [aux_sym_type_token1] = ACTIONS(112),
    [anon_sym_add] = ACTIONS(112),
    [anon_sym_addrspacecast] = ACTIONS(112),
    [anon_sym_alloca] = ACTIONS(112),
    [anon_sym_and] = ACTIONS(112),
    [anon_sym_arcp] = ACTIONS(112),
    [anon_sym_ashr] = ACTIONS(112),
    [anon_sym_atomicrmw] = ACTIONS(112),
    [anon_sym_bitcast] = ACTIONS(112),
    [anon_sym_br] = ACTIONS(112),
    [anon_sym_catchpad] = ACTIONS(112),
    [anon_sym_catchswitch] = ACTIONS(112),
    [anon_sym_catchret] = ACTIONS(112),
    [anon_sym_call] = ACTIONS(112),
    [anon_sym_callbr] = ACTIONS(112),
    [anon_sym_cleanuppad] = ACTIONS(112),
    [anon_sym_cleanupret] = ACTIONS(112),
    [anon_sym_cmpxchg] = ACTIONS(112),
    [anon_sym_eq] = ACTIONS(112),
    [anon_sym_exact] = ACTIONS(112),
    [anon_sym_extractelement] = ACTIONS(112),
    [anon_sym_extractvalue] = ACTIONS(112),
    [anon_sym_fadd] = ACTIONS(112),
    [anon_sym_fast] = ACTIONS(112),
    [anon_sym_fcmp] = ACTIONS(112),
    [anon_sym_fdiv] = ACTIONS(112),
    [anon_sym_fence] = ACTIONS(112),
    [anon_sym_fmul] = ACTIONS(112),
    [anon_sym_fneg] = ACTIONS(112),
    [anon_sym_fpext] = ACTIONS(112),
    [anon_sym_fptosi] = ACTIONS(112),
    [anon_sym_fptoui] = ACTIONS(112),
    [anon_sym_fptrunc] = ACTIONS(112),
    [anon_sym_free] = ACTIONS(112),
    [anon_sym_freeze] = ACTIONS(112),
    [anon_sym_frem] = ACTIONS(112),
    [anon_sym_fsub] = ACTIONS(112),
    [anon_sym_getelementptr] = ACTIONS(112),
    [anon_sym_icmp] = ACTIONS(112),
    [anon_sym_inbounds] = ACTIONS(112),
    [anon_sym_indirectbr] = ACTIONS(112),
    [anon_sym_insertelement] = ACTIONS(112),
    [anon_sym_insertvalue] = ACTIONS(112),
    [anon_sym_inttoptr] = ACTIONS(112),
    [anon_sym_invoke] = ACTIONS(112),
    [anon_sym_landingpad] = ACTIONS(112),
    [anon_sym_load] = ACTIONS(112),
    [anon_sym_lshr] = ACTIONS(112),
    [anon_sym_malloc] = ACTIONS(112),
    [anon_sym_max] = ACTIONS(112),
    [anon_sym_min] = ACTIONS(112),
    [anon_sym_mul] = ACTIONS(112),
    [anon_sym_nand] = ACTIONS(112),
    [anon_sym_ne] = ACTIONS(112),
    [anon_sym_ninf] = ACTIONS(112),
    [anon_sym_nnan] = ACTIONS(112),
    [anon_sym_nsw] = ACTIONS(112),
    [anon_sym_nsz] = ACTIONS(112),
    [anon_sym_nuw] = ACTIONS(112),
    [anon_sym_oeq] = ACTIONS(112),
    [anon_sym_oge] = ACTIONS(112),
    [anon_sym_ogt] = ACTIONS(112),
    [anon_sym_ole] = ACTIONS(112),
    [anon_sym_olt] = ACTIONS(112),
    [anon_sym_one] = ACTIONS(112),
    [anon_sym_or] = ACTIONS(112),
    [anon_sym_ord] = ACTIONS(112),
    [anon_sym_phi] = ACTIONS(112),
    [anon_sym_ptrtoint] = ACTIONS(112),
    [anon_sym_resume] = ACTIONS(112),
    [anon_sym_ret] = ACTIONS(112),
    [anon_sym_sdiv] = ACTIONS(112),
    [anon_sym_select] = ACTIONS(112),
    [anon_sym_sext] = ACTIONS(112),
    [anon_sym_sge] = ACTIONS(112),
    [anon_sym_sgt] = ACTIONS(112),
    [anon_sym_shl] = ACTIONS(112),
    [anon_sym_shufflevector] = ACTIONS(112),
    [anon_sym_sitofp] = ACTIONS(112),
    [anon_sym_sle] = ACTIONS(112),
    [anon_sym_slt] = ACTIONS(112),
    [anon_sym_srem] = ACTIONS(112),
    [anon_sym_store] = ACTIONS(112),
    [anon_sym_sub] = ACTIONS(112),
    [anon_sym_switch] = ACTIONS(112),
    [anon_sym_trunc] = ACTIONS(112),
    [anon_sym_udiv] = ACTIONS(112),
    [anon_sym_ueq] = ACTIONS(112),
    [anon_sym_uge] = ACTIONS(112),
    [anon_sym_ugt] = ACTIONS(112),
    [anon_sym_uitofp] = ACTIONS(112),
    [anon_sym_ule] = ACTIONS(112),
    [anon_sym_ult] = ACTIONS(112),
    [anon_sym_umax] = ACTIONS(112),
    [anon_sym_umin] = ACTIONS(112),
    [anon_sym_une] = ACTIONS(112),
    [anon_sym_uno] = ACTIONS(112),
    [anon_sym_unreachable] = ACTIONS(112),
    [anon_sym_unwind] = ACTIONS(112),
    [anon_sym_urem] = ACTIONS(112),
    [anon_sym_va_arg] = ACTIONS(112),
    [anon_sym_xchg] = ACTIONS(112),
    [anon_sym_xor] = ACTIONS(112),
    [anon_sym_zext] = ACTIONS(112),
    [anon_sym_acq_rel] = ACTIONS(112),
    [anon_sym_acquire] = ACTIONS(112),
    [anon_sym_addrspace] = ACTIONS(112),
    [anon_sym_alias] = ACTIONS(112),
    [anon_sym_align] = ACTIONS(112),
    [anon_sym_alignstack] = ACTIONS(112),
    [anon_sym_allocsize] = ACTIONS(112),
    [anon_sym_alwaysinline] = ACTIONS(112),
    [anon_sym_appending] = ACTIONS(112),
    [anon_sym_argmemonly] = ACTIONS(112),
    [anon_sym_arm_aapcs_vfpcc] = ACTIONS(112),
    [anon_sym_arm_aapcscc] = ACTIONS(112),
    [anon_sym_arm_apcscc] = ACTIONS(112),
    [anon_sym_asm] = ACTIONS(112),
    [anon_sym_atomic] = ACTIONS(112),
    [anon_sym_available_externally] = ACTIONS(112),
    [anon_sym_blockaddress] = ACTIONS(112),
    [anon_sym_builtin] = ACTIONS(112),
    [anon_sym_byref] = ACTIONS(112),
    [anon_sym_byval] = ACTIONS(112),
    [anon_sym_c] = ACTIONS(112),
    [anon_sym_caller] = ACTIONS(112),
    [anon_sym_catch] = ACTIONS(112),
    [anon_sym_cc] = ACTIONS(112),
    [anon_sym_ccc] = ACTIONS(112),
    [anon_sym_cleanup] = ACTIONS(112),
    [anon_sym_cold] = ACTIONS(112),
    [anon_sym_coldcc] = ACTIONS(112),
    [anon_sym_comdat] = ACTIONS(112),
    [anon_sym_common] = ACTIONS(112),
    [anon_sym_constant] = ACTIONS(112),
    [anon_sym_convergent] = ACTIONS(112),
    [anon_sym_datalayout] = ACTIONS(112),
    [anon_sym_declare] = ACTIONS(112),
    [anon_sym_default] = ACTIONS(112),
    [anon_sym_define] = ACTIONS(112),
    [anon_sym_deplibs] = ACTIONS(112),
    [anon_sym_dereferenceable] = ACTIONS(112),
    [anon_sym_dereferenceable_or_null] = ACTIONS(112),
    [anon_sym_distinct] = ACTIONS(112),
    [anon_sym_dllexport] = ACTIONS(112),
    [anon_sym_dllimport] = ACTIONS(112),
    [anon_sym_dso_local] = ACTIONS(112),
    [anon_sym_dso_preemptable] = ACTIONS(112),
    [anon_sym_except] = ACTIONS(112),
    [anon_sym_extern_weak] = ACTIONS(112),
    [anon_sym_external] = ACTIONS(112),
    [anon_sym_externally_initialized] = ACTIONS(112),
    [anon_sym_fastcc] = ACTIONS(112),
    [anon_sym_filter] = ACTIONS(112),
    [anon_sym_from] = ACTIONS(112),
    [anon_sym_gc] = ACTIONS(112),
    [anon_sym_global] = ACTIONS(112),
    [anon_sym_hhvm_ccc] = ACTIONS(112),
    [anon_sym_hhvmcc] = ACTIONS(112),
    [anon_sym_hidden] = ACTIONS(112),
    [anon_sym_hot] = ACTIONS(112),
    [anon_sym_immarg] = ACTIONS(112),
    [anon_sym_inaccessiblemem_or_argmemonly] = ACTIONS(112),
    [anon_sym_inaccessiblememonly] = ACTIONS(112),
    [anon_sym_inalloca] = ACTIONS(112),
    [anon_sym_initialexec] = ACTIONS(112),
    [anon_sym_inlinehint] = ACTIONS(112),
    [anon_sym_inreg] = ACTIONS(112),
    [anon_sym_intel_ocl_bicc] = ACTIONS(112),
    [anon_sym_inteldialect] = ACTIONS(112),
    [anon_sym_internal] = ACTIONS(112),
    [anon_sym_jumptable] = ACTIONS(112),
    [anon_sym_linkonce] = ACTIONS(112),
    [anon_sym_linkonce_odr] = ACTIONS(112),
    [anon_sym_local_unnamed_addr] = ACTIONS(112),
    [anon_sym_localdynamic] = ACTIONS(112),
    [anon_sym_localexec] = ACTIONS(112),
    [anon_sym_minsize] = ACTIONS(112),
    [anon_sym_module] = ACTIONS(112),
    [anon_sym_monotonic] = ACTIONS(112),
    [anon_sym_msp430_intrcc] = ACTIONS(112),
    [anon_sym_mustprogress] = ACTIONS(112),
    [anon_sym_musttail] = ACTIONS(112),
    [anon_sym_naked] = ACTIONS(112),
    [anon_sym_nest] = ACTIONS(112),
    [anon_sym_noalias] = ACTIONS(112),
    [anon_sym_nobuiltin] = ACTIONS(112),
    [anon_sym_nocallback] = ACTIONS(112),
    [anon_sym_nocapture] = ACTIONS(112),
    [anon_sym_nocf_check] = ACTIONS(112),
    [anon_sym_noduplicate] = ACTIONS(112),
    [anon_sym_nofree] = ACTIONS(112),
    [anon_sym_noimplicitfloat] = ACTIONS(112),
    [anon_sym_noinline] = ACTIONS(112),
    [anon_sym_nomerge] = ACTIONS(112),
    [anon_sym_nonlazybind] = ACTIONS(112),
    [anon_sym_nonnull] = ACTIONS(112),
    [anon_sym_noprofile] = ACTIONS(112),
    [anon_sym_norecurse] = ACTIONS(112),
    [anon_sym_noredzone] = ACTIONS(112),
    [anon_sym_noreturn] = ACTIONS(112),
    [anon_sym_nosync] = ACTIONS(112),
    [anon_sym_noundef] = ACTIONS(112),
    [anon_sym_nounwind] = ACTIONS(112),
    [anon_sym_nosanitize_coverage] = ACTIONS(112),
    [anon_sym_null_pointer_is_valid] = ACTIONS(112),
    [anon_sym_optforfuzzing] = ACTIONS(112),
    [anon_sym_optnone] = ACTIONS(112),
    [anon_sym_optsize] = ACTIONS(112),
    [anon_sym_personality] = ACTIONS(112),
    [anon_sym_preallocated] = ACTIONS(112),
    [anon_sym_private] = ACTIONS(112),
    [anon_sym_protected] = ACTIONS(112),
    [anon_sym_ptx_device] = ACTIONS(112),
    [anon_sym_ptx_kernel] = ACTIONS(112),
    [anon_sym_readnone] = ACTIONS(112),
    [anon_sym_readonly] = ACTIONS(112),
    [anon_sym_release] = ACTIONS(112),
    [anon_sym_returned] = ACTIONS(112),
    [anon_sym_returns_twice] = ACTIONS(112),
    [anon_sym_safestack] = ACTIONS(112),
    [anon_sym_sanitize_address] = ACTIONS(112),
    [anon_sym_sanitize_hwaddress] = ACTIONS(112),
    [anon_sym_sanitize_memory] = ACTIONS(112),
    [anon_sym_sanitize_memtag] = ACTIONS(112),
    [anon_sym_sanitize_thread] = ACTIONS(112),
    [anon_sym_section] = ACTIONS(112),
    [anon_sym_seq_cst] = ACTIONS(112),
    [anon_sym_shadowcallstack] = ACTIONS(112),
    [anon_sym_sideeffect] = ACTIONS(112),
    [anon_sym_signext] = ACTIONS(112),
    [anon_sym_source_filename] = ACTIONS(112),
    [anon_sym_speculatable] = ACTIONS(112),
    [anon_sym_speculative_load_hardening] = ACTIONS(112),
    [anon_sym_spir_func] = ACTIONS(112),
    [anon_sym_spir_kernel] = ACTIONS(112),
    [anon_sym_sret] = ACTIONS(112),
    [anon_sym_ssp] = ACTIONS(112),
    [anon_sym_sspreq] = ACTIONS(112),
    [anon_sym_sspstrong] = ACTIONS(112),
    [anon_sym_strictfp] = ACTIONS(112),
    [anon_sym_swiftcc] = ACTIONS(112),
    [anon_sym_swifterror] = ACTIONS(112),
    [anon_sym_swifttailcc] = ACTIONS(112),
    [anon_sym_swiftself] = ACTIONS(112),
    [anon_sym_syncscope] = ACTIONS(112),
    [anon_sym_tail] = ACTIONS(112),
    [anon_sym_tailcc] = ACTIONS(112),
    [anon_sym_target] = ACTIONS(112),
    [anon_sym_thread_local] = ACTIONS(112),
    [anon_sym_to] = ACTIONS(112),
    [anon_sym_triple] = ACTIONS(112),
    [anon_sym_unnamed_addr] = ACTIONS(112),
    [anon_sym_unordered] = ACTIONS(112),
    [anon_sym_uselistorder] = ACTIONS(112),
    [anon_sym_uselistorder_bb] = ACTIONS(112),
    [anon_sym_uwtable] = ACTIONS(112),
    [anon_sym_volatile] = ACTIONS(112),
    [anon_sym_weak] = ACTIONS(112),
    [anon_sym_weak_odr] = ACTIONS(112),
    [anon_sym_willreturn] = ACTIONS(112),
    [anon_sym_win64cc] = ACTIONS(112),
    [anon_sym_within] = ACTIONS(112),
    [anon_sym_writeonly] = ACTIONS(112),
    [anon_sym_x] = ACTIONS(112),
    [anon_sym_x86_64_sysvcc] = ACTIONS(112),
    [anon_sym_x86_fastcallcc] = ACTIONS(112),
    [anon_sym_x86_stdcallcc] = ACTIONS(112),
    [anon_sym_x86_thiscallcc] = ACTIONS(112),
    [anon_sym_zeroext] = ACTIONS(112),
    [sym_number] = ACTIONS(112),
    [aux_sym_float_token1] = ACTIONS(110),
    [aux_sym_float_token2] = ACTIONS(110),
    [anon_sym_true] = ACTIONS(112),
    [anon_sym_false] = ACTIONS(112),
    [anon_sym_zeroinitializer] = ACTIONS(112),
    [anon_sym_undef] = ACTIONS(112),
    [anon_sym_null] = ACTIONS(112),
    [anon_sym_none] = ACTIONS(112),
    [anon_sym_poison] = ACTIONS(112),
    [anon_sym_vscale] = ACTIONS(112),
    [sym_comment] = ACTIONS(110),
    [sym_string] = ACTIONS(110),
    [sym_label] = ACTIONS(110),
    [aux_sym_identifier_token1] = ACTIONS(110),
    [aux_sym_identifier_token2] = ACTIONS(110),
    [aux_sym_identifier_token3] = ACTIONS(112),
    [aux_sym_identifier_token4] = ACTIONS(112),
    [aux_sym_identifier_token5] = ACTIONS(112),
    [aux_sym_identifier_token6] = ACTIONS(112),
    [aux_sym_identifier_token7] = ACTIONS(112),
    [aux_sym_identifier_token8] = ACTIONS(112),
    [anon_sym_COMMA] = ACTIONS(110),
    [anon_sym_BANG] = ACTIONS(112),
    [anon_sym_EQ] = ACTIONS(110),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(110),
    [anon_sym_TILDE] = ACTIONS(110),
    [anon_sym_CARET] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(112),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_RBRACK] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_RBRACE] = ACTIONS(110),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(4),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(5),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(6),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(3),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(7),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(8),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(9),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(3),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(10),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(10),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(11),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(11),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(12),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket, 1),
  [114] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_llvm(void) {
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
