// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

/ {
    macros {
        ZMK_MACRO(dbl_l,
            wait-ms = <30>;
            tap-ms = <40>;
            bindings = <&kp l &kp l>;
        )
    };
    combos {
        compatible = "zmk,combos";
        combo_l_mr {
            // timeout-ms = <50>;
            layers = <0>;
            key-positions = <22 23>;
            bindings = <&dbl_l>;
        };
    };
};
