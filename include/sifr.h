/*
───────────────────────────────────────────────
  SIFR TABLE — Sovereign Interface for Arabic Representation
───────────────────────────────────────────────
  Version: 0.0.1
  Author : Madyan Al-Hajebi
  Purpose:
    Defines the sovereign 8-bit domain mapping for Arabic symbols.
    Sifr sits below ASCII and provides deterministic slots for Arabic
    letters, marks, ligatures, and control codes.
───────────────────────────────────────────────
This document and its contents are provided
**for review and proposal purposes only.**
No reproduction, modification, or distribution
is permitted without explicit written consent
from the author.

*/

#ifndef SIFR_TABLES_H
#define SIFR_TABLES_H

#include <stdint.h>

/* ───────────── Declaration ─────────────
   Sifr (صفر) — Sovereign Interface for Arabic Representation.
   Each value is fixed, semantic, and independent of Unicode.
   Range: 0x00–0xFF
*/

/* ─────────────────────────────
   CONTROL / LOGIC (0x00–0x1F)
───────────────────────────── */
#define SIFR_CONTROL_NULL                      0x00
#define SIFR_CONTROL_START_OF_HEADING          0x01
#define SIFR_CONTROL_START_OF_TEXT             0x02
#define SIFR_CONTROL_END_OF_TEXT               0x03
#define SIFR_CONTROL_END_OF_TRANSMISSION       0x04
#define SIFR_CONTROL_ENQUIRY                   0x05
#define SIFR_CONTROL_ACKNOWLEDGE               0x06
#define SIFR_CONTROL_BELL                      0x07
#define SIFR_CONTROL_BACKSPACE                 0x08
#define SIFR_CONTROL_HORIZONTAL_TAB            0x09
#define SIFR_CONTROL_LINE_FEED                 0x0A
#define SIFR_CONTROL_VERTICAL_TAB              0x0B
#define SIFR_CONTROL_FORM_FEED                 0x0C
#define SIFR_CONTROL_CARRIAGE_RETURN           0x0D
#define SIFR_CONTROL_SHIFT_OUT                 0x0E
#define SIFR_CONTROL_SHIFT_IN                  0x0F
#define SIFR_CONTROL_DATA_LINK_ESCAPE          0x10
#define SIFR_CONTROL_DEVICE_CONTROL_1          0x11
#define SIFR_CONTROL_DEVICE_CONTROL_2          0x12
#define SIFR_CONTROL_DEVICE_CONTROL_3          0x13
#define SIFR_CONTROL_DEVICE_CONTROL_4          0x14
#define SIFR_CONTROL_NEGATIVE_ACKNOWLEDGE      0x15
#define SIFR_CONTROL_SYNCHRONOUS_IDLE          0x16
#define SIFR_CONTROL_END_OF_TRANSMISSION_BLOCK 0x17
#define SIFR_CONTROL_CANCEL                    0x18
#define SIFR_CONTROL_END_OF_MEDIUM             0x19
#define SIFR_CONTROL_SUBSTITUTE                0x1A
#define SIFR_CONTROL_ESCAPE                    0x1B
#define SIFR_CONTROL_FILE_SEPARATOR            0x1C
#define SIFR_CONTROL_GROUP_SEPARATOR           0x1D
#define SIFR_CONTROL_RECORD_SEPARATOR          0x1E
#define SIFR_CONTROL_UNIT_SEPARATOR            0x1F
#define SIFR_CONTROL_DELETE                    0x7F



/* ─────────────────────────────
   ARABIC DIGITS (0xB0–0xB9)
───────────────────────────── */
#define SIFR_DIGIT_ARABIC_ZERO   0xB0  /* 0 */
#define SIFR_DIGIT_ARABIC_ONE    0xB1  /* 1 */
#define SIFR_DIGIT_ARABIC_TWO    0xB2  /* 2 */
#define SIFR_DIGIT_ARABIC_THREE  0xB3  /* 3 */
#define SIFR_DIGIT_ARABIC_FOUR   0xB4  /* 4 */
#define SIFR_DIGIT_ARABIC_FIVE   0xB5  /* 5 */
#define SIFR_DIGIT_ARABIC_SIX    0xB6  /* 6 */
#define SIFR_DIGIT_ARABIC_SEVEN  0xB7  /* 7 */
#define SIFR_DIGIT_ARABIC_EIGHT  0xB8  /* 8 */
#define SIFR_DIGIT_ARABIC_NINE   0xB9  /* 9 */


