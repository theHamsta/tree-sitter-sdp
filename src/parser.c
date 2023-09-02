#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 96
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 2

enum {
  sym__newline = 1,
  aux_sym_username_token1 = 2,
  aux_sym_sess_id_token1 = 3,
  sym_nettype = 4,
  anon_sym_IP4 = 5,
  anon_sym_IP6 = 6,
  sym_ttl = 7,
  anon_sym_v_EQ = 8,
  aux_sym_version_token1 = 9,
  aux_sym__empty_line_token1 = 10,
  anon_sym_s_EQ = 11,
  aux_sym_session_name_token1 = 12,
  anon_sym_o_EQ = 13,
  anon_sym_i_EQ = 14,
  anon_sym_u_EQ = 15,
  anon_sym_e_EQ = 16,
  anon_sym_p_EQ = 17,
  anon_sym_c_EQ = 18,
  anon_sym_SLASH = 19,
  anon_sym_b_EQ = 20,
  anon_sym_k_EQ = 21,
  anon_sym_a_EQ = 22,
  anon_sym_COLON = 23,
  sym_attribute_name = 24,
  anon_sym_t_EQ = 25,
  anon_sym_r_EQ = 26,
  anon_sym_z_EQ = 27,
  aux_sym_time_token1 = 28,
  anon_sym_m_EQ = 29,
  anon_sym_udp = 30,
  anon_sym_RTP_SLASHAVP = 31,
  anon_sym_RTP_SLASHSAVP = 32,
  anon_sym_RTP_SLASHSAVPF = 33,
  sym_message = 34,
  sym_username = 35,
  sym_sess_id = 36,
  sym_sess_version = 37,
  sym_addr_type = 38,
  sym_unicast_address = 39,
  sym_ip = 40,
  sym_message_info = 41,
  sym_version = 42,
  sym__empty_line = 43,
  sym_session_name = 44,
  sym_origin = 45,
  sym_information = 46,
  sym_uri = 47,
  sym_email = 48,
  sym_phone = 49,
  sym_connection = 50,
  sym_bandwidth = 51,
  sym_encryption_key = 52,
  sym_attribute = 53,
  sym_attribute_value = 54,
  sym_time_description = 55,
  sym_repeat_times = 56,
  sym_timezone_adjustment = 57,
  sym_time = 58,
  sym_media = 59,
  sym_media_description = 60,
  sym_media_type = 61,
  sym_port = 62,
  sym_format = 63,
  sym_proto = 64,
  aux_sym_message_repeat1 = 65,
  aux_sym_message_info_repeat1 = 66,
  aux_sym_message_info_repeat2 = 67,
  aux_sym_media_repeat1 = 68,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__newline] = "_newline",
  [aux_sym_username_token1] = "username_token1",
  [aux_sym_sess_id_token1] = "sess_id_token1",
  [sym_nettype] = "nettype",
  [anon_sym_IP4] = "IP4",
  [anon_sym_IP6] = "IP6",
  [sym_ttl] = "ttl",
  [anon_sym_v_EQ] = "v=",
  [aux_sym_version_token1] = "version_token1",
  [aux_sym__empty_line_token1] = "_empty_line_token1",
  [anon_sym_s_EQ] = "s=",
  [aux_sym_session_name_token1] = "session_name_token1",
  [anon_sym_o_EQ] = "o=",
  [anon_sym_i_EQ] = "i=",
  [anon_sym_u_EQ] = "u=",
  [anon_sym_e_EQ] = "e=",
  [anon_sym_p_EQ] = "p=",
  [anon_sym_c_EQ] = "c=",
  [anon_sym_SLASH] = "/",
  [anon_sym_b_EQ] = "b=",
  [anon_sym_k_EQ] = "k=",
  [anon_sym_a_EQ] = "a=",
  [anon_sym_COLON] = ":",
  [sym_attribute_name] = "attribute_name",
  [anon_sym_t_EQ] = "t=",
  [anon_sym_r_EQ] = "r=",
  [anon_sym_z_EQ] = "z=",
  [aux_sym_time_token1] = "time_token1",
  [anon_sym_m_EQ] = "m=",
  [anon_sym_udp] = "udp",
  [anon_sym_RTP_SLASHAVP] = "RTP/AVP",
  [anon_sym_RTP_SLASHSAVP] = "RTP/SAVP",
  [anon_sym_RTP_SLASHSAVPF] = "RTP/SAVPF",
  [sym_message] = "message",
  [sym_username] = "username",
  [sym_sess_id] = "sess_id",
  [sym_sess_version] = "sess_version",
  [sym_addr_type] = "addr_type",
  [sym_unicast_address] = "unicast_address",
  [sym_ip] = "ip",
  [sym_message_info] = "message_info",
  [sym_version] = "version",
  [sym__empty_line] = "_empty_line",
  [sym_session_name] = "session_name",
  [sym_origin] = "origin",
  [sym_information] = "information",
  [sym_uri] = "uri",
  [sym_email] = "email",
  [sym_phone] = "phone",
  [sym_connection] = "connection",
  [sym_bandwidth] = "bandwidth",
  [sym_encryption_key] = "encryption_key",
  [sym_attribute] = "attribute",
  [sym_attribute_value] = "attribute_value",
  [sym_time_description] = "time_description",
  [sym_repeat_times] = "repeat_times",
  [sym_timezone_adjustment] = "timezone_adjustment",
  [sym_time] = "time",
  [sym_media] = "media",
  [sym_media_description] = "media_description",
  [sym_media_type] = "media_type",
  [sym_port] = "port",
  [sym_format] = "format",
  [sym_proto] = "proto",
  [aux_sym_message_repeat1] = "message_repeat1",
  [aux_sym_message_info_repeat1] = "message_info_repeat1",
  [aux_sym_message_info_repeat2] = "message_info_repeat2",
  [aux_sym_media_repeat1] = "media_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__newline] = sym__newline,
  [aux_sym_username_token1] = aux_sym_username_token1,
  [aux_sym_sess_id_token1] = aux_sym_sess_id_token1,
  [sym_nettype] = sym_nettype,
  [anon_sym_IP4] = anon_sym_IP4,
  [anon_sym_IP6] = anon_sym_IP6,
  [sym_ttl] = sym_ttl,
  [anon_sym_v_EQ] = anon_sym_v_EQ,
  [aux_sym_version_token1] = aux_sym_version_token1,
  [aux_sym__empty_line_token1] = aux_sym__empty_line_token1,
  [anon_sym_s_EQ] = anon_sym_s_EQ,
  [aux_sym_session_name_token1] = aux_sym_session_name_token1,
  [anon_sym_o_EQ] = anon_sym_o_EQ,
  [anon_sym_i_EQ] = anon_sym_i_EQ,
  [anon_sym_u_EQ] = anon_sym_u_EQ,
  [anon_sym_e_EQ] = anon_sym_e_EQ,
  [anon_sym_p_EQ] = anon_sym_p_EQ,
  [anon_sym_c_EQ] = anon_sym_c_EQ,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_b_EQ] = anon_sym_b_EQ,
  [anon_sym_k_EQ] = anon_sym_k_EQ,
  [anon_sym_a_EQ] = anon_sym_a_EQ,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_attribute_name] = sym_attribute_name,
  [anon_sym_t_EQ] = anon_sym_t_EQ,
  [anon_sym_r_EQ] = anon_sym_r_EQ,
  [anon_sym_z_EQ] = anon_sym_z_EQ,
  [aux_sym_time_token1] = aux_sym_time_token1,
  [anon_sym_m_EQ] = anon_sym_m_EQ,
  [anon_sym_udp] = anon_sym_udp,
  [anon_sym_RTP_SLASHAVP] = anon_sym_RTP_SLASHAVP,
  [anon_sym_RTP_SLASHSAVP] = anon_sym_RTP_SLASHSAVP,
  [anon_sym_RTP_SLASHSAVPF] = anon_sym_RTP_SLASHSAVPF,
  [sym_message] = sym_message,
  [sym_username] = sym_username,
  [sym_sess_id] = sym_sess_id,
  [sym_sess_version] = sym_sess_version,
  [sym_addr_type] = sym_addr_type,
  [sym_unicast_address] = sym_unicast_address,
  [sym_ip] = sym_ip,
  [sym_message_info] = sym_message_info,
  [sym_version] = sym_version,
  [sym__empty_line] = sym__empty_line,
  [sym_session_name] = sym_session_name,
  [sym_origin] = sym_origin,
  [sym_information] = sym_information,
  [sym_uri] = sym_uri,
  [sym_email] = sym_email,
  [sym_phone] = sym_phone,
  [sym_connection] = sym_connection,
  [sym_bandwidth] = sym_bandwidth,
  [sym_encryption_key] = sym_encryption_key,
  [sym_attribute] = sym_attribute,
  [sym_attribute_value] = sym_attribute_value,
  [sym_time_description] = sym_time_description,
  [sym_repeat_times] = sym_repeat_times,
  [sym_timezone_adjustment] = sym_timezone_adjustment,
  [sym_time] = sym_time,
  [sym_media] = sym_media,
  [sym_media_description] = sym_media_description,
  [sym_media_type] = sym_media_type,
  [sym_port] = sym_port,
  [sym_format] = sym_format,
  [sym_proto] = sym_proto,
  [aux_sym_message_repeat1] = aux_sym_message_repeat1,
  [aux_sym_message_info_repeat1] = aux_sym_message_info_repeat1,
  [aux_sym_message_info_repeat2] = aux_sym_message_info_repeat2,
  [aux_sym_media_repeat1] = aux_sym_media_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_username_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sess_id_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_nettype] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_IP4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IP6] = {
    .visible = true,
    .named = false,
  },
  [sym_ttl] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_v_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_version_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__empty_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_s_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_session_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_o_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_p_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_k_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_a_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_t_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_z_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_time_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_m_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_udp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RTP_SLASHAVP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RTP_SLASHSAVP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RTP_SLASHSAVPF] = {
    .visible = true,
    .named = false,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_username] = {
    .visible = true,
    .named = true,
  },
  [sym_sess_id] = {
    .visible = true,
    .named = true,
  },
  [sym_sess_version] = {
    .visible = true,
    .named = true,
  },
  [sym_addr_type] = {
    .visible = true,
    .named = true,
  },
  [sym_unicast_address] = {
    .visible = true,
    .named = true,
  },
  [sym_ip] = {
    .visible = true,
    .named = true,
  },
  [sym_message_info] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym__empty_line] = {
    .visible = false,
    .named = true,
  },
  [sym_session_name] = {
    .visible = true,
    .named = true,
  },
  [sym_origin] = {
    .visible = true,
    .named = true,
  },
  [sym_information] = {
    .visible = true,
    .named = true,
  },
  [sym_uri] = {
    .visible = true,
    .named = true,
  },
  [sym_email] = {
    .visible = true,
    .named = true,
  },
  [sym_phone] = {
    .visible = true,
    .named = true,
  },
  [sym_connection] = {
    .visible = true,
    .named = true,
  },
  [sym_bandwidth] = {
    .visible = true,
    .named = true,
  },
  [sym_encryption_key] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_time_description] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat_times] = {
    .visible = true,
    .named = true,
  },
  [sym_timezone_adjustment] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [sym_media] = {
    .visible = true,
    .named = true,
  },
  [sym_media_description] = {
    .visible = true,
    .named = true,
  },
  [sym_media_type] = {
    .visible = true,
    .named = true,
  },
  [sym_port] = {
    .visible = true,
    .named = true,
  },
  [sym_format] = {
    .visible = true,
    .named = true,
  },
  [sym_proto] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_message_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_info_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_info_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_media_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_end = 1,
  field_start = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_end] = "end",
  [field_start] = "start",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_end, 2},
    {field_start, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 8,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 94,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      if (lookahead == ' ') SKIP(0)
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == 'I') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(32);
      if (lookahead == 'a') ADVANCE(10);
      if (lookahead == 'b') ADVANCE(11);
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 'k') ADVANCE(15);
      if (lookahead == 'm') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(19);
      if (lookahead == 's') ADVANCE(20);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(23);
      if (lookahead == 'v') ADVANCE(24);
      if (lookahead == 'z') ADVANCE(25);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(42);
      END_STATE();
    case 2:
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 3:
      if (lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(54);
      END_STATE();
    case 5:
      if (lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(66);
      END_STATE();
    case 6:
      if (lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 7:
      if (lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == '4') ADVANCE(45);
      if (lookahead == '6') ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(33);
      if (lookahead == 'S') ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == 'P') ADVANCE(9);
      END_STATE();
    case 29:
      if (lookahead == 'P') ADVANCE(8);
      END_STATE();
    case 30:
      if (lookahead == 'P') ADVANCE(73);
      END_STATE();
    case 31:
      if (lookahead == 'P') ADVANCE(74);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(29);
      END_STATE();
    case 33:
      if (lookahead == 'V') ADVANCE(30);
      END_STATE();
    case 34:
      if (lookahead == 'V') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '\t') ADVANCE(51);
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(10);
      if (lookahead == 'b') ADVANCE(11);
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 'k') ADVANCE(15);
      if (lookahead == 'm') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(19);
      if (lookahead == 's') ADVANCE(20);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead == 'v') ADVANCE(24);
      if (lookahead == 'z') ADVANCE(25);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_username_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_sess_id_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_nettype);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_IP4);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_IP6);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_ttl);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_v_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_version_token1);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__empty_line_token1);
      if (lookahead == '\t') ADVANCE(51);
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(40);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__empty_line_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_s_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_session_name_token1);
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_session_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_o_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_i_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_u_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_e_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_p_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_c_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_b_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_k_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_a_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_t_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_r_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_z_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_m_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_udp);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RTP_SLASHAVP);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RTP_SLASHSAVP);
      if (lookahead == 'F') ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RTP_SLASHSAVPF);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 38},
  [2] = {.lex_state = 38},
  [3] = {.lex_state = 38},
  [4] = {.lex_state = 38},
  [5] = {.lex_state = 38},
  [6] = {.lex_state = 38},
  [7] = {.lex_state = 38},
  [8] = {.lex_state = 38},
  [9] = {.lex_state = 38},
  [10] = {.lex_state = 38},
  [11] = {.lex_state = 38},
  [12] = {.lex_state = 38},
  [13] = {.lex_state = 38},
  [14] = {.lex_state = 38},
  [15] = {.lex_state = 38},
  [16] = {.lex_state = 38},
  [17] = {.lex_state = 38},
  [18] = {.lex_state = 38},
  [19] = {.lex_state = 38},
  [20] = {.lex_state = 38},
  [21] = {.lex_state = 38},
  [22] = {.lex_state = 38},
  [23] = {.lex_state = 38},
  [24] = {.lex_state = 38},
  [25] = {.lex_state = 38},
  [26] = {.lex_state = 38},
  [27] = {.lex_state = 38},
  [28] = {.lex_state = 38},
  [29] = {.lex_state = 38},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 38},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [aux_sym_sess_id_token1] = ACTIONS(1),
    [sym_nettype] = ACTIONS(1),
    [anon_sym_IP4] = ACTIONS(1),
    [anon_sym_IP6] = ACTIONS(1),
    [sym_ttl] = ACTIONS(1),
    [anon_sym_v_EQ] = ACTIONS(1),
    [aux_sym_version_token1] = ACTIONS(1),
    [anon_sym_s_EQ] = ACTIONS(1),
    [anon_sym_o_EQ] = ACTIONS(1),
    [anon_sym_i_EQ] = ACTIONS(1),
    [anon_sym_u_EQ] = ACTIONS(1),
    [anon_sym_e_EQ] = ACTIONS(1),
    [anon_sym_p_EQ] = ACTIONS(1),
    [anon_sym_c_EQ] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_b_EQ] = ACTIONS(1),
    [anon_sym_k_EQ] = ACTIONS(1),
    [anon_sym_a_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_t_EQ] = ACTIONS(1),
    [anon_sym_r_EQ] = ACTIONS(1),
    [anon_sym_z_EQ] = ACTIONS(1),
    [aux_sym_time_token1] = ACTIONS(1),
    [anon_sym_m_EQ] = ACTIONS(1),
    [anon_sym_udp] = ACTIONS(1),
    [anon_sym_RTP_SLASHAVP] = ACTIONS(1),
    [anon_sym_RTP_SLASHSAVP] = ACTIONS(1),
    [anon_sym_RTP_SLASHSAVPF] = ACTIONS(1),
  },
  [1] = {
    [sym_message] = STATE(93),
    [sym_message_info] = STATE(31),
    [sym_version] = STATE(6),
    [sym__empty_line] = STATE(28),
    [aux_sym_message_info_repeat1] = STATE(28),
    [sym__newline] = ACTIONS(3),
    [anon_sym_v_EQ] = ACTIONS(5),
    [aux_sym__empty_line_token1] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(13), 1,
      aux_sym__empty_line_token1,
    ACTIONS(15), 1,
      anon_sym_s_EQ,
    ACTIONS(17), 1,
      anon_sym_o_EQ,
    ACTIONS(19), 1,
      anon_sym_i_EQ,
    ACTIONS(21), 1,
      anon_sym_u_EQ,
    ACTIONS(23), 1,
      anon_sym_e_EQ,
    ACTIONS(25), 1,
      anon_sym_p_EQ,
    ACTIONS(27), 1,
      anon_sym_c_EQ,
    ACTIONS(29), 1,
      anon_sym_b_EQ,
    ACTIONS(31), 1,
      anon_sym_k_EQ,
    ACTIONS(33), 1,
      anon_sym_a_EQ,
    ACTIONS(35), 1,
      anon_sym_t_EQ,
    ACTIONS(37), 1,
      anon_sym_r_EQ,
    ACTIONS(39), 1,
      anon_sym_z_EQ,
    ACTIONS(41), 1,
      anon_sym_m_EQ,
    STATE(4), 15,
      sym__empty_line,
      sym_session_name,
      sym_origin,
      sym_information,
      sym_uri,
      sym_email,
      sym_phone,
      sym_connection,
      sym_bandwidth,
      sym_encryption_key,
      sym_attribute,
      sym_time_description,
      sym_repeat_times,
      sym_timezone_adjustment,
      aux_sym_message_info_repeat2,
  [69] = 18,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(13), 1,
      aux_sym__empty_line_token1,
    ACTIONS(15), 1,
      anon_sym_s_EQ,
    ACTIONS(17), 1,
      anon_sym_o_EQ,
    ACTIONS(19), 1,
      anon_sym_i_EQ,
    ACTIONS(21), 1,
      anon_sym_u_EQ,
    ACTIONS(23), 1,
      anon_sym_e_EQ,
    ACTIONS(25), 1,
      anon_sym_p_EQ,
    ACTIONS(27), 1,
      anon_sym_c_EQ,
    ACTIONS(29), 1,
      anon_sym_b_EQ,
    ACTIONS(31), 1,
      anon_sym_k_EQ,
    ACTIONS(33), 1,
      anon_sym_a_EQ,
    ACTIONS(35), 1,
      anon_sym_t_EQ,
    ACTIONS(37), 1,
      anon_sym_r_EQ,
    ACTIONS(39), 1,
      anon_sym_z_EQ,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_m_EQ,
    STATE(4), 15,
      sym__empty_line,
      sym_session_name,
      sym_origin,
      sym_information,
      sym_uri,
      sym_email,
      sym_phone,
      sym_connection,
      sym_bandwidth,
      sym_encryption_key,
      sym_attribute,
      sym_time_description,
      sym_repeat_times,
      sym_timezone_adjustment,
      aux_sym_message_info_repeat2,
  [138] = 18,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      sym__newline,
    ACTIONS(52), 1,
      aux_sym__empty_line_token1,
    ACTIONS(55), 1,
      anon_sym_s_EQ,
    ACTIONS(58), 1,
      anon_sym_o_EQ,
    ACTIONS(61), 1,
      anon_sym_i_EQ,
    ACTIONS(64), 1,
      anon_sym_u_EQ,
    ACTIONS(67), 1,
      anon_sym_e_EQ,
    ACTIONS(70), 1,
      anon_sym_p_EQ,
    ACTIONS(73), 1,
      anon_sym_c_EQ,
    ACTIONS(76), 1,
      anon_sym_b_EQ,
    ACTIONS(79), 1,
      anon_sym_k_EQ,
    ACTIONS(82), 1,
      anon_sym_a_EQ,
    ACTIONS(85), 1,
      anon_sym_t_EQ,
    ACTIONS(88), 1,
      anon_sym_r_EQ,
    ACTIONS(91), 1,
      anon_sym_z_EQ,
    ACTIONS(94), 1,
      anon_sym_m_EQ,
    STATE(4), 15,
      sym__empty_line,
      sym_session_name,
      sym_origin,
      sym_information,
      sym_uri,
      sym_email,
      sym_phone,
      sym_connection,
      sym_bandwidth,
      sym_encryption_key,
      sym_attribute,
      sym_time_description,
      sym_repeat_times,
      sym_timezone_adjustment,
      aux_sym_message_info_repeat2,
  [207] = 16,
    ACTIONS(13), 1,
      aux_sym__empty_line_token1,
    ACTIONS(15), 1,
      anon_sym_s_EQ,
    ACTIONS(17), 1,
      anon_sym_o_EQ,
    ACTIONS(19), 1,
      anon_sym_i_EQ,
    ACTIONS(21), 1,
      anon_sym_u_EQ,
    ACTIONS(23), 1,
      anon_sym_e_EQ,
    ACTIONS(25), 1,
      anon_sym_p_EQ,
    ACTIONS(27), 1,
      anon_sym_c_EQ,
    ACTIONS(29), 1,
      anon_sym_b_EQ,
    ACTIONS(31), 1,
      anon_sym_k_EQ,
    ACTIONS(33), 1,
      anon_sym_a_EQ,
    ACTIONS(35), 1,
      anon_sym_t_EQ,
    ACTIONS(37), 1,
      anon_sym_r_EQ,
    ACTIONS(39), 1,
      anon_sym_z_EQ,
    ACTIONS(96), 1,
      sym__newline,
    STATE(3), 15,
      sym__empty_line,
      sym_session_name,
      sym_origin,
      sym_information,
      sym_uri,
      sym_email,
      sym_phone,
      sym_connection,
      sym_bandwidth,
      sym_encryption_key,
      sym_attribute,
      sym_time_description,
      sym_repeat_times,
      sym_timezone_adjustment,
      aux_sym_message_info_repeat2,
  [270] = 16,
    ACTIONS(13), 1,
      aux_sym__empty_line_token1,
    ACTIONS(15), 1,
      anon_sym_s_EQ,
    ACTIONS(17), 1,
      anon_sym_o_EQ,
    ACTIONS(19), 1,
      anon_sym_i_EQ,
    ACTIONS(21), 1,
      anon_sym_u_EQ,
    ACTIONS(23), 1,
      anon_sym_e_EQ,
    ACTIONS(25), 1,
      anon_sym_p_EQ,
    ACTIONS(27), 1,
      anon_sym_c_EQ,
    ACTIONS(29), 1,
      anon_sym_b_EQ,
    ACTIONS(31), 1,
      anon_sym_k_EQ,
    ACTIONS(33), 1,
      anon_sym_a_EQ,
    ACTIONS(35), 1,
      anon_sym_t_EQ,
    ACTIONS(37), 1,
      anon_sym_r_EQ,
    ACTIONS(39), 1,
      anon_sym_z_EQ,
    ACTIONS(98), 1,
      sym__newline,
    STATE(2), 15,
      sym__empty_line,
      sym_session_name,
      sym_origin,
      sym_information,
      sym_uri,
      sym_email,
      sym_phone,
      sym_connection,
      sym_bandwidth,
      sym_encryption_key,
      sym_attribute,
      sym_time_description,
      sym_repeat_times,
      sym_timezone_adjustment,
      aux_sym_message_info_repeat2,
  [333] = 2,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 16,
      sym__newline,
      aux_sym__empty_line_token1,
      anon_sym_s_EQ,
      anon_sym_o_EQ,
      anon_sym_i_EQ,
      anon_sym_u_EQ,
      anon_sym_e_EQ,
      anon_sym_p_EQ,
      anon_sym_c_EQ,
      anon_sym_b_EQ,
      anon_sym_k_EQ,
      anon_sym_a_EQ,
      anon_sym_t_EQ,
      anon_sym_r_EQ,
      anon_sym_z_EQ,
      anon_sym_m_EQ,
  [355] = 2,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 16,
      sym__newline,
      aux_sym__empty_line_token1,
      anon_sym_s_EQ,
      anon_sym_o_EQ,
      anon_sym_i_EQ,
      anon_sym_u_EQ,
      anon_sym_e_EQ,
      anon_sym_p_EQ,
      anon_sym_c_EQ,
      anon_sym_b_EQ,
      anon_sym_k_EQ,
      anon_sym_a_EQ,
      anon_sym_t_EQ,
      anon_sym_r_EQ,
      anon_sym_z_EQ,
      anon_sym_m_EQ,
  [377] = 2,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 16,
      sym__newline,
      aux_sym__empty_line_token1,
      anon_sym_s_EQ,
      anon_sym_o_EQ,
      anon_sym_i_EQ,
      anon_sym_u_EQ,
      anon_sym_e_EQ,
      anon_sym_p_EQ,
      anon_sym_c_EQ,
      anon_sym_b_EQ,
      anon_sym_k_EQ,
      anon_sym_a_EQ,
      anon_sym_t_EQ,
      anon_sym_r_EQ,
      anon_sym_z_EQ,
      anon_sym_m_EQ,
  [399] = 2,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(114), 16,
      sym__newline,
      aux_sym__empty_line_token1,
      anon_sym_s_EQ,
      anon_sym_o_EQ,
      anon_sym_i_EQ,
      anon_sym_u_EQ,
      anon_sym_e_EQ,
      anon_sym_p_EQ,
      anon_sym_c_EQ,
      anon_sym_b_EQ,
      anon_sym_k_EQ,
      anon_sym_a_EQ,
      anon_sym_t_EQ,
      anon_sym_r_EQ,
      anon_sym_z_EQ,
      anon_sym_m_EQ,
  [421] = 2,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 16,
      sym__newline,
      aux_sym__empty_line_token1,
      anon_sym_s_EQ,
      anon_sym_o_EQ,
      anon_sym_i_EQ,
      anon_sym_u_EQ,
      anon_sym_e_EQ,
      anon_sym_p_EQ,
      anon_sym_c_EQ,
      anon_sym_b_EQ,
      anon_sym_k_EQ,
      anon_sym_a_EQ,
      anon_sym_t_EQ,
      anon_sym_r_EQ,
      anon_sym_z_EQ,
      anon_sym_m_EQ,
  [443] = 2,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 16,
      sym__newline,
      aux_sym__empty_line_token1,
      anon_sym_s_EQ,
      anon_sym_o_EQ,
      anon_sym_i_EQ,
      anon_sym_u_EQ,
      anon_sym_e_EQ,
      anon_sym_p_EQ,
      anon_sym_c_EQ,
      anon_sym_b_EQ,
      anon_sym_k_EQ,
      anon_sym_a_EQ,
      anon_sym_t_EQ,
      anon_sym_r_EQ,
      anon_sym_z_EQ,
      anon_sym_m_EQ,
  [465] = 2,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 16,
      sym__newline,
      aux_sym__empty_line_token1,
      anon_sym_s_EQ,
      anon_sym_o_EQ,
      anon_sym_i_EQ,
      anon_sym_u_EQ,
      anon_sym_e_EQ,
      anon_sym_p_EQ,
      anon_sym_c_EQ,
      anon_sym_b_EQ,
      anon_sym_k_EQ,
      anon_sym_a_EQ,
      anon_sym_t_EQ,
      anon_sym_r_EQ,
      anon_sym_z_EQ,
      anon_sym_m_EQ,
  [487] = 2,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 16,
      sym__newline,
      aux_sym__empty_line_token1,
      anon_sym_s_EQ,
      anon_sym_o_EQ,
      anon_sym_i_EQ,
      anon_sym_u_EQ,
      anon_sym_e_EQ,
      anon_sym_p_EQ,
      anon_sym_c_EQ,
      anon_sym_b_EQ,
      anon_sym_k_EQ,
      anon_sym_a_EQ,
      anon_sym_t_EQ,
      anon_sym_r_EQ,
      anon_sym_z_EQ,
      anon_sym_m_EQ,
  [509] = 2,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 16,
      sym__newline,
      aux_sym__empty_line_token1,
      anon_sym_s_EQ,
      anon_sym_o_EQ,
      anon_sym_i_EQ,
      anon_sym_u_EQ,
      anon_sym_e_EQ,
      anon_sym_p_EQ,
      anon_sym_c_EQ,
      anon_sym_b_EQ,
      anon_sym_k_EQ,
      anon_sym_a_EQ,
      anon_sym_t_EQ,
      anon_sym_r_EQ,
      anon_sym_z_EQ,
      anon_sym_m_EQ,
  [531] = 2,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 16,
      sym__newline,
      aux_sym__empty_line_token1,
      anon_sym_s_EQ,
      anon_sym_o_EQ,
      anon_sym_i_EQ,
      anon_sym_u_EQ,
      anon_sym_e_EQ,
      anon_sym_p_EQ,
      anon_sym_c_EQ,
      anon_sym_b_EQ,
      anon_sym_k_EQ,
      anon_sym_a_EQ,
      anon_sym_t_EQ,
      anon_sym_r_EQ,
      anon_sym_z_EQ,
      anon_sym_m_EQ,
  [553] = 2,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 16,
      sym__newline,
      aux_sym__empty_line_token1,
      anon_sym_s_EQ,
      anon_sym_o_EQ,
      anon_sym_i_EQ,
      anon_sym_u_EQ,
      anon_sym_e_EQ,
      anon_sym_p_EQ,
      anon_sym_c_EQ,
      anon_sym_b_EQ,
      anon_sym_k_EQ,
      anon_sym_a_EQ,
      anon_sym_t_EQ,
      anon_sym_r_EQ,
      anon_sym_z_EQ,
      anon_sym_m_EQ,
  [575] = 2,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 16,
      sym__newline,
      aux_sym__empty_line_token1,
      anon_sym_s_EQ,
      anon_sym_o_EQ,
      anon_sym_i_EQ,
      anon_sym_u_EQ,
      anon_sym_e_EQ,
      anon_sym_p_EQ,
      anon_sym_c_EQ,
      anon_sym_b_EQ,
      anon_sym_k_EQ,
      anon_sym_a_EQ,
      anon_sym_t_EQ,
      anon_sym_r_EQ,
      anon_sym_z_EQ,
      anon_sym_m_EQ,
  [597] = 2,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 16,
      sym__newline,
      aux_sym__empty_line_token1,
      anon_sym_s_EQ,
      anon_sym_o_EQ,
      anon_sym_i_EQ,
      anon_sym_u_EQ,
      anon_sym_e_EQ,
      anon_sym_p_EQ,
      anon_sym_c_EQ,
      anon_sym_b_EQ,
      anon_sym_k_EQ,
      anon_sym_a_EQ,
      anon_sym_t_EQ,
      anon_sym_r_EQ,
      anon_sym_z_EQ,
      anon_sym_m_EQ,
  [619] = 2,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 16,
      sym__newline,
      aux_sym__empty_line_token1,
      anon_sym_s_EQ,
      anon_sym_o_EQ,
      anon_sym_i_EQ,
      anon_sym_u_EQ,
      anon_sym_e_EQ,
      anon_sym_p_EQ,
      anon_sym_c_EQ,
      anon_sym_b_EQ,
      anon_sym_k_EQ,
      anon_sym_a_EQ,
      anon_sym_t_EQ,
      anon_sym_r_EQ,
      anon_sym_z_EQ,
      anon_sym_m_EQ,
  [641] = 2,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 16,
      sym__newline,
      aux_sym__empty_line_token1,
      anon_sym_s_EQ,
      anon_sym_o_EQ,
      anon_sym_i_EQ,
      anon_sym_u_EQ,
      anon_sym_e_EQ,
      anon_sym_p_EQ,
      anon_sym_c_EQ,
      anon_sym_b_EQ,
      anon_sym_k_EQ,
      anon_sym_a_EQ,
      anon_sym_t_EQ,
      anon_sym_r_EQ,
      anon_sym_z_EQ,
      anon_sym_m_EQ,
  [663] = 2,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 16,
      sym__newline,
      aux_sym__empty_line_token1,
      anon_sym_s_EQ,
      anon_sym_o_EQ,
      anon_sym_i_EQ,
      anon_sym_u_EQ,
      anon_sym_e_EQ,
      anon_sym_p_EQ,
      anon_sym_c_EQ,
      anon_sym_b_EQ,
      anon_sym_k_EQ,
      anon_sym_a_EQ,
      anon_sym_t_EQ,
      anon_sym_r_EQ,
      anon_sym_z_EQ,
      anon_sym_m_EQ,
  [685] = 10,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 1,
      sym__newline,
    ACTIONS(169), 1,
      aux_sym__empty_line_token1,
    ACTIONS(172), 1,
      anon_sym_i_EQ,
    ACTIONS(175), 1,
      anon_sym_c_EQ,
    ACTIONS(178), 1,
      anon_sym_b_EQ,
    ACTIONS(181), 1,
      anon_sym_k_EQ,
    ACTIONS(184), 1,
      anon_sym_a_EQ,
    ACTIONS(187), 1,
      anon_sym_m_EQ,
    STATE(23), 7,
      sym__empty_line,
      sym_information,
      sym_connection,
      sym_bandwidth,
      sym_encryption_key,
      sym_attribute,
      aux_sym_media_repeat1,
  [722] = 10,
    ACTIONS(13), 1,
      aux_sym__empty_line_token1,
    ACTIONS(19), 1,
      anon_sym_i_EQ,
    ACTIONS(27), 1,
      anon_sym_c_EQ,
    ACTIONS(29), 1,
      anon_sym_b_EQ,
    ACTIONS(31), 1,
      anon_sym_k_EQ,
    ACTIONS(33), 1,
      anon_sym_a_EQ,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 1,
      sym__newline,
    ACTIONS(193), 1,
      anon_sym_m_EQ,
    STATE(25), 7,
      sym__empty_line,
      sym_information,
      sym_connection,
      sym_bandwidth,
      sym_encryption_key,
      sym_attribute,
      aux_sym_media_repeat1,
  [759] = 10,
    ACTIONS(13), 1,
      aux_sym__empty_line_token1,
    ACTIONS(19), 1,
      anon_sym_i_EQ,
    ACTIONS(27), 1,
      anon_sym_c_EQ,
    ACTIONS(29), 1,
      anon_sym_b_EQ,
    ACTIONS(31), 1,
      anon_sym_k_EQ,
    ACTIONS(33), 1,
      anon_sym_a_EQ,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 1,
      sym__newline,
    ACTIONS(199), 1,
      anon_sym_m_EQ,
    STATE(23), 7,
      sym__empty_line,
      sym_information,
      sym_connection,
      sym_bandwidth,
      sym_encryption_key,
      sym_attribute,
      aux_sym_media_repeat1,
  [796] = 1,
    ACTIONS(201), 15,
      sym__newline,
      aux_sym__empty_line_token1,
      anon_sym_s_EQ,
      anon_sym_o_EQ,
      anon_sym_i_EQ,
      anon_sym_u_EQ,
      anon_sym_e_EQ,
      anon_sym_p_EQ,
      anon_sym_c_EQ,
      anon_sym_b_EQ,
      anon_sym_k_EQ,
      anon_sym_a_EQ,
      anon_sym_t_EQ,
      anon_sym_r_EQ,
      anon_sym_z_EQ,
  [814] = 2,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 8,
      sym__newline,
      aux_sym__empty_line_token1,
      anon_sym_i_EQ,
      anon_sym_c_EQ,
      anon_sym_b_EQ,
      anon_sym_k_EQ,
      anon_sym_a_EQ,
      anon_sym_m_EQ,
  [828] = 5,
    ACTIONS(5), 1,
      anon_sym_v_EQ,
    ACTIONS(7), 1,
      aux_sym__empty_line_token1,
    ACTIONS(207), 1,
      sym__newline,
    STATE(5), 1,
      sym_version,
    STATE(29), 2,
      sym__empty_line,
      aux_sym_message_info_repeat1,
  [845] = 4,
    ACTIONS(209), 1,
      sym__newline,
    ACTIONS(212), 1,
      anon_sym_v_EQ,
    ACTIONS(214), 1,
      aux_sym__empty_line_token1,
    STATE(29), 2,
      sym__empty_line,
      aux_sym_message_info_repeat1,
  [859] = 4,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 1,
      anon_sym_m_EQ,
    STATE(24), 1,
      sym_media_description,
    STATE(32), 2,
      sym_media,
      aux_sym_message_repeat1,
  [873] = 4,
    ACTIONS(219), 1,
      anon_sym_m_EQ,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym_media_description,
    STATE(30), 2,
      sym_media,
      aux_sym_message_repeat1,
  [887] = 4,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    ACTIONS(225), 1,
      anon_sym_m_EQ,
    STATE(24), 1,
      sym_media_description,
    STATE(32), 2,
      sym_media,
      aux_sym_message_repeat1,
  [901] = 3,
    ACTIONS(228), 1,
      anon_sym_SLASH,
    ACTIONS(232), 1,
      anon_sym_RTP_SLASHSAVP,
    ACTIONS(230), 3,
      anon_sym_udp,
      anon_sym_RTP_SLASHAVP,
      anon_sym_RTP_SLASHSAVPF,
  [913] = 3,
    ACTIONS(236), 1,
      anon_sym_RTP_SLASHSAVP,
    STATE(49), 1,
      sym_proto,
    ACTIONS(234), 3,
      anon_sym_udp,
      anon_sym_RTP_SLASHAVP,
      anon_sym_RTP_SLASHSAVPF,
  [925] = 2,
    ACTIONS(240), 1,
      anon_sym_RTP_SLASHSAVP,
    ACTIONS(238), 3,
      anon_sym_udp,
      anon_sym_RTP_SLASHAVP,
      anon_sym_RTP_SLASHSAVPF,
  [934] = 2,
    STATE(41), 1,
      sym_addr_type,
    ACTIONS(242), 2,
      anon_sym_IP4,
      anon_sym_IP6,
  [942] = 3,
    ACTIONS(244), 1,
      aux_sym_username_token1,
    STATE(90), 1,
      sym_unicast_address,
    STATE(91), 1,
      sym_ip,
  [952] = 1,
    ACTIONS(106), 3,
      sym__newline,
      anon_sym_v_EQ,
      aux_sym__empty_line_token1,
  [958] = 2,
    STATE(37), 1,
      sym_addr_type,
    ACTIONS(242), 2,
      anon_sym_IP4,
      anon_sym_IP6,
  [966] = 2,
    ACTIONS(246), 1,
      aux_sym_time_token1,
    STATE(34), 1,
      sym_port,
  [973] = 2,
    ACTIONS(244), 1,
      aux_sym_username_token1,
    STATE(51), 1,
      sym_ip,
  [980] = 2,
    ACTIONS(248), 1,
      aux_sym_sess_id_token1,
    STATE(43), 1,
      sym_sess_id,
  [987] = 2,
    ACTIONS(250), 1,
      aux_sym_sess_id_token1,
    STATE(74), 1,
      sym_sess_version,
  [994] = 2,
    ACTIONS(252), 1,
      aux_sym_session_name_token1,
    STATE(78), 1,
      sym_attribute_value,
  [1001] = 2,
    ACTIONS(254), 1,
      sym__newline,
    ACTIONS(256), 1,
      anon_sym_COLON,
  [1008] = 1,
    ACTIONS(258), 2,
      sym__newline,
      aux_sym_time_token1,
  [1013] = 2,
    ACTIONS(260), 1,
      aux_sym_time_token1,
    STATE(67), 1,
      sym_time,
  [1020] = 2,
    ACTIONS(260), 1,
      aux_sym_time_token1,
    STATE(47), 1,
      sym_time,
  [1027] = 2,
    ACTIONS(262), 1,
      aux_sym_time_token1,
    STATE(82), 1,
      sym_format,
  [1034] = 1,
    ACTIONS(264), 2,
      sym__newline,
      anon_sym_SLASH,
  [1039] = 2,
    ACTIONS(266), 1,
      sym__newline,
    ACTIONS(268), 1,
      anon_sym_SLASH,
  [1046] = 2,
    ACTIONS(270), 1,
      aux_sym_username_token1,
    STATE(42), 1,
      sym_username,
  [1053] = 2,
    ACTIONS(272), 1,
      aux_sym_username_token1,
    STATE(40), 1,
      sym_media_type,
  [1060] = 1,
    ACTIONS(274), 1,
      sym__newline,
  [1064] = 1,
    ACTIONS(276), 1,
      aux_sym_sess_id_token1,
  [1068] = 1,
    ACTIONS(278), 1,
      sym__newline,
  [1072] = 1,
    ACTIONS(280), 1,
      aux_sym_version_token1,
  [1076] = 1,
    ACTIONS(282), 1,
      sym__newline,
  [1080] = 1,
    ACTIONS(284), 1,
      sym__newline,
  [1084] = 1,
    ACTIONS(286), 1,
      sym__newline,
  [1088] = 1,
    ACTIONS(288), 1,
      aux_sym_username_token1,
  [1092] = 1,
    ACTIONS(290), 1,
      sym__newline,
  [1096] = 1,
    ACTIONS(292), 1,
      sym__newline,
  [1100] = 1,
    ACTIONS(294), 1,
      sym__newline,
  [1104] = 1,
    ACTIONS(296), 1,
      aux_sym_sess_id_token1,
  [1108] = 1,
    ACTIONS(298), 1,
      sym__newline,
  [1112] = 1,
    ACTIONS(300), 1,
      sym__newline,
  [1116] = 1,
    ACTIONS(302), 1,
      aux_sym_time_token1,
  [1120] = 1,
    ACTIONS(304), 1,
      aux_sym_session_name_token1,
  [1124] = 1,
    ACTIONS(306), 1,
      aux_sym_time_token1,
  [1128] = 1,
    ACTIONS(308), 1,
      aux_sym_time_token1,
  [1132] = 1,
    ACTIONS(310), 1,
      aux_sym_session_name_token1,
  [1136] = 1,
    ACTIONS(312), 1,
      sym_nettype,
  [1140] = 1,
    ACTIONS(314), 1,
      sym_nettype,
  [1144] = 1,
    ACTIONS(316), 1,
      sym_attribute_name,
  [1148] = 1,
    ACTIONS(318), 1,
      aux_sym_session_name_token1,
  [1152] = 1,
    ACTIONS(320), 1,
      sym__newline,
  [1156] = 1,
    ACTIONS(322), 1,
      sym__newline,
  [1160] = 1,
    ACTIONS(324), 1,
      aux_sym_session_name_token1,
  [1164] = 1,
    ACTIONS(326), 1,
      sym_nettype,
  [1168] = 1,
    ACTIONS(328), 1,
      sym__newline,
  [1172] = 1,
    ACTIONS(330), 1,
      sym__newline,
  [1176] = 1,
    ACTIONS(332), 1,
      aux_sym_session_name_token1,
  [1180] = 1,
    ACTIONS(334), 1,
      aux_sym_session_name_token1,
  [1184] = 1,
    ACTIONS(336), 1,
      sym_ttl,
  [1188] = 1,
    ACTIONS(338), 1,
      aux_sym_session_name_token1,
  [1192] = 1,
    ACTIONS(340), 1,
      aux_sym_session_name_token1,
  [1196] = 1,
    ACTIONS(342), 1,
      aux_sym_session_name_token1,
  [1200] = 1,
    ACTIONS(344), 1,
      sym__newline,
  [1204] = 1,
    ACTIONS(346), 1,
      sym__newline,
  [1208] = 1,
    ACTIONS(348), 1,
      sym__newline,
  [1212] = 1,
    ACTIONS(350), 1,
      sym__newline,
  [1216] = 1,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
  [1220] = 1,
    ACTIONS(354), 1,
      sym__newline,
  [1224] = 1,
    ACTIONS(356), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 69,
  [SMALL_STATE(4)] = 138,
  [SMALL_STATE(5)] = 207,
  [SMALL_STATE(6)] = 270,
  [SMALL_STATE(7)] = 333,
  [SMALL_STATE(8)] = 355,
  [SMALL_STATE(9)] = 377,
  [SMALL_STATE(10)] = 399,
  [SMALL_STATE(11)] = 421,
  [SMALL_STATE(12)] = 443,
  [SMALL_STATE(13)] = 465,
  [SMALL_STATE(14)] = 487,
  [SMALL_STATE(15)] = 509,
  [SMALL_STATE(16)] = 531,
  [SMALL_STATE(17)] = 553,
  [SMALL_STATE(18)] = 575,
  [SMALL_STATE(19)] = 597,
  [SMALL_STATE(20)] = 619,
  [SMALL_STATE(21)] = 641,
  [SMALL_STATE(22)] = 663,
  [SMALL_STATE(23)] = 685,
  [SMALL_STATE(24)] = 722,
  [SMALL_STATE(25)] = 759,
  [SMALL_STATE(26)] = 796,
  [SMALL_STATE(27)] = 814,
  [SMALL_STATE(28)] = 828,
  [SMALL_STATE(29)] = 845,
  [SMALL_STATE(30)] = 859,
  [SMALL_STATE(31)] = 873,
  [SMALL_STATE(32)] = 887,
  [SMALL_STATE(33)] = 901,
  [SMALL_STATE(34)] = 913,
  [SMALL_STATE(35)] = 925,
  [SMALL_STATE(36)] = 934,
  [SMALL_STATE(37)] = 942,
  [SMALL_STATE(38)] = 952,
  [SMALL_STATE(39)] = 958,
  [SMALL_STATE(40)] = 966,
  [SMALL_STATE(41)] = 973,
  [SMALL_STATE(42)] = 980,
  [SMALL_STATE(43)] = 987,
  [SMALL_STATE(44)] = 994,
  [SMALL_STATE(45)] = 1001,
  [SMALL_STATE(46)] = 1008,
  [SMALL_STATE(47)] = 1013,
  [SMALL_STATE(48)] = 1020,
  [SMALL_STATE(49)] = 1027,
  [SMALL_STATE(50)] = 1034,
  [SMALL_STATE(51)] = 1039,
  [SMALL_STATE(52)] = 1046,
  [SMALL_STATE(53)] = 1053,
  [SMALL_STATE(54)] = 1060,
  [SMALL_STATE(55)] = 1064,
  [SMALL_STATE(56)] = 1068,
  [SMALL_STATE(57)] = 1072,
  [SMALL_STATE(58)] = 1076,
  [SMALL_STATE(59)] = 1080,
  [SMALL_STATE(60)] = 1084,
  [SMALL_STATE(61)] = 1088,
  [SMALL_STATE(62)] = 1092,
  [SMALL_STATE(63)] = 1096,
  [SMALL_STATE(64)] = 1100,
  [SMALL_STATE(65)] = 1104,
  [SMALL_STATE(66)] = 1108,
  [SMALL_STATE(67)] = 1112,
  [SMALL_STATE(68)] = 1116,
  [SMALL_STATE(69)] = 1120,
  [SMALL_STATE(70)] = 1124,
  [SMALL_STATE(71)] = 1128,
  [SMALL_STATE(72)] = 1132,
  [SMALL_STATE(73)] = 1136,
  [SMALL_STATE(74)] = 1140,
  [SMALL_STATE(75)] = 1144,
  [SMALL_STATE(76)] = 1148,
  [SMALL_STATE(77)] = 1152,
  [SMALL_STATE(78)] = 1156,
  [SMALL_STATE(79)] = 1160,
  [SMALL_STATE(80)] = 1164,
  [SMALL_STATE(81)] = 1168,
  [SMALL_STATE(82)] = 1172,
  [SMALL_STATE(83)] = 1176,
  [SMALL_STATE(84)] = 1180,
  [SMALL_STATE(85)] = 1184,
  [SMALL_STATE(86)] = 1188,
  [SMALL_STATE(87)] = 1192,
  [SMALL_STATE(88)] = 1196,
  [SMALL_STATE(89)] = 1200,
  [SMALL_STATE(90)] = 1204,
  [SMALL_STATE(91)] = 1208,
  [SMALL_STATE(92)] = 1212,
  [SMALL_STATE(93)] = 1216,
  [SMALL_STATE(94)] = 1220,
  [SMALL_STATE(95)] = 1224,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_info, 2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_info, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_info, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_info, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_info_repeat2, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_info_repeat2, 2), SHIFT_REPEAT(4),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_info_repeat2, 2), SHIFT_REPEAT(95),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_info_repeat2, 2), SHIFT_REPEAT(88),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_info_repeat2, 2), SHIFT_REPEAT(52),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_info_repeat2, 2), SHIFT_REPEAT(87),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_info_repeat2, 2), SHIFT_REPEAT(86),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_info_repeat2, 2), SHIFT_REPEAT(84),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_info_repeat2, 2), SHIFT_REPEAT(83),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_info_repeat2, 2), SHIFT_REPEAT(80),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_info_repeat2, 2), SHIFT_REPEAT(79),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_info_repeat2, 2), SHIFT_REPEAT(76),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_info_repeat2, 2), SHIFT_REPEAT(75),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_info_repeat2, 2), SHIFT_REPEAT(48),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_info_repeat2, 2), SHIFT_REPEAT(72),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_info_repeat2, 2), SHIFT_REPEAT(69),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_info_repeat2, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_email, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_email, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_session_name, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_session_name, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bandwidth, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bandwidth, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encryption_key, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_encryption_key, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 5),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 5),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 5),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uri, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_description, 4, .production_id = 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time_description, 4, .production_id = 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin, 8),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_origin, 8),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 7),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 7),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phone, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phone, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_information, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_information, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone_adjustment, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone_adjustment, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_times, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_times, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_media_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_media_repeat1, 2), SHIFT_REPEAT(23),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_media_repeat1, 2), SHIFT_REPEAT(95),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_media_repeat1, 2), SHIFT_REPEAT(87),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_media_repeat1, 2), SHIFT_REPEAT(80),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_media_repeat1, 2), SHIFT_REPEAT(79),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_media_repeat1, 2), SHIFT_REPEAT(76),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_media_repeat1, 2), SHIFT_REPEAT(75),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_media_repeat1, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_description, 6),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_description, 6),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_info_repeat1, 2), SHIFT_REPEAT(29),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_info_repeat1, 2),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_info_repeat1, 2), SHIFT_REPEAT(94),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(53),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_port, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_port, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ip, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sess_id, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr_type, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_username, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_type, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proto, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sess_version, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicast_address, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [352] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sdp(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
