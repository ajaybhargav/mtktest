/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *  wgui_categories_res.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *  Resource definitions of categories.
 *
 *  Author:
 * -------
 *  
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/

#ifndef __WGUI_CATEGORIES_RES_H__
#define __WGUI_CATEGORIES_RES_H__

#include "MMI_features.h"
#include "gui_config.h"
#include "MMIDataType.h"

typedef enum
{
    WGUI_CATEGORY_CLEAR_STRING_ID = CATEGORY_SCREENS_BASE,
    WGUI_CATEGORY_ABC_STRING_ID,
    WGUI_CATEGORY_abc_STRING_ID,
    WGUI_CATEGORY_Abc_STRING_ID,
    WGUI_CATEGORY_123_STRING_ID,
    WGUI_CATEGORY_EDIT_STRING_ID,
    WGUI_CATEGORY_DONE_STRING_ID,
    WGUI_CATEGORY_ON_STRING_ID,
    WGUI_CATEGORY_OFF_STRING_ID,
#ifdef __UI_UNIFIED_COMPOSER_EDITOR_CATEGORY__
    WGUI_UCE_SMS_STRING_ID,
    WGUI_UCE_MMS_STRING_ID,
#endif /* __UI_UNIFIED_COMPOSER_EDITOR_CATEGORY__ */
#if defined(__MMI_MULTITAP_THAI__)
    WGUI_CATEGORY_thai_STRING_ID,
#endif 

    WGUI_CATEGORY_SPANISH_STRING_ID,
    WGUI_CATEGORY_spanish_STRING_ID,
    WGUI_CATEGORY_DANISH_STRING_ID,
    WGUI_CATEGORY_danish_STRING_ID,
    WGUI_CATEGORY_POLISH_STRING_ID,
    WGUI_CATEGORY_polish_STRING_ID,
    WGUI_CATEGORY_FRENCH_STRING_ID,
    WGUI_CATEGORY_french_STRING_ID,
    WGUI_CATEGORY_GERMAN_STRING_ID,
    WGUI_CATEGORY_german_STRING_ID,
    WGUI_CATEGORY_ITALIAN_STRING_ID,
    WGUI_CATEGORY_italian_STRING_ID,
    WGUI_CATEGORY_RUSSIAN_STRING_ID,
    WGUI_CATEGORY_russian_STRING_ID,
    WGUI_CATEGORY_BULGARIAN_STRING_ID,
    WGUI_CATEGORY_bulgarian_STRING_ID,
    WGUI_CATEGORY_UKRAINIAN_STRING_ID,
    WGUI_CATEGORY_L_UKRAINIAN_STRING_ID,
    WGUI_CATEGORY_TURKISH_STRING_ID,
    WGUI_CATEGORY_turkish_STRING_ID,
    WGUI_CATEGORY_HEBREW_STRING_ID,
    WGUI_CATEGORY_hebrew_STRING_ID,
    WGUI_CATEGORY_PORTUGUESE_STRING_ID,
    WGUI_CATEGORY_portuguese_STRING_ID,
    WGUI_CATEGORY_INDONESIAN_STRING_ID,
    WGUI_CATEGORY_indonesian_STRING_ID,
    WGUI_CATEGORY_CZECH_STRING_ID,
    WGUI_CATEGORY_czech_STRING_ID,
    WGUI_CATEGORY_MALAY_STRING_ID,
    WGUI_CATEGORY_malay_STRING_ID,
    WGUI_CATEGORY_VIETNAMESE_STRING_ID,
    WGUI_CATEGORY_vietnamese_STRING_ID,
    WGUI_CATEGORY_FINNISH_STRING_ID,
    WGUI_CATEGORY_finnish_STRING_ID,
    WGUI_CATEGORY_HUNGARIAN_STRING_ID,
    WGUI_CATEGORY_hungarian_STRING_ID,
    WGUI_CATEGORY_SLOVAK_STRING_ID,
    WGUI_CATEGORY_slovak_STRING_ID,
    WGUI_CATEGORY_DUTCH_STRING_ID,
    WGUI_CATEGORY_dutch_STRING_ID,
    #if defined (__MMI_MULTITAP_HINDI__) || defined(__MMI_ZI_HINDI__)
    WGUI_CATEGORY_HINDI_STRING_ID,
    #endif /* #if defined (__MMI_MULTITAP_HINDI__) */ 
    #if defined (__MMI_MULTITAP_MARATHI__) || defined(__MMI_ZI_MARATHI__)
    WGUI_CATEGORY_MARATHI_STRING_ID,
    #endif /* #if defined (__MMI_MULTITAP_MARATHI__)  */ 
    #if defined (__MMI_MULTITAP_TAMIL__) || defined(__MMI_ZI_TAMIL__)
    WGUI_CATEGORY_TAMIL_STRING_ID,
    #endif /* #if defined (__MMI_MULTITAP_TAMIL__)  */ 
    #if defined (__MMI_MULTITAP_BENGALI__) || defined(__MMI_ZI_BENGALI__)  
    WGUI_CATEGORY_BENGALI_STRING_ID,
    #endif /* defined (__MMI_MULTITAP_BENGALI__) */
    #if defined (__MMI_MULTITAP_PUNJABI__) || defined(__MMI_ZI_PUNJABI__)
    WGUI_CATEGORY_PUNJABI_STRING_ID,
    #endif
    #if defined (__MMI_MULTITAP_TELUGU__) || defined(__MMI_ZI_TELUGU__)
    WGUI_CATEGORY_TELUGU_STRING_ID,
    #endif
    WGUI_CATEGORY_ARABIC_STRING_ID,
    WGUI_CATEGORY_ARABIC_NUMERIC_STRING_ID,
    WGUI_CATEGORY_PERSIAN_STRING_ID,
    #if defined (__MMI_MULTITAP_URDU__) || defined(__MMI_ZI_URDU__)
    WGUI_CATEGORY_URDU_STRING_ID,
    #endif
    WGUI_CATEGORY_NORWEGIAN_STRING_ID,
    WGUI_CATEGORY_norwegian_STRING_ID,
    WGUI_CATEGORY_SWEDISH_STRING_ID,
    WGUI_CATEGORY_swedish_STRING_ID,
    WGUI_CATEGORY_CROATIAN_STRING_ID,
    WGUI_CATEGORY_croatian_STRING_ID,
    WGUI_CATEGORY_ROMANIAN_STRING_ID,
    WGUI_CATEGORY_romanian_STRING_ID,
    WGUI_CATEGORY_SLOVENIAN_STRING_ID,
    WGUI_CATEGORY_slovenian_STRING_ID,
    WGUI_CATEGORY_GREEK_STRING_ID,
    WGUI_CATEGORY_greek_STRING_ID,
    
    #if defined(__MMI_CSTAR__)
    STR_INPUT_METHOD_CSTAR_NEW_WORD,
    #endif /*defined(__MMI_CSTAR__)*/

    /* MTK add, Robin 1025 */
    STR_SUBLCD_CHI_SUNDAY,
    STR_SUBLCD_CHI_MONDAY,
    STR_SUBLCD_CHI_TUESDAY,
    STR_SUBLCD_CHI_WEDNESDAY,
    STR_SUBLCD_CHI_THURSDAY,
    STR_SUBLCD_CHI_FRIDAY,
    STR_SUBLCD_CHI_SATURDAY,

    STR_SUBLCD_ENG_SUNDAY,
    STR_SUBLCD_ENG_MONDAY,
    STR_SUBLCD_ENG_TUESDAY,
    STR_SUBLCD_ENG_WEDNESDAY,
    STR_SUBLCD_ENG_THURSDAY,
    STR_SUBLCD_ENG_FRIDAY,
    STR_SUBLCD_ENG_SATURDAY,
    TEMP_SUBLCD_ANIMATION_STR_ID
        , STR_GUI_MONTH_BASE,
    STR_GUI_TIME_AM,
    STR_GUI_TIME_PM
        /* PMT HIMANSHU START 20050721 */
#ifdef __MMI_UI_TECHNO_IDLESCREEN_BAR__
        ,
    STR_IDLESCREEN_SUNDAY,
    STR_IDLESCREEN_MONDAY,
    STR_IDLESCREEN_TUESDAY,
    STR_IDLESCREEN_WEDNESDAY,
    STR_IDLESCREEN_THURSDAY,
    STR_IDLESCREEN_FRIDAY,
    STR_IDLESCREEN_SATURDAY
#endif /* __MMI_UI_TECHNO_IDLESCREEN_BAR__ */ 
        /* PMT HIMANSHU END 20050721 */
} STRINGID_COMMON_CATEGORY_STRINGS;

