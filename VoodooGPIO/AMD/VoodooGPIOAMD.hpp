//
//  VoodooGPIOAMD.h
//  VoodooGPIO
//
//  Created by Hikaru Chang on 17/12/20.
//  Copyright © 2020 Hikaru Chang. All rights reserved.
//

#include "../VoodooGPIO.hpp"

#ifndef VoodooGPIOAMD_h
#define VoodooGPIOAMD_h

#define AMD_GPIO_PINS_PER_BANK  64

#define AMD_GPIO_PINS_BANK0     63
#define AMD_GPIO_PINS_BANK1     64
#define AMD_GPIO_PINS_BANK2     56
#define AMD_GPIO_PINS_BANK3     32

#define WAKE_INT_MASTER_REG 0xfc
#define EOI_MASK (1 << 29)

#define WAKE_INT_STATUS_REG0 0x2f8
#define WAKE_INT_STATUS_REG1 0x2fc

#define DB_TMR_OUT_OFF            0
#define DB_TMR_OUT_UNIT_OFF        4
#define DB_CNTRL_OFF            5
#define DB_TMR_LARGE_OFF        7
#define LEVEL_TRIG_OFF            8
#define ACTIVE_LEVEL_OFF        9
#define INTERRUPT_ENABLE_OFF        11
#define INTERRUPT_MASK_OFF        12
#define WAKE_CNTRL_OFF_S0I3             13
#define WAKE_CNTRL_OFF_S3               14
#define WAKE_CNTRL_OFF_S4               15
#define PIN_STS_OFF            16
#define DRV_STRENGTH_SEL_OFF        17
#define PULL_UP_SEL_OFF            19
#define PULL_UP_ENABLE_OFF        20
#define PULL_DOWN_ENABLE_OFF        21
#define OUTPUT_VALUE_OFF        22
#define OUTPUT_ENABLE_OFF        23
#define SW_CNTRL_IN_OFF            24
#define SW_CNTRL_EN_OFF            25
#define INTERRUPT_STS_OFF        28
#define WAKE_STS_OFF            29

#define DB_TMR_OUT_MASK    0xFUL
#define DB_CNTRl_MASK    0x3UL
#define ACTIVE_LEVEL_MASK    0x3UL
#define DRV_STRENGTH_SEL_MASK    0x3UL

#define ACTIVE_LEVEL_HIGH    0x0UL
#define ACTIVE_LEVEL_LOW    0x1UL
#define ACTIVE_LEVEL_BOTH    0x2UL

#define DB_TYPE_NO_DEBOUNCE               0x0UL
#define DB_TYPE_PRESERVE_LOW_GLITCH       0x1UL
#define DB_TYPE_PRESERVE_HIGH_GLITCH      0x2UL
#define DB_TYPE_REMOVE_GLITCH             0x3UL

#define EDGE_TRAGGER    0x0UL
#define LEVEL_TRIGGER    0x1UL

#define ACTIVE_HIGH    0x0UL
#define ACTIVE_LOW    0x1UL
#define BOTH_EADGE    0x2UL

#define ENABLE_INTERRUPT    0x1UL
#define DISABLE_INTERRUPT    0x0UL

#define ENABLE_INTERRUPT_MASK    0x0UL
#define DISABLE_INTERRUPT_MASK    0x1UL

#define CLR_INTR_STAT    0x1UL

struct amd_pingroup {
    const char *name;
    const unsigned *pins;
    unsigned npins;
};

struct amd_function {
    const char *name;
    const char * const *groups;
    unsigned ngroups;
};

