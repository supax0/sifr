#ifndef SIFR_SKELETONS_H
#define SIFR_SKELETONS_H

/**
 * @file sifr_skeletons.h
 * @brief Defines the pure dotless base rasms (skeletons) for the SIFR encoding system.
 *
 * Range 32–47 — Pure dotless Arabic base shapes (rasm layer).
 * These are the structural skeletons of Arabic letters, before dots or diacritics are applied.
 * Each slot represents a family root that can generate multiple dotted derivatives.
 */

#define SIFR_BASE_ALIF           32  /* ا — isolated vertical base */
#define SIFR_BASE_DOTLESS_BA     33  /* base for ب/ت/ث/ن/ي (dots applied via marks) */
#define SIFR_BASE_DOTLESS_7AH    34  /* base for ح/ج/خ (dots applied via marks) */
#define SIFR_BASE_DOTLESS_DAL    35  /* base for د/ذ (single dot above form) */
#define SIFR_BASE_DOTLESS_RA     36  /* base for ر/ز (single dot above form) */
#define SIFR_BASE_DOTLESS_SEEN   37  /* base for س/ش (three-dot forms) */
#define SIFR_BASE_DOTLESS_SAD    38  /* base for ص/ض (dot applied via mark) */
#define SIFR_BASE_DOTLESS_TTA    39  /* base for ط/ظ (dot above form) */
#define SIFR_BASE_DOTLESS_AIN    40  /* base for ع/غ (dot above form) */
#define SIFR_BASE_DOTLESS_FA     41  /* base for ف/ق (dot variants) */
#define SIFR_BASE_DOTLESS_LAM    42  /* base for ل — also parent of ك */
#define SIFR_BASE_MEEM           43  /* م — looped form */
#define SIFR_BASE_DOTLESS_HEH    44  /* هـ — base for ة (dot variation) */
#define SIFR_BASE_WAW            45  /* و — closed tail form */
#define SIFR_YEH_BARRE           46  /* ى — dotless ya (alef maqsura) */
#define SIFR_BASE_DOTLESS_NOON   47  /* ن — shares family with Ba/Ya */

#endif /* SIFR_SKELETONS_H */
