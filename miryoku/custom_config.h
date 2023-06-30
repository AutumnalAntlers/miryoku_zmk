// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#include <behaviors.dtsi>
#include <dt-bindings/zmk/keys.h>

/ {
  macros {
      dbl_l: dbl_l {
        compatible = "zmk,behavior-macro";
        label = "ZM_dbl_l";
        #binding-cells = <0>;
        wait-ms = <30>;
        tap-ms = <40>;
        bindings = <&kp L &kp L>;
      };
  };
  combos {
      compatible = "zmk,combos";
      combo_l_mr {
          timeout-ms = <50>;
          layers = <0>;
          key-positions = <38 39>;
          bindings = <&dbl_l>;
      };
  };
};