/* ─────────────────────────────
   ARABIC CORE LETTERS (0x80–0xBF)
───────────────────────────── */
#define SIFR_LETTER_ALIF             0x80
#define SIFR_LETTER_BA               0x81
#define SIFR_LETTER_TA               0x82
#define SIFR_LETTER_THA              0x83
#define SIFR_LETTER_JEEM             0x84
#define SIFR_LETTER_HA               0x85
#define SIFR_LETTER_KHA              0x86
#define SIFR_LETTER_DAL              0x87
#define SIFR_LETTER_THAL             0x88
#define SIFR_LETTER_RA               0x89
#define SIFR_LETTER_ZAY              0x8A
#define SIFR_LETTER_SEEN             0x8B
#define SIFR_LETTER_SHEEN            0x8C
#define SIFR_LETTER_SAD              0x8D
#define SIFR_LETTER_DAD              0x8E
#define SIFR_LETTER_TTA              0x8F
#define SIFR_LETTER_ZZA              0x90
#define SIFR_LETTER_AIN              0x91
#define SIFR_LETTER_GHAIN            0x92
#define SIFR_LETTER_FA               0x93
#define SIFR_LETTER_QAF              0x94
#define SIFR_LETTER_KAF              0x95
#define SIFR_LETTER_LAM              0x96
#define SIFR_LETTER_MEEM             0x97
#define SIFR_LETTER_NOON             0x98
#define SIFR_LETTER_HEH              0x99
#define SIFR_LETTER_WAW              0x9A
#define SIFR_LETTER_YA               0x9B
#define SIFR_LETTER_HAMZA            0x9C
#define SIFR_LETTER_TAMARBUTA        0x9D
#define SIFR_LETTER_ALIF_MADDA       0x9E
#define SIFR_LETTER_ALIF_HAMZA_ABOVE 0x9F
#define SIFR_LETTER_ALIF_HAMZA_BELOW 0xA0
#define SIFR_LETTER_YA_HAMZA         0xA1
#define SIFR_LETTER_WAW_HAMZA        0xA2
#define SIFR_LETTER_ALEF_MAQSURA     0xA3
/* Reserved Arabic slots 0xA4–0xBF */


/* ─────────────────────────────
   ARABIC PUNCTUATION (0xBA–0xBC)
───────────────────────────── */
#define SIFR_PUNCTUATION_ARABIC_COMMA         0xBA  /* ، */
#define SIFR_PUNCTUATION_ARABIC_SEMICOLON     0xBB  /* ؛ */
#define SIFR_PUNCTUATION_ARABIC_QUESTION_MARK 0xBC  /* ؟ */


/* ─────────────────────────────
   HARAKAT / MARKS (0xC0–0xDF)
───────────────────────────── */
#define SIFR_MARK_FATHA             0xC0
#define SIFR_MARK_TANWEEN_FATHA     0xC1
#define SIFR_MARK_DAMMA             0xC2
#define SIFR_MARK_TANWEEN_DAMMA     0xC3
#define SIFR_MARK_KASRA             0xC4
#define SIFR_MARK_TANWEEN_KASRA     0xC5
#define SIFR_MARK_SUKUN             0xC6
#define SIFR_MARK_SHADDA            0xC7
#define SIFR_MARK_DAGGER_ALIF       0xC8
#define SIFR_MARK_TATWEEL           0xC9
#define SIFR_MARK_MADDAH_ABOVE      0xCA
#define SIFR_MARK_HAMZA_ABOVE_SIGN  0xCB
#define SIFR_MARK_HAMZA_BELOW_SIGN  0xCC
#define SIFR_MARK_SHADDA_FATHA      0xCD
#define SIFR_MARK_SHADDA_DAMMA      0xCE
#define SIFR_MARK_SHADDA_KASRA      0xCF
#define SIFR_MARK_WASLA             0xD0
#define SIFR_MARK_SUPERALIF         0xD1
/* Reserved marks 0xD2–0xDF */


