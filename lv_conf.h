/**
 * Project-local LVGL configuration for HamClockCYD.
 *
 * Keeping this in the sketch folder avoids depending on a machine-wide
 * Arduino/libraries/lv_conf.h that may be configured for a different display.
 */
#if 1

#ifndef LV_CONF_H
#define LV_CONF_H

#define LV_COLOR_DEPTH 16
#define LV_MEM_SIZE (64 * 1024U)
#define LV_DRAW_BUF_ALIGN 4

#define LV_USE_OS LV_OS_NONE
#define LV_USE_DRAW_SW 1
#define LV_DRAW_SW_COMPLEX 1

#define LV_USE_FLOAT 0
#define LV_USE_FONT_PLACEHOLDER 1

#define LV_FONT_MONTSERRAT_8 1
#define LV_FONT_MONTSERRAT_10 1
#define LV_FONT_MONTSERRAT_12 1
#define LV_FONT_MONTSERRAT_14 1
#define LV_FONT_MONTSERRAT_18 1
#define LV_FONT_MONTSERRAT_20 1
#define LV_FONT_MONTSERRAT_36 1
#define LV_FONT_MONTSERRAT_38 1
#define LV_FONT_MONTSERRAT_40 1
#define LV_FONT_MONTSERRAT_48 1

#define LV_USE_CALENDAR 1
#define LV_USE_CALENDAR_HEADER_ARROW 1
#define LV_USE_CALENDAR_HEADER_DROPDOWN 1
#define LV_USE_CHECKBOX 1
#define LV_USE_DROPDOWN 1
#define LV_USE_IMAGE 1
#define LV_USE_KEYBOARD 1
#define LV_USE_LABEL 1
#define LV_USE_SLIDER 1
#define LV_USE_TABVIEW 1
#define LV_USE_TEXTAREA 1

#define LV_USE_OBSERVER 1
#define LV_USE_THEME_DEFAULT 1
#define LV_USE_FLEX 1
#define LV_USE_GRID 1

#define LV_USE_TFT_ESPI 0

#endif /*LV_CONF_H*/

#endif
