#pragma once

/* Sử dụng chân GP0 và GP1 cho 2 phím */
#define DIRECT_PINS { \
    { GP0, GP1 } \
}

/* ID duy nhất cho Vial */
#define VIAL_KEYBOARD_UID {0x41, 0x4E, 0x54, 0x41, 0x52, 0x49, 0x01, 0x02}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }
