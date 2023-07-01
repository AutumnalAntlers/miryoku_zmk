// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#include <behaviors.dtsi>
#include <dt-bindings/zmk/keys.h>

/ {
  macros {
      macro_lb_r2_rm: macro_lb_r2_rm {
        compatible = "zmk,behavior-macro";
        label = "ZM_macro_lb_r2_rm";
        #binding-cells = <0>;
        wait-ms = <30>;
        tap-ms = <40>;
        bindings = <&kp L &kp L>;
      };
      macro_rb_r4_im: macro_rb_r4_im {
        compatible = "zmk,behavior-macro";
        label = "ZM_macro_rb_r4_im";
        #binding-cells = <0>;
        wait-ms = <30>;
        tap-ms = <40>;
        bindings = <&kp B>;
      };
  };
  combos {
      compatible = "zmk,combos";
      combo_lb_r2_rm {
          timeout-ms = <50>;
          layers = <0>;
          key-positions = <38 39>;
          bindings = <&macro_lb_r2_rm>;
      };
      combo_rb_r4_im {
          timeout-ms = <50>;
          layers = <0>;
          key-positions = <19 20>;
          bindings = <&macro_rb_r4_im>;
      };
  };
};

#define MIRYOKU_LAYER_BASE \
/* ╭───────────────────┬───────────────────┬───────────────────┬───────────────────┬───────────────────╮ ╭───────────────────┬───────────────────┬───────────────────┬───────────────────┬────────────────────╮ */ \
   &kp V,              &kp M,              &kp L,              &kp C,              &kp P,                &kp B,              &key_repeat,        &kp U,              &kp O,              &kp Q,                    \
/* ├───────────────────┼───────────────────┼───────────────────┼───────────────────┼───────────────────┤ ├───────────────────┼───────────────────┼───────────────────┼───────────────────┼────────────────────┤ */ \
   U_LT(U_SYM, S),     U_MT(LALT, T),      U_MT(LCTRL, R),     U_MT(LSHFT, D),     &kp Y,                &kp F,              U_MT(LSHFT, N),     U_MT(LCTRL, E),     U_MT(RALT, A),      U_LT(U_MOUSE, I),         \
/* ├───────────────────┼───────────────────┼───────────────────┼───────────────────┼───────────────────┤ ├───────────────────┼───────────────────┼───────────────────┼───────────────────┼────────────────────┤ */ \
   U_MT(LGUI, X),      U_LT(U_BUTTON, K),  &kp J,              &kp G,              &kp W,                &kp Z,              &kp H,              &kp COMMA,          U_LT(U_BUTTON, DOT),U_MT(LGUI, DOT /* TMP: WAS: SEMI */ ),         \
/* └───────────────────┴───────────────────┼───────────────────┼───────────────────┼───────────────────┤ ├───────────────────┼───────────────────┼───────────────────┼───────────────────┴────────────────────┤ */ \
   U_NP,U_NP,                              U_LT(U_FUN, DEL),   U_LT(U_NUM, BSPC),  U_LT(U_SYM, RET),     U_LT(U_MOUSE, TAB), U_LT(U_NAV, SPACE), U_LT(U_MEDIA, ESC),                                  U_NP,U_NP    \
/*                                         ╰───────────────────┴───────────────────┴───────────────────╯ ╰───────────────────┴───────────────────┴───────────────────╯                                          */