typedef enum
{
    WGUI_CATEGORY_CLOCK = CATEGORY_SCREENS_BASE,
    WGUI_VOLUME_LEVEL1,
    WGUI_VOLUME_LEVEL2,
    WGUI_VOLUME_LEVEL3,
    WGUI_VOLUME_LEVEL4,
    WGUI_VOLUME_LEVEL5,
    WGUI_VOLUME_LEVEL6,
    WGUI_VOLUME_LEVEL7,
    /* PMT HIMANSHU START 20050729 */
#if defined(__MMI_WALLPAPER_ON_BOTTOM__)
    WGUI_VOLUME_UP_UP_IMAGE_ID,
    WGUI_VOLUME_UP_DOWN_IMAGE_ID,
    WGUI_VOLUME_DOWN_UP_IMAGE_ID,
    WGUI_VOLUME_DOWN_DOWN_IMAGE_ID,
#endif /* defined(__MMI_WALLPAPER_ON_BOTTOM__) */ 
    /* PMT HIMANSHU END 20050729 */
    WGUI_SLIDE_CONTROL_BG_IMAGE_ID,
    WGUI_SLIDE_CONTROL_SI_IMAGE_ID,
    /* image for multitap input method */
    WGUI_INPUT_INFORMATION_ICON1,

    /* MTK Elvis */
    WGUI_ZI_EZITEXT_LOGO,
    WGUI_ZI_EZITEXT_BPMF_LOGO,
    WGUI_ZI_EZITEXT_PINYIN_LOGO,
    WGUI_ZI_EZITEXT_SM_STROKE_LOGO,
    WGUI_ZI_EZITEXT_TR_STROKE_LOGO,
    /* MTK end */
    /* MTK Elvis 20040110 */
    WGUI_IME_MULTITAP_BPMF_IMG,
    WGUI_IME_MULTITAP_PINYIN_IMG,
    WGUI_IME_SMART_BPMF_IMG,
    WGUI_IME_SMART_PINYIN_IMG,
    WGUI_IME_SM_STROKE_IMG,
    WGUI_IME_TR_STROKE_IMG,
    WGUI_IME_SMART_ENGLISH_IMG,
    /* MTK end */

    COMPANY_LOGO_IMAGE_ID,
    UNDER_CONSTRUCTION_IMAGE_ID,
    RADIO_ON_IMAGE_ID,
    RADIO_OFF_IMAGE_ID,
    CHECKBOX_ON_IMAGE_ID,
    CHECKBOX_OFF_IMAGE_ID,
    CUSTOM_LOGO_IMAGE_ID,
    TEMP_SUBLCD_ANIMATION_IMAGE_ID,
    RIGHT_RED_ARROW,
    LEFT_RED_ARROW,
#if defined(__MMI_MAINLCD_240X320__) || defined(__MMI_MAINLCD_320X240__)
    LEFT_ARROW_DOWN,
    LEFT_ARROW_UP,
    RIGHT_ARROW_DOWN,
    RIGHT_ARROW_UP,
#endif
    IMG_HORIZONTAL_NORMAL_TAB,
    IMG_HORIZONTAL_FOCUSED_TAB,
    IMG_HORIZONTAL_BLINKING_TAB,
    IMG_HORIZONTAL_TAB_L_ARROW,
    IMG_HORIZONTAL_TAB_R_ARROW,
    IMG_HORIZONTAL_TAB_HINT_AREA,
    /* [~PMT  MANISH   20050623 */
#if 1 /* DON'T CHANGE THE ORDER */
    IMG_IDLE_MAINMENU_SHORCUT,
    IMG_IDLE_MESSAGE_SHORTCUT,
    IMG_IDLE_PHONEBOOK_SHORTCUT,
    IMG_IDLE_DIALING_SCREEN_SHORTCUT,
    IMG_IDLE_MAINMENU_SHORCUT_PRESSED,
    IMG_IDLE_MESSAGE_SHORTCUT_PRESSED,
    IMG_IDLE_PHONEBOOK_SHORTCUT_PRESSED,
    IMG_IDLE_DIALING_SCREEN_SHORTCUT_PRESSED,
#endif
    UIELEMENT_ARROW_UP,
    UIELEMENT_ARROW_LEFT,
    UIELEMENT_ARROW_DOWN,
    UIELEMENT_ARROW_RIGHT,

    /* Inline select */
    IMG_H_SELECT_LEFT,
    IMG_H_SELECT_RIGHT,

    /* Virtual keyboard */
    IMG_VKBD_STANDARD,
    IMG_VKBD_EXTENDED,
    IMG_VKBD_TRAY,
    IMG_VKBD_NUMBER,
    IMG_VKBD_PINYIN,
    IMG_VKBD_PINYIN_DISPAREA,
    IMG_VKBD_BOPOMO,
    IMG_VKBD_BOPOMO_DISPAREA,
    IMG_VKBD_CZECH,
    IMG_VKBD_HEBREW,
    IMG_VKBD_BULGARIAN,
    IMG_VKBD_FARSI_HUNGARIAN_ARABICSYMBOL,
    IMG_VKBD_FARSI_SYMBOL,
    IMG_VKBD_GREEK,
    IMG_VKBD_DANISH_NORWEGIAN,
    IMG_VKBD_FINNISH_SWEDISH,
    IMG_VKBD_VIETNAMESE,
    IMG_VKBD_ARABIC,
    IMG_VKBD_ARABIC_SYMBOL,
    IMG_VKBD_THAI,
    IMG_VKBD_UKRAINIAN,
    IMG_VKBD_CUSTOM_HIDE_SMALL,
    IMG_VKBD_CUSTOM_HIDE,
    IMG_VKBD_CUSTOM_SHOW,
    IMG_VKBD_CUSTOM_SWITCH_KEYBOARD,
    IMG_VKBD_CUSTOM_SWITCH_HANDWRITING,
    IMG_VKBD_CUSTOM_BACKSPACE,
    IMG_VKBD_CUSTOM_CAPSLOCK,
    IMG_VKBD_CUSTOM_SPACE,
    IMG_VKBD_CUSTOM_SYMBPICKER,
    IMG_VKBD_CUSTOM_EUROSYMB,
    IMG_VKBD_CUSTOM_ENTER,
    IMG_VKBD_CUSTOM_BRACKET,

    /* UI_SCROLLBAR_STYLE_3 */
    IMG_SCROLLBAR_BUTTON_UP,
    IMG_SCROLLBAR_BUTTON_DOWN,
    IMG_SCROLLBAR_V_BAR_TOP,
    IMG_SCROLLBAR_V_BAR_MIDDLE,
    IMG_SCROLLBAR_V_BAR_BOTTOM,
    IMG_SCROLLBAR_H_BAR_LEFT,
    IMG_SCROLLBAR_H_BAR_MIDDLE,
    IMG_SCROLLBAR_H_BAR_RIGHT,
    IMG_SCROLLBAR_BUTTON_LEFT,
    IMG_SCROLLBAR_BUTTON_RIGHT,
    IMG_SCROLLBAR_BUTTON_UP_PRESSED,
    IMG_SCROLLBAR_BUTTON_DOWN_PRESSED,
    IMG_SCROLLBAR_BUTTON_LEFT_PRESSED,
    IMG_SCROLLBAR_BUTTON_RIGHT_PRESSED,
    IMG_SCROLLBAR_V_BAR_BGD,
    IMG_SCROLLBAR_H_BAR_BGD,
    

    /* Transition Animation */
    IMG_PEN_WAITING_LONGPRESS,

    CHAT_LOCAL_IMG,
    CHAT_REMOTE_IMG,
    CHAT_SENDER_TRUNCATE_IMG,
    CHAT_RECEIVER_TRUNCATE_IMG,
    /* MTK added Robin 030822, for scanning disc dspl check */
    IMG_BOOTUP_SCANNING_LOGO,

    /* MTK end */
    IMG_MULTILINE_INPUTBOX_BKGRND,
    IMG_CONF_CALL_BKG,
    IMG_ACTIVE_CONF_CALL,
    IMG_ACTIVE_CONF_CALL_1,
    IMG_GREY_CONF_CALL,
    IMG_HOLD_CONF_CALL,
    IMG_OSIGNAL_CONF_CALL,
    IMG_NAME_CONF_CALL,
    IMG_SUBLCD_ANALOG_CLOCK,
    IMG_POPUP_TITLE,
    IMG_SCREEN_ROTATE_TITLE,
    IMG_SCREEN_ROTATE_BACKGROUND,
    IMG_SOFTKEY_BAR,
    IMG_DIALING_SCREEN_BG_UP,
    IMG_DIALING_SCREEN_BG_DOWN,
    IMG_DIALING_SCREEN_BG_LEFT,
    IMG_DIALING_SCREEN_BG_RIGHT,
    IMG_DIALING_SCREEN,
    IMG_DIALING_KEY_1,
    IMG_DIALING_KEY_2,
    IMG_DIALING_KEY_3,
    IMG_DIALING_KEY_4,
    IMG_DIALING_KEY_5,
    IMG_DIALING_KEY_6,
    IMG_DIALING_KEY_7,
    IMG_DIALING_KEY_8,
    IMG_DIALING_KEY_9,
    IMG_DIALING_KEY_HASH,
    IMG_DIALING_KEY_0,
    IMG_DIALING_KEY_STAR,
    /* 053005 Calvin added for function key */
#if defined (__MMI_TOUCH_DIAL_SCREEN_WITH_FUNCTION__)
    IMG_DIALING_KEY_FUNC,
    IMG_DIALING_KEY_PHB = IMG_DIALING_KEY_FUNC,
    IMG_DIALING_KEY_CALL,
#ifdef __DUALMODE_TOUCH_DIAL_SCREEN_WITH_SLAVE_FUNCTION__
    IMG_DIALING_KEY_CALL_SLAVE,
    IMG_DIALING_KEY_CALL_SLAVE_DISABLED,
#endif/*__DUALMODE_TOUCH_DIAL_SCREEN_WITH_SLAVE_FUNCTION__*/
    IMG_DIALING_KEY_PHB_DISABLED,
    IMG_DIALING_KEY_CALL_DISABLED,
#endif /* defined (__MMI_TOUCH_DIAL_SCREEN_WITH_FUNCTION__) */ 
    /* Calvin end */
    IMG_PASSWD_KEYBOARD,
    IMG_PASSWD_KEYBOARD_PRESS,
    IMG_POPUP_BG,       /* 052405 Calvin added */
    IMG_TITLEBAR_BG,    /* 052405 Calvin added, this maybe should be removed */
#if (defined __MMI_TOUCH_SCREEN__) && (defined __MMI_WGUI_CSK_ENABLE__)
    IMG_CSK_DIAL_ICON,
#endif 
    /* Calendar */
    IMG_CALENDAR_JAN,
#ifndef __MMI_SLIM_CALENDAR__
    IMG_CALENDAR_FEB,   /* Do not change the order */
    IMG_CALENDAR_MAR,
    IMG_CALENDAR_APR,
    IMG_CALENDAR_MAY,
    IMG_CALENDAR_JUN,
    IMG_CALENDAR_JUL,
    IMG_CALENDAR_AUG,
    IMG_CALENDAR_SEP,
    IMG_CALENDAR_OCT,
    IMG_CALENDAR_NOV,
    IMG_CALENDAR_DEC,
#endif /* __MMI_SLIM_CALENDAR__ */ 
    CAL_ENGLISH_DAYS_IMAGE,
    CAL_CHINESE_DAYS_IMAGE,
    CAL_LEFT_ARROW_UP_IMAGE,
    CAL_LEFT_ARROW_DOWN_IMAGE,
    CAL_RIGHT_ARROW_UP_IMAGE,
    CAL_RIGHT_ARROW_DOWN_IMAGE
        /* PMT HIMANSHU START 20050625 */
#ifdef __MMI_UI_TECHNO_MAINMENU__
        ,
    MAIN_MENU_PAGE_BG,
    MAIN_MENU_PAGE_BG2,
    MAIN_MENU_PAGE_BG3,
    MAIN_MENU_PAGE_BG4,
    MAIN_MENU_PAGE_BG5
#endif /* __MMI_UI_TECHNO_MAINMENU__ */ 
        /* PMT VIKAS START 20050707 */
#ifdef __MMI_UI_DALMATIAN_MAINMENU__
        ,
    MAIN_MENU_DALMATIAN_BALL
#endif /* __MMI_UI_DALMATIAN_MAINMENU__ */ 
#ifdef __MMI_UI_DALMATIAN_EDITOR__
        ,
    IMG_EDITOR_DALMATIAN_SMALL,
    IMG_EDITOR_DALMATIAN
#endif /* __MMI_UI_DALMATIAN_EDITOR__ */ 
        /* PMT VIKAS END 20050707 */
        /* PMT HIMANSHU END */
        /* PMT VIKAS START 20050720 */
#ifdef __MMI_UI_ANIMATED_TITLE_EFFECT__
        , IMG_TITLE_SCROLL
#endif 
#ifdef __MMI_UI_LIST_HIGHLIGHT_EFFECTS__
        , IMG_LIST_HIGHLIGHTER
#endif 
        /* PMT VIKAS END 20050720 */
        /* PMT HIMANSHU START 20050721 */
#if 1
        ,
    IMG_TECHNO_IDLESCREEN_BAR,
    IMG_TECHNO_ANALOG_CLOCK,
    IMG_TECHNO_DIGITAL_CLOCK
#endif
        /* PMT HIMANSHU END 20050721 */
        /* PMT HIMANSHU START 20050815 */
        , IMAGE_VIEW_TITLEBAR_BG
        /* PMT HIMANSHU END 20050815 */
        /* PMT NEERAJ START 20050825 */
#ifdef __MMI_UI_TWO_LINE_MENUITEM_STYLES__
        ,
    TWO_LINE_VOLUME_IMAGE
#endif /* __MMI_UI_TWO_LINE_MENUITEM_STYLES__ */ 
        /* PMT NEERAJ END 20050825 */
        /* PMT VIKAS START 20050913 */
#ifdef __MMI_UI_DALMATIAN_CALENDAR__
        /* ids for week bar based on month */
        ,
    DALMATIAN_WEEK_HIGHLIGHTER_IMAGE_ID_JAN,
    DALMATIAN_WEEK_HIGHLIGHTER_IMAGE_ID_FEB,
    DALMATIAN_WEEK_HIGHLIGHTER_IMAGE_ID_MAR,
    DALMATIAN_WEEK_HIGHLIGHTER_IMAGE_ID_APR,
    DALMATIAN_WEEK_HIGHLIGHTER_IMAGE_ID_MAY,
    DALMATIAN_WEEK_HIGHLIGHTER_IMAGE_ID_JUN,
    DALMATIAN_WEEK_HIGHLIGHTER_IMAGE_ID_JUL,
    DALMATIAN_WEEK_HIGHLIGHTER_IMAGE_ID_AUG,
    DALMATIAN_WEEK_HIGHLIGHTER_IMAGE_ID_SEP,
    DALMATIAN_WEEK_HIGHLIGHTER_IMAGE_ID_OCT,
    DALMATIAN_WEEK_HIGHLIGHTER_IMAGE_ID_NOV,
    DALMATIAN_WEEK_HIGHLIGHTER_IMAGE_ID_DEC
#endif /* __MMI_UI_DALMATIAN_CALENDAR__ */ 
        /* PMT VIKAS END 20050913 */
#ifdef __MMI_EDITABLE_AUDIO_EQUALIZER__
        , SOUND_EFFECT_AUDIO_EQ_BG, SOUND_EFFECT_AUDIO_EQ_ACTIVE_BAR, SOUND_EFFECT_AUDIO_EQ_VAL_INDICATOR
#endif 
        , IMG_PERCENTAGE_BAR_LEFT_IMAGE,
    IMG_PERCENTAGE_BAR_RIGHT_IMAGE,
    IMG_PERCENTAGE_BAR_BG_IMAGE,
    IMG_FLEXIBLE_TITLEBAR_BG,/* popup title */
#ifdef __UI_UNIFIED_COMPOSER_EDITOR_CATEGORY__
    WGUI_UCE_ATTACHFILE_ICON_IMAGE_ID,
    WGUI_UCE_AUDIO_ICON_IMAGE_ID,
    WGUI_UCE_PICTURE_ICON_IMAGE_ID,
    WGUI_UCE_VIDEO_ICON_IMAGE_ID,
#endif /* __UI_UNIFIED_COMPOSER_EDITOR_CATEGORY__ */
    WGUI_DEFAULT_PREVIEW_IMAGE_ID,
    GUI_COLOR_SLIDER_ARROW_IMAGE_ID,

#if ENABLE_CIRCULAR_3D_MENU
    CM3D_COMMON_IMAGE0_IMAGE_ID,
    CM3D_COMMON_IMAGE1_IMAGE_ID,
    CM3D_COMMON_IMAGE2_IMAGE_ID,
    CM3D_COMMON_IMAGE3_IMAGE_ID,
#endif /* ENABLE_CIRCULAR_3D_MENU */

#ifdef __UI_MMS_VIEWER_CATEGORY__
    WGUI_MV_ATTACHFILE_ICON_IMAGE_ID,
    WGUI_MV_RING_ICON_IMAGE_ID,
    WGUI_MV_TITLE_ICON_IMAGE_ID,
    WGUI_MV_BAR_ICON_IMAGE_ID,
    WGUI_MV_RING_STOP_ICON_IMAGE_ID,
    WGUI_MV_LEFT_ARROW_ICON_IMAGE_ID,
    WGUI_MV_LEFT_ARROW_DOWN_ICON_IMAGE_ID,
    WGUI_MV_RIGHT_ARROW_ICON_IMAGE_ID,
    WGUI_MV_RIGHT_ARROW_DOWN_ICON_IMAGE_ID,
    WGUI_MV_DRM_IMAGE_LOCK_ID,
    WGUI_MV_DRM_VIDEO_LOCK_ID,
#endif /* __UI_MMS_VIEWER_CATEGORY__ */

    /* Text background */
    WGUI_IMG_TEXT_BG_TOP,
    WGUI_IMG_TEXT_BG_MID,
    WGUI_IMG_TEXT_BG_BOTTOM,
    
    /* Download agent, progressive bar images */
    IMG_CAT412_PROG_BAR_BG,
    IMG_CAT412_PROG_BAR_FULL,
    
#ifdef __MMI_JATAAYU_MMS_ADVANCED_VIEW_SCREEN__
    IMG_ID_JMMS_NEW_VIEW_SCREEN_PROGRESS_BAR,
#endif 

    COMMON_IMG_END
} IMAGEID_COMMON_CATEGORY_SCREENS;