/* AMD */
static struct pinctrl_pin_desc kerncz_pins[] = {
    PINCTRL_PIN(0, (char *)"GPIO_0"),
    PINCTRL_PIN(1, (char *)"GPIO_1"),
    PINCTRL_PIN(2, (char *)"GPIO_2"),
    PINCTRL_PIN(3, (char *)"GPIO_3"),
    PINCTRL_PIN(4, (char *)"GPIO_4"),
    PINCTRL_PIN(5, (char *)"GPIO_5"),
    PINCTRL_PIN(6, (char *)"GPIO_6"),
    PINCTRL_PIN(7, (char *)"GPIO_7"),
    PINCTRL_PIN(8, (char *)"GPIO_8"),
    PINCTRL_PIN(9, (char *)"GPIO_9"),
    PINCTRL_PIN(10, (char *)"GPIO_10"),
    PINCTRL_PIN(11, (char *)"GPIO_11"),
    PINCTRL_PIN(12, (char *)"GPIO_12"),
    PINCTRL_PIN(13, (char *)"GPIO_13"),
    PINCTRL_PIN(14, (char *)"GPIO_14"),
    PINCTRL_PIN(15, (char *)"GPIO_15"),
    PINCTRL_PIN(16, (char *)"GPIO_16"),
    PINCTRL_PIN(17, (char *)"GPIO_17"),
    PINCTRL_PIN(18, (char *)"GPIO_18"),
    PINCTRL_PIN(19, (char *)"GPIO_19"),
    PINCTRL_PIN(20, (char *)"GPIO_20"),
    PINCTRL_PIN(23, (char *)"GPIO_23"),
    PINCTRL_PIN(24, (char *)"GPIO_24"),
    PINCTRL_PIN(25, (char *)"GPIO_25"),
    PINCTRL_PIN(26, (char *)"GPIO_26"),
    PINCTRL_PIN(39, (char *)"GPIO_39"),
    PINCTRL_PIN(40, (char *)"GPIO_40"),
    PINCTRL_PIN(43, (char *)"GPIO_42"),
    PINCTRL_PIN(46, (char *)"GPIO_46"),
    PINCTRL_PIN(47, (char *)"GPIO_47"),
    PINCTRL_PIN(48, (char *)"GPIO_48"),
    PINCTRL_PIN(49, (char *)"GPIO_49"),
    PINCTRL_PIN(50, (char *)"GPIO_50"),
    PINCTRL_PIN(51, (char *)"GPIO_51"),
    PINCTRL_PIN(52, (char *)"GPIO_52"),
    PINCTRL_PIN(53, (char *)"GPIO_53"),
    PINCTRL_PIN(54, (char *)"GPIO_54"),
    PINCTRL_PIN(55, (char *)"GPIO_55"),
    PINCTRL_PIN(56, (char *)"GPIO_56"),
    PINCTRL_PIN(57, (char *)"GPIO_57"),
    PINCTRL_PIN(58, (char *)"GPIO_58"),
    PINCTRL_PIN(59, (char *)"GPIO_59"),
    PINCTRL_PIN(60, (char *)"GPIO_60"),
    PINCTRL_PIN(61, (char *)"GPIO_61"),
    PINCTRL_PIN(62, (char *)"GPIO_62"),
    PINCTRL_PIN(64, (char *)"GPIO_64"),
    PINCTRL_PIN(65, (char *)"GPIO_65"),
    PINCTRL_PIN(66, (char *)"GPIO_66"),
    PINCTRL_PIN(68, (char *)"GPIO_68"),
    PINCTRL_PIN(69, (char *)"GPIO_69"),
    PINCTRL_PIN(70, (char *)"GPIO_70"),
    PINCTRL_PIN(71, (char *)"GPIO_71"),
    PINCTRL_PIN(72, (char *)"GPIO_72"),
    PINCTRL_PIN(74, (char *)"GPIO_74"),
    PINCTRL_PIN(75, (char *)"GPIO_75"),
    PINCTRL_PIN(76, (char *)"GPIO_76"),
    PINCTRL_PIN(84, (char *)"GPIO_84"),
    PINCTRL_PIN(85, (char *)"GPIO_85"),
    PINCTRL_PIN(86, (char *)"GPIO_86"),
    PINCTRL_PIN(87, (char *)"GPIO_87"),
    PINCTRL_PIN(88, (char *)"GPIO_88"),
    PINCTRL_PIN(89, (char *)"GPIO_89"),
    PINCTRL_PIN(90, (char *)"GPIO_90"),
    PINCTRL_PIN(91, (char *)"GPIO_91"),
    PINCTRL_PIN(92, (char *)"GPIO_92"),
    PINCTRL_PIN(93, (char *)"GPIO_93"),
    PINCTRL_PIN(95, (char *)"GPIO_95"),
    PINCTRL_PIN(96, (char *)"GPIO_96"),
    PINCTRL_PIN(97, (char *)"GPIO_97"),
    PINCTRL_PIN(98, (char *)"GPIO_98"),
    PINCTRL_PIN(99, (char *)"GPIO_99"),
    PINCTRL_PIN(100, (char *)"GPIO_100"),
    PINCTRL_PIN(101, (char *)"GPIO_101"),
    PINCTRL_PIN(102, (char *)"GPIO_102"),
    PINCTRL_PIN(113, (char *)"GPIO_113"),
    PINCTRL_PIN(114, (char *)"GPIO_114"),
    PINCTRL_PIN(115, (char *)"GPIO_115"),
    PINCTRL_PIN(116, (char *)"GPIO_116"),
    PINCTRL_PIN(117, (char *)"GPIO_117"),
    PINCTRL_PIN(118, (char *)"GPIO_118"),
    PINCTRL_PIN(119, (char *)"GPIO_119"),
    PINCTRL_PIN(120, (char *)"GPIO_120"),
    PINCTRL_PIN(121, (char *)"GPIO_121"),
    PINCTRL_PIN(122, (char *)"GPIO_122"),
    PINCTRL_PIN(126, (char *)"GPIO_126"),
    PINCTRL_PIN(129, (char *)"GPIO_129"),
    PINCTRL_PIN(130, (char *)"GPIO_130"),
    PINCTRL_PIN(131, (char *)"GPIO_131"),
    PINCTRL_PIN(132, (char *)"GPIO_132"),
    PINCTRL_PIN(133, (char *)"GPIO_133"),
    PINCTRL_PIN(135, (char *)"GPIO_135"),
    PINCTRL_PIN(136, (char *)"GPIO_136"),
    PINCTRL_PIN(137, (char *)"GPIO_137"),
    PINCTRL_PIN(138, (char *)"GPIO_138"),
    PINCTRL_PIN(139, (char *)"GPIO_139"),
    PINCTRL_PIN(140, (char *)"GPIO_140"),
    PINCTRL_PIN(141, (char *)"GPIO_141"),
    PINCTRL_PIN(142, (char *)"GPIO_142"),
    PINCTRL_PIN(143, (char *)"GPIO_143"),
    PINCTRL_PIN(144, (char *)"GPIO_144"),
    PINCTRL_PIN(145, (char *)"GPIO_145"),
    PINCTRL_PIN(146, (char *)"GPIO_146"),
    PINCTRL_PIN(147, (char *)"GPIO_147"),
    PINCTRL_PIN(148, (char *)"GPIO_148"),
    PINCTRL_PIN(166, (char *)"GPIO_166"),
    PINCTRL_PIN(167, (char *)"GPIO_167"),
    PINCTRL_PIN(168, (char *)"GPIO_168"),
    PINCTRL_PIN(169, (char *)"GPIO_169"),
    PINCTRL_PIN(170, (char *)"GPIO_170"),
    PINCTRL_PIN(171, (char *)"GPIO_171"),
    PINCTRL_PIN(172, (char *)"GPIO_172"),
    PINCTRL_PIN(173, (char *)"GPIO_173"),
    PINCTRL_PIN(174, (char *)"GPIO_174"),
    PINCTRL_PIN(175, (char *)"GPIO_175"),
    PINCTRL_PIN(176, (char *)"GPIO_176"),
    PINCTRL_PIN(177, (char *)"GPIO_177"),
};

