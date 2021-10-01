module.exports = grammar({
  name: "LLVM",

  rules: {
    source_file: ($) => repeat($._expression),

    _expression: ($) =>
      choice(
        $.comment,
        $.function_declaration,
        $.function_definition,
        $.global_constant,
        $.named_metadata
      ),

    comment: ($) => /;.*/,

    function_declaration: ($) => seq(
        "declare",
        optional($.linkage),
        optional($.dll_storage_class),
        optional($.calling_convention),
        optional(choice("unnamed_addr", "local_unnamed_addr")),
        optional($.addr_space),
        $.type,
        $.parameter_attribute,
        $.indentifier,
        $.argument_list,
        // TODO optional($.alignment),
        // TODO optional($.garbage_collector_name),
        optional($.prefix),
        optional($.prologue),
    ),

    calling_convention: $ => choice(
        "ccc",
        "fastcc",
        "coldcc",
        "webkit_jscc",
        "anyregcc",
        "preserve_mostcc",
        "preserve_allcc",
        "cxx_fast_tlscc",
        "tailcc",
        "swiftcc",
        "swifttailcc",
        "cfguard_checkcc",
        /cc \d+/,
    ),

    parameter_attributes: ($) => repeat($.parameter_attribute),

    parameter_attribute: $ => choice(
        "zeroext",
        "signext",
        "inreg",
        seq("byval(", $.type, ")"),
        seq("byref(", $.type, ")"),
        seq("preallocated(", $.type, ")"),
        seq("inalloca(", $.type, ")"),
        seq("sret(", $.type, ")"),
        seq("elementtype(", $.type, ")"),
        seq("align(", $.integer, ")"),
        seq("align", $.integer),
        "noalias",
        "nocapture",
        "nofree",
        "nest",
        "returned",
        "nonnull",
        seq("dereferenceable(", $.integer, ")"),
        seq("dereferenceable_or_null(", $.integer, ")"),
        "swiftself",
        "swiftasync",
        "swifterror",
        "immarg",
        "noundef",
        seq("alignstack(", $.integer, ")"),
    )),

    argument_list: ($) => seq("(", commaSep($.argument), ")"),

    argument: $ => seq($.type, $.parameter_attributes, $.identifier),

    function_definition: ($) => "f.*",

    global_constant: ($) =>
      seq(
        $.identifier,
        "=",
        optional($.linkage),
        optional($.preemption_specifier),
        optional($.visibility),
        optional($.dll_storage_class),
        optional($.thread_local),
        optional(choice("unnamed_addr", "local_unnamed_addr")),
        optional($.addr_space),
        optional($.externally_initialized),
        choice("global", "constant"),
        $.type,
        optional($.initializer_constant)
        // TODO
      ),

    linkage: ($) =>
      choice(
        "private",
        "internal",
        "availible_externally",
        "linkonce",
        "weak",
        "common",
        "appending",
        "extern_weak",
        "linkonce_odr",
        "weak_odr",
        "external"
      ),

    preemption_specifier: ($) => choice("dso_preemptable", "dso_local"),

    visibility: ($) => choice("default", "hidden", "protected"),

    dll_storage_class: ($) => choice("dllimport", "dllexport"),

    thread_local: ($) => choice("localdynamic", "initialexec", "localexec"),

    addr_space: ($) => seq("addrspace(", $.integer, ")"),

    externally_initialized: ($) => "externally_initialized",

    type: ($) =>
      choice(
        "void",
        $.integer_type,
        $.floating_point_type,
        "x86_amx",
        "x86_mmx",
        $.pointer_type,
        $.vector_type,
        "label",
        "token",
        "metadata",
        $.array_type,
        $.structure_type
      ),

    integer_type: ($) => /i\d+/,

    floating_point_type: ($) =>
      choice(
        "half",
        "bfloat",
        "float",
        "double",
        "fp128",
        "x86_fp80",
        "ppc_fp128"
      ),

    pointer_type: ($) => seq($.type, "*"),

    vector_type: ($) => "TODO vector_type",

    array_type: ($) => seq("[", $.integer, "x", $.type, "]"),

    structure_type: ($) => "TODO structure_type",

    initializer_constant: ($) =>
      choice(
        "TODO initializer_constant",
        $.boolean,
        $.integer,
        $.character_array
      ),

    named_metadata: ($) => "n.*",

    identifier: ($) => /[%@][-a-zA-Z$._][-a-zA-Z$._0-9]*/,

    boolean: ($) => choice("true", "false"),

    integer: ($) => /-?\d+/,

    string: ($) => /"(\\\\|\\"|.)*"/,

    character_array: ($) => seq("c", $.string),
  },
});

function commaSep1 (rule) {
  return seq(rule, repeat(seq(",", rule)));
}

function commaSep (rule) {
  return optional(commaSep1(rule));
}
