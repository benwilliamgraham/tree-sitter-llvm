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
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 325
#define ALIAS_COUNT 0
#define TOKEN_COUNT 315
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
  anon_sym_LPAREN = 305,
  anon_sym_RPAREN = 306,
  anon_sym_LBRACK = 307,
  anon_sym_RBRACK = 308,
  anon_sym_LBRACE = 309,
  anon_sym_RBRACE = 310,
  anon_sym_COMMA = 311,
  anon_sym_BANG = 312,
  anon_sym_EQ = 313,
  anon_sym_STAR = 314,
  sym_module = 315,
  sym_type = 316,
  sym_statement = 317,
  sym_keyword = 318,
  sym_float = 319,
  sym_boolean = 320,
  sym_constant = 321,
  sym_identifier = 322,
  sym_punctuation = 323,
  aux_sym_module_repeat1 = 324,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [anon_sym_BANG] = "!",
  [anon_sym_EQ] = "=",
  [anon_sym_STAR] = "*",
  [sym_module] = "module",
  [sym_type] = "type",
  [sym_statement] = "statement",
  [sym_keyword] = "keyword",
  [sym_float] = "float",
  [sym_boolean] = "boolean",
  [sym_constant] = "constant",
  [sym_identifier] = "identifier",
  [sym_punctuation] = "punctuation",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_module] = sym_module,
  [sym_type] = sym_type,
  [sym_statement] = sym_statement,
  [sym_keyword] = sym_keyword,
  [sym_float] = sym_float,
  [sym_boolean] = sym_boolean,
  [sym_constant] = sym_constant,
  [sym_identifier] = sym_identifier,
  [sym_punctuation] = sym_punctuation,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym_punctuation] = {
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
      if (eof) ADVANCE(1277);
      if (lookahead == '!') ADVANCE(1591);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(1584);
      if (lookahead == ')') ADVANCE(1585);
      if (lookahead == '*') ADVANCE(1593);
      if (lookahead == ',') ADVANCE(1590);
      if (lookahead == '-') ADVANCE(1264);
      if (lookahead == '0') ADVANCE(1560);
      if (lookahead == ';') ADVANCE(1573);
      if (lookahead == '=') ADVANCE(1592);
      if (lookahead == 'D') ADVANCE(28);
      if (lookahead == '[') ADVANCE(1586);
      if (lookahead == ']') ADVANCE(1587);
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == 'b') ADVANCE(537);
      if (lookahead == 'c') ADVANCE(1414);
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
      if (lookahead == 'x') ADVANCE(1554);
      if (lookahead == 'z') ADVANCE(432);
      if (lookahead == '{') ADVANCE(1588);
      if (lookahead == '}') ADVANCE(1589);
      if (lookahead == '%' ||
          lookahead == '@') ADVANCE(1274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1561);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('k' <= lookahead && lookahead <= 'y')) ADVANCE(1270);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(1574);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '+') ADVANCE(1275);
      if (lookahead == '-') ADVANCE(1265);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(1283);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(72);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(7);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 't') ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(16);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(17);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 9:
      if (lookahead == '3') ADVANCE(4);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 10:
      if (lookahead == '4') ADVANCE(9);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(57);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 12:
      if (lookahead == '4') ADVANCE(268);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 13:
      if (lookahead == '6') ADVANCE(12);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 14:
      if (lookahead == '6') ADVANCE(11);
      if (lookahead == ':') ADVANCE(1575);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 15:
      if (lookahead == '6') ADVANCE(43);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 16:
      if (lookahead == '8') ADVANCE(1284);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 17:
      if (lookahead == '8') ADVANCE(1285);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 18:
      if (lookahead == '8') ADVANCE(3);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '?') ADVANCE(1563);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(1575);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'A') ADVANCE(32);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'A') ADVANCE(26);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'A') ADVANCE(31);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'E') ADVANCE(46);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'F') ADVANCE(712);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'G') ADVANCE(47);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'G') ADVANCE(49);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'I') ADVANCE(25);
      if (lookahead == 'W') ADVANCE(40);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'I') ADVANCE(34);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'I') ADVANCE(37);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'L') ADVANCE(30);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'N') ADVANCE(27);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'P') ADVANCE(45);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'R') ADVANCE(36);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'T') ADVANCE(24);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'T') ADVANCE(38);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'T') ADVANCE(39);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'U') ADVANCE(23);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'Y') ADVANCE(50);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(758);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(349);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(1262);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(1266);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(1268);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(179);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(1263);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(1269);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(1222);
      if (lookahead == 'a') ADVANCE(697);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(546);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(1215);
      if (lookahead == 'c') ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(590);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(298);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(1079);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(297);
      if (lookahead == 'c') ADVANCE(219);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(249);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(612);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(876);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(261);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(1157);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(1217);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(199);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(115);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(1189);
      if (lookahead == 'd') ADVANCE(1248);
      if (lookahead == 'e') ADVANCE(1234);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(1037);
      if (lookahead == 'u') ADVANCE(657);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(137);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(915);
      if (lookahead == 'd') ADVANCE(669);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(920);
      if (lookahead == 'o') ADVANCE(856);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(655);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(751);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(556);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(150);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(506);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(180);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(783);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(1575);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(1575);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(1575);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(681);
      if (lookahead == 'e') ADVANCE(1343);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(1575);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(606);
      if (lookahead == 'h') ADVANCE(1013);
      if (lookahead == 'o') ADVANCE(1540);
      if (lookahead == 'r') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(1575);
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
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1246);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1293);
      if (lookahead == 's') ADVANCE(641);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1454);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1287);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(607);
      if (lookahead == 's') ADVANCE(300);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(1575);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(673);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1249);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(722);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1251);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1226);
      if (lookahead == 'i') ADVANCE(820);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(1575);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1052);
      if (lookahead == 'g') ADVANCE(821);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(818);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == 'c') ADVANCE(447);
      if (lookahead == 't') ADVANCE(446);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(316);
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 105:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(678);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 106:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(318);
      if (lookahead == 'l') ADVANCE(462);
      if (lookahead == 's') ADVANCE(1194);
      if (lookahead == 't') ADVANCE(1360);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 107:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1054);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 108:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1000);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 109:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(338);
      if (lookahead == 'l') ADVANCE(1366);
      if (lookahead == 'u') ADVANCE(544);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 110:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1087);
      if (lookahead == 'p') ADVANCE(18);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 111:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(871);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 112:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 113:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(886);
      if (lookahead == 'y') ADVANCE(843);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 114:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(342);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 115:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1001);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 116:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 117:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 118:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(693);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 119:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1098);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 120:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(778);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 121:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(963);
      if (lookahead == 'p') ADVANCE(294);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 122:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(694);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 123:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1160);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 124:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1101);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 125:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1102);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 126:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(322);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 127:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(698);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 128:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(855);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 129:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 130:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(327);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 131:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 132:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(700);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 133:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(717);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 134:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(331);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 135:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(343);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 136:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(703);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 137:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1009);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 138:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 139:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1127);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 140:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(636);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 141:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1077);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 142:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(339);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 143:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(247);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 144:
      if (lookahead == ':') ADVANCE(1575);
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
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 145:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(730);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 146:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1048);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 147:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(754);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 148:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1074);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 149:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1197);
      if (lookahead == 'i') ADVANCE(854);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 150:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 151:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(801);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 152:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 153:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(773);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 154:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(616);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 155:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(577);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 156:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 157:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(725);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 158:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(308);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 159:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(732);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 160:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 161:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1144);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 162:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1150);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 163:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(802);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 164:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(287);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 165:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(737);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 166:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1076);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 167:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(256);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 168:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1152);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 169:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(755);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 170:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1024);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 171:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(765);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 172:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(740);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 173:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(1154);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 174:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(767);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 175:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(728);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 176:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(780);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 177:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 178:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(805);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 179:
      if (lookahead == ':') ADVANCE(1575);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 180:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 181:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 182:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(366);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 183:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 184:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 185:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(1213);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 186:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 187:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 188:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(777);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 189:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(779);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 190:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(814);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 191:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'b') ADVANCE(1373);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 192:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'b') ADVANCE(1326);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 193:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'b') ADVANCE(1545);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 194:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'b') ADVANCE(1053);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 195:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'b') ADVANCE(193);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 196:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'b') ADVANCE(731);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 197:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'b') ADVANCE(990);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 198:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'b') ADVANCE(455);
      if (lookahead == 'n') ADVANCE(353);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 199:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'b') ADVANCE(660);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 200:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'b') ADVANCE(122);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 201:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'b') ADVANCE(739);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 202:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'b') ADVANCE(742);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 203:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'b') ADVANCE(743);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 204:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'b') ADVANCE(745);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 205:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'b') ADVANCE(756);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 206:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'b') ADVANCE(746);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 207:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'b') ADVANCE(747);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 208:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'b') ADVANCE(748);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 209:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'b') ADVANCE(644);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 210:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'b') ADVANCE(156);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 211:
      if (lookahead == ':') ADVANCE(1575);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 212:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1445);
      if (lookahead == 'e') ADVANCE(1134);
      if (lookahead == 'l') ADVANCE(898);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 213:
      if (lookahead == ':') ADVANCE(1575);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 214:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 215:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1375);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 216:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1408);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 217:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1421);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 218:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1442);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 219:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1448);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 220:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1338);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 221:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1491);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 222:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1537);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 223:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1322);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 224:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1531);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 225:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1551);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 226:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1447);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 227:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1466);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 228:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1469);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 229:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1524);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 230:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1406);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 231:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1405);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 232:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1455);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 233:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1533);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 234:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1465);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 235:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1470);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 236:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1555);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 237:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1557);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 238:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1458);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 239:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1556);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 240:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1558);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 241:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1404);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 242:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(682);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 243:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 244:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(581);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 245:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(951);
      if (lookahead == 'g') ADVANCE(803);
      if (lookahead == 'm') ADVANCE(56);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 246:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(582);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 247:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(674);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 248:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1071);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 249:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(589);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 250:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(675);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 251:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(594);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 252:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(676);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 253:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(583);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 254:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(677);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 255:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1193);
      if (lookahead == 'd') ADVANCE(1261);
      if (lookahead == 't') ADVANCE(1198);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 256:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(679);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 257:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 258:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1097);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 259:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1060);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 260:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(921);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 261:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(932);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 262:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1105);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 263:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 264:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1165);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 265:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(387);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 266:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(629);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 267:
      if (lookahead == ':') ADVANCE(1575);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 268:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(225);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 269:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(226);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 270:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(723);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 271:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(230);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 272:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1114);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 273:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1129);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 274:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 275:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(445);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 276:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(235);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 277:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(236);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 278:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(237);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 279:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(238);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 280:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(239);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 281:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(240);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 282:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 283:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 284:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1122);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 285:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 286:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(407);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 287:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(411);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 288:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 289:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(532);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 290:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(426);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 291:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(795);
      if (lookahead == 'm') ADVANCE(796);
      if (lookahead == 'n') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1290);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 292:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 293:
      if (lookahead == ':') ADVANCE(1575);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 294:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1085);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 295:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(275);
      if (lookahead == 'l') ADVANCE(761);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 296:
      if (lookahead == ':') ADVANCE(1575);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 297:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(269);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 298:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1075);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 299:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1202);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 300:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 301:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1168);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 302:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1151);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 303:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 304:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 305:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(153);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 306:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(136);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 307:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 308:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1171);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 309:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(173);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 310:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(188);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 311:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(189);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 312:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(1291);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 313:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(1294);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 314:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(1420);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 315:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(1312);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 316:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(1336);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 317:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(1342);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 318:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(887);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 319:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(1278);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 320:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(1473);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 321:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(1388);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 322:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(1300);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 323:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(1493);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 324:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(1508);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 325:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(1502);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 326:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(1543);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 327:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(1305);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 328:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(1335);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 329:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(1485);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 330:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(1500);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 331:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(1515);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 332:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(1495);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 333:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(1441);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 334:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'l') ADVANCE(1072);
      if (lookahead == 's') ADVANCE(1092);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 335:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(352);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 336:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(1055);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 337:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 338:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(893);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 339:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(361);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 340:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(989);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 341:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(475);
      if (lookahead == 'g') ADVANCE(851);
      if (lookahead == 't') ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 342:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(161);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 343:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 344:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(444);
      if (lookahead == 'e') ADVANCE(1385);
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(1386);
      if (lookahead == 'r') ADVANCE(464);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 345:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(992);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 346:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(993);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 347:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(998);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 348:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(449);
      if (lookahead == 'w') ADVANCE(639);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 349:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(439);
      if (lookahead == 'k') ADVANCE(463);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 350:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(474);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 351:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(1199);
      if (lookahead == 'n') ADVANCE(930);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 352:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(456);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 353:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(611);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 354:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(76);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 355:
      if (lookahead == ':') ADVANCE(1575);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 356:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(346);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 357:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'm') ADVANCE(906);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 358:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(347);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 359:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(485);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 360:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(618);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 361:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(1028);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 362:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(1040);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 363:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(1042);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 364:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(362);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 365:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(522);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 366:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(363);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 367:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(305);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 368:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 369:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 370:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(562);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 371:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 372:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1350);
      if (lookahead == 't') ADVANCE(1351);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 373:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1352);
      if (lookahead == 't') ADVANCE(1353);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 374:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1354);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 375:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1364);
      if (lookahead == 't') ADVANCE(1365);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 376:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1369);
      if (lookahead == 't') ADVANCE(1370);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 377:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(788);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 378:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1378);
      if (lookahead == 't') ADVANCE(1379);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 379:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1381);
      if (lookahead == 't') ADVANCE(1382);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 380:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 381:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1323);
      if (lookahead == 'm') ADVANCE(1325);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 382:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(691);
      if (lookahead == 't') ADVANCE(923);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 383:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1570);
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(1188);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 384:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 385:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1565);
      if (lookahead == 'n') ADVANCE(215);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 386:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1566);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 387:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1316);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 388:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1372);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 389:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1429);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 390:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1282);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 391:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1324);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 392:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1334);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 393:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1468);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 394:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1481);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 395:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1359);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 396:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1541);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 397:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1572);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 398:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1395);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 399:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1427);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 400:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1467);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 401:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1484);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 402:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1497);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 403:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1498);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 404:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1501);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 405:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1507);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 406:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1546);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 407:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1462);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 408:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1483);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 409:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1505);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 410:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1547);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 411:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1396);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 412:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1400);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 413:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1461);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 414:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1478);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 415:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1487);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 416:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1488);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 417:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1489);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 418:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1535);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 419:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1503);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 420:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1332);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 421:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1480);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 422:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1387);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 423:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1401);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 424:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1311);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 425:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1522);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 426:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1509);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 427:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1431);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 428:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1437);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 429:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1521);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 430:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1494);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 431:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(979);
      if (lookahead == 'g') ADVANCE(372);
      if (lookahead == 'l') ADVANCE(373);
      if (lookahead == 'n') ADVANCE(374);
      if (lookahead == 'p') ADVANCE(1091);
      if (lookahead == 'r') ADVANCE(1355);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 432:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1004);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 433:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(713);
      if (lookahead == 'r') ADVANCE(643);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 434:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(981);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 435:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1230);
      if (lookahead == 'i') ADVANCE(813);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 436:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(564);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 437:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(540);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 438:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 439:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1212);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 440:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(789);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 441:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1218);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 442:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'i') ADVANCE(1002);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 443:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(806);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 444:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 445:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1080);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 446:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1008);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 447:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(961);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 448:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(884);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 449:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 450:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1014);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 451:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(790);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 452:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1029);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 453:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(791);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 454:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 455:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(692);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 456:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(824);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 457:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(987);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 458:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 459:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1065);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 460:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 461:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 462:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 463:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 464:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 465:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(695);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 466:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 467:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 468:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(325);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 469:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 470:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(715);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 471:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1106);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 472:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1010);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 473:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 474:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(994);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 475:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 476:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 477:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(701);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 478:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 479:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(997);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 480:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(333);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 481:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1175);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 482:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1016);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 483:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(702);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 484:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 485:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(882);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 486:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 487:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(394);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 488:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1118);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 489:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(536);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 490:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1083);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 491:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 492:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1232);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 493:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 494:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 495:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 496:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1235);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 497:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 498:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 499:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(733);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 500:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1066);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 501:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1233);
      if (lookahead == 'i') ADVANCE(888);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 502:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 503:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(724);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 504:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1068);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 505:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(860);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 506:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1236);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 507:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(810);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 508:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'i') ADVANCE(1211);
      if (lookahead == 'o') ADVANCE(1146);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 509:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1070);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 510:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(861);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 511:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 512:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1051);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 513:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 514:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 515:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(926);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 516:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 517:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(864);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 518:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 519:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(865);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 520:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1025);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 521:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 522:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1026);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 523:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(804);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 524:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(592);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 525:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(807);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 526:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1034);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 527:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(1046);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 528:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(885);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 529:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(879);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 530:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(811);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 531:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(812);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 532:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 533:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 534:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(784);
      if (lookahead == 'v') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 535:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(785);
      if (lookahead == 'v') ADVANCE(147);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 536:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'e') ADVANCE(815);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 537:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'f') ADVANCE(771);
      if (lookahead == 'i') ADVANCE(1156);
      if (lookahead == 'l') ADVANCE(895);
      if (lookahead == 'r') ADVANCE(1299);
      if (lookahead == 'u') ADVANCE(633);
      if (lookahead == 'y') ADVANCE(1003);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 538:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'f') ADVANCE(1279);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 539:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'f') ADVANCE(1344);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 540:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'f') ADVANCE(1412);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 541:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'f') ADVANCE(1568);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 542:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'f') ADVANCE(1492);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 543:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'f') ADVANCE(1534);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 544:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'f') ADVANCE(557);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 545:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'f') ADVANCE(1183);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 546:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'f') ADVANCE(954);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 547:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'f') ADVANCE(955);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 548:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'f') ADVANCE(907);
      if (lookahead == 'n') ADVANCE(935);
      if (lookahead == 's') ADVANCE(632);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 549:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'f') ADVANCE(956);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 550:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'f') ADVANCE(1100);
      if (lookahead == 't') ADVANCE(246);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 551:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'f') ADVANCE(490);
      if (lookahead == 'n') ADVANCE(648);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 552:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'f') ADVANCE(958);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 553:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'f') ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 554:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'f') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 555:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'f') ADVANCE(972);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 556:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'f') ADVANCE(624);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 557:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'f') ADVANCE(738);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 558:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'f') ADVANCE(1204);
      if (lookahead == 'k') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 559:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'f') ADVANCE(662);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 560:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'f') ADVANCE(516);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 561:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'f') ADVANCE(775);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 562:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'g') ADVANCE(1318);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 563:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'g') ADVANCE(1391);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 564:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'g') ADVANCE(1457);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 565:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'g') ADVANCE(1267);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 566:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'g') ADVANCE(1451);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 567:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'g') ADVANCE(1390);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 568:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'g') ADVANCE(1307);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 569:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'g') ADVANCE(1402);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 570:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'g') ADVANCE(1529);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 571:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'g') ADVANCE(1496);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 572:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'g') ADVANCE(1514);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 573:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'g') ADVANCE(1523);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 574:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'g') ADVANCE(970);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 575:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'g') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 576:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'g') ADVANCE(401);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 577:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'g') ADVANCE(430);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 578:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'g') ADVANCE(505);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 579:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'g') ADVANCE(1032);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 580:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'g') ADVANCE(809);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 581:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'h') ADVANCE(1416);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 582:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'h') ADVANCE(1374);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 583:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'h') ADVANCE(1301);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 584:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'h') ADVANCE(563);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 585:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'h') ADVANCE(983);
      if (lookahead == 'm') ADVANCE(1407);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 586:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'h') ADVANCE(984);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 587:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 588:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'h') ADVANCE(609);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 589:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'h') ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 590:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'h') ADVANCE(146);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 591:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'h') ADVANCE(613);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 592:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'h') ADVANCE(651);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 593:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'h') ADVANCE(1050);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 594:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'h') ADVANCE(184);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 595:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 'l') ADVANCE(902);
      if (lookahead == 'w') ADVANCE(87);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 596:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(1357);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 597:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(550);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 598:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 599:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(1320);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 600:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 601:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(1207);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 602:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(1208);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 603:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(1209);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 604:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 605:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(968);
      if (lookahead == 'u') ADVANCE(385);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 606:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(689);
      if (lookahead == 'r') ADVANCE(575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 607:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(319);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 608:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(840);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 609:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(1089);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 610:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 611:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(836);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 612:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(1069);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 613:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(827);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 614:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 615:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(828);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 616:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(699);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 617:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 618:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(837);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 619:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(763);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 620:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(266);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 621:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 622:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(831);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 623:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(228);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 624:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(760);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 625:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(880);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 626:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(839);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 627:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(841);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 628:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(234);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 629:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(1135);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 630:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(1131);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 631:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 632:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(1254);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 633:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(759);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 634:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(857);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 635:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(1255);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 636:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(781);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 637:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 638:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(859);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 639:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(845);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 640:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(874);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 641:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(1256);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 642:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(307);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 643:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(1148);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 644:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(850);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 645:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(1084);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 646:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(1257);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 647:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(1049);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 648:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(1164);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 649:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(867);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 650:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 651:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(862);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 652:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(1258);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 653:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(288);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 654:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(1169);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 655:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(863);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 656:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(1259);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 657:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(1023);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 658:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(290);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 659:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(741);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 660:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 661:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(870);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 662:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(744);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 663:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 664:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 665:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(1082);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 666:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(1173);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 667:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 668:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(1176);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 669:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 670:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(205);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 671:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(774);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 672:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'i') ADVANCE(889);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 673:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'k') ADVANCE(1548);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 674:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'k') ADVANCE(1510);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 675:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'k') ADVANCE(1399);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 676:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'k') ADVANCE(1477);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 677:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'k') ADVANCE(1479);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 678:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'k') ADVANCE(1439);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 679:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'k') ADVANCE(1518);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 680:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'k') ADVANCE(943);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 681:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'k') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(317);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 682:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'k') ADVANCE(142);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 683:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'k') ADVANCE(392);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 684:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(538);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 685:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1341);
      if (lookahead == 's') ADVANCE(1093);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 686:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1303);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 687:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1317);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 688:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1569);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 689:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1536);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 690:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1413);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 691:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(878);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 692:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1286);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 693:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 694:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1446);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 695:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1394);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 696:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1486);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 697:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1440);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 698:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1460);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 699:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1472);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 700:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1436);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 701:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1504);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 702:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1525);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 703:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1539);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 704:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1432);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 705:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 706:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(314);
      if (lookahead == 'm') ADVANCE(357);
      if (lookahead == 'n') ADVANCE(1064);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 707:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1237);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 708:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(686);
      if (lookahead == 't') ADVANCE(244);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 709:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1238);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 710:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1239);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 711:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(688);
      if (lookahead == 'w') ADVANCE(1348);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 712:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 713:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(764);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 't') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 714:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1242);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 715:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 716:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1243);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 717:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1191);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 718:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 719:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1244);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 720:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 721:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(614);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 722:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(752);
      if (lookahead == 'p') ADVANCE(1132);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 723:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 724:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(645);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 725:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 726:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(696);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 727:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(642);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 728:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(621);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 729:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1108);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 730:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(782);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 731:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(390);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 732:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(716);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 733:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(507);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 734:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(704);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 735:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 736:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(396);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 737:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(397);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 738:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(441);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 739:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(406);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 740:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(496);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 741:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(410);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 742:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(460);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 743:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 744:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 745:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(422);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 746:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(425);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 747:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 748:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(428);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 749:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(757);
      if (lookahead == 'x') ADVANCE(1339);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 750:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 751:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(941);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 752:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 753:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(620);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 754:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1192);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 755:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 756:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 757:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(910);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 758:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(944);
      if (lookahead == 'p') ADVANCE(1039);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 759:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1167);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 760:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(528);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 761:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(927);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 762:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 763:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(274);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 764:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1022);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 765:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 766:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(947);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 767:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(656);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 768:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(278);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 769:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(280);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 770:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(281);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 771:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(929);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 772:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 773:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(768);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 774:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1170);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 775:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(938);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 776:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 777:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(769);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 778:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(766);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 779:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(770);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 780:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(521);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 781:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(181);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 782:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1088);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 783:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(946);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 784:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(530);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 785:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 786:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(1444);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 787:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 788:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(1371);
      if (lookahead == 't') ADVANCE(1526);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 789:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(1389);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 790:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(918);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 791:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 792:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(1220);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 793:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(952);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 794:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(1227);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 795:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(953);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 796:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 797:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(1228);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 798:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(975);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 799:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(610);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 800:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(395);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 801:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 802:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(429);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 803:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(443);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 804:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(453);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 805:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(628);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 806:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(934);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 807:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(937);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 808:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(971);
      if (lookahead == 'n') ADVANCE(772);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 809:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 810:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 811:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(517);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 812:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 813:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(974);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 814:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(533);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 815:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(976);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 816:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(680);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 817:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(1340);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 818:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(1345);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 819:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(348);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 820:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(1384);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 821:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(1398);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 822:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(1423);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 823:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 824:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(1449);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 825:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(1571);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 826:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(467);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 827:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(1552);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 828:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(1411);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 829:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(1516);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 830:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(1490);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 831:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(1476);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 832:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(1550);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 833:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(539);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 834:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(265);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 835:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(248);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 836:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(574);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 837:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 838:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(570);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 839:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 840:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 841:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(573);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 842:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(336);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 843:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(221);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 844:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(707);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 845:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(323);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 846:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(223);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 847:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(709);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 848:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 849:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(710);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 850:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(329);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 851:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 852:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(891);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 853:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(229);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 854:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(389);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 855:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(1113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 856:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(714);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 857:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(1115);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 858:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 859:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(524);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 860:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(1119);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 861:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(1163);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 862:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(1121);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 863:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(1143);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 864:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(1125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 865:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(1126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 866:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 867:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(408);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 868:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(409);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 869:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(417);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 870:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(423);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 871:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(1187);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 872:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 873:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 874:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(272);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 875:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 876:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(1203);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 877:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 878:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 879:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 880:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(1153);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 881:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 882:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(627);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 883:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(159);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 884:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(360);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 885:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 886:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(654);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 887:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(939);
      if (lookahead == 'o') ADVANCE(844);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 888:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 889:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(668);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 890:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(776);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 891:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'n') ADVANCE(190);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 892:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(1067);
      if (lookahead == 'r') ADVANCE(1201);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 893:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(1224);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 894:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 895:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(242);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 896:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(501);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 897:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(799);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 898:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(200);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 899:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(683);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 900:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 901:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(1195);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 902:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 903:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(559);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 904:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(579);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 905:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(1190);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 906:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(822);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 907:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(1006);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 908:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(340);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 909:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(825);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 910:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(220);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 911:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(1035);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 912:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(991);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 913:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(872);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 914:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(829);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 915:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(270);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 916:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(996);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 917:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(838);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 918:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(1005);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 919:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(1015);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 920:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(1047);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 921:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(966);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 922:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(547);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 923:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(964);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 924:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(1020);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 925:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(345);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 926:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(847);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 927:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(263);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 928:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(1018);
      if (lookahead == 'r') ADVANCE(637);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 929:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(124);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 930:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(1166);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 931:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(549);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 932:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(1214);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 933:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(1021);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 934:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(849);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 935:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(866);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 936:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(634);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 937:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(858);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 938:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 939:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(868);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 940:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(869);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 941:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 942:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(625);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 943:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(873);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 944:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(303);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 945:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(881);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 946:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(306);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 947:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'o') ADVANCE(309);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 948:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(1229);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 949:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 950:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(1527);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 951:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(1295);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 952:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(1314);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 953:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(1328);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 954:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(6);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 955:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(1368);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 956:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(1380);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 957:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(1419);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 958:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(1530);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 959:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 960:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(924);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 961:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(1103);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 962:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(164);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 963:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(259);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 964:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 965:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(1147);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 966:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(418);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 967:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(1011);
      if (lookahead == 't') ADVANCE(154);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 968:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(736);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 969:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(727);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 970:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(131);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 971:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(753);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 972:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(282);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 973:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(942);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 974:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(933);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 975:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(1179);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 976:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(1180);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 977:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'q') ADVANCE(1308);
      if (lookahead == 'x') ADVANCE(102);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 978:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'q') ADVANCE(68);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 979:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'q') ADVANCE(1349);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 980:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'q') ADVANCE(1377);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 981:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'q') ADVANCE(1528);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 982:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(1392);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 983:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(1296);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 984:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(1337);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 985:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(1304);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 986:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(1415);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 987:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(1443);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 988:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(1333);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 989:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(1549);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 990:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(1330);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 991:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(1532);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 992:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(1463);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 993:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(1542);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 994:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(1544);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 995:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(1327);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 996:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(1367);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 997:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(1567);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 998:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(1464);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 999:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1000:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1001:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1002:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1003:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(437);
      if (lookahead == 'v') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1004:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(896);
      if (lookahead == 'x') ADVANCE(1096);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1005:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(1241);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1006:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(545);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1007:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(903);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1008:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(823);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1009:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1010:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1011:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(904);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1012:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(826);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1013:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(497);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1014:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(1104);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1015:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1016:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(155);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1017:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(830);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1018:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(388);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1019:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(832);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1020:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(1116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1021:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(1117);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1022:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1023:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(398);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1024:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1025:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(529);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1026:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(469);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1027:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(414);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1028:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1029:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(576);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1030:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(1138);
      if (lookahead == 'x') ADVANCE(42);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1031:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(487);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1032:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(500);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1033:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(1078);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1034:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(578);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1035:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(350);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1036:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(283);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1037:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(465);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1038:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(912);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1039:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1040:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1041:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(1038);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1042:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(509);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1043:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(276);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1044:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(875);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1045:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(917);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1046:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(877);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1047:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1048:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(359);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1049:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1050:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1051:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(883);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1052:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(1397);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1053:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(1430);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1054:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(1475);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1055:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(1329);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1056:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(1410);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1057:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(1471);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1058:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(1511);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1059:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(1512);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1060:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(53);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1061:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(1136);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1062:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(1216);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1063:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(962);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1064:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(1161);
      if (lookahead == 'v') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1065:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(1056);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1066:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(1057);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1067:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(599);
      if (lookahead == 'u') ADVANCE(600);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1068:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(1058);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1069:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1070:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(1059);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1071:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1072:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(386);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1073:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(670);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1074:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(1107);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1075:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(1109);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1076:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(1124);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1077:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1078:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(416);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1079:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(1247);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1080:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(1073);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1081:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1082:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(909);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1083:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(1142);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1084:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(1159);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1085:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1086:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(617);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1087:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(1178);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1088:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(1177);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1089:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(311);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1090:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1450);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1091:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(548);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1092:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1313);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1093:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(967);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1094:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1474);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1095:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1363);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1096:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1393);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1097:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1309);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1098:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1281);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1099:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1319);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1100:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(267);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1101:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1280);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1102:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1422);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1103:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1438);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1104:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(534);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1105:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1362);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1106:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1538);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1107:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1298);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1108:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1428);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1109:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1517);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1110:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1520);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1111:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1559);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1112:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1302);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1113:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1424);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1114:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1433);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1115:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1358);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1116:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1434);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1117:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1435);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1118:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1306);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1119:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1425);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1120:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1426);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1121:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1456);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1122:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1519);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1123:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1459);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1124:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1292);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1125:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1331);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1126:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1310);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1127:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1482);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1128:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1129:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1130:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1131:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1240);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1132:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1205);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1133:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1134:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1135:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(561);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1136:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(640);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1137:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(667);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1138:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(936);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1139:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(650);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1140:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(367);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1141:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(988);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1142:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1143:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1043);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1144:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1145:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(457);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1146:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1147:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(995);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1148:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(515);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1149:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(253);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1150:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(404);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1151:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(468);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1152:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(421);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1153:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1154:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1155:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1156:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(257);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1157:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1223);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1158:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(157);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1159:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(911);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1160:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(659);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1161:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1162:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1045);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1163:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(965);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1164:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1165:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(552);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1166:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(913);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1167:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(615);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1168:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(916);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1169:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1170:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(622);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1171:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(535);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1172:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(931);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1173:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(663);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1174:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1175:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1200);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1176:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(664);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1177:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1178:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(310);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1179:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1180:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1181:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'u') ADVANCE(196);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1182:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1183:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'u') ADVANCE(1252);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1184:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'u') ADVANCE(1036);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1185:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'u') ADVANCE(687);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1186:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'u') ADVANCE(969);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1187:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'u') ADVANCE(957);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1188:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'u') ADVANCE(726);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1189:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'u') ADVANCE(852);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1190:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'u') ADVANCE(1120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1191:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'u') ADVANCE(420);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1192:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'u') ADVANCE(424);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1193:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'u') ADVANCE(1033);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1194:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'u') ADVANCE(800);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1195:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'u') ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1196:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'u') ADVANCE(798);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1197:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'u') ADVANCE(729);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1198:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'u') ADVANCE(1017);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1199:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'u') ADVANCE(735);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1200:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'u') ADVANCE(1019);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1201:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'u') ADVANCE(846);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1202:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'u') ADVANCE(762);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1203:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'u') ADVANCE(734);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1204:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'u') ADVANCE(853);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1205:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'u') ADVANCE(1027);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1206:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'u') ADVANCE(671);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1207:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'v') ADVANCE(1315);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1208:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'v') ADVANCE(1361);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1209:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'v') ADVANCE(1376);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1210:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'v') ADVANCE(787);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1211:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'v') ADVANCE(162);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1212:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'v') ADVANCE(653);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1213:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'v') ADVANCE(498);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1214:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'v') ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1215:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'v') ADVANCE(555);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1216:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'v') ADVANCE(277);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1217:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'v') ADVANCE(175);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1218:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'v') ADVANCE(518);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1219:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'w') ADVANCE(1346);
      if (lookahead == 'z') ADVANCE(1347);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1270);
      END_STATE();
    case 1220:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'w') ADVANCE(1297);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1221:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'w') ADVANCE(631);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1222:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'w') ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1223:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'w') ADVANCE(658);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1224:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'w') ADVANCE(304);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1225:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'w') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1226:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'x') ADVANCE(1383);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1227:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'x') ADVANCE(1289);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1228:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'x') ADVANCE(1288);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1229:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'x') ADVANCE(292);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1230:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'x') ADVANCE(960);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1231:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'x') ADVANCE(1099);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1232:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'x') ADVANCE(1110);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1233:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'x') ADVANCE(1111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1234:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'x') ADVANCE(478);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1235:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'x') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1236:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'x') ADVANCE(1155);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1237:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'y') ADVANCE(1506);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1238:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'y') ADVANCE(1553);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1239:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'y') ADVANCE(1403);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1240:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'y') ADVANCE(1499);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1241:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'y') ADVANCE(1513);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1242:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'y') ADVANCE(1453);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1243:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'y') ADVANCE(1409);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1244:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'y') ADVANCE(1452);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1245:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'y') ADVANCE(209);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1246:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'y') ADVANCE(1086);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1247:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'y') ADVANCE(1062);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1248:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'y') ADVANCE(848);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1249:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'y') ADVANCE(905);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1250:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'y') ADVANCE(73);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1251:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'z') ADVANCE(1245);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1270);
      END_STATE();
    case 1252:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'z') ADVANCE(1260);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1270);
      END_STATE();
    case 1253:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'z') ADVANCE(400);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1270);
      END_STATE();
    case 1254:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'z') ADVANCE(403);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1270);
      END_STATE();
    case 1255:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'z') ADVANCE(458);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1270);
      END_STATE();
    case 1256:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'z') ADVANCE(412);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1270);
      END_STATE();
    case 1257:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'z') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1270);
      END_STATE();
    case 1258:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'z') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1270);
      END_STATE();
    case 1259:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'z') ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1270);
      END_STATE();
    case 1260:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'z') ADVANCE(626);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1270);
      END_STATE();
    case 1261:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'z') ADVANCE(940);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1270);
      END_STATE();
    case 1262:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(1270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1580);
      END_STATE();
    case 1263:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(1270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1581);
      END_STATE();
    case 1264:
      if (lookahead == ':') ADVANCE(1575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1562);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1265:
      if (lookahead == ':') ADVANCE(1575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1266:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(1270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1579);
      END_STATE();
    case 1267:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(1270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1583);
      END_STATE();
    case 1268:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1578);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1270);
      END_STATE();
    case 1269:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1582);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1270);
      END_STATE();
    case 1270:
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1271:
      if (lookahead == '?') ADVANCE(1563);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1271);
      END_STATE();
    case 1272:
      if (lookahead == 'e') ADVANCE(1273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1272);
      END_STATE();
    case 1273:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(1275);
      END_STATE();
    case 1274:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1576);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1577);
      END_STATE();
    case 1275:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1271);
      END_STATE();
    case 1276:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1564);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(anon_sym_half);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(anon_sym_bfloat);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(anon_sym_double);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(anon_sym_x86_fp80);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(anon_sym_fp128);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(anon_sym_pcc_fp128);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(anon_sym_label);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(anon_sym_metadata);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(anon_sym_x86_mmx);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(anon_sym_x86_amx);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == ':') ADVANCE(1575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1290);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(anon_sym_add);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(1063);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(anon_sym_addrspacecast);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(anon_sym_alloca);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(anon_sym_arcp);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(anon_sym_ashr);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(anon_sym_atomicrmw);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(anon_sym_bitcast);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(anon_sym_br);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(anon_sym_catchpad);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(anon_sym_catchswitch);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(anon_sym_catchret);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'b') ADVANCE(985);
      if (lookahead == 'e') ADVANCE(986);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(anon_sym_callbr);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(anon_sym_cleanuppad);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(anon_sym_cleanupret);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(anon_sym_cmpxchg);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(anon_sym_eq);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(anon_sym_exact);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(anon_sym_extractelement);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(anon_sym_extractvalue);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(anon_sym_fadd);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(anon_sym_fast);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(218);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(anon_sym_fcmp);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(anon_sym_fdiv);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(anon_sym_fence);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(anon_sym_fmul);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(anon_sym_fneg);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(anon_sym_fpext);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(anon_sym_fptosi);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(anon_sym_fptoui);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(anon_sym_fptrunc);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(anon_sym_free);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'z') ADVANCE(391);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1270);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(anon_sym_freeze);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(anon_sym_frem);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(anon_sym_fsub);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(anon_sym_getelementptr);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(anon_sym_icmp);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(anon_sym_inbounds);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(anon_sym_indirectbr);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(anon_sym_insertelement);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(anon_sym_insertvalue);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(anon_sym_inttoptr);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(anon_sym_invoke);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(anon_sym_landingpad);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(anon_sym_lshr);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(anon_sym_malloc);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(anon_sym_max);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(anon_sym_min);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(anon_sym_mul);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(anon_sym_nand);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(anon_sym_ne);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(1094);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(anon_sym_ninf);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(anon_sym_nnan);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(anon_sym_nsw);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(anon_sym_nsz);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(anon_sym_nuw);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(anon_sym_oeq);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(anon_sym_oge);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(anon_sym_ogt);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(anon_sym_ole);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(anon_sym_olt);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(anon_sym_one);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'd') ADVANCE(1356);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(anon_sym_ord);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(anon_sym_phi);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(anon_sym_ptrtoint);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(anon_sym_resume);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(anon_sym_ret);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'u') ADVANCE(1012);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(anon_sym_sdiv);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(anon_sym_select);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(anon_sym_sext);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(anon_sym_sge);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(anon_sym_sgt);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(anon_sym_shl);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(anon_sym_shufflevector);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(anon_sym_sitofp);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(anon_sym_sle);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(anon_sym_slt);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(anon_sym_srem);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(anon_sym_sub);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(anon_sym_switch);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(anon_sym_trunc);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(anon_sym_udiv);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(anon_sym_ueq);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(anon_sym_uge);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(anon_sym_ugt);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(anon_sym_uitofp);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(anon_sym_ule);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(anon_sym_ult);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(anon_sym_umax);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(anon_sym_umin);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(anon_sym_une);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(anon_sym_uno);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(anon_sym_unreachable);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(anon_sym_unwind);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(anon_sym_urem);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(anon_sym_va_arg);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(anon_sym_xchg);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(anon_sym_zext);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(anon_sym_acq_rel);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(anon_sym_acquire);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(anon_sym_addrspace);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(166);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 's') ADVANCE(1174);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(anon_sym_alignstack);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(anon_sym_allocsize);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(anon_sym_alwaysinline);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(anon_sym_appending);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(anon_sym_argmemonly);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(anon_sym_arm_aapcs_vfpcc);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(anon_sym_arm_aapcscc);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(anon_sym_arm_apcscc);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(anon_sym_asm);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(anon_sym_atomic);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(792);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(anon_sym_available_externally);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(anon_sym_blockaddress);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(anon_sym_builtin);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(anon_sym_byref);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(anon_sym_byval);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'a') ADVANCE(708);
      if (lookahead == 'c') ADVANCE(1417);
      if (lookahead == 'l') ADVANCE(491);
      if (lookahead == 'm') ADVANCE(948);
      if (lookahead == 'o') ADVANCE(706);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(anon_sym_caller);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(anon_sym_catch);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(484);
      if (lookahead == 's') ADVANCE(1221);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(anon_sym_cc);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(1418);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(anon_sym_ccc);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(anon_sym_cleanup);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'p') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(anon_sym_cold);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(anon_sym_coldcc);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(anon_sym_comdat);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(anon_sym_common);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(anon_sym_constant);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(anon_sym_convergent);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(anon_sym_datalayout);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(anon_sym_declare);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(anon_sym_define);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(anon_sym_deplibs);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(anon_sym_dereferenceable);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(919);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(anon_sym_dereferenceable_or_null);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(anon_sym_distinct);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(anon_sym_dllexport);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(anon_sym_dllimport);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(anon_sym_dso_local);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(anon_sym_dso_preemptable);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(anon_sym_except);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(anon_sym_extern_weak);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(anon_sym_external);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'l') ADVANCE(1250);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(anon_sym_externally_initialized);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(anon_sym_fastcc);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(anon_sym_filter);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(anon_sym_from);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(anon_sym_gc);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(anon_sym_hhvm_ccc);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(anon_sym_hhvmcc);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(anon_sym_hidden);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(anon_sym_hot);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(anon_sym_immarg);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(anon_sym_inaccessiblemem_or_argmemonly);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(anon_sym_inaccessiblememonly);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(anon_sym_inalloca);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_initialexec);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(anon_sym_inlinehint);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(anon_sym_inreg);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(anon_sym_intel_ocl_bicc);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(anon_sym_inteldialect);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(anon_sym_internal);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(anon_sym_jumptable);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(anon_sym_linkonce);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(925);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(anon_sym_linkonce_odr);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(anon_sym_local_unnamed_addr);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(anon_sym_localdynamic);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(anon_sym_localexec);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(anon_sym_minsize);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(anon_sym_monotonic);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(anon_sym_msp430_intrcc);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(anon_sym_mustprogress);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(anon_sym_musttail);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(anon_sym_naked);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(anon_sym_nest);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(anon_sym_noalias);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(anon_sym_nobuiltin);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(anon_sym_nocallback);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(anon_sym_nocapture);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(anon_sym_nocf_check);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(anon_sym_noduplicate);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(anon_sym_nofree);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(anon_sym_noimplicitfloat);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(anon_sym_noinline);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(anon_sym_nomerge);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(anon_sym_nonlazybind);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(anon_sym_nonnull);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(anon_sym_noprofile);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(anon_sym_norecurse);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(anon_sym_noredzone);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(anon_sym_noreturn);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(anon_sym_nosync);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(anon_sym_noundef);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(anon_sym_nounwind);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(anon_sym_nosanitize_coverage);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(anon_sym_null_pointer_is_valid);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(anon_sym_optforfuzzing);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(anon_sym_optnone);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(anon_sym_optsize);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(anon_sym_personality);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(anon_sym_preallocated);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(anon_sym_protected);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(anon_sym_ptx_device);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(anon_sym_ptx_kernel);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(anon_sym_readnone);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(anon_sym_readonly);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(anon_sym_release);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(anon_sym_returned);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(anon_sym_returns_twice);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(anon_sym_safestack);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(anon_sym_sanitize_address);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(anon_sym_sanitize_hwaddress);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(anon_sym_sanitize_memory);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(anon_sym_sanitize_memtag);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(anon_sym_sanitize_thread);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(anon_sym_seq_cst);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(anon_sym_shadowcallstack);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(anon_sym_sideeffect);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(anon_sym_signext);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(anon_sym_source_filename);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(anon_sym_speculatable);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(anon_sym_speculative_load_hardening);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(anon_sym_spir_func);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(anon_sym_spir_kernel);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(anon_sym_sret);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(anon_sym_ssp);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(434);
      if (lookahead == 's') ADVANCE(1162);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(anon_sym_sspreq);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(anon_sym_sspstrong);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(anon_sym_strictfp);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(anon_sym_swiftcc);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(anon_sym_swifterror);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(anon_sym_swifttailcc);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(anon_sym_swiftself);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(anon_sym_syncscope);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(anon_sym_tail);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(222);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(anon_sym_tailcc);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(anon_sym_target);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(anon_sym_thread_local);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(anon_sym_to);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(anon_sym_triple);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(anon_sym_unnamed_addr);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(anon_sym_unordered);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(anon_sym_uselistorder);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(195);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(anon_sym_uselistorder_bb);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(anon_sym_uwtable);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(anon_sym_weak);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(908);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(anon_sym_weak_odr);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(anon_sym_willreturn);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(anon_sym_win64cc);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(anon_sym_within);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(anon_sym_writeonly);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '8') ADVANCE(15);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == 'c') ADVANCE(584);
      if (lookahead == 'o') ADVANCE(982);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(anon_sym_x86_64_sysvcc);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(anon_sym_x86_fastcallcc);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(anon_sym_x86_stdcallcc);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(anon_sym_x86_thiscallcc);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(anon_sym_zeroext);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1272);
      if (lookahead == 'x') ADVANCE(1276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1561);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1561);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == ':') ADVANCE(1575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1562);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(aux_sym_float_token1);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1564);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(anon_sym_zeroinitializer);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(anon_sym_undef);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_') ADVANCE(973);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(anon_sym_poison);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(anon_sym_vscale);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1573);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(1574);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1576);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1577);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(aux_sym_identifier_token3);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1578);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1270);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(aux_sym_identifier_token4);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(1270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1579);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(aux_sym_identifier_token5);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(1270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1580);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(aux_sym_identifier_token6);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(1270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1581);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(aux_sym_identifier_token7);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1582);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1270);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(aux_sym_identifier_token8);
      if (lookahead == ':') ADVANCE(1575);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(1270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1583);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '"') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1576);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1577);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(anon_sym_STAR);
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(12),
    [sym_type] = STATE(2),
    [sym_statement] = STATE(2),
    [sym_keyword] = STATE(2),
    [sym_float] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_constant] = STATE(2),
    [sym_identifier] = STATE(2),
    [sym_punctuation] = STATE(2),
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
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_EQ] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(25),
  },
  [2] = {
    [sym_type] = STATE(3),
    [sym_statement] = STATE(3),
    [sym_keyword] = STATE(3),
    [sym_float] = STATE(3),
    [sym_boolean] = STATE(3),
    [sym_constant] = STATE(3),
    [sym_identifier] = STATE(3),
    [sym_punctuation] = STATE(3),
    [aux_sym_module_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(29),
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
    [sym_number] = ACTIONS(31),
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
    [sym_comment] = ACTIONS(33),
    [sym_string] = ACTIONS(33),
    [sym_label] = ACTIONS(33),
    [aux_sym_identifier_token1] = ACTIONS(21),
    [aux_sym_identifier_token2] = ACTIONS(21),
    [aux_sym_identifier_token3] = ACTIONS(23),
    [aux_sym_identifier_token4] = ACTIONS(23),
    [aux_sym_identifier_token5] = ACTIONS(23),
    [aux_sym_identifier_token6] = ACTIONS(23),
    [aux_sym_identifier_token7] = ACTIONS(23),
    [aux_sym_identifier_token8] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_EQ] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(25),
  },
  [3] = {
    [sym_type] = STATE(3),
    [sym_statement] = STATE(3),
    [sym_keyword] = STATE(3),
    [sym_float] = STATE(3),
    [sym_boolean] = STATE(3),
    [sym_constant] = STATE(3),
    [sym_identifier] = STATE(3),
    [sym_punctuation] = STATE(3),
    [aux_sym_module_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_half] = ACTIONS(37),
    [anon_sym_bfloat] = ACTIONS(37),
    [anon_sym_float] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_x86_fp80] = ACTIONS(37),
    [anon_sym_fp128] = ACTIONS(37),
    [anon_sym_pcc_fp128] = ACTIONS(37),
    [anon_sym_label] = ACTIONS(37),
    [anon_sym_metadata] = ACTIONS(37),
    [anon_sym_x86_mmx] = ACTIONS(37),
    [anon_sym_x86_amx] = ACTIONS(37),
    [aux_sym_type_token1] = ACTIONS(37),
    [anon_sym_add] = ACTIONS(40),
    [anon_sym_addrspacecast] = ACTIONS(40),
    [anon_sym_alloca] = ACTIONS(40),
    [anon_sym_and] = ACTIONS(40),
    [anon_sym_arcp] = ACTIONS(40),
    [anon_sym_ashr] = ACTIONS(40),
    [anon_sym_atomicrmw] = ACTIONS(40),
    [anon_sym_bitcast] = ACTIONS(40),
    [anon_sym_br] = ACTIONS(40),
    [anon_sym_catchpad] = ACTIONS(40),
    [anon_sym_catchswitch] = ACTIONS(40),
    [anon_sym_catchret] = ACTIONS(40),
    [anon_sym_call] = ACTIONS(40),
    [anon_sym_callbr] = ACTIONS(40),
    [anon_sym_cleanuppad] = ACTIONS(40),
    [anon_sym_cleanupret] = ACTIONS(40),
    [anon_sym_cmpxchg] = ACTIONS(40),
    [anon_sym_eq] = ACTIONS(40),
    [anon_sym_exact] = ACTIONS(40),
    [anon_sym_extractelement] = ACTIONS(40),
    [anon_sym_extractvalue] = ACTIONS(40),
    [anon_sym_fadd] = ACTIONS(40),
    [anon_sym_fast] = ACTIONS(40),
    [anon_sym_fcmp] = ACTIONS(40),
    [anon_sym_fdiv] = ACTIONS(40),
    [anon_sym_fence] = ACTIONS(40),
    [anon_sym_fmul] = ACTIONS(40),
    [anon_sym_fneg] = ACTIONS(40),
    [anon_sym_fpext] = ACTIONS(40),
    [anon_sym_fptosi] = ACTIONS(40),
    [anon_sym_fptoui] = ACTIONS(40),
    [anon_sym_fptrunc] = ACTIONS(40),
    [anon_sym_free] = ACTIONS(40),
    [anon_sym_freeze] = ACTIONS(40),
    [anon_sym_frem] = ACTIONS(40),
    [anon_sym_fsub] = ACTIONS(40),
    [anon_sym_getelementptr] = ACTIONS(40),
    [anon_sym_icmp] = ACTIONS(40),
    [anon_sym_inbounds] = ACTIONS(40),
    [anon_sym_indirectbr] = ACTIONS(40),
    [anon_sym_insertelement] = ACTIONS(40),
    [anon_sym_insertvalue] = ACTIONS(40),
    [anon_sym_inttoptr] = ACTIONS(40),
    [anon_sym_invoke] = ACTIONS(40),
    [anon_sym_landingpad] = ACTIONS(40),
    [anon_sym_load] = ACTIONS(40),
    [anon_sym_lshr] = ACTIONS(40),
    [anon_sym_malloc] = ACTIONS(40),
    [anon_sym_max] = ACTIONS(40),
    [anon_sym_min] = ACTIONS(40),
    [anon_sym_mul] = ACTIONS(40),
    [anon_sym_nand] = ACTIONS(40),
    [anon_sym_ne] = ACTIONS(40),
    [anon_sym_ninf] = ACTIONS(40),
    [anon_sym_nnan] = ACTIONS(40),
    [anon_sym_nsw] = ACTIONS(40),
    [anon_sym_nsz] = ACTIONS(40),
    [anon_sym_nuw] = ACTIONS(40),
    [anon_sym_oeq] = ACTIONS(40),
    [anon_sym_oge] = ACTIONS(40),
    [anon_sym_ogt] = ACTIONS(40),
    [anon_sym_ole] = ACTIONS(40),
    [anon_sym_olt] = ACTIONS(40),
    [anon_sym_one] = ACTIONS(40),
    [anon_sym_or] = ACTIONS(40),
    [anon_sym_ord] = ACTIONS(40),
    [anon_sym_phi] = ACTIONS(40),
    [anon_sym_ptrtoint] = ACTIONS(40),
    [anon_sym_resume] = ACTIONS(40),
    [anon_sym_ret] = ACTIONS(40),
    [anon_sym_sdiv] = ACTIONS(40),
    [anon_sym_select] = ACTIONS(40),
    [anon_sym_sext] = ACTIONS(40),
    [anon_sym_sge] = ACTIONS(40),
    [anon_sym_sgt] = ACTIONS(40),
    [anon_sym_shl] = ACTIONS(40),
    [anon_sym_shufflevector] = ACTIONS(40),
    [anon_sym_sitofp] = ACTIONS(40),
    [anon_sym_sle] = ACTIONS(40),
    [anon_sym_slt] = ACTIONS(40),
    [anon_sym_srem] = ACTIONS(40),
    [anon_sym_store] = ACTIONS(40),
    [anon_sym_sub] = ACTIONS(40),
    [anon_sym_switch] = ACTIONS(40),
    [anon_sym_trunc] = ACTIONS(40),
    [anon_sym_udiv] = ACTIONS(40),
    [anon_sym_ueq] = ACTIONS(40),
    [anon_sym_uge] = ACTIONS(40),
    [anon_sym_ugt] = ACTIONS(40),
    [anon_sym_uitofp] = ACTIONS(40),
    [anon_sym_ule] = ACTIONS(40),
    [anon_sym_ult] = ACTIONS(40),
    [anon_sym_umax] = ACTIONS(40),
    [anon_sym_umin] = ACTIONS(40),
    [anon_sym_une] = ACTIONS(40),
    [anon_sym_uno] = ACTIONS(40),
    [anon_sym_unreachable] = ACTIONS(40),
    [anon_sym_unwind] = ACTIONS(40),
    [anon_sym_urem] = ACTIONS(40),
    [anon_sym_va_arg] = ACTIONS(40),
    [anon_sym_xchg] = ACTIONS(40),
    [anon_sym_xor] = ACTIONS(40),
    [anon_sym_zext] = ACTIONS(40),
    [anon_sym_acq_rel] = ACTIONS(43),
    [anon_sym_acquire] = ACTIONS(43),
    [anon_sym_addrspace] = ACTIONS(43),
    [anon_sym_alias] = ACTIONS(43),
    [anon_sym_align] = ACTIONS(43),
    [anon_sym_alignstack] = ACTIONS(43),
    [anon_sym_allocsize] = ACTIONS(43),
    [anon_sym_alwaysinline] = ACTIONS(43),
    [anon_sym_appending] = ACTIONS(43),
    [anon_sym_argmemonly] = ACTIONS(43),
    [anon_sym_arm_aapcs_vfpcc] = ACTIONS(43),
    [anon_sym_arm_aapcscc] = ACTIONS(43),
    [anon_sym_arm_apcscc] = ACTIONS(43),
    [anon_sym_asm] = ACTIONS(43),
    [anon_sym_atomic] = ACTIONS(43),
    [anon_sym_available_externally] = ACTIONS(43),
    [anon_sym_blockaddress] = ACTIONS(43),
    [anon_sym_builtin] = ACTIONS(43),
    [anon_sym_byref] = ACTIONS(43),
    [anon_sym_byval] = ACTIONS(43),
    [anon_sym_c] = ACTIONS(43),
    [anon_sym_caller] = ACTIONS(43),
    [anon_sym_catch] = ACTIONS(43),
    [anon_sym_cc] = ACTIONS(43),
    [anon_sym_ccc] = ACTIONS(43),
    [anon_sym_cleanup] = ACTIONS(43),
    [anon_sym_cold] = ACTIONS(43),
    [anon_sym_coldcc] = ACTIONS(43),
    [anon_sym_comdat] = ACTIONS(43),
    [anon_sym_common] = ACTIONS(43),
    [anon_sym_constant] = ACTIONS(43),
    [anon_sym_convergent] = ACTIONS(43),
    [anon_sym_datalayout] = ACTIONS(43),
    [anon_sym_declare] = ACTIONS(43),
    [anon_sym_default] = ACTIONS(43),
    [anon_sym_define] = ACTIONS(43),
    [anon_sym_deplibs] = ACTIONS(43),
    [anon_sym_dereferenceable] = ACTIONS(43),
    [anon_sym_dereferenceable_or_null] = ACTIONS(43),
    [anon_sym_distinct] = ACTIONS(43),
    [anon_sym_dllexport] = ACTIONS(43),
    [anon_sym_dllimport] = ACTIONS(43),
    [anon_sym_dso_local] = ACTIONS(43),
    [anon_sym_dso_preemptable] = ACTIONS(43),
    [anon_sym_except] = ACTIONS(43),
    [anon_sym_extern_weak] = ACTIONS(43),
    [anon_sym_external] = ACTIONS(43),
    [anon_sym_externally_initialized] = ACTIONS(43),
    [anon_sym_fastcc] = ACTIONS(43),
    [anon_sym_filter] = ACTIONS(43),
    [anon_sym_from] = ACTIONS(43),
    [anon_sym_gc] = ACTIONS(43),
    [anon_sym_global] = ACTIONS(43),
    [anon_sym_hhvm_ccc] = ACTIONS(43),
    [anon_sym_hhvmcc] = ACTIONS(43),
    [anon_sym_hidden] = ACTIONS(43),
    [anon_sym_hot] = ACTIONS(43),
    [anon_sym_immarg] = ACTIONS(43),
    [anon_sym_inaccessiblemem_or_argmemonly] = ACTIONS(43),
    [anon_sym_inaccessiblememonly] = ACTIONS(43),
    [anon_sym_inalloca] = ACTIONS(43),
    [anon_sym_initialexec] = ACTIONS(43),
    [anon_sym_inlinehint] = ACTIONS(43),
    [anon_sym_inreg] = ACTIONS(43),
    [anon_sym_intel_ocl_bicc] = ACTIONS(43),
    [anon_sym_inteldialect] = ACTIONS(43),
    [anon_sym_internal] = ACTIONS(43),
    [anon_sym_jumptable] = ACTIONS(43),
    [anon_sym_linkonce] = ACTIONS(43),
    [anon_sym_linkonce_odr] = ACTIONS(43),
    [anon_sym_local_unnamed_addr] = ACTIONS(43),
    [anon_sym_localdynamic] = ACTIONS(43),
    [anon_sym_localexec] = ACTIONS(43),
    [anon_sym_minsize] = ACTIONS(43),
    [anon_sym_module] = ACTIONS(43),
    [anon_sym_monotonic] = ACTIONS(43),
    [anon_sym_msp430_intrcc] = ACTIONS(43),
    [anon_sym_mustprogress] = ACTIONS(43),
    [anon_sym_musttail] = ACTIONS(43),
    [anon_sym_naked] = ACTIONS(43),
    [anon_sym_nest] = ACTIONS(43),
    [anon_sym_noalias] = ACTIONS(43),
    [anon_sym_nobuiltin] = ACTIONS(43),
    [anon_sym_nocallback] = ACTIONS(43),
    [anon_sym_nocapture] = ACTIONS(43),
    [anon_sym_nocf_check] = ACTIONS(43),
    [anon_sym_noduplicate] = ACTIONS(43),
    [anon_sym_nofree] = ACTIONS(43),
    [anon_sym_noimplicitfloat] = ACTIONS(43),
    [anon_sym_noinline] = ACTIONS(43),
    [anon_sym_nomerge] = ACTIONS(43),
    [anon_sym_nonlazybind] = ACTIONS(43),
    [anon_sym_nonnull] = ACTIONS(43),
    [anon_sym_noprofile] = ACTIONS(43),
    [anon_sym_norecurse] = ACTIONS(43),
    [anon_sym_noredzone] = ACTIONS(43),
    [anon_sym_noreturn] = ACTIONS(43),
    [anon_sym_nosync] = ACTIONS(43),
    [anon_sym_noundef] = ACTIONS(43),
    [anon_sym_nounwind] = ACTIONS(43),
    [anon_sym_nosanitize_coverage] = ACTIONS(43),
    [anon_sym_null_pointer_is_valid] = ACTIONS(43),
    [anon_sym_optforfuzzing] = ACTIONS(43),
    [anon_sym_optnone] = ACTIONS(43),
    [anon_sym_optsize] = ACTIONS(43),
    [anon_sym_personality] = ACTIONS(43),
    [anon_sym_preallocated] = ACTIONS(43),
    [anon_sym_private] = ACTIONS(43),
    [anon_sym_protected] = ACTIONS(43),
    [anon_sym_ptx_device] = ACTIONS(43),
    [anon_sym_ptx_kernel] = ACTIONS(43),
    [anon_sym_readnone] = ACTIONS(43),
    [anon_sym_readonly] = ACTIONS(43),
    [anon_sym_release] = ACTIONS(43),
    [anon_sym_returned] = ACTIONS(43),
    [anon_sym_returns_twice] = ACTIONS(43),
    [anon_sym_safestack] = ACTIONS(43),
    [anon_sym_sanitize_address] = ACTIONS(43),
    [anon_sym_sanitize_hwaddress] = ACTIONS(43),
    [anon_sym_sanitize_memory] = ACTIONS(43),
    [anon_sym_sanitize_memtag] = ACTIONS(43),
    [anon_sym_sanitize_thread] = ACTIONS(43),
    [anon_sym_section] = ACTIONS(43),
    [anon_sym_seq_cst] = ACTIONS(43),
    [anon_sym_shadowcallstack] = ACTIONS(43),
    [anon_sym_sideeffect] = ACTIONS(43),
    [anon_sym_signext] = ACTIONS(43),
    [anon_sym_source_filename] = ACTIONS(43),
    [anon_sym_speculatable] = ACTIONS(43),
    [anon_sym_speculative_load_hardening] = ACTIONS(43),
    [anon_sym_spir_func] = ACTIONS(43),
    [anon_sym_spir_kernel] = ACTIONS(43),
    [anon_sym_sret] = ACTIONS(43),
    [anon_sym_ssp] = ACTIONS(43),
    [anon_sym_sspreq] = ACTIONS(43),
    [anon_sym_sspstrong] = ACTIONS(43),
    [anon_sym_strictfp] = ACTIONS(43),
    [anon_sym_swiftcc] = ACTIONS(43),
    [anon_sym_swifterror] = ACTIONS(43),
    [anon_sym_swifttailcc] = ACTIONS(43),
    [anon_sym_swiftself] = ACTIONS(43),
    [anon_sym_syncscope] = ACTIONS(43),
    [anon_sym_tail] = ACTIONS(43),
    [anon_sym_tailcc] = ACTIONS(43),
    [anon_sym_target] = ACTIONS(43),
    [anon_sym_thread_local] = ACTIONS(43),
    [anon_sym_to] = ACTIONS(43),
    [anon_sym_triple] = ACTIONS(43),
    [anon_sym_unnamed_addr] = ACTIONS(43),
    [anon_sym_unordered] = ACTIONS(43),
    [anon_sym_uselistorder] = ACTIONS(43),
    [anon_sym_uselistorder_bb] = ACTIONS(43),
    [anon_sym_uwtable] = ACTIONS(43),
    [anon_sym_volatile] = ACTIONS(43),
    [anon_sym_weak] = ACTIONS(43),
    [anon_sym_weak_odr] = ACTIONS(43),
    [anon_sym_willreturn] = ACTIONS(43),
    [anon_sym_win64cc] = ACTIONS(43),
    [anon_sym_within] = ACTIONS(43),
    [anon_sym_writeonly] = ACTIONS(43),
    [anon_sym_x] = ACTIONS(43),
    [anon_sym_x86_64_sysvcc] = ACTIONS(43),
    [anon_sym_x86_fastcallcc] = ACTIONS(43),
    [anon_sym_x86_stdcallcc] = ACTIONS(43),
    [anon_sym_x86_thiscallcc] = ACTIONS(43),
    [anon_sym_zeroext] = ACTIONS(43),
    [sym_number] = ACTIONS(46),
    [aux_sym_float_token1] = ACTIONS(49),
    [aux_sym_float_token2] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(52),
    [anon_sym_false] = ACTIONS(52),
    [anon_sym_zeroinitializer] = ACTIONS(55),
    [anon_sym_undef] = ACTIONS(55),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_none] = ACTIONS(55),
    [anon_sym_poison] = ACTIONS(55),
    [anon_sym_vscale] = ACTIONS(55),
    [sym_comment] = ACTIONS(58),
    [sym_string] = ACTIONS(58),
    [sym_label] = ACTIONS(58),
    [aux_sym_identifier_token1] = ACTIONS(61),
    [aux_sym_identifier_token2] = ACTIONS(61),
    [aux_sym_identifier_token3] = ACTIONS(64),
    [aux_sym_identifier_token4] = ACTIONS(64),
    [aux_sym_identifier_token5] = ACTIONS(64),
    [aux_sym_identifier_token6] = ACTIONS(64),
    [aux_sym_identifier_token7] = ACTIONS(64),
    [aux_sym_identifier_token8] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_RBRACK] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(70),
    [anon_sym_EQ] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_void] = ACTIONS(75),
    [anon_sym_half] = ACTIONS(75),
    [anon_sym_bfloat] = ACTIONS(75),
    [anon_sym_float] = ACTIONS(75),
    [anon_sym_double] = ACTIONS(75),
    [anon_sym_x86_fp80] = ACTIONS(75),
    [anon_sym_fp128] = ACTIONS(75),
    [anon_sym_pcc_fp128] = ACTIONS(75),
    [anon_sym_label] = ACTIONS(75),
    [anon_sym_metadata] = ACTIONS(75),
    [anon_sym_x86_mmx] = ACTIONS(75),
    [anon_sym_x86_amx] = ACTIONS(75),
    [aux_sym_type_token1] = ACTIONS(75),
    [anon_sym_add] = ACTIONS(75),
    [anon_sym_addrspacecast] = ACTIONS(75),
    [anon_sym_alloca] = ACTIONS(75),
    [anon_sym_and] = ACTIONS(75),
    [anon_sym_arcp] = ACTIONS(75),
    [anon_sym_ashr] = ACTIONS(75),
    [anon_sym_atomicrmw] = ACTIONS(75),
    [anon_sym_bitcast] = ACTIONS(75),
    [anon_sym_br] = ACTIONS(75),
    [anon_sym_catchpad] = ACTIONS(75),
    [anon_sym_catchswitch] = ACTIONS(75),
    [anon_sym_catchret] = ACTIONS(75),
    [anon_sym_call] = ACTIONS(75),
    [anon_sym_callbr] = ACTIONS(75),
    [anon_sym_cleanuppad] = ACTIONS(75),
    [anon_sym_cleanupret] = ACTIONS(75),
    [anon_sym_cmpxchg] = ACTIONS(75),
    [anon_sym_eq] = ACTIONS(75),
    [anon_sym_exact] = ACTIONS(75),
    [anon_sym_extractelement] = ACTIONS(75),
    [anon_sym_extractvalue] = ACTIONS(75),
    [anon_sym_fadd] = ACTIONS(75),
    [anon_sym_fast] = ACTIONS(75),
    [anon_sym_fcmp] = ACTIONS(75),
    [anon_sym_fdiv] = ACTIONS(75),
    [anon_sym_fence] = ACTIONS(75),
    [anon_sym_fmul] = ACTIONS(75),
    [anon_sym_fneg] = ACTIONS(75),
    [anon_sym_fpext] = ACTIONS(75),
    [anon_sym_fptosi] = ACTIONS(75),
    [anon_sym_fptoui] = ACTIONS(75),
    [anon_sym_fptrunc] = ACTIONS(75),
    [anon_sym_free] = ACTIONS(75),
    [anon_sym_freeze] = ACTIONS(75),
    [anon_sym_frem] = ACTIONS(75),
    [anon_sym_fsub] = ACTIONS(75),
    [anon_sym_getelementptr] = ACTIONS(75),
    [anon_sym_icmp] = ACTIONS(75),
    [anon_sym_inbounds] = ACTIONS(75),
    [anon_sym_indirectbr] = ACTIONS(75),
    [anon_sym_insertelement] = ACTIONS(75),
    [anon_sym_insertvalue] = ACTIONS(75),
    [anon_sym_inttoptr] = ACTIONS(75),
    [anon_sym_invoke] = ACTIONS(75),
    [anon_sym_landingpad] = ACTIONS(75),
    [anon_sym_load] = ACTIONS(75),
    [anon_sym_lshr] = ACTIONS(75),
    [anon_sym_malloc] = ACTIONS(75),
    [anon_sym_max] = ACTIONS(75),
    [anon_sym_min] = ACTIONS(75),
    [anon_sym_mul] = ACTIONS(75),
    [anon_sym_nand] = ACTIONS(75),
    [anon_sym_ne] = ACTIONS(75),
    [anon_sym_ninf] = ACTIONS(75),
    [anon_sym_nnan] = ACTIONS(75),
    [anon_sym_nsw] = ACTIONS(75),
    [anon_sym_nsz] = ACTIONS(75),
    [anon_sym_nuw] = ACTIONS(75),
    [anon_sym_oeq] = ACTIONS(75),
    [anon_sym_oge] = ACTIONS(75),
    [anon_sym_ogt] = ACTIONS(75),
    [anon_sym_ole] = ACTIONS(75),
    [anon_sym_olt] = ACTIONS(75),
    [anon_sym_one] = ACTIONS(75),
    [anon_sym_or] = ACTIONS(75),
    [anon_sym_ord] = ACTIONS(75),
    [anon_sym_phi] = ACTIONS(75),
    [anon_sym_ptrtoint] = ACTIONS(75),
    [anon_sym_resume] = ACTIONS(75),
    [anon_sym_ret] = ACTIONS(75),
    [anon_sym_sdiv] = ACTIONS(75),
    [anon_sym_select] = ACTIONS(75),
    [anon_sym_sext] = ACTIONS(75),
    [anon_sym_sge] = ACTIONS(75),
    [anon_sym_sgt] = ACTIONS(75),
    [anon_sym_shl] = ACTIONS(75),
    [anon_sym_shufflevector] = ACTIONS(75),
    [anon_sym_sitofp] = ACTIONS(75),
    [anon_sym_sle] = ACTIONS(75),
    [anon_sym_slt] = ACTIONS(75),
    [anon_sym_srem] = ACTIONS(75),
    [anon_sym_store] = ACTIONS(75),
    [anon_sym_sub] = ACTIONS(75),
    [anon_sym_switch] = ACTIONS(75),
    [anon_sym_trunc] = ACTIONS(75),
    [anon_sym_udiv] = ACTIONS(75),
    [anon_sym_ueq] = ACTIONS(75),
    [anon_sym_uge] = ACTIONS(75),
    [anon_sym_ugt] = ACTIONS(75),
    [anon_sym_uitofp] = ACTIONS(75),
    [anon_sym_ule] = ACTIONS(75),
    [anon_sym_ult] = ACTIONS(75),
    [anon_sym_umax] = ACTIONS(75),
    [anon_sym_umin] = ACTIONS(75),
    [anon_sym_une] = ACTIONS(75),
    [anon_sym_uno] = ACTIONS(75),
    [anon_sym_unreachable] = ACTIONS(75),
    [anon_sym_unwind] = ACTIONS(75),
    [anon_sym_urem] = ACTIONS(75),
    [anon_sym_va_arg] = ACTIONS(75),
    [anon_sym_xchg] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(75),
    [anon_sym_zext] = ACTIONS(75),
    [anon_sym_acq_rel] = ACTIONS(75),
    [anon_sym_acquire] = ACTIONS(75),
    [anon_sym_addrspace] = ACTIONS(75),
    [anon_sym_alias] = ACTIONS(75),
    [anon_sym_align] = ACTIONS(75),
    [anon_sym_alignstack] = ACTIONS(75),
    [anon_sym_allocsize] = ACTIONS(75),
    [anon_sym_alwaysinline] = ACTIONS(75),
    [anon_sym_appending] = ACTIONS(75),
    [anon_sym_argmemonly] = ACTIONS(75),
    [anon_sym_arm_aapcs_vfpcc] = ACTIONS(75),
    [anon_sym_arm_aapcscc] = ACTIONS(75),
    [anon_sym_arm_apcscc] = ACTIONS(75),
    [anon_sym_asm] = ACTIONS(75),
    [anon_sym_atomic] = ACTIONS(75),
    [anon_sym_available_externally] = ACTIONS(75),
    [anon_sym_blockaddress] = ACTIONS(75),
    [anon_sym_builtin] = ACTIONS(75),
    [anon_sym_byref] = ACTIONS(75),
    [anon_sym_byval] = ACTIONS(75),
    [anon_sym_c] = ACTIONS(75),
    [anon_sym_caller] = ACTIONS(75),
    [anon_sym_catch] = ACTIONS(75),
    [anon_sym_cc] = ACTIONS(75),
    [anon_sym_ccc] = ACTIONS(75),
    [anon_sym_cleanup] = ACTIONS(75),
    [anon_sym_cold] = ACTIONS(75),
    [anon_sym_coldcc] = ACTIONS(75),
    [anon_sym_comdat] = ACTIONS(75),
    [anon_sym_common] = ACTIONS(75),
    [anon_sym_constant] = ACTIONS(75),
    [anon_sym_convergent] = ACTIONS(75),
    [anon_sym_datalayout] = ACTIONS(75),
    [anon_sym_declare] = ACTIONS(75),
    [anon_sym_default] = ACTIONS(75),
    [anon_sym_define] = ACTIONS(75),
    [anon_sym_deplibs] = ACTIONS(75),
    [anon_sym_dereferenceable] = ACTIONS(75),
    [anon_sym_dereferenceable_or_null] = ACTIONS(75),
    [anon_sym_distinct] = ACTIONS(75),
    [anon_sym_dllexport] = ACTIONS(75),
    [anon_sym_dllimport] = ACTIONS(75),
    [anon_sym_dso_local] = ACTIONS(75),
    [anon_sym_dso_preemptable] = ACTIONS(75),
    [anon_sym_except] = ACTIONS(75),
    [anon_sym_extern_weak] = ACTIONS(75),
    [anon_sym_external] = ACTIONS(75),
    [anon_sym_externally_initialized] = ACTIONS(75),
    [anon_sym_fastcc] = ACTIONS(75),
    [anon_sym_filter] = ACTIONS(75),
    [anon_sym_from] = ACTIONS(75),
    [anon_sym_gc] = ACTIONS(75),
    [anon_sym_global] = ACTIONS(75),
    [anon_sym_hhvm_ccc] = ACTIONS(75),
    [anon_sym_hhvmcc] = ACTIONS(75),
    [anon_sym_hidden] = ACTIONS(75),
    [anon_sym_hot] = ACTIONS(75),
    [anon_sym_immarg] = ACTIONS(75),
    [anon_sym_inaccessiblemem_or_argmemonly] = ACTIONS(75),
    [anon_sym_inaccessiblememonly] = ACTIONS(75),
    [anon_sym_inalloca] = ACTIONS(75),
    [anon_sym_initialexec] = ACTIONS(75),
    [anon_sym_inlinehint] = ACTIONS(75),
    [anon_sym_inreg] = ACTIONS(75),
    [anon_sym_intel_ocl_bicc] = ACTIONS(75),
    [anon_sym_inteldialect] = ACTIONS(75),
    [anon_sym_internal] = ACTIONS(75),
    [anon_sym_jumptable] = ACTIONS(75),
    [anon_sym_linkonce] = ACTIONS(75),
    [anon_sym_linkonce_odr] = ACTIONS(75),
    [anon_sym_local_unnamed_addr] = ACTIONS(75),
    [anon_sym_localdynamic] = ACTIONS(75),
    [anon_sym_localexec] = ACTIONS(75),
    [anon_sym_minsize] = ACTIONS(75),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_monotonic] = ACTIONS(75),
    [anon_sym_msp430_intrcc] = ACTIONS(75),
    [anon_sym_mustprogress] = ACTIONS(75),
    [anon_sym_musttail] = ACTIONS(75),
    [anon_sym_naked] = ACTIONS(75),
    [anon_sym_nest] = ACTIONS(75),
    [anon_sym_noalias] = ACTIONS(75),
    [anon_sym_nobuiltin] = ACTIONS(75),
    [anon_sym_nocallback] = ACTIONS(75),
    [anon_sym_nocapture] = ACTIONS(75),
    [anon_sym_nocf_check] = ACTIONS(75),
    [anon_sym_noduplicate] = ACTIONS(75),
    [anon_sym_nofree] = ACTIONS(75),
    [anon_sym_noimplicitfloat] = ACTIONS(75),
    [anon_sym_noinline] = ACTIONS(75),
    [anon_sym_nomerge] = ACTIONS(75),
    [anon_sym_nonlazybind] = ACTIONS(75),
    [anon_sym_nonnull] = ACTIONS(75),
    [anon_sym_noprofile] = ACTIONS(75),
    [anon_sym_norecurse] = ACTIONS(75),
    [anon_sym_noredzone] = ACTIONS(75),
    [anon_sym_noreturn] = ACTIONS(75),
    [anon_sym_nosync] = ACTIONS(75),
    [anon_sym_noundef] = ACTIONS(75),
    [anon_sym_nounwind] = ACTIONS(75),
    [anon_sym_nosanitize_coverage] = ACTIONS(75),
    [anon_sym_null_pointer_is_valid] = ACTIONS(75),
    [anon_sym_optforfuzzing] = ACTIONS(75),
    [anon_sym_optnone] = ACTIONS(75),
    [anon_sym_optsize] = ACTIONS(75),
    [anon_sym_personality] = ACTIONS(75),
    [anon_sym_preallocated] = ACTIONS(75),
    [anon_sym_private] = ACTIONS(75),
    [anon_sym_protected] = ACTIONS(75),
    [anon_sym_ptx_device] = ACTIONS(75),
    [anon_sym_ptx_kernel] = ACTIONS(75),
    [anon_sym_readnone] = ACTIONS(75),
    [anon_sym_readonly] = ACTIONS(75),
    [anon_sym_release] = ACTIONS(75),
    [anon_sym_returned] = ACTIONS(75),
    [anon_sym_returns_twice] = ACTIONS(75),
    [anon_sym_safestack] = ACTIONS(75),
    [anon_sym_sanitize_address] = ACTIONS(75),
    [anon_sym_sanitize_hwaddress] = ACTIONS(75),
    [anon_sym_sanitize_memory] = ACTIONS(75),
    [anon_sym_sanitize_memtag] = ACTIONS(75),
    [anon_sym_sanitize_thread] = ACTIONS(75),
    [anon_sym_section] = ACTIONS(75),
    [anon_sym_seq_cst] = ACTIONS(75),
    [anon_sym_shadowcallstack] = ACTIONS(75),
    [anon_sym_sideeffect] = ACTIONS(75),
    [anon_sym_signext] = ACTIONS(75),
    [anon_sym_source_filename] = ACTIONS(75),
    [anon_sym_speculatable] = ACTIONS(75),
    [anon_sym_speculative_load_hardening] = ACTIONS(75),
    [anon_sym_spir_func] = ACTIONS(75),
    [anon_sym_spir_kernel] = ACTIONS(75),
    [anon_sym_sret] = ACTIONS(75),
    [anon_sym_ssp] = ACTIONS(75),
    [anon_sym_sspreq] = ACTIONS(75),
    [anon_sym_sspstrong] = ACTIONS(75),
    [anon_sym_strictfp] = ACTIONS(75),
    [anon_sym_swiftcc] = ACTIONS(75),
    [anon_sym_swifterror] = ACTIONS(75),
    [anon_sym_swifttailcc] = ACTIONS(75),
    [anon_sym_swiftself] = ACTIONS(75),
    [anon_sym_syncscope] = ACTIONS(75),
    [anon_sym_tail] = ACTIONS(75),
    [anon_sym_tailcc] = ACTIONS(75),
    [anon_sym_target] = ACTIONS(75),
    [anon_sym_thread_local] = ACTIONS(75),
    [anon_sym_to] = ACTIONS(75),
    [anon_sym_triple] = ACTIONS(75),
    [anon_sym_unnamed_addr] = ACTIONS(75),
    [anon_sym_unordered] = ACTIONS(75),
    [anon_sym_uselistorder] = ACTIONS(75),
    [anon_sym_uselistorder_bb] = ACTIONS(75),
    [anon_sym_uwtable] = ACTIONS(75),
    [anon_sym_volatile] = ACTIONS(75),
    [anon_sym_weak] = ACTIONS(75),
    [anon_sym_weak_odr] = ACTIONS(75),
    [anon_sym_willreturn] = ACTIONS(75),
    [anon_sym_win64cc] = ACTIONS(75),
    [anon_sym_within] = ACTIONS(75),
    [anon_sym_writeonly] = ACTIONS(75),
    [anon_sym_x] = ACTIONS(75),
    [anon_sym_x86_64_sysvcc] = ACTIONS(75),
    [anon_sym_x86_fastcallcc] = ACTIONS(75),
    [anon_sym_x86_stdcallcc] = ACTIONS(75),
    [anon_sym_x86_thiscallcc] = ACTIONS(75),
    [anon_sym_zeroext] = ACTIONS(75),
    [sym_number] = ACTIONS(75),
    [aux_sym_float_token1] = ACTIONS(73),
    [aux_sym_float_token2] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(75),
    [anon_sym_false] = ACTIONS(75),
    [anon_sym_zeroinitializer] = ACTIONS(75),
    [anon_sym_undef] = ACTIONS(75),
    [anon_sym_null] = ACTIONS(75),
    [anon_sym_none] = ACTIONS(75),
    [anon_sym_poison] = ACTIONS(75),
    [anon_sym_vscale] = ACTIONS(75),
    [sym_comment] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_label] = ACTIONS(73),
    [aux_sym_identifier_token1] = ACTIONS(73),
    [aux_sym_identifier_token2] = ACTIONS(73),
    [aux_sym_identifier_token3] = ACTIONS(75),
    [aux_sym_identifier_token4] = ACTIONS(75),
    [aux_sym_identifier_token5] = ACTIONS(75),
    [aux_sym_identifier_token6] = ACTIONS(75),
    [aux_sym_identifier_token7] = ACTIONS(75),
    [aux_sym_identifier_token8] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_BANG] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_STAR] = ACTIONS(73),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_void] = ACTIONS(79),
    [anon_sym_half] = ACTIONS(79),
    [anon_sym_bfloat] = ACTIONS(79),
    [anon_sym_float] = ACTIONS(79),
    [anon_sym_double] = ACTIONS(79),
    [anon_sym_x86_fp80] = ACTIONS(79),
    [anon_sym_fp128] = ACTIONS(79),
    [anon_sym_pcc_fp128] = ACTIONS(79),
    [anon_sym_label] = ACTIONS(79),
    [anon_sym_metadata] = ACTIONS(79),
    [anon_sym_x86_mmx] = ACTIONS(79),
    [anon_sym_x86_amx] = ACTIONS(79),
    [aux_sym_type_token1] = ACTIONS(79),
    [anon_sym_add] = ACTIONS(79),
    [anon_sym_addrspacecast] = ACTIONS(79),
    [anon_sym_alloca] = ACTIONS(79),
    [anon_sym_and] = ACTIONS(79),
    [anon_sym_arcp] = ACTIONS(79),
    [anon_sym_ashr] = ACTIONS(79),
    [anon_sym_atomicrmw] = ACTIONS(79),
    [anon_sym_bitcast] = ACTIONS(79),
    [anon_sym_br] = ACTIONS(79),
    [anon_sym_catchpad] = ACTIONS(79),
    [anon_sym_catchswitch] = ACTIONS(79),
    [anon_sym_catchret] = ACTIONS(79),
    [anon_sym_call] = ACTIONS(79),
    [anon_sym_callbr] = ACTIONS(79),
    [anon_sym_cleanuppad] = ACTIONS(79),
    [anon_sym_cleanupret] = ACTIONS(79),
    [anon_sym_cmpxchg] = ACTIONS(79),
    [anon_sym_eq] = ACTIONS(79),
    [anon_sym_exact] = ACTIONS(79),
    [anon_sym_extractelement] = ACTIONS(79),
    [anon_sym_extractvalue] = ACTIONS(79),
    [anon_sym_fadd] = ACTIONS(79),
    [anon_sym_fast] = ACTIONS(79),
    [anon_sym_fcmp] = ACTIONS(79),
    [anon_sym_fdiv] = ACTIONS(79),
    [anon_sym_fence] = ACTIONS(79),
    [anon_sym_fmul] = ACTIONS(79),
    [anon_sym_fneg] = ACTIONS(79),
    [anon_sym_fpext] = ACTIONS(79),
    [anon_sym_fptosi] = ACTIONS(79),
    [anon_sym_fptoui] = ACTIONS(79),
    [anon_sym_fptrunc] = ACTIONS(79),
    [anon_sym_free] = ACTIONS(79),
    [anon_sym_freeze] = ACTIONS(79),
    [anon_sym_frem] = ACTIONS(79),
    [anon_sym_fsub] = ACTIONS(79),
    [anon_sym_getelementptr] = ACTIONS(79),
    [anon_sym_icmp] = ACTIONS(79),
    [anon_sym_inbounds] = ACTIONS(79),
    [anon_sym_indirectbr] = ACTIONS(79),
    [anon_sym_insertelement] = ACTIONS(79),
    [anon_sym_insertvalue] = ACTIONS(79),
    [anon_sym_inttoptr] = ACTIONS(79),
    [anon_sym_invoke] = ACTIONS(79),
    [anon_sym_landingpad] = ACTIONS(79),
    [anon_sym_load] = ACTIONS(79),
    [anon_sym_lshr] = ACTIONS(79),
    [anon_sym_malloc] = ACTIONS(79),
    [anon_sym_max] = ACTIONS(79),
    [anon_sym_min] = ACTIONS(79),
    [anon_sym_mul] = ACTIONS(79),
    [anon_sym_nand] = ACTIONS(79),
    [anon_sym_ne] = ACTIONS(79),
    [anon_sym_ninf] = ACTIONS(79),
    [anon_sym_nnan] = ACTIONS(79),
    [anon_sym_nsw] = ACTIONS(79),
    [anon_sym_nsz] = ACTIONS(79),
    [anon_sym_nuw] = ACTIONS(79),
    [anon_sym_oeq] = ACTIONS(79),
    [anon_sym_oge] = ACTIONS(79),
    [anon_sym_ogt] = ACTIONS(79),
    [anon_sym_ole] = ACTIONS(79),
    [anon_sym_olt] = ACTIONS(79),
    [anon_sym_one] = ACTIONS(79),
    [anon_sym_or] = ACTIONS(79),
    [anon_sym_ord] = ACTIONS(79),
    [anon_sym_phi] = ACTIONS(79),
    [anon_sym_ptrtoint] = ACTIONS(79),
    [anon_sym_resume] = ACTIONS(79),
    [anon_sym_ret] = ACTIONS(79),
    [anon_sym_sdiv] = ACTIONS(79),
    [anon_sym_select] = ACTIONS(79),
    [anon_sym_sext] = ACTIONS(79),
    [anon_sym_sge] = ACTIONS(79),
    [anon_sym_sgt] = ACTIONS(79),
    [anon_sym_shl] = ACTIONS(79),
    [anon_sym_shufflevector] = ACTIONS(79),
    [anon_sym_sitofp] = ACTIONS(79),
    [anon_sym_sle] = ACTIONS(79),
    [anon_sym_slt] = ACTIONS(79),
    [anon_sym_srem] = ACTIONS(79),
    [anon_sym_store] = ACTIONS(79),
    [anon_sym_sub] = ACTIONS(79),
    [anon_sym_switch] = ACTIONS(79),
    [anon_sym_trunc] = ACTIONS(79),
    [anon_sym_udiv] = ACTIONS(79),
    [anon_sym_ueq] = ACTIONS(79),
    [anon_sym_uge] = ACTIONS(79),
    [anon_sym_ugt] = ACTIONS(79),
    [anon_sym_uitofp] = ACTIONS(79),
    [anon_sym_ule] = ACTIONS(79),
    [anon_sym_ult] = ACTIONS(79),
    [anon_sym_umax] = ACTIONS(79),
    [anon_sym_umin] = ACTIONS(79),
    [anon_sym_une] = ACTIONS(79),
    [anon_sym_uno] = ACTIONS(79),
    [anon_sym_unreachable] = ACTIONS(79),
    [anon_sym_unwind] = ACTIONS(79),
    [anon_sym_urem] = ACTIONS(79),
    [anon_sym_va_arg] = ACTIONS(79),
    [anon_sym_xchg] = ACTIONS(79),
    [anon_sym_xor] = ACTIONS(79),
    [anon_sym_zext] = ACTIONS(79),
    [anon_sym_acq_rel] = ACTIONS(79),
    [anon_sym_acquire] = ACTIONS(79),
    [anon_sym_addrspace] = ACTIONS(79),
    [anon_sym_alias] = ACTIONS(79),
    [anon_sym_align] = ACTIONS(79),
    [anon_sym_alignstack] = ACTIONS(79),
    [anon_sym_allocsize] = ACTIONS(79),
    [anon_sym_alwaysinline] = ACTIONS(79),
    [anon_sym_appending] = ACTIONS(79),
    [anon_sym_argmemonly] = ACTIONS(79),
    [anon_sym_arm_aapcs_vfpcc] = ACTIONS(79),
    [anon_sym_arm_aapcscc] = ACTIONS(79),
    [anon_sym_arm_apcscc] = ACTIONS(79),
    [anon_sym_asm] = ACTIONS(79),
    [anon_sym_atomic] = ACTIONS(79),
    [anon_sym_available_externally] = ACTIONS(79),
    [anon_sym_blockaddress] = ACTIONS(79),
    [anon_sym_builtin] = ACTIONS(79),
    [anon_sym_byref] = ACTIONS(79),
    [anon_sym_byval] = ACTIONS(79),
    [anon_sym_c] = ACTIONS(79),
    [anon_sym_caller] = ACTIONS(79),
    [anon_sym_catch] = ACTIONS(79),
    [anon_sym_cc] = ACTIONS(79),
    [anon_sym_ccc] = ACTIONS(79),
    [anon_sym_cleanup] = ACTIONS(79),
    [anon_sym_cold] = ACTIONS(79),
    [anon_sym_coldcc] = ACTIONS(79),
    [anon_sym_comdat] = ACTIONS(79),
    [anon_sym_common] = ACTIONS(79),
    [anon_sym_constant] = ACTIONS(79),
    [anon_sym_convergent] = ACTIONS(79),
    [anon_sym_datalayout] = ACTIONS(79),
    [anon_sym_declare] = ACTIONS(79),
    [anon_sym_default] = ACTIONS(79),
    [anon_sym_define] = ACTIONS(79),
    [anon_sym_deplibs] = ACTIONS(79),
    [anon_sym_dereferenceable] = ACTIONS(79),
    [anon_sym_dereferenceable_or_null] = ACTIONS(79),
    [anon_sym_distinct] = ACTIONS(79),
    [anon_sym_dllexport] = ACTIONS(79),
    [anon_sym_dllimport] = ACTIONS(79),
    [anon_sym_dso_local] = ACTIONS(79),
    [anon_sym_dso_preemptable] = ACTIONS(79),
    [anon_sym_except] = ACTIONS(79),
    [anon_sym_extern_weak] = ACTIONS(79),
    [anon_sym_external] = ACTIONS(79),
    [anon_sym_externally_initialized] = ACTIONS(79),
    [anon_sym_fastcc] = ACTIONS(79),
    [anon_sym_filter] = ACTIONS(79),
    [anon_sym_from] = ACTIONS(79),
    [anon_sym_gc] = ACTIONS(79),
    [anon_sym_global] = ACTIONS(79),
    [anon_sym_hhvm_ccc] = ACTIONS(79),
    [anon_sym_hhvmcc] = ACTIONS(79),
    [anon_sym_hidden] = ACTIONS(79),
    [anon_sym_hot] = ACTIONS(79),
    [anon_sym_immarg] = ACTIONS(79),
    [anon_sym_inaccessiblemem_or_argmemonly] = ACTIONS(79),
    [anon_sym_inaccessiblememonly] = ACTIONS(79),
    [anon_sym_inalloca] = ACTIONS(79),
    [anon_sym_initialexec] = ACTIONS(79),
    [anon_sym_inlinehint] = ACTIONS(79),
    [anon_sym_inreg] = ACTIONS(79),
    [anon_sym_intel_ocl_bicc] = ACTIONS(79),
    [anon_sym_inteldialect] = ACTIONS(79),
    [anon_sym_internal] = ACTIONS(79),
    [anon_sym_jumptable] = ACTIONS(79),
    [anon_sym_linkonce] = ACTIONS(79),
    [anon_sym_linkonce_odr] = ACTIONS(79),
    [anon_sym_local_unnamed_addr] = ACTIONS(79),
    [anon_sym_localdynamic] = ACTIONS(79),
    [anon_sym_localexec] = ACTIONS(79),
    [anon_sym_minsize] = ACTIONS(79),
    [anon_sym_module] = ACTIONS(79),
    [anon_sym_monotonic] = ACTIONS(79),
    [anon_sym_msp430_intrcc] = ACTIONS(79),
    [anon_sym_mustprogress] = ACTIONS(79),
    [anon_sym_musttail] = ACTIONS(79),
    [anon_sym_naked] = ACTIONS(79),
    [anon_sym_nest] = ACTIONS(79),
    [anon_sym_noalias] = ACTIONS(79),
    [anon_sym_nobuiltin] = ACTIONS(79),
    [anon_sym_nocallback] = ACTIONS(79),
    [anon_sym_nocapture] = ACTIONS(79),
    [anon_sym_nocf_check] = ACTIONS(79),
    [anon_sym_noduplicate] = ACTIONS(79),
    [anon_sym_nofree] = ACTIONS(79),
    [anon_sym_noimplicitfloat] = ACTIONS(79),
    [anon_sym_noinline] = ACTIONS(79),
    [anon_sym_nomerge] = ACTIONS(79),
    [anon_sym_nonlazybind] = ACTIONS(79),
    [anon_sym_nonnull] = ACTIONS(79),
    [anon_sym_noprofile] = ACTIONS(79),
    [anon_sym_norecurse] = ACTIONS(79),
    [anon_sym_noredzone] = ACTIONS(79),
    [anon_sym_noreturn] = ACTIONS(79),
    [anon_sym_nosync] = ACTIONS(79),
    [anon_sym_noundef] = ACTIONS(79),
    [anon_sym_nounwind] = ACTIONS(79),
    [anon_sym_nosanitize_coverage] = ACTIONS(79),
    [anon_sym_null_pointer_is_valid] = ACTIONS(79),
    [anon_sym_optforfuzzing] = ACTIONS(79),
    [anon_sym_optnone] = ACTIONS(79),
    [anon_sym_optsize] = ACTIONS(79),
    [anon_sym_personality] = ACTIONS(79),
    [anon_sym_preallocated] = ACTIONS(79),
    [anon_sym_private] = ACTIONS(79),
    [anon_sym_protected] = ACTIONS(79),
    [anon_sym_ptx_device] = ACTIONS(79),
    [anon_sym_ptx_kernel] = ACTIONS(79),
    [anon_sym_readnone] = ACTIONS(79),
    [anon_sym_readonly] = ACTIONS(79),
    [anon_sym_release] = ACTIONS(79),
    [anon_sym_returned] = ACTIONS(79),
    [anon_sym_returns_twice] = ACTIONS(79),
    [anon_sym_safestack] = ACTIONS(79),
    [anon_sym_sanitize_address] = ACTIONS(79),
    [anon_sym_sanitize_hwaddress] = ACTIONS(79),
    [anon_sym_sanitize_memory] = ACTIONS(79),
    [anon_sym_sanitize_memtag] = ACTIONS(79),
    [anon_sym_sanitize_thread] = ACTIONS(79),
    [anon_sym_section] = ACTIONS(79),
    [anon_sym_seq_cst] = ACTIONS(79),
    [anon_sym_shadowcallstack] = ACTIONS(79),
    [anon_sym_sideeffect] = ACTIONS(79),
    [anon_sym_signext] = ACTIONS(79),
    [anon_sym_source_filename] = ACTIONS(79),
    [anon_sym_speculatable] = ACTIONS(79),
    [anon_sym_speculative_load_hardening] = ACTIONS(79),
    [anon_sym_spir_func] = ACTIONS(79),
    [anon_sym_spir_kernel] = ACTIONS(79),
    [anon_sym_sret] = ACTIONS(79),
    [anon_sym_ssp] = ACTIONS(79),
    [anon_sym_sspreq] = ACTIONS(79),
    [anon_sym_sspstrong] = ACTIONS(79),
    [anon_sym_strictfp] = ACTIONS(79),
    [anon_sym_swiftcc] = ACTIONS(79),
    [anon_sym_swifterror] = ACTIONS(79),
    [anon_sym_swifttailcc] = ACTIONS(79),
    [anon_sym_swiftself] = ACTIONS(79),
    [anon_sym_syncscope] = ACTIONS(79),
    [anon_sym_tail] = ACTIONS(79),
    [anon_sym_tailcc] = ACTIONS(79),
    [anon_sym_target] = ACTIONS(79),
    [anon_sym_thread_local] = ACTIONS(79),
    [anon_sym_to] = ACTIONS(79),
    [anon_sym_triple] = ACTIONS(79),
    [anon_sym_unnamed_addr] = ACTIONS(79),
    [anon_sym_unordered] = ACTIONS(79),
    [anon_sym_uselistorder] = ACTIONS(79),
    [anon_sym_uselistorder_bb] = ACTIONS(79),
    [anon_sym_uwtable] = ACTIONS(79),
    [anon_sym_volatile] = ACTIONS(79),
    [anon_sym_weak] = ACTIONS(79),
    [anon_sym_weak_odr] = ACTIONS(79),
    [anon_sym_willreturn] = ACTIONS(79),
    [anon_sym_win64cc] = ACTIONS(79),
    [anon_sym_within] = ACTIONS(79),
    [anon_sym_writeonly] = ACTIONS(79),
    [anon_sym_x] = ACTIONS(79),
    [anon_sym_x86_64_sysvcc] = ACTIONS(79),
    [anon_sym_x86_fastcallcc] = ACTIONS(79),
    [anon_sym_x86_stdcallcc] = ACTIONS(79),
    [anon_sym_x86_thiscallcc] = ACTIONS(79),
    [anon_sym_zeroext] = ACTIONS(79),
    [sym_number] = ACTIONS(79),
    [aux_sym_float_token1] = ACTIONS(77),
    [aux_sym_float_token2] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(79),
    [anon_sym_false] = ACTIONS(79),
    [anon_sym_zeroinitializer] = ACTIONS(79),
    [anon_sym_undef] = ACTIONS(79),
    [anon_sym_null] = ACTIONS(79),
    [anon_sym_none] = ACTIONS(79),
    [anon_sym_poison] = ACTIONS(79),
    [anon_sym_vscale] = ACTIONS(79),
    [sym_comment] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
    [sym_label] = ACTIONS(77),
    [aux_sym_identifier_token1] = ACTIONS(77),
    [aux_sym_identifier_token2] = ACTIONS(77),
    [aux_sym_identifier_token3] = ACTIONS(79),
    [aux_sym_identifier_token4] = ACTIONS(79),
    [aux_sym_identifier_token5] = ACTIONS(79),
    [aux_sym_identifier_token6] = ACTIONS(79),
    [aux_sym_identifier_token7] = ACTIONS(79),
    [aux_sym_identifier_token8] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(77),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_void] = ACTIONS(83),
    [anon_sym_half] = ACTIONS(83),
    [anon_sym_bfloat] = ACTIONS(83),
    [anon_sym_float] = ACTIONS(83),
    [anon_sym_double] = ACTIONS(83),
    [anon_sym_x86_fp80] = ACTIONS(83),
    [anon_sym_fp128] = ACTIONS(83),
    [anon_sym_pcc_fp128] = ACTIONS(83),
    [anon_sym_label] = ACTIONS(83),
    [anon_sym_metadata] = ACTIONS(83),
    [anon_sym_x86_mmx] = ACTIONS(83),
    [anon_sym_x86_amx] = ACTIONS(83),
    [aux_sym_type_token1] = ACTIONS(83),
    [anon_sym_add] = ACTIONS(83),
    [anon_sym_addrspacecast] = ACTIONS(83),
    [anon_sym_alloca] = ACTIONS(83),
    [anon_sym_and] = ACTIONS(83),
    [anon_sym_arcp] = ACTIONS(83),
    [anon_sym_ashr] = ACTIONS(83),
    [anon_sym_atomicrmw] = ACTIONS(83),
    [anon_sym_bitcast] = ACTIONS(83),
    [anon_sym_br] = ACTIONS(83),
    [anon_sym_catchpad] = ACTIONS(83),
    [anon_sym_catchswitch] = ACTIONS(83),
    [anon_sym_catchret] = ACTIONS(83),
    [anon_sym_call] = ACTIONS(83),
    [anon_sym_callbr] = ACTIONS(83),
    [anon_sym_cleanuppad] = ACTIONS(83),
    [anon_sym_cleanupret] = ACTIONS(83),
    [anon_sym_cmpxchg] = ACTIONS(83),
    [anon_sym_eq] = ACTIONS(83),
    [anon_sym_exact] = ACTIONS(83),
    [anon_sym_extractelement] = ACTIONS(83),
    [anon_sym_extractvalue] = ACTIONS(83),
    [anon_sym_fadd] = ACTIONS(83),
    [anon_sym_fast] = ACTIONS(83),
    [anon_sym_fcmp] = ACTIONS(83),
    [anon_sym_fdiv] = ACTIONS(83),
    [anon_sym_fence] = ACTIONS(83),
    [anon_sym_fmul] = ACTIONS(83),
    [anon_sym_fneg] = ACTIONS(83),
    [anon_sym_fpext] = ACTIONS(83),
    [anon_sym_fptosi] = ACTIONS(83),
    [anon_sym_fptoui] = ACTIONS(83),
    [anon_sym_fptrunc] = ACTIONS(83),
    [anon_sym_free] = ACTIONS(83),
    [anon_sym_freeze] = ACTIONS(83),
    [anon_sym_frem] = ACTIONS(83),
    [anon_sym_fsub] = ACTIONS(83),
    [anon_sym_getelementptr] = ACTIONS(83),
    [anon_sym_icmp] = ACTIONS(83),
    [anon_sym_inbounds] = ACTIONS(83),
    [anon_sym_indirectbr] = ACTIONS(83),
    [anon_sym_insertelement] = ACTIONS(83),
    [anon_sym_insertvalue] = ACTIONS(83),
    [anon_sym_inttoptr] = ACTIONS(83),
    [anon_sym_invoke] = ACTIONS(83),
    [anon_sym_landingpad] = ACTIONS(83),
    [anon_sym_load] = ACTIONS(83),
    [anon_sym_lshr] = ACTIONS(83),
    [anon_sym_malloc] = ACTIONS(83),
    [anon_sym_max] = ACTIONS(83),
    [anon_sym_min] = ACTIONS(83),
    [anon_sym_mul] = ACTIONS(83),
    [anon_sym_nand] = ACTIONS(83),
    [anon_sym_ne] = ACTIONS(83),
    [anon_sym_ninf] = ACTIONS(83),
    [anon_sym_nnan] = ACTIONS(83),
    [anon_sym_nsw] = ACTIONS(83),
    [anon_sym_nsz] = ACTIONS(83),
    [anon_sym_nuw] = ACTIONS(83),
    [anon_sym_oeq] = ACTIONS(83),
    [anon_sym_oge] = ACTIONS(83),
    [anon_sym_ogt] = ACTIONS(83),
    [anon_sym_ole] = ACTIONS(83),
    [anon_sym_olt] = ACTIONS(83),
    [anon_sym_one] = ACTIONS(83),
    [anon_sym_or] = ACTIONS(83),
    [anon_sym_ord] = ACTIONS(83),
    [anon_sym_phi] = ACTIONS(83),
    [anon_sym_ptrtoint] = ACTIONS(83),
    [anon_sym_resume] = ACTIONS(83),
    [anon_sym_ret] = ACTIONS(83),
    [anon_sym_sdiv] = ACTIONS(83),
    [anon_sym_select] = ACTIONS(83),
    [anon_sym_sext] = ACTIONS(83),
    [anon_sym_sge] = ACTIONS(83),
    [anon_sym_sgt] = ACTIONS(83),
    [anon_sym_shl] = ACTIONS(83),
    [anon_sym_shufflevector] = ACTIONS(83),
    [anon_sym_sitofp] = ACTIONS(83),
    [anon_sym_sle] = ACTIONS(83),
    [anon_sym_slt] = ACTIONS(83),
    [anon_sym_srem] = ACTIONS(83),
    [anon_sym_store] = ACTIONS(83),
    [anon_sym_sub] = ACTIONS(83),
    [anon_sym_switch] = ACTIONS(83),
    [anon_sym_trunc] = ACTIONS(83),
    [anon_sym_udiv] = ACTIONS(83),
    [anon_sym_ueq] = ACTIONS(83),
    [anon_sym_uge] = ACTIONS(83),
    [anon_sym_ugt] = ACTIONS(83),
    [anon_sym_uitofp] = ACTIONS(83),
    [anon_sym_ule] = ACTIONS(83),
    [anon_sym_ult] = ACTIONS(83),
    [anon_sym_umax] = ACTIONS(83),
    [anon_sym_umin] = ACTIONS(83),
    [anon_sym_une] = ACTIONS(83),
    [anon_sym_uno] = ACTIONS(83),
    [anon_sym_unreachable] = ACTIONS(83),
    [anon_sym_unwind] = ACTIONS(83),
    [anon_sym_urem] = ACTIONS(83),
    [anon_sym_va_arg] = ACTIONS(83),
    [anon_sym_xchg] = ACTIONS(83),
    [anon_sym_xor] = ACTIONS(83),
    [anon_sym_zext] = ACTIONS(83),
    [anon_sym_acq_rel] = ACTIONS(83),
    [anon_sym_acquire] = ACTIONS(83),
    [anon_sym_addrspace] = ACTIONS(83),
    [anon_sym_alias] = ACTIONS(83),
    [anon_sym_align] = ACTIONS(83),
    [anon_sym_alignstack] = ACTIONS(83),
    [anon_sym_allocsize] = ACTIONS(83),
    [anon_sym_alwaysinline] = ACTIONS(83),
    [anon_sym_appending] = ACTIONS(83),
    [anon_sym_argmemonly] = ACTIONS(83),
    [anon_sym_arm_aapcs_vfpcc] = ACTIONS(83),
    [anon_sym_arm_aapcscc] = ACTIONS(83),
    [anon_sym_arm_apcscc] = ACTIONS(83),
    [anon_sym_asm] = ACTIONS(83),
    [anon_sym_atomic] = ACTIONS(83),
    [anon_sym_available_externally] = ACTIONS(83),
    [anon_sym_blockaddress] = ACTIONS(83),
    [anon_sym_builtin] = ACTIONS(83),
    [anon_sym_byref] = ACTIONS(83),
    [anon_sym_byval] = ACTIONS(83),
    [anon_sym_c] = ACTIONS(83),
    [anon_sym_caller] = ACTIONS(83),
    [anon_sym_catch] = ACTIONS(83),
    [anon_sym_cc] = ACTIONS(83),
    [anon_sym_ccc] = ACTIONS(83),
    [anon_sym_cleanup] = ACTIONS(83),
    [anon_sym_cold] = ACTIONS(83),
    [anon_sym_coldcc] = ACTIONS(83),
    [anon_sym_comdat] = ACTIONS(83),
    [anon_sym_common] = ACTIONS(83),
    [anon_sym_constant] = ACTIONS(83),
    [anon_sym_convergent] = ACTIONS(83),
    [anon_sym_datalayout] = ACTIONS(83),
    [anon_sym_declare] = ACTIONS(83),
    [anon_sym_default] = ACTIONS(83),
    [anon_sym_define] = ACTIONS(83),
    [anon_sym_deplibs] = ACTIONS(83),
    [anon_sym_dereferenceable] = ACTIONS(83),
    [anon_sym_dereferenceable_or_null] = ACTIONS(83),
    [anon_sym_distinct] = ACTIONS(83),
    [anon_sym_dllexport] = ACTIONS(83),
    [anon_sym_dllimport] = ACTIONS(83),
    [anon_sym_dso_local] = ACTIONS(83),
    [anon_sym_dso_preemptable] = ACTIONS(83),
    [anon_sym_except] = ACTIONS(83),
    [anon_sym_extern_weak] = ACTIONS(83),
    [anon_sym_external] = ACTIONS(83),
    [anon_sym_externally_initialized] = ACTIONS(83),
    [anon_sym_fastcc] = ACTIONS(83),
    [anon_sym_filter] = ACTIONS(83),
    [anon_sym_from] = ACTIONS(83),
    [anon_sym_gc] = ACTIONS(83),
    [anon_sym_global] = ACTIONS(83),
    [anon_sym_hhvm_ccc] = ACTIONS(83),
    [anon_sym_hhvmcc] = ACTIONS(83),
    [anon_sym_hidden] = ACTIONS(83),
    [anon_sym_hot] = ACTIONS(83),
    [anon_sym_immarg] = ACTIONS(83),
    [anon_sym_inaccessiblemem_or_argmemonly] = ACTIONS(83),
    [anon_sym_inaccessiblememonly] = ACTIONS(83),
    [anon_sym_inalloca] = ACTIONS(83),
    [anon_sym_initialexec] = ACTIONS(83),
    [anon_sym_inlinehint] = ACTIONS(83),
    [anon_sym_inreg] = ACTIONS(83),
    [anon_sym_intel_ocl_bicc] = ACTIONS(83),
    [anon_sym_inteldialect] = ACTIONS(83),
    [anon_sym_internal] = ACTIONS(83),
    [anon_sym_jumptable] = ACTIONS(83),
    [anon_sym_linkonce] = ACTIONS(83),
    [anon_sym_linkonce_odr] = ACTIONS(83),
    [anon_sym_local_unnamed_addr] = ACTIONS(83),
    [anon_sym_localdynamic] = ACTIONS(83),
    [anon_sym_localexec] = ACTIONS(83),
    [anon_sym_minsize] = ACTIONS(83),
    [anon_sym_module] = ACTIONS(83),
    [anon_sym_monotonic] = ACTIONS(83),
    [anon_sym_msp430_intrcc] = ACTIONS(83),
    [anon_sym_mustprogress] = ACTIONS(83),
    [anon_sym_musttail] = ACTIONS(83),
    [anon_sym_naked] = ACTIONS(83),
    [anon_sym_nest] = ACTIONS(83),
    [anon_sym_noalias] = ACTIONS(83),
    [anon_sym_nobuiltin] = ACTIONS(83),
    [anon_sym_nocallback] = ACTIONS(83),
    [anon_sym_nocapture] = ACTIONS(83),
    [anon_sym_nocf_check] = ACTIONS(83),
    [anon_sym_noduplicate] = ACTIONS(83),
    [anon_sym_nofree] = ACTIONS(83),
    [anon_sym_noimplicitfloat] = ACTIONS(83),
    [anon_sym_noinline] = ACTIONS(83),
    [anon_sym_nomerge] = ACTIONS(83),
    [anon_sym_nonlazybind] = ACTIONS(83),
    [anon_sym_nonnull] = ACTIONS(83),
    [anon_sym_noprofile] = ACTIONS(83),
    [anon_sym_norecurse] = ACTIONS(83),
    [anon_sym_noredzone] = ACTIONS(83),
    [anon_sym_noreturn] = ACTIONS(83),
    [anon_sym_nosync] = ACTIONS(83),
    [anon_sym_noundef] = ACTIONS(83),
    [anon_sym_nounwind] = ACTIONS(83),
    [anon_sym_nosanitize_coverage] = ACTIONS(83),
    [anon_sym_null_pointer_is_valid] = ACTIONS(83),
    [anon_sym_optforfuzzing] = ACTIONS(83),
    [anon_sym_optnone] = ACTIONS(83),
    [anon_sym_optsize] = ACTIONS(83),
    [anon_sym_personality] = ACTIONS(83),
    [anon_sym_preallocated] = ACTIONS(83),
    [anon_sym_private] = ACTIONS(83),
    [anon_sym_protected] = ACTIONS(83),
    [anon_sym_ptx_device] = ACTIONS(83),
    [anon_sym_ptx_kernel] = ACTIONS(83),
    [anon_sym_readnone] = ACTIONS(83),
    [anon_sym_readonly] = ACTIONS(83),
    [anon_sym_release] = ACTIONS(83),
    [anon_sym_returned] = ACTIONS(83),
    [anon_sym_returns_twice] = ACTIONS(83),
    [anon_sym_safestack] = ACTIONS(83),
    [anon_sym_sanitize_address] = ACTIONS(83),
    [anon_sym_sanitize_hwaddress] = ACTIONS(83),
    [anon_sym_sanitize_memory] = ACTIONS(83),
    [anon_sym_sanitize_memtag] = ACTIONS(83),
    [anon_sym_sanitize_thread] = ACTIONS(83),
    [anon_sym_section] = ACTIONS(83),
    [anon_sym_seq_cst] = ACTIONS(83),
    [anon_sym_shadowcallstack] = ACTIONS(83),
    [anon_sym_sideeffect] = ACTIONS(83),
    [anon_sym_signext] = ACTIONS(83),
    [anon_sym_source_filename] = ACTIONS(83),
    [anon_sym_speculatable] = ACTIONS(83),
    [anon_sym_speculative_load_hardening] = ACTIONS(83),
    [anon_sym_spir_func] = ACTIONS(83),
    [anon_sym_spir_kernel] = ACTIONS(83),
    [anon_sym_sret] = ACTIONS(83),
    [anon_sym_ssp] = ACTIONS(83),
    [anon_sym_sspreq] = ACTIONS(83),
    [anon_sym_sspstrong] = ACTIONS(83),
    [anon_sym_strictfp] = ACTIONS(83),
    [anon_sym_swiftcc] = ACTIONS(83),
    [anon_sym_swifterror] = ACTIONS(83),
    [anon_sym_swifttailcc] = ACTIONS(83),
    [anon_sym_swiftself] = ACTIONS(83),
    [anon_sym_syncscope] = ACTIONS(83),
    [anon_sym_tail] = ACTIONS(83),
    [anon_sym_tailcc] = ACTIONS(83),
    [anon_sym_target] = ACTIONS(83),
    [anon_sym_thread_local] = ACTIONS(83),
    [anon_sym_to] = ACTIONS(83),
    [anon_sym_triple] = ACTIONS(83),
    [anon_sym_unnamed_addr] = ACTIONS(83),
    [anon_sym_unordered] = ACTIONS(83),
    [anon_sym_uselistorder] = ACTIONS(83),
    [anon_sym_uselistorder_bb] = ACTIONS(83),
    [anon_sym_uwtable] = ACTIONS(83),
    [anon_sym_volatile] = ACTIONS(83),
    [anon_sym_weak] = ACTIONS(83),
    [anon_sym_weak_odr] = ACTIONS(83),
    [anon_sym_willreturn] = ACTIONS(83),
    [anon_sym_win64cc] = ACTIONS(83),
    [anon_sym_within] = ACTIONS(83),
    [anon_sym_writeonly] = ACTIONS(83),
    [anon_sym_x] = ACTIONS(83),
    [anon_sym_x86_64_sysvcc] = ACTIONS(83),
    [anon_sym_x86_fastcallcc] = ACTIONS(83),
    [anon_sym_x86_stdcallcc] = ACTIONS(83),
    [anon_sym_x86_thiscallcc] = ACTIONS(83),
    [anon_sym_zeroext] = ACTIONS(83),
    [sym_number] = ACTIONS(83),
    [aux_sym_float_token1] = ACTIONS(81),
    [aux_sym_float_token2] = ACTIONS(81),
    [anon_sym_true] = ACTIONS(83),
    [anon_sym_false] = ACTIONS(83),
    [anon_sym_zeroinitializer] = ACTIONS(83),
    [anon_sym_undef] = ACTIONS(83),
    [anon_sym_null] = ACTIONS(83),
    [anon_sym_none] = ACTIONS(83),
    [anon_sym_poison] = ACTIONS(83),
    [anon_sym_vscale] = ACTIONS(83),
    [sym_comment] = ACTIONS(81),
    [sym_string] = ACTIONS(81),
    [sym_label] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(81),
    [aux_sym_identifier_token2] = ACTIONS(81),
    [aux_sym_identifier_token3] = ACTIONS(83),
    [aux_sym_identifier_token4] = ACTIONS(83),
    [aux_sym_identifier_token5] = ACTIONS(83),
    [aux_sym_identifier_token6] = ACTIONS(83),
    [aux_sym_identifier_token7] = ACTIONS(83),
    [aux_sym_identifier_token8] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(83),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(81),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_void] = ACTIONS(87),
    [anon_sym_half] = ACTIONS(87),
    [anon_sym_bfloat] = ACTIONS(87),
    [anon_sym_float] = ACTIONS(87),
    [anon_sym_double] = ACTIONS(87),
    [anon_sym_x86_fp80] = ACTIONS(87),
    [anon_sym_fp128] = ACTIONS(87),
    [anon_sym_pcc_fp128] = ACTIONS(87),
    [anon_sym_label] = ACTIONS(87),
    [anon_sym_metadata] = ACTIONS(87),
    [anon_sym_x86_mmx] = ACTIONS(87),
    [anon_sym_x86_amx] = ACTIONS(87),
    [aux_sym_type_token1] = ACTIONS(87),
    [anon_sym_add] = ACTIONS(87),
    [anon_sym_addrspacecast] = ACTIONS(87),
    [anon_sym_alloca] = ACTIONS(87),
    [anon_sym_and] = ACTIONS(87),
    [anon_sym_arcp] = ACTIONS(87),
    [anon_sym_ashr] = ACTIONS(87),
    [anon_sym_atomicrmw] = ACTIONS(87),
    [anon_sym_bitcast] = ACTIONS(87),
    [anon_sym_br] = ACTIONS(87),
    [anon_sym_catchpad] = ACTIONS(87),
    [anon_sym_catchswitch] = ACTIONS(87),
    [anon_sym_catchret] = ACTIONS(87),
    [anon_sym_call] = ACTIONS(87),
    [anon_sym_callbr] = ACTIONS(87),
    [anon_sym_cleanuppad] = ACTIONS(87),
    [anon_sym_cleanupret] = ACTIONS(87),
    [anon_sym_cmpxchg] = ACTIONS(87),
    [anon_sym_eq] = ACTIONS(87),
    [anon_sym_exact] = ACTIONS(87),
    [anon_sym_extractelement] = ACTIONS(87),
    [anon_sym_extractvalue] = ACTIONS(87),
    [anon_sym_fadd] = ACTIONS(87),
    [anon_sym_fast] = ACTIONS(87),
    [anon_sym_fcmp] = ACTIONS(87),
    [anon_sym_fdiv] = ACTIONS(87),
    [anon_sym_fence] = ACTIONS(87),
    [anon_sym_fmul] = ACTIONS(87),
    [anon_sym_fneg] = ACTIONS(87),
    [anon_sym_fpext] = ACTIONS(87),
    [anon_sym_fptosi] = ACTIONS(87),
    [anon_sym_fptoui] = ACTIONS(87),
    [anon_sym_fptrunc] = ACTIONS(87),
    [anon_sym_free] = ACTIONS(87),
    [anon_sym_freeze] = ACTIONS(87),
    [anon_sym_frem] = ACTIONS(87),
    [anon_sym_fsub] = ACTIONS(87),
    [anon_sym_getelementptr] = ACTIONS(87),
    [anon_sym_icmp] = ACTIONS(87),
    [anon_sym_inbounds] = ACTIONS(87),
    [anon_sym_indirectbr] = ACTIONS(87),
    [anon_sym_insertelement] = ACTIONS(87),
    [anon_sym_insertvalue] = ACTIONS(87),
    [anon_sym_inttoptr] = ACTIONS(87),
    [anon_sym_invoke] = ACTIONS(87),
    [anon_sym_landingpad] = ACTIONS(87),
    [anon_sym_load] = ACTIONS(87),
    [anon_sym_lshr] = ACTIONS(87),
    [anon_sym_malloc] = ACTIONS(87),
    [anon_sym_max] = ACTIONS(87),
    [anon_sym_min] = ACTIONS(87),
    [anon_sym_mul] = ACTIONS(87),
    [anon_sym_nand] = ACTIONS(87),
    [anon_sym_ne] = ACTIONS(87),
    [anon_sym_ninf] = ACTIONS(87),
    [anon_sym_nnan] = ACTIONS(87),
    [anon_sym_nsw] = ACTIONS(87),
    [anon_sym_nsz] = ACTIONS(87),
    [anon_sym_nuw] = ACTIONS(87),
    [anon_sym_oeq] = ACTIONS(87),
    [anon_sym_oge] = ACTIONS(87),
    [anon_sym_ogt] = ACTIONS(87),
    [anon_sym_ole] = ACTIONS(87),
    [anon_sym_olt] = ACTIONS(87),
    [anon_sym_one] = ACTIONS(87),
    [anon_sym_or] = ACTIONS(87),
    [anon_sym_ord] = ACTIONS(87),
    [anon_sym_phi] = ACTIONS(87),
    [anon_sym_ptrtoint] = ACTIONS(87),
    [anon_sym_resume] = ACTIONS(87),
    [anon_sym_ret] = ACTIONS(87),
    [anon_sym_sdiv] = ACTIONS(87),
    [anon_sym_select] = ACTIONS(87),
    [anon_sym_sext] = ACTIONS(87),
    [anon_sym_sge] = ACTIONS(87),
    [anon_sym_sgt] = ACTIONS(87),
    [anon_sym_shl] = ACTIONS(87),
    [anon_sym_shufflevector] = ACTIONS(87),
    [anon_sym_sitofp] = ACTIONS(87),
    [anon_sym_sle] = ACTIONS(87),
    [anon_sym_slt] = ACTIONS(87),
    [anon_sym_srem] = ACTIONS(87),
    [anon_sym_store] = ACTIONS(87),
    [anon_sym_sub] = ACTIONS(87),
    [anon_sym_switch] = ACTIONS(87),
    [anon_sym_trunc] = ACTIONS(87),
    [anon_sym_udiv] = ACTIONS(87),
    [anon_sym_ueq] = ACTIONS(87),
    [anon_sym_uge] = ACTIONS(87),
    [anon_sym_ugt] = ACTIONS(87),
    [anon_sym_uitofp] = ACTIONS(87),
    [anon_sym_ule] = ACTIONS(87),
    [anon_sym_ult] = ACTIONS(87),
    [anon_sym_umax] = ACTIONS(87),
    [anon_sym_umin] = ACTIONS(87),
    [anon_sym_une] = ACTIONS(87),
    [anon_sym_uno] = ACTIONS(87),
    [anon_sym_unreachable] = ACTIONS(87),
    [anon_sym_unwind] = ACTIONS(87),
    [anon_sym_urem] = ACTIONS(87),
    [anon_sym_va_arg] = ACTIONS(87),
    [anon_sym_xchg] = ACTIONS(87),
    [anon_sym_xor] = ACTIONS(87),
    [anon_sym_zext] = ACTIONS(87),
    [anon_sym_acq_rel] = ACTIONS(87),
    [anon_sym_acquire] = ACTIONS(87),
    [anon_sym_addrspace] = ACTIONS(87),
    [anon_sym_alias] = ACTIONS(87),
    [anon_sym_align] = ACTIONS(87),
    [anon_sym_alignstack] = ACTIONS(87),
    [anon_sym_allocsize] = ACTIONS(87),
    [anon_sym_alwaysinline] = ACTIONS(87),
    [anon_sym_appending] = ACTIONS(87),
    [anon_sym_argmemonly] = ACTIONS(87),
    [anon_sym_arm_aapcs_vfpcc] = ACTIONS(87),
    [anon_sym_arm_aapcscc] = ACTIONS(87),
    [anon_sym_arm_apcscc] = ACTIONS(87),
    [anon_sym_asm] = ACTIONS(87),
    [anon_sym_atomic] = ACTIONS(87),
    [anon_sym_available_externally] = ACTIONS(87),
    [anon_sym_blockaddress] = ACTIONS(87),
    [anon_sym_builtin] = ACTIONS(87),
    [anon_sym_byref] = ACTIONS(87),
    [anon_sym_byval] = ACTIONS(87),
    [anon_sym_c] = ACTIONS(87),
    [anon_sym_caller] = ACTIONS(87),
    [anon_sym_catch] = ACTIONS(87),
    [anon_sym_cc] = ACTIONS(87),
    [anon_sym_ccc] = ACTIONS(87),
    [anon_sym_cleanup] = ACTIONS(87),
    [anon_sym_cold] = ACTIONS(87),
    [anon_sym_coldcc] = ACTIONS(87),
    [anon_sym_comdat] = ACTIONS(87),
    [anon_sym_common] = ACTIONS(87),
    [anon_sym_constant] = ACTIONS(87),
    [anon_sym_convergent] = ACTIONS(87),
    [anon_sym_datalayout] = ACTIONS(87),
    [anon_sym_declare] = ACTIONS(87),
    [anon_sym_default] = ACTIONS(87),
    [anon_sym_define] = ACTIONS(87),
    [anon_sym_deplibs] = ACTIONS(87),
    [anon_sym_dereferenceable] = ACTIONS(87),
    [anon_sym_dereferenceable_or_null] = ACTIONS(87),
    [anon_sym_distinct] = ACTIONS(87),
    [anon_sym_dllexport] = ACTIONS(87),
    [anon_sym_dllimport] = ACTIONS(87),
    [anon_sym_dso_local] = ACTIONS(87),
    [anon_sym_dso_preemptable] = ACTIONS(87),
    [anon_sym_except] = ACTIONS(87),
    [anon_sym_extern_weak] = ACTIONS(87),
    [anon_sym_external] = ACTIONS(87),
    [anon_sym_externally_initialized] = ACTIONS(87),
    [anon_sym_fastcc] = ACTIONS(87),
    [anon_sym_filter] = ACTIONS(87),
    [anon_sym_from] = ACTIONS(87),
    [anon_sym_gc] = ACTIONS(87),
    [anon_sym_global] = ACTIONS(87),
    [anon_sym_hhvm_ccc] = ACTIONS(87),
    [anon_sym_hhvmcc] = ACTIONS(87),
    [anon_sym_hidden] = ACTIONS(87),
    [anon_sym_hot] = ACTIONS(87),
    [anon_sym_immarg] = ACTIONS(87),
    [anon_sym_inaccessiblemem_or_argmemonly] = ACTIONS(87),
    [anon_sym_inaccessiblememonly] = ACTIONS(87),
    [anon_sym_inalloca] = ACTIONS(87),
    [anon_sym_initialexec] = ACTIONS(87),
    [anon_sym_inlinehint] = ACTIONS(87),
    [anon_sym_inreg] = ACTIONS(87),
    [anon_sym_intel_ocl_bicc] = ACTIONS(87),
    [anon_sym_inteldialect] = ACTIONS(87),
    [anon_sym_internal] = ACTIONS(87),
    [anon_sym_jumptable] = ACTIONS(87),
    [anon_sym_linkonce] = ACTIONS(87),
    [anon_sym_linkonce_odr] = ACTIONS(87),
    [anon_sym_local_unnamed_addr] = ACTIONS(87),
    [anon_sym_localdynamic] = ACTIONS(87),
    [anon_sym_localexec] = ACTIONS(87),
    [anon_sym_minsize] = ACTIONS(87),
    [anon_sym_module] = ACTIONS(87),
    [anon_sym_monotonic] = ACTIONS(87),
    [anon_sym_msp430_intrcc] = ACTIONS(87),
    [anon_sym_mustprogress] = ACTIONS(87),
    [anon_sym_musttail] = ACTIONS(87),
    [anon_sym_naked] = ACTIONS(87),
    [anon_sym_nest] = ACTIONS(87),
    [anon_sym_noalias] = ACTIONS(87),
    [anon_sym_nobuiltin] = ACTIONS(87),
    [anon_sym_nocallback] = ACTIONS(87),
    [anon_sym_nocapture] = ACTIONS(87),
    [anon_sym_nocf_check] = ACTIONS(87),
    [anon_sym_noduplicate] = ACTIONS(87),
    [anon_sym_nofree] = ACTIONS(87),
    [anon_sym_noimplicitfloat] = ACTIONS(87),
    [anon_sym_noinline] = ACTIONS(87),
    [anon_sym_nomerge] = ACTIONS(87),
    [anon_sym_nonlazybind] = ACTIONS(87),
    [anon_sym_nonnull] = ACTIONS(87),
    [anon_sym_noprofile] = ACTIONS(87),
    [anon_sym_norecurse] = ACTIONS(87),
    [anon_sym_noredzone] = ACTIONS(87),
    [anon_sym_noreturn] = ACTIONS(87),
    [anon_sym_nosync] = ACTIONS(87),
    [anon_sym_noundef] = ACTIONS(87),
    [anon_sym_nounwind] = ACTIONS(87),
    [anon_sym_nosanitize_coverage] = ACTIONS(87),
    [anon_sym_null_pointer_is_valid] = ACTIONS(87),
    [anon_sym_optforfuzzing] = ACTIONS(87),
    [anon_sym_optnone] = ACTIONS(87),
    [anon_sym_optsize] = ACTIONS(87),
    [anon_sym_personality] = ACTIONS(87),
    [anon_sym_preallocated] = ACTIONS(87),
    [anon_sym_private] = ACTIONS(87),
    [anon_sym_protected] = ACTIONS(87),
    [anon_sym_ptx_device] = ACTIONS(87),
    [anon_sym_ptx_kernel] = ACTIONS(87),
    [anon_sym_readnone] = ACTIONS(87),
    [anon_sym_readonly] = ACTIONS(87),
    [anon_sym_release] = ACTIONS(87),
    [anon_sym_returned] = ACTIONS(87),
    [anon_sym_returns_twice] = ACTIONS(87),
    [anon_sym_safestack] = ACTIONS(87),
    [anon_sym_sanitize_address] = ACTIONS(87),
    [anon_sym_sanitize_hwaddress] = ACTIONS(87),
    [anon_sym_sanitize_memory] = ACTIONS(87),
    [anon_sym_sanitize_memtag] = ACTIONS(87),
    [anon_sym_sanitize_thread] = ACTIONS(87),
    [anon_sym_section] = ACTIONS(87),
    [anon_sym_seq_cst] = ACTIONS(87),
    [anon_sym_shadowcallstack] = ACTIONS(87),
    [anon_sym_sideeffect] = ACTIONS(87),
    [anon_sym_signext] = ACTIONS(87),
    [anon_sym_source_filename] = ACTIONS(87),
    [anon_sym_speculatable] = ACTIONS(87),
    [anon_sym_speculative_load_hardening] = ACTIONS(87),
    [anon_sym_spir_func] = ACTIONS(87),
    [anon_sym_spir_kernel] = ACTIONS(87),
    [anon_sym_sret] = ACTIONS(87),
    [anon_sym_ssp] = ACTIONS(87),
    [anon_sym_sspreq] = ACTIONS(87),
    [anon_sym_sspstrong] = ACTIONS(87),
    [anon_sym_strictfp] = ACTIONS(87),
    [anon_sym_swiftcc] = ACTIONS(87),
    [anon_sym_swifterror] = ACTIONS(87),
    [anon_sym_swifttailcc] = ACTIONS(87),
    [anon_sym_swiftself] = ACTIONS(87),
    [anon_sym_syncscope] = ACTIONS(87),
    [anon_sym_tail] = ACTIONS(87),
    [anon_sym_tailcc] = ACTIONS(87),
    [anon_sym_target] = ACTIONS(87),
    [anon_sym_thread_local] = ACTIONS(87),
    [anon_sym_to] = ACTIONS(87),
    [anon_sym_triple] = ACTIONS(87),
    [anon_sym_unnamed_addr] = ACTIONS(87),
    [anon_sym_unordered] = ACTIONS(87),
    [anon_sym_uselistorder] = ACTIONS(87),
    [anon_sym_uselistorder_bb] = ACTIONS(87),
    [anon_sym_uwtable] = ACTIONS(87),
    [anon_sym_volatile] = ACTIONS(87),
    [anon_sym_weak] = ACTIONS(87),
    [anon_sym_weak_odr] = ACTIONS(87),
    [anon_sym_willreturn] = ACTIONS(87),
    [anon_sym_win64cc] = ACTIONS(87),
    [anon_sym_within] = ACTIONS(87),
    [anon_sym_writeonly] = ACTIONS(87),
    [anon_sym_x] = ACTIONS(87),
    [anon_sym_x86_64_sysvcc] = ACTIONS(87),
    [anon_sym_x86_fastcallcc] = ACTIONS(87),
    [anon_sym_x86_stdcallcc] = ACTIONS(87),
    [anon_sym_x86_thiscallcc] = ACTIONS(87),
    [anon_sym_zeroext] = ACTIONS(87),
    [sym_number] = ACTIONS(87),
    [aux_sym_float_token1] = ACTIONS(85),
    [aux_sym_float_token2] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(87),
    [anon_sym_zeroinitializer] = ACTIONS(87),
    [anon_sym_undef] = ACTIONS(87),
    [anon_sym_null] = ACTIONS(87),
    [anon_sym_none] = ACTIONS(87),
    [anon_sym_poison] = ACTIONS(87),
    [anon_sym_vscale] = ACTIONS(87),
    [sym_comment] = ACTIONS(85),
    [sym_string] = ACTIONS(85),
    [sym_label] = ACTIONS(85),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [aux_sym_identifier_token2] = ACTIONS(85),
    [aux_sym_identifier_token3] = ACTIONS(87),
    [aux_sym_identifier_token4] = ACTIONS(87),
    [aux_sym_identifier_token5] = ACTIONS(87),
    [aux_sym_identifier_token6] = ACTIONS(87),
    [aux_sym_identifier_token7] = ACTIONS(87),
    [aux_sym_identifier_token8] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(87),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(85),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_void] = ACTIONS(91),
    [anon_sym_half] = ACTIONS(91),
    [anon_sym_bfloat] = ACTIONS(91),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_x86_fp80] = ACTIONS(91),
    [anon_sym_fp128] = ACTIONS(91),
    [anon_sym_pcc_fp128] = ACTIONS(91),
    [anon_sym_label] = ACTIONS(91),
    [anon_sym_metadata] = ACTIONS(91),
    [anon_sym_x86_mmx] = ACTIONS(91),
    [anon_sym_x86_amx] = ACTIONS(91),
    [aux_sym_type_token1] = ACTIONS(91),
    [anon_sym_add] = ACTIONS(91),
    [anon_sym_addrspacecast] = ACTIONS(91),
    [anon_sym_alloca] = ACTIONS(91),
    [anon_sym_and] = ACTIONS(91),
    [anon_sym_arcp] = ACTIONS(91),
    [anon_sym_ashr] = ACTIONS(91),
    [anon_sym_atomicrmw] = ACTIONS(91),
    [anon_sym_bitcast] = ACTIONS(91),
    [anon_sym_br] = ACTIONS(91),
    [anon_sym_catchpad] = ACTIONS(91),
    [anon_sym_catchswitch] = ACTIONS(91),
    [anon_sym_catchret] = ACTIONS(91),
    [anon_sym_call] = ACTIONS(91),
    [anon_sym_callbr] = ACTIONS(91),
    [anon_sym_cleanuppad] = ACTIONS(91),
    [anon_sym_cleanupret] = ACTIONS(91),
    [anon_sym_cmpxchg] = ACTIONS(91),
    [anon_sym_eq] = ACTIONS(91),
    [anon_sym_exact] = ACTIONS(91),
    [anon_sym_extractelement] = ACTIONS(91),
    [anon_sym_extractvalue] = ACTIONS(91),
    [anon_sym_fadd] = ACTIONS(91),
    [anon_sym_fast] = ACTIONS(91),
    [anon_sym_fcmp] = ACTIONS(91),
    [anon_sym_fdiv] = ACTIONS(91),
    [anon_sym_fence] = ACTIONS(91),
    [anon_sym_fmul] = ACTIONS(91),
    [anon_sym_fneg] = ACTIONS(91),
    [anon_sym_fpext] = ACTIONS(91),
    [anon_sym_fptosi] = ACTIONS(91),
    [anon_sym_fptoui] = ACTIONS(91),
    [anon_sym_fptrunc] = ACTIONS(91),
    [anon_sym_free] = ACTIONS(91),
    [anon_sym_freeze] = ACTIONS(91),
    [anon_sym_frem] = ACTIONS(91),
    [anon_sym_fsub] = ACTIONS(91),
    [anon_sym_getelementptr] = ACTIONS(91),
    [anon_sym_icmp] = ACTIONS(91),
    [anon_sym_inbounds] = ACTIONS(91),
    [anon_sym_indirectbr] = ACTIONS(91),
    [anon_sym_insertelement] = ACTIONS(91),
    [anon_sym_insertvalue] = ACTIONS(91),
    [anon_sym_inttoptr] = ACTIONS(91),
    [anon_sym_invoke] = ACTIONS(91),
    [anon_sym_landingpad] = ACTIONS(91),
    [anon_sym_load] = ACTIONS(91),
    [anon_sym_lshr] = ACTIONS(91),
    [anon_sym_malloc] = ACTIONS(91),
    [anon_sym_max] = ACTIONS(91),
    [anon_sym_min] = ACTIONS(91),
    [anon_sym_mul] = ACTIONS(91),
    [anon_sym_nand] = ACTIONS(91),
    [anon_sym_ne] = ACTIONS(91),
    [anon_sym_ninf] = ACTIONS(91),
    [anon_sym_nnan] = ACTIONS(91),
    [anon_sym_nsw] = ACTIONS(91),
    [anon_sym_nsz] = ACTIONS(91),
    [anon_sym_nuw] = ACTIONS(91),
    [anon_sym_oeq] = ACTIONS(91),
    [anon_sym_oge] = ACTIONS(91),
    [anon_sym_ogt] = ACTIONS(91),
    [anon_sym_ole] = ACTIONS(91),
    [anon_sym_olt] = ACTIONS(91),
    [anon_sym_one] = ACTIONS(91),
    [anon_sym_or] = ACTIONS(91),
    [anon_sym_ord] = ACTIONS(91),
    [anon_sym_phi] = ACTIONS(91),
    [anon_sym_ptrtoint] = ACTIONS(91),
    [anon_sym_resume] = ACTIONS(91),
    [anon_sym_ret] = ACTIONS(91),
    [anon_sym_sdiv] = ACTIONS(91),
    [anon_sym_select] = ACTIONS(91),
    [anon_sym_sext] = ACTIONS(91),
    [anon_sym_sge] = ACTIONS(91),
    [anon_sym_sgt] = ACTIONS(91),
    [anon_sym_shl] = ACTIONS(91),
    [anon_sym_shufflevector] = ACTIONS(91),
    [anon_sym_sitofp] = ACTIONS(91),
    [anon_sym_sle] = ACTIONS(91),
    [anon_sym_slt] = ACTIONS(91),
    [anon_sym_srem] = ACTIONS(91),
    [anon_sym_store] = ACTIONS(91),
    [anon_sym_sub] = ACTIONS(91),
    [anon_sym_switch] = ACTIONS(91),
    [anon_sym_trunc] = ACTIONS(91),
    [anon_sym_udiv] = ACTIONS(91),
    [anon_sym_ueq] = ACTIONS(91),
    [anon_sym_uge] = ACTIONS(91),
    [anon_sym_ugt] = ACTIONS(91),
    [anon_sym_uitofp] = ACTIONS(91),
    [anon_sym_ule] = ACTIONS(91),
    [anon_sym_ult] = ACTIONS(91),
    [anon_sym_umax] = ACTIONS(91),
    [anon_sym_umin] = ACTIONS(91),
    [anon_sym_une] = ACTIONS(91),
    [anon_sym_uno] = ACTIONS(91),
    [anon_sym_unreachable] = ACTIONS(91),
    [anon_sym_unwind] = ACTIONS(91),
    [anon_sym_urem] = ACTIONS(91),
    [anon_sym_va_arg] = ACTIONS(91),
    [anon_sym_xchg] = ACTIONS(91),
    [anon_sym_xor] = ACTIONS(91),
    [anon_sym_zext] = ACTIONS(91),
    [anon_sym_acq_rel] = ACTIONS(91),
    [anon_sym_acquire] = ACTIONS(91),
    [anon_sym_addrspace] = ACTIONS(91),
    [anon_sym_alias] = ACTIONS(91),
    [anon_sym_align] = ACTIONS(91),
    [anon_sym_alignstack] = ACTIONS(91),
    [anon_sym_allocsize] = ACTIONS(91),
    [anon_sym_alwaysinline] = ACTIONS(91),
    [anon_sym_appending] = ACTIONS(91),
    [anon_sym_argmemonly] = ACTIONS(91),
    [anon_sym_arm_aapcs_vfpcc] = ACTIONS(91),
    [anon_sym_arm_aapcscc] = ACTIONS(91),
    [anon_sym_arm_apcscc] = ACTIONS(91),
    [anon_sym_asm] = ACTIONS(91),
    [anon_sym_atomic] = ACTIONS(91),
    [anon_sym_available_externally] = ACTIONS(91),
    [anon_sym_blockaddress] = ACTIONS(91),
    [anon_sym_builtin] = ACTIONS(91),
    [anon_sym_byref] = ACTIONS(91),
    [anon_sym_byval] = ACTIONS(91),
    [anon_sym_c] = ACTIONS(91),
    [anon_sym_caller] = ACTIONS(91),
    [anon_sym_catch] = ACTIONS(91),
    [anon_sym_cc] = ACTIONS(91),
    [anon_sym_ccc] = ACTIONS(91),
    [anon_sym_cleanup] = ACTIONS(91),
    [anon_sym_cold] = ACTIONS(91),
    [anon_sym_coldcc] = ACTIONS(91),
    [anon_sym_comdat] = ACTIONS(91),
    [anon_sym_common] = ACTIONS(91),
    [anon_sym_constant] = ACTIONS(91),
    [anon_sym_convergent] = ACTIONS(91),
    [anon_sym_datalayout] = ACTIONS(91),
    [anon_sym_declare] = ACTIONS(91),
    [anon_sym_default] = ACTIONS(91),
    [anon_sym_define] = ACTIONS(91),
    [anon_sym_deplibs] = ACTIONS(91),
    [anon_sym_dereferenceable] = ACTIONS(91),
    [anon_sym_dereferenceable_or_null] = ACTIONS(91),
    [anon_sym_distinct] = ACTIONS(91),
    [anon_sym_dllexport] = ACTIONS(91),
    [anon_sym_dllimport] = ACTIONS(91),
    [anon_sym_dso_local] = ACTIONS(91),
    [anon_sym_dso_preemptable] = ACTIONS(91),
    [anon_sym_except] = ACTIONS(91),
    [anon_sym_extern_weak] = ACTIONS(91),
    [anon_sym_external] = ACTIONS(91),
    [anon_sym_externally_initialized] = ACTIONS(91),
    [anon_sym_fastcc] = ACTIONS(91),
    [anon_sym_filter] = ACTIONS(91),
    [anon_sym_from] = ACTIONS(91),
    [anon_sym_gc] = ACTIONS(91),
    [anon_sym_global] = ACTIONS(91),
    [anon_sym_hhvm_ccc] = ACTIONS(91),
    [anon_sym_hhvmcc] = ACTIONS(91),
    [anon_sym_hidden] = ACTIONS(91),
    [anon_sym_hot] = ACTIONS(91),
    [anon_sym_immarg] = ACTIONS(91),
    [anon_sym_inaccessiblemem_or_argmemonly] = ACTIONS(91),
    [anon_sym_inaccessiblememonly] = ACTIONS(91),
    [anon_sym_inalloca] = ACTIONS(91),
    [anon_sym_initialexec] = ACTIONS(91),
    [anon_sym_inlinehint] = ACTIONS(91),
    [anon_sym_inreg] = ACTIONS(91),
    [anon_sym_intel_ocl_bicc] = ACTIONS(91),
    [anon_sym_inteldialect] = ACTIONS(91),
    [anon_sym_internal] = ACTIONS(91),
    [anon_sym_jumptable] = ACTIONS(91),
    [anon_sym_linkonce] = ACTIONS(91),
    [anon_sym_linkonce_odr] = ACTIONS(91),
    [anon_sym_local_unnamed_addr] = ACTIONS(91),
    [anon_sym_localdynamic] = ACTIONS(91),
    [anon_sym_localexec] = ACTIONS(91),
    [anon_sym_minsize] = ACTIONS(91),
    [anon_sym_module] = ACTIONS(91),
    [anon_sym_monotonic] = ACTIONS(91),
    [anon_sym_msp430_intrcc] = ACTIONS(91),
    [anon_sym_mustprogress] = ACTIONS(91),
    [anon_sym_musttail] = ACTIONS(91),
    [anon_sym_naked] = ACTIONS(91),
    [anon_sym_nest] = ACTIONS(91),
    [anon_sym_noalias] = ACTIONS(91),
    [anon_sym_nobuiltin] = ACTIONS(91),
    [anon_sym_nocallback] = ACTIONS(91),
    [anon_sym_nocapture] = ACTIONS(91),
    [anon_sym_nocf_check] = ACTIONS(91),
    [anon_sym_noduplicate] = ACTIONS(91),
    [anon_sym_nofree] = ACTIONS(91),
    [anon_sym_noimplicitfloat] = ACTIONS(91),
    [anon_sym_noinline] = ACTIONS(91),
    [anon_sym_nomerge] = ACTIONS(91),
    [anon_sym_nonlazybind] = ACTIONS(91),
    [anon_sym_nonnull] = ACTIONS(91),
    [anon_sym_noprofile] = ACTIONS(91),
    [anon_sym_norecurse] = ACTIONS(91),
    [anon_sym_noredzone] = ACTIONS(91),
    [anon_sym_noreturn] = ACTIONS(91),
    [anon_sym_nosync] = ACTIONS(91),
    [anon_sym_noundef] = ACTIONS(91),
    [anon_sym_nounwind] = ACTIONS(91),
    [anon_sym_nosanitize_coverage] = ACTIONS(91),
    [anon_sym_null_pointer_is_valid] = ACTIONS(91),
    [anon_sym_optforfuzzing] = ACTIONS(91),
    [anon_sym_optnone] = ACTIONS(91),
    [anon_sym_optsize] = ACTIONS(91),
    [anon_sym_personality] = ACTIONS(91),
    [anon_sym_preallocated] = ACTIONS(91),
    [anon_sym_private] = ACTIONS(91),
    [anon_sym_protected] = ACTIONS(91),
    [anon_sym_ptx_device] = ACTIONS(91),
    [anon_sym_ptx_kernel] = ACTIONS(91),
    [anon_sym_readnone] = ACTIONS(91),
    [anon_sym_readonly] = ACTIONS(91),
    [anon_sym_release] = ACTIONS(91),
    [anon_sym_returned] = ACTIONS(91),
    [anon_sym_returns_twice] = ACTIONS(91),
    [anon_sym_safestack] = ACTIONS(91),
    [anon_sym_sanitize_address] = ACTIONS(91),
    [anon_sym_sanitize_hwaddress] = ACTIONS(91),
    [anon_sym_sanitize_memory] = ACTIONS(91),
    [anon_sym_sanitize_memtag] = ACTIONS(91),
    [anon_sym_sanitize_thread] = ACTIONS(91),
    [anon_sym_section] = ACTIONS(91),
    [anon_sym_seq_cst] = ACTIONS(91),
    [anon_sym_shadowcallstack] = ACTIONS(91),
    [anon_sym_sideeffect] = ACTIONS(91),
    [anon_sym_signext] = ACTIONS(91),
    [anon_sym_source_filename] = ACTIONS(91),
    [anon_sym_speculatable] = ACTIONS(91),
    [anon_sym_speculative_load_hardening] = ACTIONS(91),
    [anon_sym_spir_func] = ACTIONS(91),
    [anon_sym_spir_kernel] = ACTIONS(91),
    [anon_sym_sret] = ACTIONS(91),
    [anon_sym_ssp] = ACTIONS(91),
    [anon_sym_sspreq] = ACTIONS(91),
    [anon_sym_sspstrong] = ACTIONS(91),
    [anon_sym_strictfp] = ACTIONS(91),
    [anon_sym_swiftcc] = ACTIONS(91),
    [anon_sym_swifterror] = ACTIONS(91),
    [anon_sym_swifttailcc] = ACTIONS(91),
    [anon_sym_swiftself] = ACTIONS(91),
    [anon_sym_syncscope] = ACTIONS(91),
    [anon_sym_tail] = ACTIONS(91),
    [anon_sym_tailcc] = ACTIONS(91),
    [anon_sym_target] = ACTIONS(91),
    [anon_sym_thread_local] = ACTIONS(91),
    [anon_sym_to] = ACTIONS(91),
    [anon_sym_triple] = ACTIONS(91),
    [anon_sym_unnamed_addr] = ACTIONS(91),
    [anon_sym_unordered] = ACTIONS(91),
    [anon_sym_uselistorder] = ACTIONS(91),
    [anon_sym_uselistorder_bb] = ACTIONS(91),
    [anon_sym_uwtable] = ACTIONS(91),
    [anon_sym_volatile] = ACTIONS(91),
    [anon_sym_weak] = ACTIONS(91),
    [anon_sym_weak_odr] = ACTIONS(91),
    [anon_sym_willreturn] = ACTIONS(91),
    [anon_sym_win64cc] = ACTIONS(91),
    [anon_sym_within] = ACTIONS(91),
    [anon_sym_writeonly] = ACTIONS(91),
    [anon_sym_x] = ACTIONS(91),
    [anon_sym_x86_64_sysvcc] = ACTIONS(91),
    [anon_sym_x86_fastcallcc] = ACTIONS(91),
    [anon_sym_x86_stdcallcc] = ACTIONS(91),
    [anon_sym_x86_thiscallcc] = ACTIONS(91),
    [anon_sym_zeroext] = ACTIONS(91),
    [sym_number] = ACTIONS(91),
    [aux_sym_float_token1] = ACTIONS(89),
    [aux_sym_float_token2] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [anon_sym_zeroinitializer] = ACTIONS(91),
    [anon_sym_undef] = ACTIONS(91),
    [anon_sym_null] = ACTIONS(91),
    [anon_sym_none] = ACTIONS(91),
    [anon_sym_poison] = ACTIONS(91),
    [anon_sym_vscale] = ACTIONS(91),
    [sym_comment] = ACTIONS(89),
    [sym_string] = ACTIONS(89),
    [sym_label] = ACTIONS(89),
    [aux_sym_identifier_token1] = ACTIONS(89),
    [aux_sym_identifier_token2] = ACTIONS(89),
    [aux_sym_identifier_token3] = ACTIONS(91),
    [aux_sym_identifier_token4] = ACTIONS(91),
    [aux_sym_identifier_token5] = ACTIONS(91),
    [aux_sym_identifier_token6] = ACTIONS(91),
    [aux_sym_identifier_token7] = ACTIONS(91),
    [aux_sym_identifier_token8] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(91),
    [anon_sym_EQ] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(89),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_void] = ACTIONS(95),
    [anon_sym_half] = ACTIONS(95),
    [anon_sym_bfloat] = ACTIONS(95),
    [anon_sym_float] = ACTIONS(95),
    [anon_sym_double] = ACTIONS(95),
    [anon_sym_x86_fp80] = ACTIONS(95),
    [anon_sym_fp128] = ACTIONS(95),
    [anon_sym_pcc_fp128] = ACTIONS(95),
    [anon_sym_label] = ACTIONS(95),
    [anon_sym_metadata] = ACTIONS(95),
    [anon_sym_x86_mmx] = ACTIONS(95),
    [anon_sym_x86_amx] = ACTIONS(95),
    [aux_sym_type_token1] = ACTIONS(95),
    [anon_sym_add] = ACTIONS(95),
    [anon_sym_addrspacecast] = ACTIONS(95),
    [anon_sym_alloca] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(95),
    [anon_sym_arcp] = ACTIONS(95),
    [anon_sym_ashr] = ACTIONS(95),
    [anon_sym_atomicrmw] = ACTIONS(95),
    [anon_sym_bitcast] = ACTIONS(95),
    [anon_sym_br] = ACTIONS(95),
    [anon_sym_catchpad] = ACTIONS(95),
    [anon_sym_catchswitch] = ACTIONS(95),
    [anon_sym_catchret] = ACTIONS(95),
    [anon_sym_call] = ACTIONS(95),
    [anon_sym_callbr] = ACTIONS(95),
    [anon_sym_cleanuppad] = ACTIONS(95),
    [anon_sym_cleanupret] = ACTIONS(95),
    [anon_sym_cmpxchg] = ACTIONS(95),
    [anon_sym_eq] = ACTIONS(95),
    [anon_sym_exact] = ACTIONS(95),
    [anon_sym_extractelement] = ACTIONS(95),
    [anon_sym_extractvalue] = ACTIONS(95),
    [anon_sym_fadd] = ACTIONS(95),
    [anon_sym_fast] = ACTIONS(95),
    [anon_sym_fcmp] = ACTIONS(95),
    [anon_sym_fdiv] = ACTIONS(95),
    [anon_sym_fence] = ACTIONS(95),
    [anon_sym_fmul] = ACTIONS(95),
    [anon_sym_fneg] = ACTIONS(95),
    [anon_sym_fpext] = ACTIONS(95),
    [anon_sym_fptosi] = ACTIONS(95),
    [anon_sym_fptoui] = ACTIONS(95),
    [anon_sym_fptrunc] = ACTIONS(95),
    [anon_sym_free] = ACTIONS(95),
    [anon_sym_freeze] = ACTIONS(95),
    [anon_sym_frem] = ACTIONS(95),
    [anon_sym_fsub] = ACTIONS(95),
    [anon_sym_getelementptr] = ACTIONS(95),
    [anon_sym_icmp] = ACTIONS(95),
    [anon_sym_inbounds] = ACTIONS(95),
    [anon_sym_indirectbr] = ACTIONS(95),
    [anon_sym_insertelement] = ACTIONS(95),
    [anon_sym_insertvalue] = ACTIONS(95),
    [anon_sym_inttoptr] = ACTIONS(95),
    [anon_sym_invoke] = ACTIONS(95),
    [anon_sym_landingpad] = ACTIONS(95),
    [anon_sym_load] = ACTIONS(95),
    [anon_sym_lshr] = ACTIONS(95),
    [anon_sym_malloc] = ACTIONS(95),
    [anon_sym_max] = ACTIONS(95),
    [anon_sym_min] = ACTIONS(95),
    [anon_sym_mul] = ACTIONS(95),
    [anon_sym_nand] = ACTIONS(95),
    [anon_sym_ne] = ACTIONS(95),
    [anon_sym_ninf] = ACTIONS(95),
    [anon_sym_nnan] = ACTIONS(95),
    [anon_sym_nsw] = ACTIONS(95),
    [anon_sym_nsz] = ACTIONS(95),
    [anon_sym_nuw] = ACTIONS(95),
    [anon_sym_oeq] = ACTIONS(95),
    [anon_sym_oge] = ACTIONS(95),
    [anon_sym_ogt] = ACTIONS(95),
    [anon_sym_ole] = ACTIONS(95),
    [anon_sym_olt] = ACTIONS(95),
    [anon_sym_one] = ACTIONS(95),
    [anon_sym_or] = ACTIONS(95),
    [anon_sym_ord] = ACTIONS(95),
    [anon_sym_phi] = ACTIONS(95),
    [anon_sym_ptrtoint] = ACTIONS(95),
    [anon_sym_resume] = ACTIONS(95),
    [anon_sym_ret] = ACTIONS(95),
    [anon_sym_sdiv] = ACTIONS(95),
    [anon_sym_select] = ACTIONS(95),
    [anon_sym_sext] = ACTIONS(95),
    [anon_sym_sge] = ACTIONS(95),
    [anon_sym_sgt] = ACTIONS(95),
    [anon_sym_shl] = ACTIONS(95),
    [anon_sym_shufflevector] = ACTIONS(95),
    [anon_sym_sitofp] = ACTIONS(95),
    [anon_sym_sle] = ACTIONS(95),
    [anon_sym_slt] = ACTIONS(95),
    [anon_sym_srem] = ACTIONS(95),
    [anon_sym_store] = ACTIONS(95),
    [anon_sym_sub] = ACTIONS(95),
    [anon_sym_switch] = ACTIONS(95),
    [anon_sym_trunc] = ACTIONS(95),
    [anon_sym_udiv] = ACTIONS(95),
    [anon_sym_ueq] = ACTIONS(95),
    [anon_sym_uge] = ACTIONS(95),
    [anon_sym_ugt] = ACTIONS(95),
    [anon_sym_uitofp] = ACTIONS(95),
    [anon_sym_ule] = ACTIONS(95),
    [anon_sym_ult] = ACTIONS(95),
    [anon_sym_umax] = ACTIONS(95),
    [anon_sym_umin] = ACTIONS(95),
    [anon_sym_une] = ACTIONS(95),
    [anon_sym_uno] = ACTIONS(95),
    [anon_sym_unreachable] = ACTIONS(95),
    [anon_sym_unwind] = ACTIONS(95),
    [anon_sym_urem] = ACTIONS(95),
    [anon_sym_va_arg] = ACTIONS(95),
    [anon_sym_xchg] = ACTIONS(95),
    [anon_sym_xor] = ACTIONS(95),
    [anon_sym_zext] = ACTIONS(95),
    [anon_sym_acq_rel] = ACTIONS(95),
    [anon_sym_acquire] = ACTIONS(95),
    [anon_sym_addrspace] = ACTIONS(95),
    [anon_sym_alias] = ACTIONS(95),
    [anon_sym_align] = ACTIONS(95),
    [anon_sym_alignstack] = ACTIONS(95),
    [anon_sym_allocsize] = ACTIONS(95),
    [anon_sym_alwaysinline] = ACTIONS(95),
    [anon_sym_appending] = ACTIONS(95),
    [anon_sym_argmemonly] = ACTIONS(95),
    [anon_sym_arm_aapcs_vfpcc] = ACTIONS(95),
    [anon_sym_arm_aapcscc] = ACTIONS(95),
    [anon_sym_arm_apcscc] = ACTIONS(95),
    [anon_sym_asm] = ACTIONS(95),
    [anon_sym_atomic] = ACTIONS(95),
    [anon_sym_available_externally] = ACTIONS(95),
    [anon_sym_blockaddress] = ACTIONS(95),
    [anon_sym_builtin] = ACTIONS(95),
    [anon_sym_byref] = ACTIONS(95),
    [anon_sym_byval] = ACTIONS(95),
    [anon_sym_c] = ACTIONS(95),
    [anon_sym_caller] = ACTIONS(95),
    [anon_sym_catch] = ACTIONS(95),
    [anon_sym_cc] = ACTIONS(95),
    [anon_sym_ccc] = ACTIONS(95),
    [anon_sym_cleanup] = ACTIONS(95),
    [anon_sym_cold] = ACTIONS(95),
    [anon_sym_coldcc] = ACTIONS(95),
    [anon_sym_comdat] = ACTIONS(95),
    [anon_sym_common] = ACTIONS(95),
    [anon_sym_constant] = ACTIONS(95),
    [anon_sym_convergent] = ACTIONS(95),
    [anon_sym_datalayout] = ACTIONS(95),
    [anon_sym_declare] = ACTIONS(95),
    [anon_sym_default] = ACTIONS(95),
    [anon_sym_define] = ACTIONS(95),
    [anon_sym_deplibs] = ACTIONS(95),
    [anon_sym_dereferenceable] = ACTIONS(95),
    [anon_sym_dereferenceable_or_null] = ACTIONS(95),
    [anon_sym_distinct] = ACTIONS(95),
    [anon_sym_dllexport] = ACTIONS(95),
    [anon_sym_dllimport] = ACTIONS(95),
    [anon_sym_dso_local] = ACTIONS(95),
    [anon_sym_dso_preemptable] = ACTIONS(95),
    [anon_sym_except] = ACTIONS(95),
    [anon_sym_extern_weak] = ACTIONS(95),
    [anon_sym_external] = ACTIONS(95),
    [anon_sym_externally_initialized] = ACTIONS(95),
    [anon_sym_fastcc] = ACTIONS(95),
    [anon_sym_filter] = ACTIONS(95),
    [anon_sym_from] = ACTIONS(95),
    [anon_sym_gc] = ACTIONS(95),
    [anon_sym_global] = ACTIONS(95),
    [anon_sym_hhvm_ccc] = ACTIONS(95),
    [anon_sym_hhvmcc] = ACTIONS(95),
    [anon_sym_hidden] = ACTIONS(95),
    [anon_sym_hot] = ACTIONS(95),
    [anon_sym_immarg] = ACTIONS(95),
    [anon_sym_inaccessiblemem_or_argmemonly] = ACTIONS(95),
    [anon_sym_inaccessiblememonly] = ACTIONS(95),
    [anon_sym_inalloca] = ACTIONS(95),
    [anon_sym_initialexec] = ACTIONS(95),
    [anon_sym_inlinehint] = ACTIONS(95),
    [anon_sym_inreg] = ACTIONS(95),
    [anon_sym_intel_ocl_bicc] = ACTIONS(95),
    [anon_sym_inteldialect] = ACTIONS(95),
    [anon_sym_internal] = ACTIONS(95),
    [anon_sym_jumptable] = ACTIONS(95),
    [anon_sym_linkonce] = ACTIONS(95),
    [anon_sym_linkonce_odr] = ACTIONS(95),
    [anon_sym_local_unnamed_addr] = ACTIONS(95),
    [anon_sym_localdynamic] = ACTIONS(95),
    [anon_sym_localexec] = ACTIONS(95),
    [anon_sym_minsize] = ACTIONS(95),
    [anon_sym_module] = ACTIONS(95),
    [anon_sym_monotonic] = ACTIONS(95),
    [anon_sym_msp430_intrcc] = ACTIONS(95),
    [anon_sym_mustprogress] = ACTIONS(95),
    [anon_sym_musttail] = ACTIONS(95),
    [anon_sym_naked] = ACTIONS(95),
    [anon_sym_nest] = ACTIONS(95),
    [anon_sym_noalias] = ACTIONS(95),
    [anon_sym_nobuiltin] = ACTIONS(95),
    [anon_sym_nocallback] = ACTIONS(95),
    [anon_sym_nocapture] = ACTIONS(95),
    [anon_sym_nocf_check] = ACTIONS(95),
    [anon_sym_noduplicate] = ACTIONS(95),
    [anon_sym_nofree] = ACTIONS(95),
    [anon_sym_noimplicitfloat] = ACTIONS(95),
    [anon_sym_noinline] = ACTIONS(95),
    [anon_sym_nomerge] = ACTIONS(95),
    [anon_sym_nonlazybind] = ACTIONS(95),
    [anon_sym_nonnull] = ACTIONS(95),
    [anon_sym_noprofile] = ACTIONS(95),
    [anon_sym_norecurse] = ACTIONS(95),
    [anon_sym_noredzone] = ACTIONS(95),
    [anon_sym_noreturn] = ACTIONS(95),
    [anon_sym_nosync] = ACTIONS(95),
    [anon_sym_noundef] = ACTIONS(95),
    [anon_sym_nounwind] = ACTIONS(95),
    [anon_sym_nosanitize_coverage] = ACTIONS(95),
    [anon_sym_null_pointer_is_valid] = ACTIONS(95),
    [anon_sym_optforfuzzing] = ACTIONS(95),
    [anon_sym_optnone] = ACTIONS(95),
    [anon_sym_optsize] = ACTIONS(95),
    [anon_sym_personality] = ACTIONS(95),
    [anon_sym_preallocated] = ACTIONS(95),
    [anon_sym_private] = ACTIONS(95),
    [anon_sym_protected] = ACTIONS(95),
    [anon_sym_ptx_device] = ACTIONS(95),
    [anon_sym_ptx_kernel] = ACTIONS(95),
    [anon_sym_readnone] = ACTIONS(95),
    [anon_sym_readonly] = ACTIONS(95),
    [anon_sym_release] = ACTIONS(95),
    [anon_sym_returned] = ACTIONS(95),
    [anon_sym_returns_twice] = ACTIONS(95),
    [anon_sym_safestack] = ACTIONS(95),
    [anon_sym_sanitize_address] = ACTIONS(95),
    [anon_sym_sanitize_hwaddress] = ACTIONS(95),
    [anon_sym_sanitize_memory] = ACTIONS(95),
    [anon_sym_sanitize_memtag] = ACTIONS(95),
    [anon_sym_sanitize_thread] = ACTIONS(95),
    [anon_sym_section] = ACTIONS(95),
    [anon_sym_seq_cst] = ACTIONS(95),
    [anon_sym_shadowcallstack] = ACTIONS(95),
    [anon_sym_sideeffect] = ACTIONS(95),
    [anon_sym_signext] = ACTIONS(95),
    [anon_sym_source_filename] = ACTIONS(95),
    [anon_sym_speculatable] = ACTIONS(95),
    [anon_sym_speculative_load_hardening] = ACTIONS(95),
    [anon_sym_spir_func] = ACTIONS(95),
    [anon_sym_spir_kernel] = ACTIONS(95),
    [anon_sym_sret] = ACTIONS(95),
    [anon_sym_ssp] = ACTIONS(95),
    [anon_sym_sspreq] = ACTIONS(95),
    [anon_sym_sspstrong] = ACTIONS(95),
    [anon_sym_strictfp] = ACTIONS(95),
    [anon_sym_swiftcc] = ACTIONS(95),
    [anon_sym_swifterror] = ACTIONS(95),
    [anon_sym_swifttailcc] = ACTIONS(95),
    [anon_sym_swiftself] = ACTIONS(95),
    [anon_sym_syncscope] = ACTIONS(95),
    [anon_sym_tail] = ACTIONS(95),
    [anon_sym_tailcc] = ACTIONS(95),
    [anon_sym_target] = ACTIONS(95),
    [anon_sym_thread_local] = ACTIONS(95),
    [anon_sym_to] = ACTIONS(95),
    [anon_sym_triple] = ACTIONS(95),
    [anon_sym_unnamed_addr] = ACTIONS(95),
    [anon_sym_unordered] = ACTIONS(95),
    [anon_sym_uselistorder] = ACTIONS(95),
    [anon_sym_uselistorder_bb] = ACTIONS(95),
    [anon_sym_uwtable] = ACTIONS(95),
    [anon_sym_volatile] = ACTIONS(95),
    [anon_sym_weak] = ACTIONS(95),
    [anon_sym_weak_odr] = ACTIONS(95),
    [anon_sym_willreturn] = ACTIONS(95),
    [anon_sym_win64cc] = ACTIONS(95),
    [anon_sym_within] = ACTIONS(95),
    [anon_sym_writeonly] = ACTIONS(95),
    [anon_sym_x] = ACTIONS(95),
    [anon_sym_x86_64_sysvcc] = ACTIONS(95),
    [anon_sym_x86_fastcallcc] = ACTIONS(95),
    [anon_sym_x86_stdcallcc] = ACTIONS(95),
    [anon_sym_x86_thiscallcc] = ACTIONS(95),
    [anon_sym_zeroext] = ACTIONS(95),
    [sym_number] = ACTIONS(95),
    [aux_sym_float_token1] = ACTIONS(93),
    [aux_sym_float_token2] = ACTIONS(93),
    [anon_sym_true] = ACTIONS(95),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_zeroinitializer] = ACTIONS(95),
    [anon_sym_undef] = ACTIONS(95),
    [anon_sym_null] = ACTIONS(95),
    [anon_sym_none] = ACTIONS(95),
    [anon_sym_poison] = ACTIONS(95),
    [anon_sym_vscale] = ACTIONS(95),
    [sym_comment] = ACTIONS(93),
    [sym_string] = ACTIONS(93),
    [sym_label] = ACTIONS(93),
    [aux_sym_identifier_token1] = ACTIONS(93),
    [aux_sym_identifier_token2] = ACTIONS(93),
    [aux_sym_identifier_token3] = ACTIONS(95),
    [aux_sym_identifier_token4] = ACTIONS(95),
    [aux_sym_identifier_token5] = ACTIONS(95),
    [aux_sym_identifier_token6] = ACTIONS(95),
    [aux_sym_identifier_token7] = ACTIONS(95),
    [aux_sym_identifier_token8] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_RBRACE] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(93),
    [anon_sym_BANG] = ACTIONS(95),
    [anon_sym_EQ] = ACTIONS(93),
    [anon_sym_STAR] = ACTIONS(93),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_void] = ACTIONS(99),
    [anon_sym_half] = ACTIONS(99),
    [anon_sym_bfloat] = ACTIONS(99),
    [anon_sym_float] = ACTIONS(99),
    [anon_sym_double] = ACTIONS(99),
    [anon_sym_x86_fp80] = ACTIONS(99),
    [anon_sym_fp128] = ACTIONS(99),
    [anon_sym_pcc_fp128] = ACTIONS(99),
    [anon_sym_label] = ACTIONS(99),
    [anon_sym_metadata] = ACTIONS(99),
    [anon_sym_x86_mmx] = ACTIONS(99),
    [anon_sym_x86_amx] = ACTIONS(99),
    [aux_sym_type_token1] = ACTIONS(99),
    [anon_sym_add] = ACTIONS(99),
    [anon_sym_addrspacecast] = ACTIONS(99),
    [anon_sym_alloca] = ACTIONS(99),
    [anon_sym_and] = ACTIONS(99),
    [anon_sym_arcp] = ACTIONS(99),
    [anon_sym_ashr] = ACTIONS(99),
    [anon_sym_atomicrmw] = ACTIONS(99),
    [anon_sym_bitcast] = ACTIONS(99),
    [anon_sym_br] = ACTIONS(99),
    [anon_sym_catchpad] = ACTIONS(99),
    [anon_sym_catchswitch] = ACTIONS(99),
    [anon_sym_catchret] = ACTIONS(99),
    [anon_sym_call] = ACTIONS(99),
    [anon_sym_callbr] = ACTIONS(99),
    [anon_sym_cleanuppad] = ACTIONS(99),
    [anon_sym_cleanupret] = ACTIONS(99),
    [anon_sym_cmpxchg] = ACTIONS(99),
    [anon_sym_eq] = ACTIONS(99),
    [anon_sym_exact] = ACTIONS(99),
    [anon_sym_extractelement] = ACTIONS(99),
    [anon_sym_extractvalue] = ACTIONS(99),
    [anon_sym_fadd] = ACTIONS(99),
    [anon_sym_fast] = ACTIONS(99),
    [anon_sym_fcmp] = ACTIONS(99),
    [anon_sym_fdiv] = ACTIONS(99),
    [anon_sym_fence] = ACTIONS(99),
    [anon_sym_fmul] = ACTIONS(99),
    [anon_sym_fneg] = ACTIONS(99),
    [anon_sym_fpext] = ACTIONS(99),
    [anon_sym_fptosi] = ACTIONS(99),
    [anon_sym_fptoui] = ACTIONS(99),
    [anon_sym_fptrunc] = ACTIONS(99),
    [anon_sym_free] = ACTIONS(99),
    [anon_sym_freeze] = ACTIONS(99),
    [anon_sym_frem] = ACTIONS(99),
    [anon_sym_fsub] = ACTIONS(99),
    [anon_sym_getelementptr] = ACTIONS(99),
    [anon_sym_icmp] = ACTIONS(99),
    [anon_sym_inbounds] = ACTIONS(99),
    [anon_sym_indirectbr] = ACTIONS(99),
    [anon_sym_insertelement] = ACTIONS(99),
    [anon_sym_insertvalue] = ACTIONS(99),
    [anon_sym_inttoptr] = ACTIONS(99),
    [anon_sym_invoke] = ACTIONS(99),
    [anon_sym_landingpad] = ACTIONS(99),
    [anon_sym_load] = ACTIONS(99),
    [anon_sym_lshr] = ACTIONS(99),
    [anon_sym_malloc] = ACTIONS(99),
    [anon_sym_max] = ACTIONS(99),
    [anon_sym_min] = ACTIONS(99),
    [anon_sym_mul] = ACTIONS(99),
    [anon_sym_nand] = ACTIONS(99),
    [anon_sym_ne] = ACTIONS(99),
    [anon_sym_ninf] = ACTIONS(99),
    [anon_sym_nnan] = ACTIONS(99),
    [anon_sym_nsw] = ACTIONS(99),
    [anon_sym_nsz] = ACTIONS(99),
    [anon_sym_nuw] = ACTIONS(99),
    [anon_sym_oeq] = ACTIONS(99),
    [anon_sym_oge] = ACTIONS(99),
    [anon_sym_ogt] = ACTIONS(99),
    [anon_sym_ole] = ACTIONS(99),
    [anon_sym_olt] = ACTIONS(99),
    [anon_sym_one] = ACTIONS(99),
    [anon_sym_or] = ACTIONS(99),
    [anon_sym_ord] = ACTIONS(99),
    [anon_sym_phi] = ACTIONS(99),
    [anon_sym_ptrtoint] = ACTIONS(99),
    [anon_sym_resume] = ACTIONS(99),
    [anon_sym_ret] = ACTIONS(99),
    [anon_sym_sdiv] = ACTIONS(99),
    [anon_sym_select] = ACTIONS(99),
    [anon_sym_sext] = ACTIONS(99),
    [anon_sym_sge] = ACTIONS(99),
    [anon_sym_sgt] = ACTIONS(99),
    [anon_sym_shl] = ACTIONS(99),
    [anon_sym_shufflevector] = ACTIONS(99),
    [anon_sym_sitofp] = ACTIONS(99),
    [anon_sym_sle] = ACTIONS(99),
    [anon_sym_slt] = ACTIONS(99),
    [anon_sym_srem] = ACTIONS(99),
    [anon_sym_store] = ACTIONS(99),
    [anon_sym_sub] = ACTIONS(99),
    [anon_sym_switch] = ACTIONS(99),
    [anon_sym_trunc] = ACTIONS(99),
    [anon_sym_udiv] = ACTIONS(99),
    [anon_sym_ueq] = ACTIONS(99),
    [anon_sym_uge] = ACTIONS(99),
    [anon_sym_ugt] = ACTIONS(99),
    [anon_sym_uitofp] = ACTIONS(99),
    [anon_sym_ule] = ACTIONS(99),
    [anon_sym_ult] = ACTIONS(99),
    [anon_sym_umax] = ACTIONS(99),
    [anon_sym_umin] = ACTIONS(99),
    [anon_sym_une] = ACTIONS(99),
    [anon_sym_uno] = ACTIONS(99),
    [anon_sym_unreachable] = ACTIONS(99),
    [anon_sym_unwind] = ACTIONS(99),
    [anon_sym_urem] = ACTIONS(99),
    [anon_sym_va_arg] = ACTIONS(99),
    [anon_sym_xchg] = ACTIONS(99),
    [anon_sym_xor] = ACTIONS(99),
    [anon_sym_zext] = ACTIONS(99),
    [anon_sym_acq_rel] = ACTIONS(99),
    [anon_sym_acquire] = ACTIONS(99),
    [anon_sym_addrspace] = ACTIONS(99),
    [anon_sym_alias] = ACTIONS(99),
    [anon_sym_align] = ACTIONS(99),
    [anon_sym_alignstack] = ACTIONS(99),
    [anon_sym_allocsize] = ACTIONS(99),
    [anon_sym_alwaysinline] = ACTIONS(99),
    [anon_sym_appending] = ACTIONS(99),
    [anon_sym_argmemonly] = ACTIONS(99),
    [anon_sym_arm_aapcs_vfpcc] = ACTIONS(99),
    [anon_sym_arm_aapcscc] = ACTIONS(99),
    [anon_sym_arm_apcscc] = ACTIONS(99),
    [anon_sym_asm] = ACTIONS(99),
    [anon_sym_atomic] = ACTIONS(99),
    [anon_sym_available_externally] = ACTIONS(99),
    [anon_sym_blockaddress] = ACTIONS(99),
    [anon_sym_builtin] = ACTIONS(99),
    [anon_sym_byref] = ACTIONS(99),
    [anon_sym_byval] = ACTIONS(99),
    [anon_sym_c] = ACTIONS(99),
    [anon_sym_caller] = ACTIONS(99),
    [anon_sym_catch] = ACTIONS(99),
    [anon_sym_cc] = ACTIONS(99),
    [anon_sym_ccc] = ACTIONS(99),
    [anon_sym_cleanup] = ACTIONS(99),
    [anon_sym_cold] = ACTIONS(99),
    [anon_sym_coldcc] = ACTIONS(99),
    [anon_sym_comdat] = ACTIONS(99),
    [anon_sym_common] = ACTIONS(99),
    [anon_sym_constant] = ACTIONS(99),
    [anon_sym_convergent] = ACTIONS(99),
    [anon_sym_datalayout] = ACTIONS(99),
    [anon_sym_declare] = ACTIONS(99),
    [anon_sym_default] = ACTIONS(99),
    [anon_sym_define] = ACTIONS(99),
    [anon_sym_deplibs] = ACTIONS(99),
    [anon_sym_dereferenceable] = ACTIONS(99),
    [anon_sym_dereferenceable_or_null] = ACTIONS(99),
    [anon_sym_distinct] = ACTIONS(99),
    [anon_sym_dllexport] = ACTIONS(99),
    [anon_sym_dllimport] = ACTIONS(99),
    [anon_sym_dso_local] = ACTIONS(99),
    [anon_sym_dso_preemptable] = ACTIONS(99),
    [anon_sym_except] = ACTIONS(99),
    [anon_sym_extern_weak] = ACTIONS(99),
    [anon_sym_external] = ACTIONS(99),
    [anon_sym_externally_initialized] = ACTIONS(99),
    [anon_sym_fastcc] = ACTIONS(99),
    [anon_sym_filter] = ACTIONS(99),
    [anon_sym_from] = ACTIONS(99),
    [anon_sym_gc] = ACTIONS(99),
    [anon_sym_global] = ACTIONS(99),
    [anon_sym_hhvm_ccc] = ACTIONS(99),
    [anon_sym_hhvmcc] = ACTIONS(99),
    [anon_sym_hidden] = ACTIONS(99),
    [anon_sym_hot] = ACTIONS(99),
    [anon_sym_immarg] = ACTIONS(99),
    [anon_sym_inaccessiblemem_or_argmemonly] = ACTIONS(99),
    [anon_sym_inaccessiblememonly] = ACTIONS(99),
    [anon_sym_inalloca] = ACTIONS(99),
    [anon_sym_initialexec] = ACTIONS(99),
    [anon_sym_inlinehint] = ACTIONS(99),
    [anon_sym_inreg] = ACTIONS(99),
    [anon_sym_intel_ocl_bicc] = ACTIONS(99),
    [anon_sym_inteldialect] = ACTIONS(99),
    [anon_sym_internal] = ACTIONS(99),
    [anon_sym_jumptable] = ACTIONS(99),
    [anon_sym_linkonce] = ACTIONS(99),
    [anon_sym_linkonce_odr] = ACTIONS(99),
    [anon_sym_local_unnamed_addr] = ACTIONS(99),
    [anon_sym_localdynamic] = ACTIONS(99),
    [anon_sym_localexec] = ACTIONS(99),
    [anon_sym_minsize] = ACTIONS(99),
    [anon_sym_module] = ACTIONS(99),
    [anon_sym_monotonic] = ACTIONS(99),
    [anon_sym_msp430_intrcc] = ACTIONS(99),
    [anon_sym_mustprogress] = ACTIONS(99),
    [anon_sym_musttail] = ACTIONS(99),
    [anon_sym_naked] = ACTIONS(99),
    [anon_sym_nest] = ACTIONS(99),
    [anon_sym_noalias] = ACTIONS(99),
    [anon_sym_nobuiltin] = ACTIONS(99),
    [anon_sym_nocallback] = ACTIONS(99),
    [anon_sym_nocapture] = ACTIONS(99),
    [anon_sym_nocf_check] = ACTIONS(99),
    [anon_sym_noduplicate] = ACTIONS(99),
    [anon_sym_nofree] = ACTIONS(99),
    [anon_sym_noimplicitfloat] = ACTIONS(99),
    [anon_sym_noinline] = ACTIONS(99),
    [anon_sym_nomerge] = ACTIONS(99),
    [anon_sym_nonlazybind] = ACTIONS(99),
    [anon_sym_nonnull] = ACTIONS(99),
    [anon_sym_noprofile] = ACTIONS(99),
    [anon_sym_norecurse] = ACTIONS(99),
    [anon_sym_noredzone] = ACTIONS(99),
    [anon_sym_noreturn] = ACTIONS(99),
    [anon_sym_nosync] = ACTIONS(99),
    [anon_sym_noundef] = ACTIONS(99),
    [anon_sym_nounwind] = ACTIONS(99),
    [anon_sym_nosanitize_coverage] = ACTIONS(99),
    [anon_sym_null_pointer_is_valid] = ACTIONS(99),
    [anon_sym_optforfuzzing] = ACTIONS(99),
    [anon_sym_optnone] = ACTIONS(99),
    [anon_sym_optsize] = ACTIONS(99),
    [anon_sym_personality] = ACTIONS(99),
    [anon_sym_preallocated] = ACTIONS(99),
    [anon_sym_private] = ACTIONS(99),
    [anon_sym_protected] = ACTIONS(99),
    [anon_sym_ptx_device] = ACTIONS(99),
    [anon_sym_ptx_kernel] = ACTIONS(99),
    [anon_sym_readnone] = ACTIONS(99),
    [anon_sym_readonly] = ACTIONS(99),
    [anon_sym_release] = ACTIONS(99),
    [anon_sym_returned] = ACTIONS(99),
    [anon_sym_returns_twice] = ACTIONS(99),
    [anon_sym_safestack] = ACTIONS(99),
    [anon_sym_sanitize_address] = ACTIONS(99),
    [anon_sym_sanitize_hwaddress] = ACTIONS(99),
    [anon_sym_sanitize_memory] = ACTIONS(99),
    [anon_sym_sanitize_memtag] = ACTIONS(99),
    [anon_sym_sanitize_thread] = ACTIONS(99),
    [anon_sym_section] = ACTIONS(99),
    [anon_sym_seq_cst] = ACTIONS(99),
    [anon_sym_shadowcallstack] = ACTIONS(99),
    [anon_sym_sideeffect] = ACTIONS(99),
    [anon_sym_signext] = ACTIONS(99),
    [anon_sym_source_filename] = ACTIONS(99),
    [anon_sym_speculatable] = ACTIONS(99),
    [anon_sym_speculative_load_hardening] = ACTIONS(99),
    [anon_sym_spir_func] = ACTIONS(99),
    [anon_sym_spir_kernel] = ACTIONS(99),
    [anon_sym_sret] = ACTIONS(99),
    [anon_sym_ssp] = ACTIONS(99),
    [anon_sym_sspreq] = ACTIONS(99),
    [anon_sym_sspstrong] = ACTIONS(99),
    [anon_sym_strictfp] = ACTIONS(99),
    [anon_sym_swiftcc] = ACTIONS(99),
    [anon_sym_swifterror] = ACTIONS(99),
    [anon_sym_swifttailcc] = ACTIONS(99),
    [anon_sym_swiftself] = ACTIONS(99),
    [anon_sym_syncscope] = ACTIONS(99),
    [anon_sym_tail] = ACTIONS(99),
    [anon_sym_tailcc] = ACTIONS(99),
    [anon_sym_target] = ACTIONS(99),
    [anon_sym_thread_local] = ACTIONS(99),
    [anon_sym_to] = ACTIONS(99),
    [anon_sym_triple] = ACTIONS(99),
    [anon_sym_unnamed_addr] = ACTIONS(99),
    [anon_sym_unordered] = ACTIONS(99),
    [anon_sym_uselistorder] = ACTIONS(99),
    [anon_sym_uselistorder_bb] = ACTIONS(99),
    [anon_sym_uwtable] = ACTIONS(99),
    [anon_sym_volatile] = ACTIONS(99),
    [anon_sym_weak] = ACTIONS(99),
    [anon_sym_weak_odr] = ACTIONS(99),
    [anon_sym_willreturn] = ACTIONS(99),
    [anon_sym_win64cc] = ACTIONS(99),
    [anon_sym_within] = ACTIONS(99),
    [anon_sym_writeonly] = ACTIONS(99),
    [anon_sym_x] = ACTIONS(99),
    [anon_sym_x86_64_sysvcc] = ACTIONS(99),
    [anon_sym_x86_fastcallcc] = ACTIONS(99),
    [anon_sym_x86_stdcallcc] = ACTIONS(99),
    [anon_sym_x86_thiscallcc] = ACTIONS(99),
    [anon_sym_zeroext] = ACTIONS(99),
    [sym_number] = ACTIONS(99),
    [aux_sym_float_token1] = ACTIONS(97),
    [aux_sym_float_token2] = ACTIONS(97),
    [anon_sym_true] = ACTIONS(99),
    [anon_sym_false] = ACTIONS(99),
    [anon_sym_zeroinitializer] = ACTIONS(99),
    [anon_sym_undef] = ACTIONS(99),
    [anon_sym_null] = ACTIONS(99),
    [anon_sym_none] = ACTIONS(99),
    [anon_sym_poison] = ACTIONS(99),
    [anon_sym_vscale] = ACTIONS(99),
    [sym_comment] = ACTIONS(97),
    [sym_string] = ACTIONS(97),
    [sym_label] = ACTIONS(97),
    [aux_sym_identifier_token1] = ACTIONS(97),
    [aux_sym_identifier_token2] = ACTIONS(97),
    [aux_sym_identifier_token3] = ACTIONS(99),
    [aux_sym_identifier_token4] = ACTIONS(99),
    [aux_sym_identifier_token5] = ACTIONS(99),
    [aux_sym_identifier_token6] = ACTIONS(99),
    [aux_sym_identifier_token7] = ACTIONS(99),
    [aux_sym_identifier_token8] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_RPAREN] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_COMMA] = ACTIONS(97),
    [anon_sym_BANG] = ACTIONS(99),
    [anon_sym_EQ] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(97),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_void] = ACTIONS(103),
    [anon_sym_half] = ACTIONS(103),
    [anon_sym_bfloat] = ACTIONS(103),
    [anon_sym_float] = ACTIONS(103),
    [anon_sym_double] = ACTIONS(103),
    [anon_sym_x86_fp80] = ACTIONS(103),
    [anon_sym_fp128] = ACTIONS(103),
    [anon_sym_pcc_fp128] = ACTIONS(103),
    [anon_sym_label] = ACTIONS(103),
    [anon_sym_metadata] = ACTIONS(103),
    [anon_sym_x86_mmx] = ACTIONS(103),
    [anon_sym_x86_amx] = ACTIONS(103),
    [aux_sym_type_token1] = ACTIONS(103),
    [anon_sym_add] = ACTIONS(103),
    [anon_sym_addrspacecast] = ACTIONS(103),
    [anon_sym_alloca] = ACTIONS(103),
    [anon_sym_and] = ACTIONS(103),
    [anon_sym_arcp] = ACTIONS(103),
    [anon_sym_ashr] = ACTIONS(103),
    [anon_sym_atomicrmw] = ACTIONS(103),
    [anon_sym_bitcast] = ACTIONS(103),
    [anon_sym_br] = ACTIONS(103),
    [anon_sym_catchpad] = ACTIONS(103),
    [anon_sym_catchswitch] = ACTIONS(103),
    [anon_sym_catchret] = ACTIONS(103),
    [anon_sym_call] = ACTIONS(103),
    [anon_sym_callbr] = ACTIONS(103),
    [anon_sym_cleanuppad] = ACTIONS(103),
    [anon_sym_cleanupret] = ACTIONS(103),
    [anon_sym_cmpxchg] = ACTIONS(103),
    [anon_sym_eq] = ACTIONS(103),
    [anon_sym_exact] = ACTIONS(103),
    [anon_sym_extractelement] = ACTIONS(103),
    [anon_sym_extractvalue] = ACTIONS(103),
    [anon_sym_fadd] = ACTIONS(103),
    [anon_sym_fast] = ACTIONS(103),
    [anon_sym_fcmp] = ACTIONS(103),
    [anon_sym_fdiv] = ACTIONS(103),
    [anon_sym_fence] = ACTIONS(103),
    [anon_sym_fmul] = ACTIONS(103),
    [anon_sym_fneg] = ACTIONS(103),
    [anon_sym_fpext] = ACTIONS(103),
    [anon_sym_fptosi] = ACTIONS(103),
    [anon_sym_fptoui] = ACTIONS(103),
    [anon_sym_fptrunc] = ACTIONS(103),
    [anon_sym_free] = ACTIONS(103),
    [anon_sym_freeze] = ACTIONS(103),
    [anon_sym_frem] = ACTIONS(103),
    [anon_sym_fsub] = ACTIONS(103),
    [anon_sym_getelementptr] = ACTIONS(103),
    [anon_sym_icmp] = ACTIONS(103),
    [anon_sym_inbounds] = ACTIONS(103),
    [anon_sym_indirectbr] = ACTIONS(103),
    [anon_sym_insertelement] = ACTIONS(103),
    [anon_sym_insertvalue] = ACTIONS(103),
    [anon_sym_inttoptr] = ACTIONS(103),
    [anon_sym_invoke] = ACTIONS(103),
    [anon_sym_landingpad] = ACTIONS(103),
    [anon_sym_load] = ACTIONS(103),
    [anon_sym_lshr] = ACTIONS(103),
    [anon_sym_malloc] = ACTIONS(103),
    [anon_sym_max] = ACTIONS(103),
    [anon_sym_min] = ACTIONS(103),
    [anon_sym_mul] = ACTIONS(103),
    [anon_sym_nand] = ACTIONS(103),
    [anon_sym_ne] = ACTIONS(103),
    [anon_sym_ninf] = ACTIONS(103),
    [anon_sym_nnan] = ACTIONS(103),
    [anon_sym_nsw] = ACTIONS(103),
    [anon_sym_nsz] = ACTIONS(103),
    [anon_sym_nuw] = ACTIONS(103),
    [anon_sym_oeq] = ACTIONS(103),
    [anon_sym_oge] = ACTIONS(103),
    [anon_sym_ogt] = ACTIONS(103),
    [anon_sym_ole] = ACTIONS(103),
    [anon_sym_olt] = ACTIONS(103),
    [anon_sym_one] = ACTIONS(103),
    [anon_sym_or] = ACTIONS(103),
    [anon_sym_ord] = ACTIONS(103),
    [anon_sym_phi] = ACTIONS(103),
    [anon_sym_ptrtoint] = ACTIONS(103),
    [anon_sym_resume] = ACTIONS(103),
    [anon_sym_ret] = ACTIONS(103),
    [anon_sym_sdiv] = ACTIONS(103),
    [anon_sym_select] = ACTIONS(103),
    [anon_sym_sext] = ACTIONS(103),
    [anon_sym_sge] = ACTIONS(103),
    [anon_sym_sgt] = ACTIONS(103),
    [anon_sym_shl] = ACTIONS(103),
    [anon_sym_shufflevector] = ACTIONS(103),
    [anon_sym_sitofp] = ACTIONS(103),
    [anon_sym_sle] = ACTIONS(103),
    [anon_sym_slt] = ACTIONS(103),
    [anon_sym_srem] = ACTIONS(103),
    [anon_sym_store] = ACTIONS(103),
    [anon_sym_sub] = ACTIONS(103),
    [anon_sym_switch] = ACTIONS(103),
    [anon_sym_trunc] = ACTIONS(103),
    [anon_sym_udiv] = ACTIONS(103),
    [anon_sym_ueq] = ACTIONS(103),
    [anon_sym_uge] = ACTIONS(103),
    [anon_sym_ugt] = ACTIONS(103),
    [anon_sym_uitofp] = ACTIONS(103),
    [anon_sym_ule] = ACTIONS(103),
    [anon_sym_ult] = ACTIONS(103),
    [anon_sym_umax] = ACTIONS(103),
    [anon_sym_umin] = ACTIONS(103),
    [anon_sym_une] = ACTIONS(103),
    [anon_sym_uno] = ACTIONS(103),
    [anon_sym_unreachable] = ACTIONS(103),
    [anon_sym_unwind] = ACTIONS(103),
    [anon_sym_urem] = ACTIONS(103),
    [anon_sym_va_arg] = ACTIONS(103),
    [anon_sym_xchg] = ACTIONS(103),
    [anon_sym_xor] = ACTIONS(103),
    [anon_sym_zext] = ACTIONS(103),
    [anon_sym_acq_rel] = ACTIONS(103),
    [anon_sym_acquire] = ACTIONS(103),
    [anon_sym_addrspace] = ACTIONS(103),
    [anon_sym_alias] = ACTIONS(103),
    [anon_sym_align] = ACTIONS(103),
    [anon_sym_alignstack] = ACTIONS(103),
    [anon_sym_allocsize] = ACTIONS(103),
    [anon_sym_alwaysinline] = ACTIONS(103),
    [anon_sym_appending] = ACTIONS(103),
    [anon_sym_argmemonly] = ACTIONS(103),
    [anon_sym_arm_aapcs_vfpcc] = ACTIONS(103),
    [anon_sym_arm_aapcscc] = ACTIONS(103),
    [anon_sym_arm_apcscc] = ACTIONS(103),
    [anon_sym_asm] = ACTIONS(103),
    [anon_sym_atomic] = ACTIONS(103),
    [anon_sym_available_externally] = ACTIONS(103),
    [anon_sym_blockaddress] = ACTIONS(103),
    [anon_sym_builtin] = ACTIONS(103),
    [anon_sym_byref] = ACTIONS(103),
    [anon_sym_byval] = ACTIONS(103),
    [anon_sym_c] = ACTIONS(103),
    [anon_sym_caller] = ACTIONS(103),
    [anon_sym_catch] = ACTIONS(103),
    [anon_sym_cc] = ACTIONS(103),
    [anon_sym_ccc] = ACTIONS(103),
    [anon_sym_cleanup] = ACTIONS(103),
    [anon_sym_cold] = ACTIONS(103),
    [anon_sym_coldcc] = ACTIONS(103),
    [anon_sym_comdat] = ACTIONS(103),
    [anon_sym_common] = ACTIONS(103),
    [anon_sym_constant] = ACTIONS(103),
    [anon_sym_convergent] = ACTIONS(103),
    [anon_sym_datalayout] = ACTIONS(103),
    [anon_sym_declare] = ACTIONS(103),
    [anon_sym_default] = ACTIONS(103),
    [anon_sym_define] = ACTIONS(103),
    [anon_sym_deplibs] = ACTIONS(103),
    [anon_sym_dereferenceable] = ACTIONS(103),
    [anon_sym_dereferenceable_or_null] = ACTIONS(103),
    [anon_sym_distinct] = ACTIONS(103),
    [anon_sym_dllexport] = ACTIONS(103),
    [anon_sym_dllimport] = ACTIONS(103),
    [anon_sym_dso_local] = ACTIONS(103),
    [anon_sym_dso_preemptable] = ACTIONS(103),
    [anon_sym_except] = ACTIONS(103),
    [anon_sym_extern_weak] = ACTIONS(103),
    [anon_sym_external] = ACTIONS(103),
    [anon_sym_externally_initialized] = ACTIONS(103),
    [anon_sym_fastcc] = ACTIONS(103),
    [anon_sym_filter] = ACTIONS(103),
    [anon_sym_from] = ACTIONS(103),
    [anon_sym_gc] = ACTIONS(103),
    [anon_sym_global] = ACTIONS(103),
    [anon_sym_hhvm_ccc] = ACTIONS(103),
    [anon_sym_hhvmcc] = ACTIONS(103),
    [anon_sym_hidden] = ACTIONS(103),
    [anon_sym_hot] = ACTIONS(103),
    [anon_sym_immarg] = ACTIONS(103),
    [anon_sym_inaccessiblemem_or_argmemonly] = ACTIONS(103),
    [anon_sym_inaccessiblememonly] = ACTIONS(103),
    [anon_sym_inalloca] = ACTIONS(103),
    [anon_sym_initialexec] = ACTIONS(103),
    [anon_sym_inlinehint] = ACTIONS(103),
    [anon_sym_inreg] = ACTIONS(103),
    [anon_sym_intel_ocl_bicc] = ACTIONS(103),
    [anon_sym_inteldialect] = ACTIONS(103),
    [anon_sym_internal] = ACTIONS(103),
    [anon_sym_jumptable] = ACTIONS(103),
    [anon_sym_linkonce] = ACTIONS(103),
    [anon_sym_linkonce_odr] = ACTIONS(103),
    [anon_sym_local_unnamed_addr] = ACTIONS(103),
    [anon_sym_localdynamic] = ACTIONS(103),
    [anon_sym_localexec] = ACTIONS(103),
    [anon_sym_minsize] = ACTIONS(103),
    [anon_sym_module] = ACTIONS(103),
    [anon_sym_monotonic] = ACTIONS(103),
    [anon_sym_msp430_intrcc] = ACTIONS(103),
    [anon_sym_mustprogress] = ACTIONS(103),
    [anon_sym_musttail] = ACTIONS(103),
    [anon_sym_naked] = ACTIONS(103),
    [anon_sym_nest] = ACTIONS(103),
    [anon_sym_noalias] = ACTIONS(103),
    [anon_sym_nobuiltin] = ACTIONS(103),
    [anon_sym_nocallback] = ACTIONS(103),
    [anon_sym_nocapture] = ACTIONS(103),
    [anon_sym_nocf_check] = ACTIONS(103),
    [anon_sym_noduplicate] = ACTIONS(103),
    [anon_sym_nofree] = ACTIONS(103),
    [anon_sym_noimplicitfloat] = ACTIONS(103),
    [anon_sym_noinline] = ACTIONS(103),
    [anon_sym_nomerge] = ACTIONS(103),
    [anon_sym_nonlazybind] = ACTIONS(103),
    [anon_sym_nonnull] = ACTIONS(103),
    [anon_sym_noprofile] = ACTIONS(103),
    [anon_sym_norecurse] = ACTIONS(103),
    [anon_sym_noredzone] = ACTIONS(103),
    [anon_sym_noreturn] = ACTIONS(103),
    [anon_sym_nosync] = ACTIONS(103),
    [anon_sym_noundef] = ACTIONS(103),
    [anon_sym_nounwind] = ACTIONS(103),
    [anon_sym_nosanitize_coverage] = ACTIONS(103),
    [anon_sym_null_pointer_is_valid] = ACTIONS(103),
    [anon_sym_optforfuzzing] = ACTIONS(103),
    [anon_sym_optnone] = ACTIONS(103),
    [anon_sym_optsize] = ACTIONS(103),
    [anon_sym_personality] = ACTIONS(103),
    [anon_sym_preallocated] = ACTIONS(103),
    [anon_sym_private] = ACTIONS(103),
    [anon_sym_protected] = ACTIONS(103),
    [anon_sym_ptx_device] = ACTIONS(103),
    [anon_sym_ptx_kernel] = ACTIONS(103),
    [anon_sym_readnone] = ACTIONS(103),
    [anon_sym_readonly] = ACTIONS(103),
    [anon_sym_release] = ACTIONS(103),
    [anon_sym_returned] = ACTIONS(103),
    [anon_sym_returns_twice] = ACTIONS(103),
    [anon_sym_safestack] = ACTIONS(103),
    [anon_sym_sanitize_address] = ACTIONS(103),
    [anon_sym_sanitize_hwaddress] = ACTIONS(103),
    [anon_sym_sanitize_memory] = ACTIONS(103),
    [anon_sym_sanitize_memtag] = ACTIONS(103),
    [anon_sym_sanitize_thread] = ACTIONS(103),
    [anon_sym_section] = ACTIONS(103),
    [anon_sym_seq_cst] = ACTIONS(103),
    [anon_sym_shadowcallstack] = ACTIONS(103),
    [anon_sym_sideeffect] = ACTIONS(103),
    [anon_sym_signext] = ACTIONS(103),
    [anon_sym_source_filename] = ACTIONS(103),
    [anon_sym_speculatable] = ACTIONS(103),
    [anon_sym_speculative_load_hardening] = ACTIONS(103),
    [anon_sym_spir_func] = ACTIONS(103),
    [anon_sym_spir_kernel] = ACTIONS(103),
    [anon_sym_sret] = ACTIONS(103),
    [anon_sym_ssp] = ACTIONS(103),
    [anon_sym_sspreq] = ACTIONS(103),
    [anon_sym_sspstrong] = ACTIONS(103),
    [anon_sym_strictfp] = ACTIONS(103),
    [anon_sym_swiftcc] = ACTIONS(103),
    [anon_sym_swifterror] = ACTIONS(103),
    [anon_sym_swifttailcc] = ACTIONS(103),
    [anon_sym_swiftself] = ACTIONS(103),
    [anon_sym_syncscope] = ACTIONS(103),
    [anon_sym_tail] = ACTIONS(103),
    [anon_sym_tailcc] = ACTIONS(103),
    [anon_sym_target] = ACTIONS(103),
    [anon_sym_thread_local] = ACTIONS(103),
    [anon_sym_to] = ACTIONS(103),
    [anon_sym_triple] = ACTIONS(103),
    [anon_sym_unnamed_addr] = ACTIONS(103),
    [anon_sym_unordered] = ACTIONS(103),
    [anon_sym_uselistorder] = ACTIONS(103),
    [anon_sym_uselistorder_bb] = ACTIONS(103),
    [anon_sym_uwtable] = ACTIONS(103),
    [anon_sym_volatile] = ACTIONS(103),
    [anon_sym_weak] = ACTIONS(103),
    [anon_sym_weak_odr] = ACTIONS(103),
    [anon_sym_willreturn] = ACTIONS(103),
    [anon_sym_win64cc] = ACTIONS(103),
    [anon_sym_within] = ACTIONS(103),
    [anon_sym_writeonly] = ACTIONS(103),
    [anon_sym_x] = ACTIONS(103),
    [anon_sym_x86_64_sysvcc] = ACTIONS(103),
    [anon_sym_x86_fastcallcc] = ACTIONS(103),
    [anon_sym_x86_stdcallcc] = ACTIONS(103),
    [anon_sym_x86_thiscallcc] = ACTIONS(103),
    [anon_sym_zeroext] = ACTIONS(103),
    [sym_number] = ACTIONS(103),
    [aux_sym_float_token1] = ACTIONS(101),
    [aux_sym_float_token2] = ACTIONS(101),
    [anon_sym_true] = ACTIONS(103),
    [anon_sym_false] = ACTIONS(103),
    [anon_sym_zeroinitializer] = ACTIONS(103),
    [anon_sym_undef] = ACTIONS(103),
    [anon_sym_null] = ACTIONS(103),
    [anon_sym_none] = ACTIONS(103),
    [anon_sym_poison] = ACTIONS(103),
    [anon_sym_vscale] = ACTIONS(103),
    [sym_comment] = ACTIONS(101),
    [sym_string] = ACTIONS(101),
    [sym_label] = ACTIONS(101),
    [aux_sym_identifier_token1] = ACTIONS(101),
    [aux_sym_identifier_token2] = ACTIONS(101),
    [aux_sym_identifier_token3] = ACTIONS(103),
    [aux_sym_identifier_token4] = ACTIONS(103),
    [aux_sym_identifier_token5] = ACTIONS(103),
    [aux_sym_identifier_token6] = ACTIONS(103),
    [aux_sym_identifier_token7] = ACTIONS(103),
    [aux_sym_identifier_token8] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_RPAREN] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_RBRACK] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_EQ] = ACTIONS(101),
    [anon_sym_STAR] = ACTIONS(101),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
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
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(4),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(5),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(6),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(3),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(7),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(8),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(9),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(3),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(10),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(10),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(11),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(11),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_punctuation, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_punctuation, 1),
  [105] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