static unsigned int i2c0_pins[] = {145, 146};
static unsigned int i2c1_pins[] = {147, 148};
static unsigned int i2c2_pins[] = {113, 114};
static unsigned int i2c3_pins[] = {19, 20};

static unsigned int uart0_pins[] = {135, 136, 137, 138, 139};
static unsigned int uart1_pins[] = {140, 141, 142, 143, 144};

static struct intel_pingroup kerncz_groups[] = {
    PIN_GROUP((char *)"i2c0_grp", i2c0_pins, 2),
    PIN_GROUP((char *)"i2c1_grp", i2c1_pins, 2),
    PIN_GROUP((char *)"i2c2_grp", i2c2_pins, 2),
    PIN_GROUP((char *)"i2c3_grp", i2c3_pins, 2),
    PIN_GROUP((char *)"uart0_grp", uart0_pins, 9),
    PIN_GROUP((char *)"uart1_grp", uart1_pins, 5),
};

static char * const kerncz_i2c0_groups[] = { (char *)"i2c0_grp" };
static char * const kerncz_i2c1_groups[] = { (char *)"i2c1_grp" };
static char * const kerncz_i2c2_groups[] = { (char *)"i2c2_grp" };
static char * const kerncz_i2c3_groups[] = { (char *)"i2c3_grp" };
static char * const kerncz_uart0_groups[] = { (char *)"uart0_grp" };
static char * const kerncz_uart1_groups[] = { (char *)"uart1_grp" };

static struct intel_function kerncz_functions[] = {
    FUNCTION((char *)"i2c0", kerncz_i2c0_groups),
    FUNCTION((char *)"i2c1", kerncz_i2c1_groups),
    FUNCTION((char *)"i2c2", kerncz_i2c2_groups),
    FUNCTION((char *)"i2c3", kerncz_i2c3_groups),
    FUNCTION((char *)"uart0", kerncz_uart0_groups),
    FUNCTION((char *)"uart1", kerncz_uart1_groups),
};

class VoodooGPIOAMD : public VoodooGPIO {
    OSDeclareDefaultStructors(VoodooGPIOAMD);

    bool start(IOService *provider) override;
};

#endif /* VoodooGPIOAMD_h */