/* ─────────────────────────────
   LIGATURES (0xE0–0xEF)
───────────────────────────── */
#define SIFR_LIGATURE_LA                  0xE0
#define SIFR_LIGATURE_LA_HAMZA_ABOVE      0xE1
#define SIFR_LIGATURE_LA_MADDA            0xE2
#define SIFR_LIGATURE_LA_HAMZA_BELOW      0xE3
/* Reserved ligatures 0xE4–0xEF */


/* ─────────────────────────────
   EXTENDED / FUTURE (0xF0–0xFF)
───────────────────────────── */
#define SIFR_EXTENDED_START  0xF0
#define SIFR_EXTENDED_END    0xFF

// /* ─────────────────────────────
//    STRUCTURAL TABLE — Fully Documented
// ───────────────────────────── */
// static const uint8_t SIFR_TABLE[256] = {
//     /* ───────────── Control / Logic ───────────── */
//     [0 ... 31]   = 0x00,   /* 0x00–0x1F — control codes (NUL..US) */

//     /* ───────────── ASCII Shared ───────────── */
//     [32 ... 127] = 0x20,   /* 0x20–0x7F — shared ASCII for interop */

//     /* ───────────── Arabic Core Letters (0x80–0xA3) ───────────── */
//     [0x80] = SIFR_LETTER_ALIF,              /* ا — Alif */
//     [0x81] = SIFR_LETTER_BA,                /* ب — Ba */
//     [0x82] = SIFR_LETTER_TA,                /* ت — Ta */
//     [0x83] = SIFR_LETTER_THA,               /* ث — Tha */
//     [0x84] = SIFR_LETTER_JEEM,              /* ج — Jeem */
//     [0x85] = SIFR_LETTER_HA,                /* ح — Ha */
//     [0x86] = SIFR_LETTER_KHA,               /* خ — Kha */
//     [0x87] = SIFR_LETTER_DAL,               /* د — Dal */
//     [0x88] = SIFR_LETTER_THAL,              /* ذ — Thal */
//     [0x89] = SIFR_LETTER_RA,                /* ر — Ra */
//     [0x8A] = SIFR_LETTER_ZAY,               /* ز — Zay */
//     [0x8B] = SIFR_LETTER_SEEN,              /* س — Seen */
//     [0x8C] = SIFR_LETTER_SHEEN,             /* ش — Sheen */
//     [0x8D] = SIFR_LETTER_SAD,               /* ص — Sad */
//     [0x8E] = SIFR_LETTER_DAD,               /* ض — Dad */
//     [0x8F] = SIFR_LETTER_TTA,               /* ط — Tta */
//     [0x90] = SIFR_LETTER_ZZA,               /* ظ — Zza */
//     [0x91] = SIFR_LETTER_AIN,               /* ع — Ain */
//     [0x92] = SIFR_LETTER_GHAIN,             /* غ — Ghain */
//     [0x93] = SIFR_LETTER_FA,                /* ف — Fa */
//     [0x94] = SIFR_LETTER_QAF,               /* ق — Qaf */
//     [0x95] = SIFR_LETTER_KAF,               /* ك — Kaf */
//     [0x96] = SIFR_LETTER_LAM,               /* ل — Lam */
//     [0x97] = SIFR_LETTER_MEEM,              /* م — Meem */
//     [0x98] = SIFR_LETTER_NOON,              /* ن — Noon */
//     [0x99] = SIFR_LETTER_HEH,               /* هـ — Heh */
//     [0x9A] = SIFR_LETTER_WAW,               /* و — Waw */
//     [0x9B] = SIFR_LETTER_YA,                /* ي — Ya */
//     [0x9C] = SIFR_LETTER_HAMZA,             /* ء — Hamza */
//     [0x9D] = SIFR_LETTER_TAMARBUTA,         /* ة — Ta Marbuta */
//     [0x9E] = SIFR_LETTER_ALIF_MADDA,        /* آ — Alif Madda */
//     [0x9F] = SIFR_LETTER_ALIF_HAMZA_ABOVE,  /* أ — Alif Hamza Above */
//     [0xA0] = SIFR_LETTER_ALIF_HAMZA_BELOW,  /* إ — Alif Hamza Below */
//     [0xA1] = SIFR_LETTER_YA_HAMZA,          /* ئ — Ya Hamza */
//     [0xA2] = SIFR_LETTER_WAW_HAMZA,         /* ؤ — Waw Hamza */
//     [0xA3] = SIFR_LETTER_ALEF_MAQSURA,      /* ى — Alef Maqsura */