#if 1
#if defined(LANG_TH_SUPPORT)
//Huyanwei Add It 
typedef enum _IMAGEID_THAI_IMAGE_
{
	THAI_IMAGE_START= THAI_IMAGE_BASE,
	THAI_IMAGE_0 = THAI_IMAGE_START,	
	THAI_IMAGE_1,
	THAI_IMAGE_2,
	THAI_IMAGE_3,	
	THAI_IMAGE_4,
	THAI_IMAGE_5,
	THAI_IMAGE_6,	
	THAI_IMAGE_7,
	THAI_IMAGE_8,
	THAI_IMAGE_9,	
	THAI_IMAGE_10,	
	THAI_IMAGE_11,
	THAI_IMAGE_12,
	THAI_IMAGE_13,	
	THAI_IMAGE_14,
	THAI_IMAGE_15,
	THAI_IMAGE_16,	
	THAI_IMAGE_17,
	THAI_IMAGE_18,
	THAI_IMAGE_19,	
	THAI_IMAGE_20,	
	THAI_IMAGE_21,
	THAI_IMAGE_22,
	THAI_IMAGE_23,	
	THAI_IMAGE_24,
	THAI_IMAGE_25,
	THAI_IMAGE_26,	
	THAI_IMAGE_27,
	THAI_IMAGE_28,
	THAI_IMAGE_29,	
	THAI_IMAGE_30,	
	THAI_IMAGE_31,
	THAI_IMAGE_32,
	THAI_IMAGE_33,	
	THAI_IMAGE_34,
	THAI_IMAGE_35,
	THAI_IMAGE_36,	
	THAI_IMAGE_37,
	THAI_IMAGE_38,
	THAI_IMAGE_39,	
	THAI_IMAGE_40,	
	THAI_IMAGE_41,
	THAI_IMAGE_42,
	THAI_IMAGE_43,	
	THAI_IMAGE_44,
	THAI_IMAGE_45,
	THAI_IMAGE_46,	
	THAI_IMAGE_47,
	THAI_IMAGE_48,
	THAI_IMAGE_49,	
	THAI_IMAGE_50,	
	THAI_IMAGE_51,
	THAI_IMAGE_52,
	THAI_IMAGE_53,	
	THAI_IMAGE_54,
	THAI_IMAGE_55,
	THAI_IMAGE_56,	
	THAI_IMAGE_57,
	THAI_IMAGE_58,
	THAI_IMAGE_59,	
	THAI_IMAGE_60,	
	THAI_IMAGE_61,
	THAI_IMAGE_62,
	THAI_IMAGE_63,	
	THAI_IMAGE_64,
	THAI_IMAGE_65,
	THAI_IMAGE_66,	
	THAI_IMAGE_67,
	THAI_IMAGE_68,
	THAI_IMAGE_69,	
	THAI_IMAGE_70,	
	THAI_IMAGE_71,
	THAI_IMAGE_72,
	THAI_IMAGE_73,	
	THAI_IMAGE_74,
	THAI_IMAGE_75,
	THAI_IMAGE_76,	
	THAI_IMAGE_77,
	THAI_IMAGE_78,
	THAI_IMAGE_79,	
	THAI_IMAGE_80,	
	THAI_IMAGE_81,
	THAI_IMAGE_82,
	THAI_IMAGE_83,	
	THAI_IMAGE_84,
	THAI_IMAGE_85,
	THAI_IMAGE_86,	
	THAI_IMAGE_87,
	THAI_IMAGE_88,
	THAI_IMAGE_89,	
	THAI_IMAGE_90,	
	THAI_IMAGE_91,
	THAI_IMAGE_92,
	
	THAI_IMAGE_END
}IMAGEID_THAI_IMAGE;
#endif
#endif

#endif /* __WGUI_CATEGORIES_RES_H__ */ 
