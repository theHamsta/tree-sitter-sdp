module.exports = grammar({
    name: 'sdp',

    extras: _ => [
        /[ ]+/
    ],

    rules: {
        message: $ => seq($.message_info, repeat($.media)),

        _newline: _ => /[\r\n]+/,

        username: _ => /\S+/,
        sess_id: _ => /[0-9]+/,
        sess_version: _ => /[0-9]+/,
        nettype: _ => "IN",
        addr_type: _ => choice("IP4", "IP6"),
        unicast_address: $ => $.ip,
        ip: _ => /\S+/,
        ttl: _ => /\d{3}/,
        //choice(
        //$.host_domain,
        //$.ip4_addr,
        //$.ip6_addr),

        //// https://stackoverflow.com/questions/53497/regular-expression-that-matches-valid-ipv6-addresses
        //ip4_addr: _ => /((25[0-5]|(2[0-4]|1{0,1}[0-9]){0,1}[0-9])\.){3,3}(25[0-5]|(2[0-4]|1{0,1}[0-9]){0,1}[0-9])/,
        //ip6_addr: _ => /( ([0-9a-fA-F]{1,4}:){7,7}[0-9a-fA-F]{1,4}| ([0-9a-fA-F]{1,4}:){1,7}:|([0-9a-fA-F]{1,4}:){1,6}:[0-9a-fA-F]{1,4}|([0-9a-fA-F]{1,4}:){1,5}(:[0-9a-fA-F]{1,4}){1,2}|  ([0-9a-fA-F]{1,4}:){1,4}(:[0-9a-fA-F]{1,4}){1,3}|  ([0-9a-fA-F]{1,4}:){1,3}(:[0-9a-fA-F]{1,4}){1,4}|  ([0-9a-fA-F]{1,4}:){1,2}(:[0-9a-fA-F]{1,4}){1,5}|  [0-9a-fA-F]{1,4}:((:[0-9a-fA-F]{1,4}){1,6})|       :((:[0-9a-fA-F]{1,4}){1,7}|:)|                     fe80:(:[0-9a-fA-F]{0,4}){0,4}%[0-9a-zA-Z]{1,}|     ::(ffff(:0{1,4}){0,1}:){0,1} ((25[0-5]|(2[0-4]|1{0,1}[0-9]){0,1}[0-9])\.){3,3} (25[0-5]|(2[0-4]|1{0,1}[0-9]){0,1}[0-9])|          ([0-9a-fA-F]{1,4}:){1,4}: ((25[0-5]|(2[0-4]|1{0,1}[0-9]){0,1}[0-9])\.){3,3} (25[0-5]|(2[0-4]|1{0,1}[0-9]){0,1}[0-9]))/,


        message_info: $ => seq(repeat($._empty_line), $.version,
            repeat1(choice(
                $._empty_line,
                $.session_name,
                $.origin,
                $.information,
                $.uri,
                $.email,
                $.phone,
                $.connection,
                $.bandwidth,
                $.encryption_key,
                $.time_description, $.repeat_times, $.timezone_adjustment,
                $.attribute,
            ))),

        version: $ => seq("v=", /\d/, $._newline),
        _empty_line: $ => seq(optional(/\s+/), $._newline),
        session_name: $ => seq("s=", /[^\r\n]+/, $._newline),
        origin: $ => seq("o=", $.username, $.sess_id, $.sess_version, $.nettype, $.addr_type, $.unicast_address, $._newline),
        information: $ => seq("i=", /[^\r\n]+/, $._newline),
        uri: $ => seq("u=", /[^\r\n]+/, $._newline),
        email: $ => seq("e=", /[^\r\n]+/, $._newline),
        phone: $ => seq("p=", /[^\r\n]+/, $._newline),
        connection: $ => seq("c=", $.nettype, $.addr_type, $.ip, optional(seq("/", $.ttl)), $._newline),
        bandwidth: $ => seq("b=", /[^\r\n]+/, $._newline),
        encryption_key: $ => seq("k=", /[^\r\n]+/, $._newline),

        attribute: $ => seq("a=", $.attribute_name, optional(seq(":", $.attribute_value)), $._newline),
        attribute_name: _ => /[^ :]+/,
        attribute_value: _ => /[^\r\n]+/,

        time_description: $ => seq("t=", field("start", $.time), field("end", $.time), $._newline),
        repeat_times: $ => seq("r=", /[^\r\n]+/, $._newline),
        timezone_adjustment: $ => seq("z=", /[^\r\n]+/, $._newline),
        time: _ => /\d+/,

        media: $ => seq($.media_description, repeat(choice(
            $._empty_line,
            $.information,
            $.connection,
            $.bandwidth,
            $.encryption_key,
            $.attribute,
        ))),
        media_description: $ => seq("m=", $.media_type, $.port, $.proto, $.format, $._newline),
        media_type: _ => /\S+/,
        port: _ => seq(/\d+/,optional(seq("/", /\d+/))),
        format: _ => /\S+/,
        proto: _ => choice("udp", "RTP/AVP", "RTP/SAVP", "RTP/SAVPF"),
        format: _ => /\d+/,
    }
});
