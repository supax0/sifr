#ifndef SIFR_BASE_H
#define SIFR_BASE_H

/**
 * @file sifr_base.h
 * @brief Defines the foundational constants for the SIFR encoding system (decimal notation).
 *
 * Control characters: 0–31 and 127
 * Arabic digits: 48–57
 * Punctuation: 32–47
 */

/* ─────────────────────────────
   CONTROL / LOGIC (0–31, 127)
───────────────────────────── */

#define SIFR_CONTROL_NULL                      0   /* Null character */
#define SIFR_CONTROL_START_OF_HEADING          1   /* Start of heading */
#define SIFR_CONTROL_START_OF_TEXT             2   /* Start of text */
#define SIFR_CONTROL_END_OF_TEXT               3   /* End of text */
#define SIFR_CONTROL_END_OF_TRANSMISSION       4   /* End of transmission */
#define SIFR_CONTROL_ENQUIRY                   5   /* Enquiry */
#define SIFR_CONTROL_ACKNOWLEDGE               6   /* Acknowledge */
#define SIFR_CONTROL_BELL                      7   /* Bell */
#define SIFR_CONTROL_BACKSPACE                 8   /* Backspace */
#define SIFR_CONTROL_HORIZONTAL_TAB            9   /* Horizontal tab */
#define SIFR_CONTROL_LINE_FEED                 10  /* Line feed */
#define SIFR_CONTROL_VERTICAL_TAB              11  /* Vertical tab */
#define SIFR_CONTROL_FORM_FEED                 12  /* Form feed */
#define SIFR_CONTROL_CARRIAGE_RETURN           13  /* Carriage return */
#define SIFR_CONTROL_SHIFT_OUT                 14  /* Shift out */
#define SIFR_CONTROL_SHIFT_IN                  15  /* Shift in */
#define SIFR_CONTROL_DATA_LINK_ESCAPE          16  /* Data link escape */
#define SIFR_CONTROL_DEVICE_CONTROL_1          17  /* Device control 1 */
#define SIFR_CONTROL_DEVICE_CONTROL_2          18  /* Device control 2 */
#define SIFR_CONTROL_DEVICE_CONTROL_3          19  /* Device control 3 */
#define SIFR_CONTROL_DEVICE_CONTROL_4          20  /* Device control 4 */
#define SIFR_CONTROL_NEGATIVE_ACKNOWLEDGE      21  /* Negative acknowledge */
#define SIFR_CONTROL_SYNCHRONOUS_IDLE          22  /* Synchronous idle */
#define SIFR_CONTROL_END_OF_TRANSMISSION_BLOCK 23  /* End of transmission block */
#define SIFR_CONTROL_CANCEL                    24  /* Cancel */
#define SIFR_CONTROL_END_OF_MEDIUM             25  /* End of medium */
#define SIFR_CONTROL_SUBSTITUTE                26  /* Substitute */
#define SIFR_CONTROL_ESCAPE                    27  /* Escape */
#define SIFR_CONTROL_FILE_SEPARATOR            28  /* File separator */
#define SIFR_CONTROL_GROUP_SEPARATOR           29  /* Group separator */
#define SIFR_CONTROL_RECORD_SEPARATOR          30  /* Record separator */
#define SIFR_CONTROL_UNIT_SEPARATOR            31  /* Unit separator */
#define SIFR_CONTROL_DELETE                    127 /* Delete */

#endif /* SIFR_BASE_H */
