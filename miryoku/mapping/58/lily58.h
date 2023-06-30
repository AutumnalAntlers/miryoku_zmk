// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#include <behaviors.dtsi>

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
          // layers = <0>;
          key-positions = <22 23>;
          bindings = <&dbl_l>;
      };
  };
};

#if !defined (MIRYOKU_LAYOUTMAPPING_LILY58)

#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_LILY58( \
     K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39 \
) \
XXX  XXX  XXX  XXX  XXX  XXX                 XXX  XXX  XXX  XXX  XXX  XXX \
XXX  K00  K01  K02  K03  K04                 K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  K14                 K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  K24  XXX       XXX  K25  K26  K27  K28  K29  XXX \
               XXX  K32  K33  K34       K35  K36  K37  XXX

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 52 53
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 54 55

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_LILY58