//     /* ───────────── Arabic Marks / Harakat (0xC0–0xD1) ───────────── */
//     [0xC0] = SIFR_MARK_FATHA,               /* َ — Fatha */
//     [0xC1] = SIFR_MARK_TANWEEN_FATHA,       /* ً — Tanween Fatha */
//     [0xC2] = SIFR_MARK_DAMMA,               /* ُ — Damma */
//     [0xC3] = SIFR_MARK_TANWEEN_DAMMA,       /* ٌ — Tanween Damma */
//     [0xC4] = SIFR_MARK_KASRA,               /* ِ — Kasra */
//     [0xC5] = SIFR_MARK_TANWEEN_KASRA,       /* ٍ — Tanween Kasra */
//     [0xC6] = SIFR_MARK_SUKUN,               /* ْ — Sukun */
//     [0xC7] = SIFR_MARK_SHADDA,              /* ّ — Shadda */
//     [0xC8] = SIFR_MARK_DAGGER_ALIF,         /* ٰ — Dagger Alif */
//     [0xC9] = SIFR_MARK_TATWEEL,             /* ـ — Tatweel */
//     [0xCA] = SIFR_MARK_MADDAH_ABOVE,        /* Maddah above */
//     [0xCB] = SIFR_MARK_HAMZA_ABOVE_SIGN,    /* Hamza above (modifier) */
//     [0xCC] = SIFR_MARK_HAMZA_BELOW_SIGN,    /* Hamza below (modifier) */
//     [0xCD] = SIFR_MARK_SHADDA_FATHA,        /* Shadda + Fatha */
//     [0xCE] = SIFR_MARK_SHADDA_DAMMA,        /* Shadda + Damma */
//     [0xCF] = SIFR_MARK_SHADDA_KASRA,        /* Shadda + Kasra */
//     [0xD0] = SIFR_MARK_WASLA,               /* وصلة — Wasla */
//     [0xD1] = SIFR_MARK_SUPERALIF,           /* Super Alif marker */

//     /* ───────────── Ligatures (0xE0–0xE3) ───────────── */
//     [0xE0] = SIFR_LIGATURE_LA,              /* لا — Lam Alif */
//     [0xE1] = SIFR_LIGATURE_LA_HAMZA_ABOVE,  /* لأ — Lam Alif + Hamza Above */
//     [0xE2] = SIFR_LIGATURE_LA_MADDA,        /* لآ — Lam Alif + Madda */
//     [0xE3] = SIFR_LIGATURE_LA_HAMZA_BELOW   /* لإ — Lam Alif + Hamza Below */
// };

/* ───────────── helpers for portable bulk init ───────────── */
#define SIFR_R8(v)  v,v,v,v,v,v,v,v
#define SIFR_R16(v) SIFR_R8(v),SIFR_R8(v)
#define SIFR_R32(v) SIFR_R16(v),SIFR_R16(v)
/* 0x20..0x7F is 96 entries → 6×16 */
#define SIFR_R96(v) SIFR_R16(v),SIFR_R16(v),SIFR_R16(v),SIFR_R16(v),SIFR_R16(v),SIFR_R16(v)
/* small runs */
#define SIFR_R6(v)  v,v,v,v,v,v
#define SIFR_R12(v) SIFR_R6(v),SIFR_R6(v)
#define SIFR_R14(v) SIFR_R8(v),SIFR_R6(v)

/* ─────────────────────────────
   STRUCTURAL TABLE
   - 0x00–0x1F → 0x00 (control/logic)
   - 0x20–0x7F → 0x20 (ASCII-shared)
───────────────────────────── */
static const uint8_t SIFR_TABLE[256] = {
    /* 0x00–0x1F: control codes → 0x00 */
    SIFR_R32(0x00),

    /* 0x20–0x7F: ASCII shared → 0x20 */
    SIFR_R96(0x20),

    /* 0x80–0xA3: Arabic core letters (explicit; docs per entry) */
    /* 0x80 */ SIFR_LETTER_ALIF,             /* ا — Alif */
    /* 0x81 */ SIFR_LETTER_BA,               /* ب — Ba */
    /* 0x82 */ SIFR_LETTER_TA,               /* ت — Ta */
    /* 0x83 */ SIFR_LETTER_THA,              /* ث — Tha */
    /* 0x84 */ SIFR_LETTER_JEEM,             /* ج — Jeem */
    /* 0x85 */ SIFR_LETTER_HA,               /* ح — Ha */
    /* 0x86 */ SIFR_LETTER_KHA,              /* خ — Kha */
    /* 0x87 */ SIFR_LETTER_DAL,              /* د — Dal */
    /* 0x88 */ SIFR_LETTER_THAL,             /* ذ — Thal */
    /* 0x89 */ SIFR_LETTER_RA,               /* ر — Ra */
    /* 0x8A */ SIFR_LETTER_ZAY,              /* ز — Zay */
    /* 0x8B */ SIFR_LETTER_SEEN,             /* س — Seen */
    /* 0x8C */ SIFR_LETTER_SHEEN,            /* ش — Sheen */
    /* 0x8D */ SIFR_LETTER_SAD,              /* ص — Sad */
    /* 0x8E */ SIFR_LETTER_DAD,              /* ض — Dad */
    /* 0x8F */ SIFR_LETTER_TTA,              /* ط — Tta */
    /* 0x90 */ SIFR_LETTER_ZZA,              /* ظ — Zza */
    /* 0x91 */ SIFR_LETTER_AIN,              /* ع — Ain */
    /* 0x92 */ SIFR_LETTER_GHAIN,            /* غ — Ghain */
    /* 0x93 */ SIFR_LETTER_FA,               /* ف — Fa */
    /* 0x94 */ SIFR_LETTER_QAF,              /* ق — Qaf */
    /* 0x95 */ SIFR_LETTER_KAF,              /* ك — Kaf */
    /* 0x96 */ SIFR_LETTER_LAM,              /* ل — Lam */
    /* 0x97 */ SIFR_LETTER_MEEM,             /* م — Meem */
    /* 0x98 */ SIFR_LETTER_NOON,             /* ن — Noon */
    /* 0x99 */ SIFR_LETTER_HEH,              /* هـ — Heh */
    /* 0x9A */ SIFR_LETTER_WAW,              /* و — Waw */
    /* 0x9B */ SIFR_LETTER_YA,               /* ي — Ya */
    /* 0x9C */ SIFR_LETTER_HAMZA,            /* ء — Hamza */
    /* 0x9D */ SIFR_LETTER_TAMARBUTA,        /* ة — Ta Marbuta */
    /* 0x9E */ SIFR_LETTER_ALIF_MADDA,       /* آ — Alif Madda */
    /* 0x9F */ SIFR_LETTER_ALIF_HAMZA_ABOVE, /* أ — Alif Hamza Above */
    /* 0xA0 */ SIFR_LETTER_ALIF_HAMZA_BELOW, /* إ — Alif Hamza Below */
    /* 0xA1 */ SIFR_LETTER_YA_HAMZA,         /* ئ — Ya Hamza */
    /* 0xA2 */ SIFR_LETTER_WAW_HAMZA,        /* ؤ — Waw Hamza */
    /* 0xA3 */ SIFR_LETTER_ALEF_MAQSURA,     /* ى — Alef Maqsura */

    /* 0xA4–0xAF: reserved letters → 0x00 */
    SIFR_R12(0x00),

    /* 0xB0–0xB9: Arabic numerals (global Arabic digits 0–9) */
    /* 0xB0 */ SIFR_DIGIT_ARABIC_ZERO,   /* 0 */
    /* 0xB1 */ SIFR_DIGIT_ARABIC_ONE,    /* 1 */
    /* 0xB2 */ SIFR_DIGIT_ARABIC_TWO,    /* 2 */
    /* 0xB3 */ SIFR_DIGIT_ARABIC_THREE,  /* 3 */
    /* 0xB4 */ SIFR_DIGIT_ARABIC_FOUR,   /* 4 */
    /* 0xB5 */ SIFR_DIGIT_ARABIC_FIVE,   /* 5 */
    /* 0xB6 */ SIFR_DIGIT_ARABIC_SIX,    /* 6 */
    /* 0xB7 */ SIFR_DIGIT_ARABIC_SEVEN,  /* 7 */
    /* 0xB8 */ SIFR_DIGIT_ARABIC_EIGHT,  /* 8 */
    /* 0xB9 */ SIFR_DIGIT_ARABIC_NINE,   /* 9 */

    /* 0xBA–0xBF: (punctuation or system reserve) — fill 0x00 for now in the future must be filled*/
    SIFR_R6(0x00),

    /* 0xC0–0xD1: Harakat / marks */
    /* 0xC0 */ SIFR_MARK_FATHA,              /* َ */
    /* 0xC1 */ SIFR_MARK_TANWEEN_FATHA,      /* ً */
    /* 0xC2 */ SIFR_MARK_DAMMA,              /* ُ */
    /* 0xC3 */ SIFR_MARK_TANWEEN_DAMMA,      /* ٌ */
    /* 0xC4 */ SIFR_MARK_KASRA,              /* ِ */
    /* 0xC5 */ SIFR_MARK_TANWEEN_KASRA,      /* ٍ */
    /* 0xC6 */ SIFR_MARK_SUKUN,              /* ْ */
    /* 0xC7 */ SIFR_MARK_SHADDA,             /* ّ */
    /* 0xC8 */ SIFR_MARK_DAGGER_ALIF,        /* ٰ */
    /* 0xC9 */ SIFR_MARK_TATWEEL,            /* ـ */
    /* 0xCA */ SIFR_MARK_MADDAH_ABOVE,       /* Maddah */
    /* 0xCB */ SIFR_MARK_HAMZA_ABOVE_SIGN,   /* Hamza above (mod) */
    /* 0xCC */ SIFR_MARK_HAMZA_BELOW_SIGN,   /* Hamza below (mod) */
    /* 0xCD */ SIFR_MARK_SHADDA_FATHA,       /* Shadda+Fatha */
    /* 0xCE */ SIFR_MARK_SHADDA_DAMMA,       /* Shadda+Damma */
    /* 0xCF */ SIFR_MARK_SHADDA_KASRA,       /* Shadda+Kasra */
    /* 0xD0 */ SIFR_MARK_WASLA,              /* وصلة */
    /* 0xD1 */ SIFR_MARK_SUPERALIF,          /* Super Alif */

    /* 0xD2–0xDF: reserved marks → 0x00 */
    SIFR_R14(0x00),

    /* 0xE0–0xE3: Ligatures */
    /* 0xE0 */ SIFR_LIGATURE_LA,             /* لا */
    /* 0xE1 */ SIFR_LIGATURE_LA_HAMZA_ABOVE, /* لأ */
    /* 0xE2 */ SIFR_LIGATURE_LA_MADDA,       /* لآ */
    /* 0xE3 */ SIFR_LIGATURE_LA_HAMZA_BELOW, /* لإ */

    /* 0xE4–0xEF: reserved ligatures → 0x00 */
    SIFR_R12(0x00),

    /* 0xF0–0xFF: extended / future → 0x00 */
    SIFR_R16(0x00)
};

#undef SIFR_R14
#undef SIFR_R12
#undef SIFR_R6
#undef SIFR_R96
#undef SIFR_R32
#undef SIFR_R16
#undef SIFR_R8

#endif /* SIFR_TABLES_H */
