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
 *  MMI_media_app_trc.h
 *
 * Project:
 * --------
 *  MAUI
 *
 * Description:
 * ------------
 *  
 *
 * Author:
 * -------
 * -------
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
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/
#ifndef _MMI_MEDIA_APP_TRC_H_
#define _MMI_MEDIA_APP_TRC_H_

   /* --------------------------------------------------------------- */
   /* ----------------------- MODULE NAME:Language Learning - Digidea------------------- */
   /* --------------------------------------------------------------- */
   TRC_MSG(MMI_LANGLN_GET_COURSE_TYPE,"*---[langln_common.c] [function: langln_adapt_get_course_type] [Engine:DZD_KJ_FindExForFileName] => filename: [%d], type: [%d]---*")	
   TRC_MSG(MMI_LANGLN_GET_COURSE_INFO,"*---[langln_common.c] [function: langln_adapt_get_course_info] [Engine:DZD_KJ_IsRegisted] => imei: [%d], return value: [%d]---*")	
   TRC_MSG(MMI_LANGLN_REGISTER_COURSE,"*---[langln_common.c] [function: langln_adapt_register_course] [Engine:DZD_KJ_SaveKeyForFileName] => imei: [%d], key: [%d], return value: [%d]---*")	
/* Word King */
   TRC_MSG(MMI_LANGLN_WK_OPEN_CHECK_TYPE,"*---[langln_wk.c] [function: langln_adapt_wk_open] [Engine:langln_adapt_wk_check_course_type] => filename: [%d], ret: [%d]---*")	
   TRC_MSG(MMI_LANGLN_WK_OPEN_ALLOC_MEM,"*---[langln_wk.c] [function: langln_adapt_wk_open] [Engine:DZD_KJ_AllocKJMem] => size: [%d], address: [%d]---*")	
   TRC_MSG(MMI_LANGLN_WK_OPEN_KJ_OPEN,"*---[langln_wk.c] [function: langln_adapt_wk_open] [Engine:DZD_KJ_Open] => imei: [%d], ret: [%d]---*")	
   TRC_MSG(MMI_LANGLN_WK_OPEN_OPEN_INTERNAL,"*---[langln_wk.c] [function: langln_adapt_wk_open] [Engine:langln_adapt_wk_open_internal] => clear: [%d], ret: FALSE---*")	
   TRC_MSG(MMI_LANGLN_WK_GET_WORD_CURVE_FAIL,"*---[langln_wk.c] [function: langln_adapt_wk_get_word_by_curve] [Engine:DZD_WORD_GetShowWord] => ret: FALSE---*")	
   TRC_MSG(MMI_LANGLN_WK_GET_WORD_CURVE,"*---[langln_wk.c] [function: langln_adapt_wk_get_word_by_curve] [Engine:DZD_WORD_GetShowWord] => view_type: [%d], index: [%d]---*")	
   TRC_MSG(MMI_LANGLN_WK_CHANGE_CONTENT_GROUP,"*---[langln_wk.c] [function: langln_adapt_wk_change_content_group] [Engine:DZD_WORD_ChangeUseStat] => showtype: [%d], ret: [%d]---*")	
   TRC_MSG(MMI_LANGLN_WK_ADD_TO_NOTEBOOK_BEGIN,"*---[langln_wk.c] [function: langln_adapt_wk_add_to_notebook] [Engine:Empty] Begin to add to notebook---*")	
   TRC_MSG(MMI_LANGLN_WK_ADD_TO_NOTEBOOK_NOT_OPENED,"*---[langln_wk.c] [function: langln_adapt_wk_add_to_notebook] [Engine:langln_adapt_wk_course_is_opened] not opened!*")	
   TRC_MSG(MMI_LANGLN_WK_ADD_TO_NOTEBOOK_INDEX,"*---[langln_wk.c] [function: langln_adapt_wk_add_to_notebook] [Engine:Empty] index: [%d]---*")	
   TRC_MSG(MMI_LANGLN_WK_ADD_TO_NOTEBOOK_GET_WORD_INFO,"*---[langln_wk.c] [function: langln_adapt_wk_add_to_notebook] [Engine:DZD_WORD_GetWordInfo] Get word info returns FALSE---*")	
   TRC_MSG(MMI_LANGLN_WK_ADD_TO_NOTEBOOK_MARK_ADD,"*---[langln_wk.c] [function: langln_adapt_wk_add_to_notebook] [Engine:DZD_WORD_Mark_Add] Add to notebook successfully---*")	
   TRC_MSG(MMI_LANGLN_WK_ADD_TO_NOTEBOOK_FAILED,"*---[langln_wk.c] [function: langln_adapt_wk_add_to_notebook] [Engine:DZD_WORD_Mark_Add] Add to notebook failed---*")	
   TRC_MSG(MMI_LANGLN_WK_DELETE_FROM_NOTEBOOK,"*---[langln_wk.c] [function: langln_adapt_wk_delete_from_notebook] [Engine:DZD_WORD_Mark_Del] index: [%d], ret: [%d]---*")	
   TRC_MSG(MMI_LANGLN_WK_GET_PICTURE,"*---[langln_wk.c] [function: langln_adapt_wk_get_picture] [Engine:DZD_WORD_ReadImg] address: [%d], ret: [%d]---*")	
/*BSD king*/
   TRC_MSG(MMI_LANGLN_DK_GET_IN_MEM, "*---[LangLnDK.c] normal entry dictionary, the memory size is:%d")
   TRC_MSG(MMI_LANGLN_DK_GET_OUT_MEM, "*---[LangLnDK.c] normal exit dictionary, the memory size is:%d")
   TRC_MSG(MMI_LANGLN_DK_GET_IN_MEM_2,"*---[LangLnDK.c] App entry dictionary, the memory size is:%d")
   TRC_MSG(MMI_LANGLN_DK_GET_OUT_MEM_2, "*---[LangLnDK.c] App exit dictionary, the memory size is:%d")
   TRC_MSG(MMI_LANGLN_DK_GET_SOUND_TIME, "*---[LangLnDK.c] current word sound time is:begin:%d-end:%d")
   TRC_MSG(MMI_LANGLN_BK_GET_IN_MEM, "*---[LangLnBK.c] entry ebook king, the memory size is:%d")
   TRC_MSG(MMI_LANGLN_BK_GET_OUT_MEM, "*---[LangLnBK.c] exit ebook king, the memory size is:%d")
   TRC_MSG(MMI_LANGLN_SK_GET_IN_MEM, "*---[LangLnSK.c] entry sentence king, the memory size is:%d")
   TRC_MSG(MMI_LANGLN_SK_GET_OUT_MEM, "*---[LangLnSK.c] exit sentence king, the memory size is:%d")
   TRC_MSG(MMI_LANGLN_SK_GET_SOUND_TIME, "*---[LangLnSK.c] current sentece sound time is:begine:%d-end:%d")

   /*Begin: Listening King*/
   TRC_MSG(MMI_LANGLN_LK_ENTER_PROCESS, "[LANGLN_LK]Listening King enter process trace error=[%d]")
   TRC_MSG(MMI_LANGLN_LK_IMAGE_BUF, "[LANGLN_LK]Listening King get image buffer pImage=[%x], length=[%d]")
   TRC_MSG(MMI_LANGLN_LK_TRACE_1_VALUE, "[LANGLN_LK]Listening King common trace type=[%d], value=[%d]")
   TRC_MSG(MMI_LANGLN_LK_TRACE_2_VALUE, "[LANGLN_LK]Listening King common trace type=[%d], value1=[%d], value2=[%d]")
   
   /*End: Listening King*/


   /* --------------------------------------------------------------- */
   /* ----------------- MODULE NAME:Back ground sound ---------------- */
   /* --------------------------------------------------------------- */
   TRC_MSG(MMI_BGSND_MO_CALL_MAKE_CALL, "--- [BGSoundInCall.c] bgsnd_mo_call_make_call() => sound index = [%d] ---")
   TRC_MSG(MMI_BGSND_MO_PLAY_SOUND, "--- [BGSoundInCall.c] mmi_bgsnd_mo_play_sound() ---")
   TRC_MSG(MMI_BGSND_MT_PLAY_SOUND, "--- [BGSoundInCall.c] mmi_bgsnd_mt_play_sound() ---")

   TRC_MSG(MMI_BGSND_UTIL_PLAY_SOUND, "--- [BGSoundInCall.c] mmi_bgsnd_util_play_sound() => sound index = [%d] ---")
   TRC_MSG(MMI_BGSND_UTIL_PLAY_SOUND_IN_CALL, "--- [BGSoundInCall.c] mmi_bgsnd_util_play_sound_in_call() => status = [%d], speech on = [%d] ---")
   TRC_MSG(MMI_BGSND_UTIL_PLAY_IN_CALL_CALLBACK, "--- [BGSoundInCall.c] mmi_bgsnd_util_play_in_call_callback() => sound index = [%d] ---")

   TRC_MSG(MMI_BGSND_UTIL_STOP_PLAY_SOUND, "--- [BGSoundInCall.c] mmi_bgsnd_util_stop_play_sound() => status = [%d] ---")
   TRC_MSG(MMI_BGSND_UTIL_STOP_PLAY_SOUND_IN_CALL, "--- [BGSoundInCall.c] mmi_bgsnd_util_stop_play_sound_in_call() ---")
   TRC_MSG(MMI_BGSND_UTIL_STOP_PLAY_SOUND_END_CALL, "--- [BGSoundInCall.c] mmi_bgsnd_util_stop_play_sound_end_call() ---")

   TRC_MSG(MMI_BGSND_UTIL_SWITCH_SPEECH, "--- [BGSoundInCall.c] mmi_bgsnd_util_switch_speech() => speech on = [%d], request play = [%d]---")


   /* --------------------------------------------------------------- */
   /* ----------------- MODULE NAME:SWFlash-Chaotex  ----------------- */
   /* --------------------------------------------------------------- */
    TRC_MSG( MMI_SWFLASH_DEP_CIM_MALLOC,  	"*[swflash] cimMalloc: size=%d, ptr=[0x%x]")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_FREE,  	"*[swflash] cimFree: ptr=[0x%x]")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_MEMCMP,  	"*[swflash] cimMemCmp: [0x%x]<->[0x%x], size=%d, result=%d")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_MEMCPY,  	"*[swflash] cimMemCpy: [0x%x]-->[0x%x], size=%d")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_ZEROMEM,  	"*[swflash] cimZeroMem: [0x%x], size=%d")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_MEMSET,  	"*[swflash] cimMemset: [0x%x], size=%d, set as %d")


    TRC_MSG( MMI_SWFLASH_DEP_CIM_STRLEN,  	"*[swflash] cimStrlen: [0x%x], len=%d")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_STRCPY,  	"*[swflash] cimStrCpy: [0x%x]-->[0x%x]")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_STRCMP,  	"*[swflash] cimStrCmp: [0x%x]<->[0x%x], result=%d")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_STRCAT,  	"*[swflash] cimStrCat: [0x%x]<--[0x%x], result=%d")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_STRSTR,  	"*[swflash] cimStrStr: [0x%x]<->[0x%x], result=%d")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_STRLWR,  	"*[swflash] cimStrLwr: [0x%x]")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_WCSLEN,  	"*[swflash] cimWcslen: [0x%x], len=%d")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_WCSICMP,  	"*[swflash] cimWcsicmp: [0x%x]<->[0x%x], result=%d")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_WCSCMP,  	"*[swflash] cimWcsicmp: [0x%x]<->[0x%x], result=%d")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_WCSCHR,  	"*[swflash] cimWcschr: [0x%x], c=%d, loc=%d")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_WCSNCPY,  	"*[swflash] cimWcsncpy: [0x%x]-->[0x%x], count=%d")

    TRC_MSG( MMI_SWFLASH_DEP_CIM_TIMER_EVTHDLR,  	"*[swflash] cim_timer_expire_handler: HCIM=[0x%x], evt=%d, para1=%d, para2=%d, ret=%d")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_SETTIMER,  	"*[swflash] cimSetTimer: HCIM=[0x%x], interval=%d")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_KILLTIMER,  	"*[swflash] cimKillTimer: HCIM=[0x%x]")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_GETTICK,  	"*[swflash] cimGetTickCount: ticks=%d")

    TRC_MSG( MMI_SWFLASH_DEP_CIM_LOADPNG,  	"*[swflash] cimLoadPNG: PNG=[0x%x], len=%d")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_DIAL,  	"*[swflash] cimDial: num=%d%d%d%d%d%d%d%d%d%d")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_SENDSMS,  	"*[swflash] cimSendSms: num=%d%d%d%d%d%d%d%d%d%d")

    TRC_MSG( MMI_SWFLASH_DEP_CIM_PL_VIB_SEND_IND,  	"*[swflash] cim_pl_vib_send_ind, on=%d")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_VIBRATE_EVTHDLR,  	"*[swflash] cim_vibrate_expire_handler")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_VIBRATE,     "*[swflash] cimVibrate: msec=%d")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_GETBKBMP,  	"*[swflash] cimGetBKBmp: [0x%x], cx=%d, cy=%d, pitch=%x")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_GETIMEI,  	"*[swflash] cimCDBGetPhoneIMEI: [0x%x], size=%d")

    TRC_MSG( MMI_SWFLASH_DEP_CIM_CREATEFONT,  	"*[swflash] cimCreateFont: height=%d")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_GETFONTSIZE,  	"*[swflash] cimGetFontSize: font=[0x%x]")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_GETTEXTWIDTH,  	"*[swflash] cimGetTextWidth: font=[0x%x], str=[0x%x], len=%d")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_DRAWTEXTEX,  	"*[swflash] cimDrawTextEx: HCIM=[0x%x], font=[0x%x], x=%d, y=%d, str=[0x%x], len=%d, color=%d")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_DESTROYFONT,  	"*[swflash] cimDestroyFont: font=[0x%x]")

    TRC_MSG( MMI_SWFLASH_DEP_CIM_PL_AUD_SEND_IND,  	"*[swflash] cim_pl_aud_send_ind, notify=%d")

    TRC_MSG( MMI_SWFLASH_DEP_CIM_AUD_EVTHDLR,  	"*[swflash] cim_aud_event_hdlr: handle=[0x%x], evt=%d")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_ESOUNDOPEN,  	"*[swflash] cimESoundOpen: HCIM=[0x%x], len=%d, btype=%d, type=%d, loop=%d, flag=%d")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_ESOUNDPLAY,  	"*[swflash] cimESoundPlay: HCIM=[0x%x], es=[0x%x]")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_ESOUNDPAUSE,  	"*[swflash] cimESoundPause: HCIM=[0x%x], es=[0x%x]")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_ESOUNDRESUME,  	"*[swflash] cimESoundResume: HCIM=[0x%x], es=[0x%x]")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_ESOUNDREPLAY,  	"*[swflash] cimESoundReplay: HCIM=[0x%x], es=[0x%x]")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_ESOUNDSTOP,  	"*[swflash] cimESoundStop: HCIM=[0x%x], es=[0x%x]")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_ESOUNDCLOSE,  	"*[swflash] cimESoundClose: HCIM=[0x%x], es=[0x%x]")

    TRC_MSG( MMI_SWFLASH_DEP_CIM_DL_SOC_SEND_IND,  	"*[swflash] cim_dl_soc_send_ind, notify=%d")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_DL_SOC_IND_HDLR,  	"*[swflash] cim_dl_soc_ind_handler, soc_id=%d, evt_type=%d, soc_state=%d")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_DL_SOC_GET_IP_HDLR,  	"*[swflash] cim_dl_soc_get_ip_handler, result=%d, soc_state=%d")

    TRC_MSG( MMI_SWFLASH_DEP_CIM_SESOCKET,  	"*[swflash] cimSESocket: APN=[0x%x], soc_state=%d")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_SECONNECT,  	"*[swflash] cimSEConnect: ADD=[0x%x], port=%d, type=%d, soc_id=%d")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_SERECV,  	"*[swflash] cimSERecv: BUF=[0x%x], size=%d")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_SESEND,  	"*[swflash] cimSESend: BUF=[0x%x], size=%d")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_SECLOSE,  	"*[swflash] cimSEClose")
    TRC_MSG( MMI_SWFLASH_DEP_CIM_SENOTIFY,  	"*[swflash] cimSENotify, msg=%d, para1=%d, param2=%d")

    TRC_MSG( MMI_SWFLASH_DEP_CIM_GETDISKSPACE,   "*[swflash] cimGetDiskSpace, size=%d")

    TRC_MSG( MMI_SWFLASH_APP_CIM_CREATEHANDLE,   "*[SWFLASH] CimCreateHandle, data=[0x%x], size=%d => HFILE=[0x%x]")
    TRC_MSG( MMI_SWFLASH_APP_CIM_FREEHANDLE,   "*[SWFLASH] CimFreeHandle, HFILE=[0x%x]")

    TRC_MSG( MMI_SWFLASH_APP_CIM_ADDWFDDATA,   "*[SWFLASH] CimAddWfdData, HFILE=[0x%x], data=[0x%x], size=%d")
    TRC_MSG( MMI_SWFLASH_APP_CIM_GETFILEDATA,   "*[SWFLASH] CimGetFileData, HFILE=[0x%x], data=[0x%x], size=%d")
    TRC_MSG( MMI_SWFLASH_APP_CIM_2OPEN,   "*[SWFLASH] Cim2Open, HFILE=[0x%x], mode=%d, err=%d => HCIM=[0x%x]")
    TRC_MSG( MMI_SWFLASH_APP_CIM_2SETBUFFER,   "*[SWFLASH] Cim2SetBuffer, HCIM=[0x%x], width=%d, height=%d, pitch=%d, bpp=%d, BUF=[0x%x]")
    TRC_MSG( MMI_SWFLASH_APP_CIM_2PLAY,   "*[SWFLASH] Cim2Play, HCIM=[0x%x]")
    TRC_MSG( MMI_SWFLASH_APP_CIM_2STOP,   "*[SWFLASH] Cim2Stop, HCIM=[0x%x]")
    TRC_MSG( MMI_SWFLASH_APP_CIM_2PAUSE,   "*[SWFLASH] Cim2Pause, HCIM=[0x%x]")
    TRC_MSG( MMI_SWFLASH_APP_CIM_2RESUME,   "*[SWFLASH] Cim2Resume, HCIM=[0x%x]")
    TRC_MSG( MMI_SWFLASH_APP_CIM_2CLOSE,   "*[SWFLASH] Cim2Close, HCIM=[0x%x]")

    TRC_MSG( MMI_SWFLASH_APP_CIM_SECREATE,   "*[SWFLASH] CimSECreate, HFILE=[0x%x] => HSE=[0x%x]")
    TRC_MSG( MMI_SWFLASH_APP_CIM_SEDESTROY,   "*[SWFLASH] CimSEDestroy, HSE=[0x%x]")
    TRC_MSG( MMI_SWFLASH_APP_CIM_SEHNDLEVT,   "*[SWFLASH] CimSEHandleEvent, HSE=[0x%x], msg=%d, para1=%d, para2=%d")

    TRC_MSG( MMI_SWFLASH_APP_CIM_DL_RESULT_CB,   "*[SWFLASH] dl_result_callback, ret=%d")
    TRC_MSG( MMI_SWFLASH_APP_CIM_DL_PROGRESS_CB,   "*[SWFLASH] dl_progress_callback, dl=%d, total=%d")

    TRC_MSG( MMI_SWFLASH_MDI_CIM_INIT_PRELOAD_FILE,   "*[SWFLASH] mdi_swflash_init_preload_file")
    TRC_MSG( MMI_SWFLASH_MDI_CIM_READFILE,   "*[SWFLASH] mdi_swflash_read_file")
    TRC_MSG( MMI_SWFLASH_MDI_CIM_WRITEFILE,   "*[SWFLASH] mdi_swflash_write_file")
    TRC_MSG( MMI_SWFLASH_MDI_CIM_OPENFILE,   "*[SWFLASH] mdi_swflash_open_file")
    TRC_MSG( MMI_SWFLASH_MDI_CIM_CLOSEFILE,   "*[SWFLASH] mdi_swflash_close_file")
    TRC_MSG( MMI_SWFLASH_MDI_CIM_UPDATEFILE,   "*[SWFLASH] mdi_swflash_update_file")
    TRC_MSG( MMI_SWFLASH_MDI_CIM_OPENID,   "*[SWFLASH] mdi_swflash_open_id")
    TRC_MSG( MMI_SWFLASH_MDI_CIM_CLOSEID,   "*[SWFLASH] mdi_swflash_close_id")
    TRC_MSG( MMI_SWFLASH_MDI_CIM_PLAY,   "*[SWFLASH] mdi_swflash_play")
    TRC_MSG( MMI_SWFLASH_MDI_CIM_STOP,   "*[SWFLASH] mdi_swflash_stop")
    TRC_MSG( MMI_SWFLASH_MDI_CIM_PAUSE,   "*[SWFLASH] mdi_swflash_pause")
    TRC_MSG( MMI_SWFLASH_MDI_CIM_RESUME,   "*[SWFLASH] mdi_swflash_resume")

    TRC_MSG( MMI_SWFLASH_MDI_CIM_ENABLE_VISUAL,   "*[SWFLASH] mdi_swflash_enable_visual")
    TRC_MSG( MMI_SWFLASH_MDI_CIM_DISABLE_VISUAL,   "*[SWFLASH] mdi_swflash_disable_visual")
    TRC_MSG( MMI_SWFLASH_MDI_CIM_ENABLE_AUDIO,   "*[SWFLASH] mdi_swflash_enable_audio")
    TRC_MSG( MMI_SWFLASH_MDI_CIM_DISABLE_AUDIO,   "*[SWFLASH] mdi_swflash_disable_audio")
    TRC_MSG( MMI_SWFLASH_MDI_CIM_ENABLE_VIBRATE,   "*[SWFLASH] mdi_swflash_enable_vibrate")
    TRC_MSG( MMI_SWFLASH_MDI_CIM_DISABLE_VIBRATE,   "*[SWFLASH] mdi_swflash_disable_vibrate")
    TRC_MSG( MMI_SWFLASH_MDI_CIM_ENABLE_INTERACT,   "*[SWFLASH] mdi_swflash_enable_interaction")
    TRC_MSG( MMI_SWFLASH_MDI_CIM_DISABLE_INTERACT,   "*[SWFLASH] mdi_swflash_disable_interaction")

    TRC_MSG( MMI_SWFLASH_MDI_CIM_START_DOWNLOAD_FILE,   "*[SWFLASH] mdi_swflash_start_download_file")
    TRC_MSG( MMI_SWFLASH_MDI_CIM_STOP_DOWNLOAD_FILE,   "*[SWFLASH] mdi_swflash_stop_download_file")
    TRC_MSG( MMI_SWFLASH_MDI_CIM_DL_SOC_IND_HDLR,   "*[SWFLASH] mdi_swflash_dl_socket_ind_handler")

    TRC_MSG( MMI_SWFLASH_MDI_CIM_PL_AUD_IND_HDLR,   "*[SWFLASH] mdi_swflash_pl_audio_ind_handler")
    TRC_MSG( MMI_SWFLASH_MDI_CIM_VERIFYPNG,   "*[SWFLASH] mdi_swflash_verify_png, len=%d, width=%d, height=%d, pitch=%d")
    TRC_MSG( MMI_SWFLASH_MDI_CIM_DECODEPNG,   "*[SWFLASH] mdi_swflash_decode_png, len=%d")
    TRC_MSG( MMI_SWFLASH_MDI_CIM_UPDATEFRAME,   "*[SWFLASH] mdi_swflash_update_frame")


    TRC_MSG(MMI_SWFLASH_CIM_DL_SOC_IND_HDLR, "[cim] cim_dl_soc_ind_handler() - callback from SOC")
    TRC_MSG(MMI_SWFLASH_CIM_DL_SOC_IND_WRITE, "[cim] event: SOC_WRITE")
    TRC_MSG(MMI_SWFLASH_CIM_DL_SOC_IND_READ, "[cim] event: SOC_READ")
    TRC_MSG(MMI_SWFLASH_CIM_DL_SOC_IND_CONNECT, "[cim] event: SOC_CONNECT")
    TRC_MSG(MMI_SWFLASH_CIM_DL_SOC_IND_CLOSE, "[cim] event: SOC_CLOSE")
    TRC_MSG(MMI_SWFLASH_CIM_DL_SOC_GET_IP_HDLR, "[cim] cim_dl_soc_get_ip_handler()")
    
    TRC_MSG(MMI_SWFLASH_CIM_SE_SOCKET, "[cim] cimSESocket()") 
    TRC_MSG(MMI_SWFLASH_CIM_SE_SOCKET_ID, "[cim] sock_id: %d")   
    TRC_MSG(MMI_SWFLASH_CIM_SE_SOCKET_CREATE_FAIL, "[cim] socket create failed")

    TRC_MSG(MMI_SWFLASH_CIM_SOC_RET, "[cim] soc ret: %d") 

    TRC_MSG(MMI_SWFLASH_CIM_SE_CONNECT, "[cim] cimSEConnect()") 
    TRC_MSG(MMI_SWFLASH_CIM_SE_CONNECT_ADD, "[cim] address: %d.%d.%d.%d:%d") 
    TRC_MSG(MMI_SWFLASH_CIM_SE_CONNECT_CON_TYPE_IP, "[cim] con_type: IP") 
    TRC_MSG(MMI_SWFLASH_CIM_SE_CONNECT_CON_TYPE_HOST_NAME, "[cim] con_type: HOST_NAME") 
    TRC_MSG(MMI_SWFLASH_CIM_SE_CONNECT_CALL_SOC_CONNECT, "[cim] call soc_connect()") 

    TRC_MSG(MMI_SWFLASH_CIM_SE_RECV, "[cim] cimSERecv()") 
    TRC_MSG(MMI_SWFLASH_CIM_SE_RECV_REQ_SIZE, "[cim] recv buf size: %d") 
    TRC_MSG(MMI_SWFLASH_CIM_SE_RECV_CALL_SOC_RECV, "[cim] call soc_recv()") 
    
    TRC_MSG(MMI_SWFLASH_CIM_SE_SEND, "[cim] cimSESend()") 
    TRC_MSG(MMI_SWFLASH_CIM_SE_SEND_REQ_SIZE, "[cim] send buf size: %d") 
    TRC_MSG(MMI_SWFLASH_CIM_SE_SEND_CALL_SOC_SEND, "[cim] call soc_send()") 

    TRC_MSG(MMI_SWFLASH_CIM_SE_CLOSE, "[cim] cimSEClose()") 
     
    TRC_MSG(MMI_SWFLASH_CIM_SE_NOTIFY, "[cim] cimSENotify()") 
    TRC_MSG(MMI_SWFLASH_CIM_SE_NOTIFY_UNKNOWN, "[cim] notify: SEN_UNKNOWN")    
    TRC_MSG(MMI_SWFLASH_CIM_SE_NOTIFY_VALIDATE_FAIL, "[cim] notify: SEN_VALIDATE_FAIL")     
    TRC_MSG(MMI_SWFLASH_CIM_SE_NOTIFY_FILE_ERROR, "[cim] notify: SEN_FILE_ERROR") 
    TRC_MSG(MMI_SWFLASH_CIM_SE_NOTIFY_DOWNLOAD_COMPLETE, "[cim] notify: SEN_DOWNLOAD_COMPLETE") 
    TRC_MSG(MMI_SWFLASH_CIM_SE_NOTIFY_SERVER_ERROR, "[cim] notify: SEN_SERVER_ERROR") 
    TRC_MSG(MMI_SWFLASH_CIM_SE_NOTIFY_FUN_ERROR, "[cim] notify: SEN_SOCKET_FUN_ERROR") 
    TRC_MSG(MMI_SWFLASH_CIM_SE_NOTIFY_DISK_FULL, "[cim] notify: SEN_DISK_FULL") 
    TRC_MSG(MMI_SWFLASH_CIM_SE_NOTIFY_CONNECT_FAIL, "[cim] notify: SEN_CONNECT_FAIL") 
    TRC_MSG(MMI_SWFLASH_CIM_SE_NOTIFY_SEND_FAIL, "[cim] notify: SEN_SEND_FAIL") 
    TRC_MSG(MMI_SWFLASH_CIM_SE_NOTIFY_RECV_FAIL, "[cim] notify: SEN_RECV_FAIL") 
    TRC_MSG(MMI_SWFLASH_CIM_SE_NOTIFY_DNS_FAIL, "[cim] notify: SEN_DNS_FAIL") 
    TRC_MSG(MMI_SWFLASH_CIM_SE_NOTIFY_HTTP_FAIL, "[cim] notify: SEN_HTTP_FAIL") 
    TRC_MSG(MMI_SWFLASH_CIM_SE_NOTIFY_DB_FAIL, "[cim] notify: SEN_DB_FAIL") 
    TRC_MSG(MMI_SWFLASH_CIM_SE_NOTIFY_DOWNLOADING_STATUS, "[cim] notify: SEN_DOWNLOADING_STATUS: %d:%d") 

    /* --------------------------------------------------------------- */
    /* ------------------------- MODULE NAME:SWFlash-NEOMTEL -------------------------- */
    /* --------------------------------------------------------------- */
    TRC_MSG( MMI_SWFLASH_APP_STOP,   "*[SWFLASH] s3wi_stop hinstance=[%x]")
    TRC_MSG( MMI_SWFLASH_MEM_INIT,   "*[SWFLASH] s3wi_memory_init mem=[%x],size=%d")
    TRC_MSG( MMI_SWFLASH_APP_CREATE, "*[SWFLASH] s3wi_create pdev=[%x],sys_ca=%x,mem_limit=%d,perform=%d,instance=%x")
    TRC_MSG( MMI_SWFLASH_APP_LOAD,   "*[SWFLASH] s3wi_load hinstan=[%x],datainfo=%x,data_type=%d,loop=%d,sound off=%d,ret=%d")
    TRC_MSG( MMI_SWFLASH_APP_RELEASE,   "*[SWFLASH] s3wi_release hinstance=[%x]")
    TRC_MSG( MMI_SWFLASH_APP_UNLOAD,   "*[SWFLASH] s3wi_unload hinstance=[%x],ret=%d")
    TRC_MSG( MMI_SWFLASH_APP_PLAY,   "*[SWFLASH] s3wi_play hinstance=[%x]")
    TRC_MSG( MMI_SWFLASH_APP_PAUSE,   "*[SWFLASH] s3wi_pause hinstance=[%x]")
    TRC_MSG( MMI_SWFLASH_APP_RESUMME,   "*[SWFLASH] s3wi_resume hinstance=[%x]")
    TRC_MSG( MMI_SWFLASH_APP_GET_CONTENT,   "*[SWFLASH] s3wi_get_content_info instance=[%x]")
    TRC_MSG( MMI_SWFLASH_APP_PROCESS,   "*[SWFLASH] s3wi_process hinstance=[%x],timer=%x,ret=%d")
    TRC_MSG( MMI_SWFLASH_APP_KEY_DOWN,   "*[SWFLASH] s3wi_key_down hinstance=[%x],key_code=%x")
    TRC_MSG( MMI_SWFLASH_APP_KEY_PRESSED,   "*[SWFLASH] s3wi_key_pressed hinstance=[%x],key_code=%x")
    TRC_MSG( MMI_SWFLASH_APP_KEY_RELEASED,   "*[SWFLASH] s3wi_key_released hinstance=[%x]")
    TRC_MSG( MMI_SWFLASH_APP_EXTRACE_CPCODE,   "*[SWFLASH] s3wi_extract_cpcode hinstance=[%x]")
    TRC_MSG( MMI_SWFLASH_APP_FONT,   "*[SWFLASH] s3wi_set_font hinstance=[%x]")
    TRC_MSG( MMI_SWFLASH_APP_TICK,   "*[SWFLASH] s3wa_tick hinstance=[%x]")
    TRC_MSG( MMI_SWFLASH_APP_DEFINE_TIMER,   "*[SWFLASH] s3wa_define_timer pdevice=[%x]")
    TRC_MSG( MMI_SWFLASH_APP_SET_TIMER,   "*[SWFLASH] s3wa_set_timer pdevice=[%x],timer=%x,inter=%d")
    TRC_MSG( MMI_SWFLASH_APP_CANCEL_TIMER,   "*[SWFLASH] s3wa_cancel_timer pdevice=[%x],timer=%x")
    TRC_MSG( MMI_SWFLASH_APP_TIMER_EXPIRED,   "*[SWFLASH] s3wa_timer_expired()")
    TRC_MSG( MMI_SWFLASH_APP_INIT_VIEW,   "*[SWFLASH] s3wa_init_view pdevice=[%x],content_finfo=%x,viewport=%x")
    TRC_MSG( MMI_SWFLASH_APP_UPDATE_FRAME,   "*[SWFLASH] s3wa_update_frame pdevice=[%x],frame_info=%x,offsetx=%d,offsety=%d")
    TRC_MSG( MMI_SWFLASH_APP_ON_END,   "*[SWFLASH] s3wa_on_end pdevice=[%x],lparam=%x")
    TRC_MSG( MMI_SWFLASH_APP_VOICE_PLAY,   "*[SWFLASH] s3wa_voice_play pdevice=[%x]")
    TRC_MSG( MMI_SWFLASH_APP_VOICE_STOP,   "*[SWFLASH] s3wi_voice_stop hinstance=[%x]")
    TRC_MSG( MMI_SWFLASH_APP_VOICE_PAUSE,   "*[SWFLASH] s3wa_voice_pause hinstance=[%x]")
    TRC_MSG( MMI_SWFLASH_APP_VOICE_RERUME,   "*[SWFLASH] s3wa_voice_resume hinstance=[%x]")
    TRC_MSG( MMI_SWFLASH_APP_MIDI_PLAY,   "*[SWFLASH] s3wa_midi_play pdevice=[%x]")
    TRC_MSG( MMI_SWFLASH_APP_MIDI_STOP,   "*[SWFLASH] s3wa_midi_stop pdevice=[%x]")
    TRC_MSG( MMI_SWFLASH_APP_MIDI_PAUSE,   "*[SWFLASH] s3wa_midi_pause pdevice=[%x]")
    TRC_MSG( MMI_SWFLASH_APP_MIDI_RESUME,   "*[SWFLASH] s3wa_midi_resume pdevice=[%x]")
    TRC_MSG( MMI_SWFLASH_APP_ON_EVENT,   "*[SWFLASH] MFLASH:%d/0-255 Playing..")
    TRC_MSG( MMI_SWFLASH_APP_ENTRY_PLAY,   "*[SWFLASH] mmi_swflash_option_play_entry_screen")
    TRC_MSG( MMI_SWFLASH_APP_ENTRY_PLAY2,   "*[SWFLASH] mmi_swflash_option_play_entry_screen2")
    TRC_MSG( MMI_SWFLASH_APP_EXIT_PLAY,   "*[SWFLASH] mmi_swflash_option_play_exit_screen")
    TRC_MSG( MMI_SWFLASH_APP_PLAY_END,   "*[SWFLASH] mmi_swflash_play_callback,ret=%d")
    TRC_MSG( MMI_SWFLASH_APP_ENTER_INFO,   "*[SWFLASH] mmi_swflash_option_info_entry_screen")

    TRC_MSG( MMI_SWFLASH_APP_DECIPHER,   "*[SWFLASH]mmi_swflash_vis_decipher ret=%d")
    TRC_MSG( MMI_SWFLASH_DL_ZDD_GET_NAME,   "*[SWFLASH_DL]zdd_get_name ret=%d")
    TRC_MSG( MMI_SWFLASH_DL_ZDD_INIT,   "*[SWFLASH_DL]zdd_init ret=%d")
    TRC_MSG( MMI_SWFLASH_DL_ZDD_PARSER,   "*[SWFLASH_DL]zdd_parser ret=%d")
    TRC_MSG( MMI_SWFLASH_DL_ZDD_ENCRYPT_FAIL,   "*[SWFLASH_DL]zdd encrypt failed")
    TRC_MSG( MMI_SWFLASH_DL_VIS_ENCRYPT_RESULT,   "*[SWFLASH_DL]vis encrypt ret=%d")




    /* --------------------------------------------------------------- */
    /* ------------------------- MDI SWFLASH -------------------------- */
    /* --------------------------------------------------------------- */
    TRC_MSG(MDI_SWFLASH_CHECK_DOWNLAOD_FILE, "[MDI_SWFLASH] mdi_swflash_check_download_file()")
    TRC_MSG(MDI_SWFLASH_START_DOWNLAOD_FILE, "[MDI_SWFLASH] mdi_swflash_start_download_file()")
    TRC_MSG(MDI_SWFLASH_CIM_CREATE_HANDLE_RESULT, "[MDI_SWFLASH] CimCreateHandle() result: %d")
    TRC_MSG(MDI_SWFLASH_CIM_SE_CREATE_RESULT, "[MDI_SWFLASH] CimSECreate() result: %d")
    TRC_MSG(MDI_SWFLASH_STOP_DOWNLOAD_FILE, "[MDI_SWFLASH] mdi_swflash_stop_download_file()")
    TRC_MSG(MDI_SWFLASH_DL_SOCKET_IND_HDLR, "[MDI_SWFLASH] mdi_swflash_dl_socket_ind_handler()")
    TRC_MSG(MDI_SWFLASH_DL_SOCKET_IND_COMPLETE, "[MDI_SWFLASH] event: CIM_DL_SOC_NOTIFY_DL_COMPLETE")
    TRC_MSG(MDI_SWFLASH_DL_SOCKET_IND_STATUS, "[MDI_SWFLASH] event: CIM_DL_SOC_NOTIFY_DL_STATUS")
    TRC_MSG(MDI_SWFLASH_DL_SOCKET_IND_CONNET_OK, "[MDI_SWFLASH] event: CIM_DL_SOC_NOTIFY_CONNECT_OK") 
    TRC_MSG(MDI_SWFLASH_DL_SOCKET_IND_SEND_OK, "[MDI_SWFLASH] event: CIM_DL_SOC_NOTIFY_SEND_OK")
    TRC_MSG(MDI_SWFLASH_DL_SOCKET_IND_RECV_OK, "[MDI_SWFLASH] event: CIM_DL_SOC_NOTIFY_RECV_OK")
    TRC_MSG(MDI_SWFLASH_DL_SOCKET_IND_DNS_OK, "[MDI_SWFLASH] event: CIM_DL_SOC_NOTIFY_DNS_OK")
    TRC_MSG(MDI_SWFLASH_DL_SOCKET_IND_CONNECT_FAIL, "[MDI_SWFLASH] event: CIM_DL_SOC_NOTIFY_CONNECT_FAILED")
    TRC_MSG(MDI_SWFLASH_DL_SOCKET_IND_SEND_FAIL, "[MDI_SWFLASH] event: CIM_DL_SOC_NOTIFY_SEND_FAILED")
    TRC_MSG(MDI_SWFLASH_DL_SOCKET_IND_RECV_FAIL, "[MDI_SWFLASH] event: CIM_DL_SOC_NOTIFY_RECV_FAILED")
    TRC_MSG(MDI_SWFLASH_DL_SOCKET_IND_DNS_FAIL, "[MDI_SWFLASH] event: CIM_DL_SOC_NOTIFY_DNS_FAILED")
    TRC_MSG(MDI_SWFLASH_DL_SOCKET_IND_FILE_ERROR, "[MDI_SWFLASH] event: CIM_DL_SOC_NOTIFY_FILE_ERROR")
    TRC_MSG(MDI_SWFLASH_DL_SOCKET_IND_DISK_FULL, "[MDI_SWFLASH] event: CIM_DL_SOC_NOTIFY_DISK_FULL")
    TRC_MSG(MDI_SWFLASH_DL_SOCKET_IND_SOCKET_ERROR, "[MDI_SWFLASH] event: CIM_DL_SOC_NOTIFY_SOCKET_ERROR")
    TRC_MSG(MDI_SWFLASH_DL_SOCKET_IND_SERVER_ERROR, "[MDI_SWFLASH] event: CIM_DL_SOC_NOTIFY_SERVER_ERROR")
    TRC_MSG(MDI_SWFLASH_DL_SOCKET_IND_HTTP_FAIL, "[MDI_SWFLASH] event: CIM_DL_SOC_NOTIFY_HTTP_FAILED")
    TRC_MSG(MDI_SWFLASH_DL_SOCKET_IND_UNKNOWN, "[MDI_SWFLASH] event: CIM_DL_SOC_NOTIFY_UNKNOWN")
    TRC_MSG(MDI_SWFLASH_ON_END, "[MDI_SWFLASH] mdi_swflash_on_end instance=%x")


    /* --------------------------------------------------------------- */
    /* ------------------------- MDI VIDEO --------------------------- */
    /* --------------------------------------------------------------- */
    TRC_MSG(MDI_TRC_VIDEO_MEDIA_RET, "[MDI_VIDEO] media ret: %d")
    TRC_MSG(MDI_TRC_VIDEO_CUR_TIME, "[MDI_VIDEO] cur_time: %d")
    TRC_MSG(MDI_TRC_VIDEO_STOP_TIME, "[MDI_VIDEO] stop_time: %d")    
    TRC_MSG(MDI_TRC_VIDEO_REC_ZOOM_FACTOR, "[MDI_VIDEO] zoom_factor: %d")         
    TRC_MSG(MDI_TRC_VIDEO_PERCENTAGE, "[MDI_VIDEO] pecentage: %d")     
    TRC_MSG(MDI_TRC_VIDEO_MAX_TIME, "[MDI_VIDEO] max_time: %d") 
    TRC_MSG(MDI_TRC_VIDEO_FILE_SIZE, "[MDI_VIDEO] file_size: %d") 

    TRC_MSG(MDI_TRC_VIDEO_REC_POWER_ON, "[MDI_VIDEO] mdi_video_rec_power_on()")
    TRC_MSG(MDI_TRC_VIDEO_REC_POWER_OFF, "[MDI_VIDEO] mdi_video_rec_power_off()")
    TRC_MSG(MDI_TRC_VIDEO_REC_PREVIEW_START, "[MDI_VIDEO] mdi_video_rec_preview_start()")
    TRC_MSG(MDI_TRC_VIDEO_REC_PREVIEW_STOP, "[MDI_VIDEO] mdi_video_rec_preview_stop()")
    TRC_MSG(MDI_TRC_VIDEO_REC_RECORD_START, "[MDI_VIDEO] mdi_video_rec_record_start()")
    TRC_MSG(MDI_TRC_VIDEO_REC_RECORD_STOP, "[MDI_VIDEO] mdi_video_rec_record_stop()")
    TRC_MSG(MDI_TRC_VIDEO_REC_RECORD_PAUSE, "[MDI_VIDEO] mdi_video_rec_record_pause()")
    TRC_MSG(MDI_TRC_VIDEO_REC_RECORD_RESUME, "[MDI_VIDEO] mdi_video_rec_record_resume()")
    TRC_MSG(MDI_TRC_VIDEO_REC_GET_CUR_RECORD_TIME, "[MDI_VIDEO_EX] mdi_video_rec_get_cur_record_time()")
    TRC_MSG(MDI_TRC_VIDEO_REC_HAS_UNSAVED_FILE, "[MDI_VIDEO] mdi_video_rec_has_unsaved_file()")
    TRC_MSG(MDI_TRC_VIDEO_REC_DELETE_UNSAVED_FILE, "[MDI_VIDEO] mdi_video_rec_delete_unsaved_file()")    
    TRC_MSG(MDI_TRC_VIDEO_REC_SAVE_FILE, "[MDI_VIDEO] mdi_video_rec_save_file()")    
    TRC_MSG(MDI_TRC_VIDEO_REC_STOP_SAVE, "[MDI_VIDEO] mdi_video_rec_stop_save()")        
    TRC_MSG(MDI_TRC_VIDEO_REC_UPDATE_PARA_EV, "[MDI_VIDEO] mdi_video_rec_update_para_ev(%d)")      
    TRC_MSG(MDI_TRC_VIDEO_REC_UPDATE_PARA_ZOOM, "[MDI_VIDEO] mdi_video_rec_update_para_zoom(%d)")
    TRC_MSG(MDI_TRC_VIDEO_REC_UPDATE_PARA_EFFECT, "[MDI_VIDEO] mdi_video_rec_update_para_effect(%d)")    
    TRC_MSG(MDI_TRC_VIDEO_REC_UPDATE_PARA_WB, "[MDI_VIDEO] mdi_video_rec_update_para_wb(%d)")    
    TRC_MSG(MDI_TRC_VIDEO_REC_UPDATE_PARA_NIGHT, "[MDI_VIDEO] mdi_video_rec_update_para_night(%d)")        
    TRC_MSG(MDI_TRC_VIDEO_REC_GET_MAX_ZOOM_FACTOR, "[MDI_VIDEO] mdi_video_rec_get_max_zoom_factor()")   
    TRC_MSG(MDI_TRC_VIDEO_REC_GET_RECORD_FILE_SIZE, "[MDI_VIDEO] mdi_video_rec_get_record_file_size()")       
    TRC_MSG(MDI_TRC_VIDEO_REC_SAVE_RESULT_HDLR, "[MDI_VIDEO] mdi_video_rec_save_result_hdlr()")   
    TRC_MSG(MDI_TRC_VIDEO_REC_RECORD_RESULT_HDLR, "[MDI_VIDEO] mdi_video_rec_record_result_hdlr()")   
    TRC_MSG(MDI_TRC_VIDEO_PLY_OPEN_FILE, "[MDI_VIDEO] mdi_video_ply_open_file()")   
    TRC_MSG(MDI_TRC_VIDEO_PLY_CLOSE_FILE, "[MDI_VIDEO] mdi_video_ply_close_file()")
    TRC_MSG(MDI_TRC_VIDEO_PLY_SNAPSHOT, "[MDI_VIDEO] mdi_video_ply_snapshot()")
    TRC_MSG(MDI_TRC_VIDEO_PLY_PLAY, "[MDI_VIDEO] mdi_video_ply_play()")
    TRC_MSG(MDI_TRC_VIDEO_PLY_STOP, "[MDI_VIDEO] mdi_video_ply_stop()")    
    TRC_MSG(MDI_TRC_VIDEO_PLY_SEEK, "[MDI_VIDEO] mdi_video_ply_seek()")    
    TRC_MSG(MDI_TRC_VIDEO_PLY_SEEK_AND_GET_FRAME, "[MDI_VIDEO] mdi_video_ply_seek_and_get_frame()") 
    TRC_MSG(MDI_TRC_VIDEO_PLY_NON_BLOCK_SEEK, "[MDI_VIDEO] mdi_video_ply_non_block_seek()") 
    TRC_MSG(MDI_TRC_VIDEO_PLY_NON_BLOCK_SEEK_AND_GET_FRAME, "[MDI_VIDEO] mdi_video_ply_non_block_seek_and_get_frame()")     
    TRC_MSG(MDI_TRC_VIDEO_PLY_STOP_NON_BLOCK_SEEK, "[MDI_VIDEO] mdi_video_ply_stop_non_block_seek()")     
    TRC_MSG(MDI_TRC_VIDEO_PLY_STOP_NON_BLOCK_SEEK_RESULT_HDLR, "[MDI_VIDEO] mdi_video_ply_non_block_seek_result_hdlr()") 
    TRC_MSG(MDI_TRC_VIDEO_PLY_GET_CUR_PLAY_TIME, "[MDI_VIDEO_EX] mdi_video_ply_get_cur_play_time()")
    TRC_MSG(MDI_TRC_VIDEO_PLY_PLAY_FINISH_RESULT_HDLR, "[MDI_VIDEO] mdi_video_ply_play_finish_result_hdlr()")
    TRC_MSG(MDI_TRC_VIDEO_PLY_OPEN_FILE_RESULT_HDLR, "[MDI_VIDEO] mdi_video_ply_open_file_result_hdlr()")
    TRC_MSG(MDI_TRC_VIDEO_PLY_SET_LCM_UPDATE, "[MDI_VIDEO] mdi_video_ply_set_lcm_update(%d)")
    TRC_MSG(MDI_TRC_VIDEO_PLY_SET_BRIGHTNESS, "[MDI_VIDEO] mdi_video_ply_set_brightness(%d)")
    TRC_MSG(MDI_TRC_VIDEO_PLY_SET_CONTRAST, "[MDI_VIDEO] mdi_video_ply_set_contrast(%d)")    
    TRC_MSG(MDI_TRC_VIDEO_PLY_OPEN_CLIP_FILE, "[MDI_VIDEO] mdi_video_ply_open_clip_file()")
    TRC_MSG(MDI_TRC_VIDEO_PLY_CLOSE_CLIP_FILE, "[MDI_VIDEO] mdi_video_ply_close_clip_file()")
    TRC_MSG(MDI_TRC_VIDEO_PLY_OPEN_CLIP_ID, "[MDI_VIDEO] mdi_video_ply_open_clip_id()")
    TRC_MSG(MDI_TRC_VIDEO_PLY_CLOSE_CLIP_ID, "[MDI_VIDEO] mdi_video_ply_close_clip_id()")
    TRC_MSG(MDI_TRC_VIDEO_PLY_OPEN_CLIP_BUFFER, "[MDI_VIDEO] mdi_video_ply_open_clip_buffer()")
    TRC_MSG(MDI_TRC_VIDEO_PLY_CLOSE_CLIP_BUFFER, "[MDI_VIDEO] mdi_video_ply_close_clip_buffer()")    
    TRC_MSG(MDI_TRC_VIDEO_PLY_ENABLE_PARTIAL_DISPLAY, "[MDI_VIDEO] mdi_video_ply_enable_partial_display()")
    TRC_MSG(MDI_TRC_VIDEO_PLY_SET_STOP_TIME, "[MDI_VIDEO] mdi_video_ply_set_stop_time()")    
    TRC_MSG(MDI_TRC_VIDEO_PLY_SET_OVERLAY_PALETTE, "[MDI_VIDEO] mdi_video_set_overlay_palette()")    
    TRC_MSG(MDI_TRC_VIDEO_BLOCKED_RECOVERY, "[MDI_VIDEO] mdi_video_blocked_recovery()")    
    TRC_MSG(MDI_TRC_VIDEO_STREAM_INIT, "[MDI_VIDEO] mdi_video_stream_init()")   
    TRC_MSG(MDI_TRC_VIDEO_STREAM_DEINIT, "[MDI_VIDEO] mdi_video_stream_deinit()") 
    TRC_MSG(MDI_TRC_VIDEO_STREAM_CONNECT, "[MDI_VIDEO] mdi_video_stream_connect()")     
    TRC_MSG(MDI_TRC_VIDEO_STREAM_DISCONNECT, "[MDI_VIDEO] mdi_video_stream_disconnect()")      
    TRC_MSG(MDI_TRC_VIDEO_STREAM_IS_CONNECTED, "[MDI_VIDEO] mdi_video_stream_is_connected()")      
    TRC_MSG(MDI_TRC_VIDEO_STREAM_START_BUFFERING, "[MDI_VIDEO] mdi_video_stream_start_buffering()")        
    TRC_MSG(MDI_TRC_VIDEO_STREAM_STOP_BUFFERING, "[MDI_VIDEO] mdi_video_stream_stop_buffering()")        
    TRC_MSG(MDI_TRC_VIDEO_STREAM_PLAY, "[MDI_VIDEO] mdi_video_stream_play()")   
    TRC_MSG(MDI_TRC_VIDEO_STREAM_STOP, "[MDI_VIDEO] mdi_video_stream_stop()")           
    TRC_MSG(MDI_TRC_VIDEO_STREAM_RESUME, "[MDI_VIDEO] mdi_video_stream_resume()")  
    TRC_MSG(MDI_TRC_VIDEO_STREAM_PAUSE, "[MDI_VIDEO] mdi_video_stream_pause()")      
    TRC_MSG(MDI_TRC_VIDEO_STREAM_CONNECT_RESULT_HDLR, "[MDI_VIDEO] mdi_video_stream_connect_result_hdlr()")           
    TRC_MSG(MDI_TRC_VIDEO_STREAM_BUFFERING_RESULT_HDLR, "[MDI_VIDEO] mdi_video_stream_buffering_result_hdlr()")    
    TRC_MSG(MDI_TRC_VIDEO_STREAM_PLAY_RESULT_HDLR, "[MDI_VIDEO] mdi_video_stream_play_result_hdlr()")        
    TRC_MSG(MDI_TRC_VIDEO_STREAM_GET_BUF_PERCENTAGE, "[MDI_VIDEO_EX] mdi_video_stream_get_buf_percentage()") 
    TRC_MSG(MDI_TRC_VIDEO_STREAM_GET_CUR_PLAY_TIME, "[MDI_VIDEO_EX] mdi_video_stream_get_cur_play_time()") 
    TRC_MSG(MDI_TRC_VIDEO_STREAM_SET_BRIGHTNESS, "[MDI_VIDEO] mdi_video_stream_set_brightness(%d)")
    TRC_MSG(MDI_TRC_VIDEO_STREAM_SET_CONTRAST, "[MDI_VIDEO] mdi_video_stream_set_contrast(%d)")        
    TRC_MSG(MDI_TRC_VIDEO_STREAM_ENABLE_PARTIAL_DISPLAY, "[MDI_VIDEO] mdi_video_stream_enable_partial_display()")
    TRC_MSG(MDI_TRC_VIDEO_STREAM_SET_STOP_TIME, "[MDI_VIDEO] mdi_video_stream_set_stop_time()")        
    TRC_MSG(MDI_TRC_VIDEO_PROGRESSIVE_OPEN_FILE, "[MDI_VIDEO] mdi_video_progressive_open_file()") 
    TRC_MSG(MDI_TRC_VIDEO_PROGRESSIVE_CLOSE_FILE, "[MDI_VIDEO] mdi_video_progressive_close_file()")     
    TRC_MSG(MDI_TRC_VIDEO_PROGRESSIVE_GET_MAX_PLAY_TIME, "[MDI_VIDEO_EX] mdi_video_progressive_get_max_play_time()") 
    TRC_MSG(MDI_TRC_VIDEO_PROGRESSIVE_GET_BUF_PERCENTAGE, "[MDI_VIDEO_EX] mdi_video_progressive_get_buf_percentage()") 
    TRC_MSG(MDI_TRC_VIDEO_PROGRESSIVE_IS_PDL_FORMAT, "[MDI_VIDEO] mdi_video_progressive_is_pdl_format()")     
    TRC_MSG(MDI_TRC_VIDEO_EDT_OPEN_FILE, "[MDI_VIDEO] mdi_video_edt_open_file()")     
    TRC_MSG(MDI_TRC_VIDEO_EDT_CLOSE_FILE, "[MDI_VIDEO] mdi_video_edt_close_file()")     
    TRC_MSG(MDI_TRC_VIDEO_EDT_ACTIVE, "[MDI_VIDEO] mdi_video_edt_active(%d)")  
    TRC_MSG(MDI_TRC_VIDEO_EDT_DEACTIVE, "[MDI_VIDEO] mdi_video_edt_deactive()")  
    TRC_MSG(MDI_TRC_VIDEO_SEQ_NOT_MATCHED, "[MDI_VIDEO] seq num not matched!!")  
    TRC_MSG(MDI_TRC_VIDEO_EDT_ENCODE_OPEN, "[MDI_VIDEO] mdi_video_edt_encode_open()")  
    TRC_MSG(MDI_TRC_VIDEO_EDT_ENCODE_CLOSE, "[MDI_VIDEO] mdi_video_edt_encode_close()")  
    TRC_MSG(MDI_TRC_VIDEO_EDT_ENCODE_APPEND_IMAGE, "[MDI_VIDEO] mdi_video_edt_encode_append_image()")  
    TRC_MSG(MDI_TRC_VIDEO_EDT_ENCODE_APPEND_VIDEO, "[MDI_VIDEO] mdi_video_edt_encode_append_video()")  
    TRC_MSG(MDI_TRC_VIDEO_EDT_ENCODE_MERGE, "[MDI_VIDEO] mdi_video_edt_encode_merge()")      
    TRC_MSG(MDI_TRC_VIDEO_EDT_ENCODE_STOP_MERGE, "[MDI_VIDEO] mdi_video_edt_encode_stop_merge()")          
    TRC_MSG(MDI_TRC_VIDEO_EDT_ENCODE_OPEN_BGM, "[MDI_VIDEO] mdi_video_edt_encode_open_bgm()")      
    TRC_MSG(MDI_TRC_VIDEO_EDT_ENCODE_CLOSE_BGM, "[MDI_VIDEO] mdi_video_edt_encode_close_bgm()")      
    TRC_MSG(MDI_TRC_VIDEO_EDT_ENCODE_MERGE_RESULT_HDLR, "[MDI_VIDEO] mdi_video_edt_encode_merge_result_hdlr()")   


    /* Video Player */
    /* pdl */
    TRC_MSG(MMI_TRC_VDOPLY_PDL_DA_REPORT_HDLR, "[VDOPLY_EX] mmi_vdoply_pdl_da_report_hdlr(), cause: %d, pdl_state: %d, session_id: %d, cur_session_id: %d")  
    TRC_MSG(MMI_TRC_VDOPLY_PDL_DA_FILEPATH_HDLR, "[VDOPLY_EX] mmi_vdoply_pdl_da_filepath_hdlr()")  
    TRC_MSG(MMI_TRC_VDOPLY_PDL_DA_NOTIFY_FILE, "[VDOPLY_EX] mmi_vdoply_pdl_da_notify_file()")  

    /* stream */
    TRC_MSG(MMI_TRC_VDOPLY_STREAM_RECEIVE_DA_FILE, "[VDOPLY] mmi_vdoply_stream_receive_da_file()")  

    /* misc */
    TRC_MSG(MMI_TRC_VDOPLY_IS_KEY_PRESSED, "[VDOPLY] is_key_pressed: %d")  
    TRC_MSG(MMI_TRC_VDOPLY_RET, "[VDOPLY] ret: %d")  

    /* function */
    TRC_MSG(MMI_TRC_VDOPLY_SEPPD_INC_KEY_PRESS, "[VDOPLY] mmi_vdoply_speed_inc_key_press()")
    TRC_MSG(MMI_TRC_VDOPLY_SEPPD_INC_KEY_RELEASE, "[VDOPLY] mmi_vdoply_speed_inc_key_release()")  
    TRC_MSG(MMI_TRC_VDOPLY_SEPPD_DEC_KEY_PRESS, "[VDOPLY] mmi_vdoply_speed_dec_key_press()")      
    TRC_MSG(MMI_TRC_VDOPLY_SEPPD_DEC_KEY_RELEASE, "[VDOPLY] mmi_vdoply_speed_dec_key_release()")   
    TRC_MSG(MMI_TRC_VDOPLY_SEEK_KEY_PRESS, "[VDOPLY] mmi_vdoply_seek_key_press()")           
    TRC_MSG(MMI_TRC_VDOPLY_SEEK_KEY_RELEASE, "[VDOPLY] mmi_vdoply_seek_key_release()") 
    TRC_MSG(MMI_TRC_VDOPLY_SEEK_FOWARD_KEY_PRESS, "[VDOPLY] mmi_vdoply_seek_foward_key_press()")     
    TRC_MSG(MMI_TRC_VDOPLY_SEEK_FOWARD_KEY_RELEASE, "[VDOPLY] mmi_vdoply_seek_foward_key_release()")  
    TRC_MSG(MMI_TRC_VDOPLY_SEEK_BACKWARD_KEY_PRESS, "[VDOPLY] mmi_vdoply_seek_backward_key_press()")     
    TRC_MSG(MMI_TRC_VDOPLY_SEEK_BACKWARD_KEY_RELEASE, "[VDOPLY] mmi_vdoply_seek_backward_key_release()")  
    TRC_MSG(MMI_TRC_VDOPLY_SEEK_BACKWARD, "[VDOPLY] mmi_vdoply_seek_backward()")      
    TRC_MSG(MMI_TRC_VDOPLY_SEEK_FOWARND, "[VDOPLY] mmi_vdoply_seek_foward()")          
    TRC_MSG(MMI_TRC_VDOPLY_DEL_SCREEN_HDLR, "[VDOPLY] mmi_vdoply_del_screen_hdlr()")   
    
    TRC_MSG(MMI_TRC_VDOPLY_CONNECT_BT, "[VDOPLY] mmi_vdoply_connect_bt()")          
    TRC_MSG(MMI_TRC_VDOPLY_DISCONNECT_BT, "[VDOPLY] mmi_vdoply_disconnect_bt()")      
    TRC_MSG(MMI_TRC_VDOPLY_IS_OUTPUT_TO_BT, "[VDOPLY] mmi_vdoply_is_output_to_bt()")  
    TRC_MSG(MMI_TRC_VDOPLY_BT_CLOSE_CODEC, "[VDOPLY] mmi_vdoply_bt_close_codec()")      
    TRC_MSG(MMI_TRC_VDOPLY_BT_OPEN_CALLBACK, "[VDOPLY] mmi_vdoply_bt_open_callback(), result: %d")      


    /* call others */
    TRC_MSG(MMI_TRC_VDOPLY_CALLING_AV_BT_CLOSE, "[VDOPLY] calling: av_bt_close(), line: %d")    
    TRC_MSG(MMI_TRC_VDOPLY_CALLING_AV_BT_CLOSE_CODEC, "[VDOPLY] calling: av_bt_close_codec(), line: %d") 
    TRC_MSG(MMI_TRC_VDOPLY_CALLING_AV_BT_OPEN_CODEC, "[VDOPLY] calling: av_bt_open_codec(),line: %d")     
    TRC_MSG(MMI_TRC_VDOPLY_CALLING_AV_BT_OPEN_EX, "[VDOPLY] calling: av_bt_open_ex(), line: %d") 

     /* state */
    TRC_MSG(MMI_TRC_VDOPLY_STATE_EXIT, "[VDOPLY] state: VDOPLY_STATE_EXIT")      
    TRC_MSG(MMI_TRC_VDOPLY_STATE_OPENING, "[VDOPLY] state: VDOPLY_STATE_OPENING")
    TRC_MSG(MMI_TRC_VDOPLY_STATE_IDLE, "[VDOPLY] state: VDOPLY_STATE_IDLE")
    TRC_MSG(MMI_TRC_VDOPLY_STATE_PAUSE, "[VDOPLY] state: VDOPLY_STATE_PAUSE")    
    TRC_MSG(MMI_TRC_VDOPLY_STATE_PLAY, "[VDOPLY] state: VDOPLY_STATE_PLAY") 
    TRC_MSG(MMI_TRC_VDOPLY_STATE_BT_CONNECTING, "[VDOPLY] state: VDOPLY_STATE_BT_CONNECTING")     
    TRC_MSG(MMI_TRC_VDOPLY_STATE_SEEKING, "[VDOPLY] state: VDOPLY_STATE_SEEKING")    
    TRC_MSG(MMI_TRC_VDOPLY_STATE_PLAY_SEEKING, "[VDOPLY] state: VDOPLY_STATE_PLAY_SEEKING")
    TRC_MSG(MMI_TRC_VDOPLY_STATE_INTERRUPTED_OPENING, "[VDOPLY] state: VDOPLY_STATE_INTERRUPTED_OPENING")
    TRC_MSG(MMI_TRC_VDOPLY_STATE_INTERRUPTED_PAUSE, "[VDOPLY] state: VDOPLY_STATE_INTERRUPTED_PAUSE")
    TRC_MSG(MMI_TRC_VDOPLY_STATE_INTERRUPTED_SEEKING, "[VDOPLY] state: VDOPLY_STATE_INTERRUPTED_SEEKING")
    TRC_MSG(MMI_TRC_VDOPLY_STATE_SNAPSHOT, "[VDOPLY] state: VDOPLY_STATE_SNAPSHOT")
    TRC_MSG(MMI_TRC_VDOPLY_STATE_FULLSCR_IDLE, "[VDOPLY] state: VDOPLY_STATE_FULLSCR_IDLE")    
    TRC_MSG(MMI_TRC_VDOPLY_STATE_FULLSCR_PAUSE, "[VDOPLY] state: VDOPLY_STATE_FULLSCR_PAUSE") 
    TRC_MSG(MMI_TRC_VDOPLY_STATE_FULLSCR_PLAY, "[VDOPLY] state: VDOPLY_STATE_FULLSCR_PLAY") 
    TRC_MSG(MMI_TRC_VDOPLY_STATE_FULLSCR_BT_CONNECTING, "[VDOPLY] state: VDOPLY_STATE_FULLSCR_BT_CONNECTING")    
    TRC_MSG(MMI_TRC_VDOPLY_STATE_FULLSCR_SEEKING, "[VDOPLY] state: VDOPLY_STATE_FULLSCR_SEEKING") 
    TRC_MSG(MMI_TRC_VDOPLY_STATE_FULLSCR_PLAY_SEEKING, "[VDOPLY] state: VDOPLY_STATE_FULLSCR_PLAY_SEEKING") 
    TRC_MSG(MMI_TRC_VDOPLY_STATE_STREAM_DISCONNECT, "[VDOPLY] state: VDOPLY_STATE_STREAM_DISCONNECT")
    TRC_MSG(MMI_TRC_VDOPLY_STATE_STREAM_CONNECTING, "[VDOPLY] state: VDOPLY_STATE_STREAM_CONNECTING")
    TRC_MSG(MMI_TRC_VDOPLY_STATE_STREAM_INTERRUPTED_CONNECTING, "[VDOPLY] state: VDOPLY_STATE_STREAM_INTERRUPTED_CONNECTING")    
    TRC_MSG(MMI_TRC_VDOPLY_STATE_STREAM_CONNECTED, "[VDOPLY] state: VDOPLY_STATE_STREAM_CONNECTED")
    TRC_MSG(MMI_TRC_VDOPLY_STATE_STREAM_BUFFERING, "[VDOPLY] state: VDOPLY_STATE_STREAM_BUFFERING")
    TRC_MSG(MMI_TRC_VDOPLY_STATE_STREAM_PLAY_BUFFERING, "[VDOPLY] state: VDOPLY_STATE_STREAM_PLAY_BUFFERING")
    TRC_MSG(MMI_TRC_VDOPLY_STATE_STREAM_PLAY, "[VDOPLY] state: VDOPLY_STATE_STREAM_PLAY")    
    TRC_MSG(MMI_TRC_VDOPLY_STATE_STREAM_BT_CONNECTING, "[VDOPLY] state: VDOPLY_STATE_STREAM_BT_CONNECTING")    
    TRC_MSG(MMI_TRC_VDOPLY_STATE_STREAM_FULLSCR_DISCONNECT, "[VDOPLY] state: VDOPLY_STATE_STREAM_FULLSCR_DISCONNECT")        
    TRC_MSG(MMI_TRC_VDOPLY_STATE_STREAM_FULLSCR_INTERRUPTED_CONNECTING, "[VDOPLY] state: VDOPLY_STATE_STREAM_FULLSCR_INTERRUPTED_CONNECTING")        
    TRC_MSG(MMI_TRC_VDOPLY_STATE_STREAM_FULLSCR_CONNECTING, "[VDOPLY] state: VDOPLY_STATE_STREAM_FULLSCR_CONNECTING")            
    TRC_MSG(MMI_TRC_VDOPLY_STATE_STREAM_FULLSCR_CONNECTED, "[VDOPLY] state: VDOPLY_STATE_STREAM_FULLSCR_CONNECTED")
    TRC_MSG(MMI_TRC_VDOPLY_STATE_STREAM_FULLSCR_BUFFERING, "[VDOPLY] state: VDOPLY_STATE_STREAM_FULLSCR_BUFFERING")
    TRC_MSG(MMI_TRC_VDOPLY_STATE_STREAM_FULLSCR_PLAY, "[VDOPLY] state: VDOPLY_STATE_STREAM_FULLSCR_PLAY")    
    TRC_MSG(MMI_TRC_VDOPLY_STATE_STREAM_FULLSCR_BT_CONNECTING, "[VDOPLY] state: VDOPLY_STATE_STREAM_FULLSCR_BT_CONNECTING ")        
    TRC_MSG(MMI_TRC_VDOPLY_STATE_PROGRESSIVE_OPENING, "[VDOPLY] state: VDOPLY_STATE_PROGRESSIVE_OPENING")
    TRC_MSG(MMI_TRC_VDOPLY_STATE_PROGRESSIVE_INTERRUPTED_OPENING, "[VDOPLY] state: VDOPLY_STATE_PROGRESSIVE_INTERRUPTED_OPENING")
    TRC_MSG(MMI_TRC_VDOPLY_STATE_PROGRESSIVE_BUFFERING, "[VDOPLY] state: VDOPLY_STATE_PROGRESSIVE_BUFFERING")
    TRC_MSG(MMI_TRC_VDOPLY_STATE_PROGRESSIVE_PLAY_BUFFERING, "[VDOPLY] state: VDOPLY_STATE_PROGRESSIVE_PLAY_BUFFERING")    
    TRC_MSG(MMI_TRC_VDOPLY_STATE_PROGRESSIVE_FULLSCR_BUFFERING, "[VDOPLY] state: VDOPLY_STATE_PROGRESSIVE_FULLSCR_BUFFERING")
    TRC_MSG(MMI_TRC_VDOPLY_STATE_PROGRESSIVE_FULLSCR_PLAY_BUFFERING, "[VDOPLY] state: VDOPLY_STATE_PROGRESSIVE_FULLSCR_PLAY_BUFFERING")

    /* Video Player */
    TRC_MSG(MMI_TRC_VDOREC_SAVE_CONFIRM_CHECK, "[VDOREC] save confirm check (1)mms:%d, (2)ext_req:%d, line: %d")    


    /*-=-=-=-=-=-=-= Video Editor Begin-=-=-=-=-=-=-=*/
    TRC_MSG(MMI_TRC_VDOEDT_S_EMPTY, "[VDOEDT] state: VDOEDT_STAT_EMPTY")
    TRC_MSG(MMI_TRC_VDOEDT_S_EDIT, "[VDOEDT] state: VEOEDT_STAT_EDIT")
    TRC_MSG(MMI_TRC_VDOEDT_S_EDIT_IDLE, "[VDOEDT] state:")
    TRC_MSG(MMI_TRC_VDOEDT_S_EDIT_FRAME, "[VDOEDT] state: VDOEDT_STAT_FRAME")
    TRC_MSG(MMI_TRC_VDOEDT_S_EDIT_FRAME_SEL, "[VDOEDT] state: VDOEDT_STAT_FRAME_SEL")
    TRC_MSG(MMI_TRC_VDOEDT_S_EDIT_FRAME_IN, "[VDOEDT] state: VDOEDT_STAT_FRAME_IN")
    TRC_MSG(MMI_TRC_VDOEDT_S_EDIT_FRAME_OUT, "[VDOEDT] state: VDOEDT_STAT_FRAME_OUT")
    TRC_MSG(MMI_TRC_VDOEDT_S_EDIT_FRAME_TXT, "[VDOEDT] state: VDOEDT_STAT_FRRAME_TXT")
    TRC_MSG(MMI_TRC_VDOEDT_S_EDIT_CUT, "[VDOEDT] state: VDOEDT_STAT_CUT")
    TRC_MSG(MMI_TRC_VDOEDT_S_EDIT_CUT_IN, "[VDOEDT] state: VDOEDT_STAT_CUT_IN")
    TRC_MSG(MMI_TRC_VDOEDT_S_EDIT_CUT_OUT, "[VDOEDT] state: VDOEDT_STAT_CUT_OUT")
    TRC_MSG(MMI_TRC_VDOEDT_S_PLAY, "[VDOEDT] state: VDOEDT_STAT_PLAY")
    TRC_MSG(MMI_TRC_VDOEDT_S_PREVIEW_PLAY, "[VDOEDT] state: VDOEDT_STAT_PREVIEW_PLAY")
    TRC_MSG(MMI_TRC_VDOEDT_S_EDIT_PLAY, "[VDOEDT] state: VDOEDT_STAT_EDIT_PLAY")
    TRC_MSG(MMI_TRC_VDOEDT_S_CUT_PLAY, "[VDOEDT] state: VDOEDT_STAT_CUT_PLAY")
    TRC_MSG(MMI_TRC_VDOEDT_S_FRM_PLAY, "[VDOEDT] state: VDOEDT_STAT_FRM_PLAY")
    TRC_MSG(MMI_TRC_VDOEDT_S_SEEK, "[VDOEDT] state: VDOEDT_STAT_SEEK")
    TRC_MSG(MMI_TRC_VDOEDT_S_SEEK_DONE, "[VDOEDT] state: VDOEDT_STAT_SEEK_DONE")
    TRC_MSG(MMI_TRC_VDOEDT_S_PLAY_SEEK, "[VDOEDT] state: VDOEDT_STAT_PLAY_SEEK")
    TRC_MSG(MMI_TRC_VDOEDT_S_PLAY_SEEK_DONE, "[VDOEDT] state: VDOEDT_STAT_PLAY_SEEK_DONE")
    TRC_MSG(MMI_TRC_VDOEDT_S_PREVIEW, "[VDOEDT] state: VDOEDT_STAT_PREVIEW")
    TRC_MSG(MMI_TRC_VDOEDT_S_SAVING, "[VDOEDT] state: VDOEDT_STAT_SAVING")
    TRC_MSG(MMI_TRC_VDOEDT_S_CONFIRM_SAVE, "[VDOEDT] state: VDOEDT_STAT_CONFIRM_SAVE")
    /* inserting media*/
    TRC_MSG(MMI_TRC_VDOEDT_INS_VDO, "[VDOEDT] video inserted, open_clip return: %d")
    TRC_MSG(MMI_TRC_VDOEDT_INS_IMG, "[VDOEDT] image inserted, gdi draw return: %d")
    /* playback */
    /* cache folder creation */
    /* encoding */
   /*-=-=-=-=-=-=-= Video Editor End-=-=-=-=-=-=-=*/
   
    /* MDI Audio */
    TRC_MSG(MDI_AUDIO_MMA_TRACE_STATE, "[MDI][MMA] state: [%d][%d][%d], line = [%d]")    
    TRC_MSG(MDI_AUDIO_MMA_TRACE_VALUE, "[MDI][MMA] value: [%d][%d][%d], line = [%d]")        
    TRC_MSG(MDI_AUDIO_MMA_MED_DIRECT_CALLBACK, "[MDI][MMA] mdi_audio_mma_med_direct_callback(): handle = [%d], result = [%d]")
    TRC_MSG(MDI_AUDIO_MMA_CALLBACK_HDLR, "[MDI][MMA] mdi_audio_mma_callback_hdlr(): player = [%d]")
    TRC_MSG(MDI_AUDIO_MMA_CALLBACK_APP, "[MDI][MMA] mdi_audio_mma_callback_hdlr(): <Callback> ")
    TRC_MSG(MDI_AUDIO_MMA_OPEN_FILE, "[MDI][MMA] mdi_audio_mma_open_file()")
    TRC_MSG(MDI_AUDIO_MMA_OPEN_FILE_RESULT, "[MDI][MMA] mdi_audio_mma_open_file(): handle = [%d], result = [%d]")
    TRC_MSG(MDI_AUDIO_MMA_OPEN_STRING, "[MDI][MMA] mdi_audio_mma_open_string(): format = [%d]")
    TRC_MSG(MDI_AUDIO_MMA_OPEN_STRING_RESULT, "[MDI][MMA] mdi_audio_mma_open_file(): handle = [%d], result = [%d]")
    TRC_MSG(MDI_AUDIO_MMA_PLAY, "[MDI][MMA] mdi_audio_mma_play(): handle = [%d], player = [%d]")
    TRC_MSG(MDI_AUDIO_MMA_PAUSE, "[MDI][MMA] mdi_audio_mma_pause(): handle = [%d], player = [%d]")
    TRC_MSG(MDI_AUDIO_MMA_RESUME, "[MDI][MMA] mdi_audio_mma_resume(): handle = [%d], player = [%d]")
    TRC_MSG(MDI_AUDIO_MMA_STOP, "[MDI][MMA] mdi_audio_mma_stop(): handle = [%d], player = [%d]")
    TRC_MSG(MDI_AUDIO_MMA_CLOSE, "[MDI][MMA] mdi_audio_mma_close(): handle = [%d], player = [%d]")
    TRC_MSG(MDI_AUDIO_MMA_IS_IDLE, "[MDI][MMA] mdi_audio_mma_is_idle(): idle = [%d]")


    //EngineerMode
    TRC_MSG(EM_PROFILING_IMAGE_DEC_INFO, " %d/%d, width = %d, height = %d, dec_width = %d, dec_height = %d, decode time = %d.%d ms")
    TRC_MSG(EM_PROFILING_IMAGE_DEC_FAIL, " %d/%d, Error")    
    
    //mdi_gpsuart 
    TRC_MSG(MDI_GPS_UART_TRC_CONFIGURE, "[MDI_GPS_UART] mdi_gps_uart_configure port=%d baud=%d bits=%d stops=%d parity=%d")
    TRC_MSG(MDI_GPS_UART_TRC_OPEN, "[MDI_GPS_UART] mdi_gps_uart_open port=%d callback=%d")
    TRC_MSG(MDI_GPS_UART_TRC_READ, "[MDI_GPS_UART] mdi_gps_uart_read handle=%d buffer=%d length=%d &read=%d")
    TRC_MSG(MDI_GPS_UART_TRC_WRITE, "[MDI_GPS_UART] mdi_gps_uart_write handle=%d buffer=%d length=%d &write=%d")
    TRC_MSG(MDI_GPS_UART_TRC_ARRIVE, "[MDI_GPS_UART] mdi_gps_uart_is_data_arrive handle=%d")
    TRC_MSG(MDI_GPS_UART_TRC_CLOSE, "[MDI_GPS_UART] mdi_gps_uart_close handle=%d")
    TRC_MSG(MDI_GPS_UART_TRC_INDICATE, "[MDI_GPS_UART] mdi_gps_uart_indicate_hldr port=%d param=%d")
    TRC_MSG(MDI_GPS_UART_TRC_EXPECTED, "[MDI_GPS_UART] g_gps_uart[%d].port = %d, expect = %d)")
    TRC_MSG(MDI_GPS_UART_TRC_CALLBACK, "[MDI_GPS_UART] callback = %d")
    TRC_MSG(MDI_GPS_UART_TRC_ENABLE_PARSER, "[MDI_GPS_UART] mdi_gps_enable_parser")
    TRC_MSG(MDI_GPS_UART_TRC_DISABLE_PARSER, "[MDI_GPS_UART] mdi_gps_disable_parser")
    TRC_MSG(MDI_GPS_UART_TRC_SET_PARSER_MODE, "[MDI_GPS_UART] mdi_gps_set_parser_mode mode=%d")
    TRC_MSG(MDI_GPS_UART_TRC_PARSER_READ_INFO, "[MDI_GPS_UART] mdi_gps_parser_read_info nmea=%d data_ptr=%d")
    TRC_MSG(MDI_GPS_UART_TRC_MSG_DISPATCHER, "[MDI_GPS_UART] mdi_gpsuart_message_dispatcher ilm_p->msg_id=%d")
    TRC_MSG(MDI_GPS_UART_TRC_DISPATCHER_READY_READ, "[MDI_GPS_UART] dispatcher MSG_ID_UART_READY_TO_READ_IND")
    TRC_MSG(MDI_GPS_UART_TRC_DISPATCHER_READY_WRITE, "[MDI_GPS_UART] dispatcher MSG_ID_UART_READY_TO_WRITE_IND")
    TRC_MSG(MDI_GPS_UART_TRC_DISPATCHER_PLUGOUT, "[MDI_GPS_UART] dispatcher MSG_ID_UART_PLUGOUT_IND")
    TRC_MSG(MDI_GPS_UART_TRC_HDLR_READY_READ, "[MDI_GPS_UART] mdi_gpsuart_spp_uart_ready_to_read_ind_hdler port=%d")
    TRC_MSG(MDI_GPS_UART_TRC_HDLR_PLUGOUT, "[MDI_GPS_UART] mdi_gpsuart_spp_uart_plugout_ind_hdler port=%d")
    TRC_MSG(MDI_GPS_UART_TRC_HDLR_READY_WRITE, "[MDI_GPS_UART] mdi_gpsuart_spp_uart_ready_to_write_ind_hdler port=%d")
    TRC_MSG(MDI_GPS_UART_TRC_OWNER_ERROR, "[MDI_GPS_UART] PORT Owner Error")
    TRC_MSG(MDI_GPS_UART_TRC_READ_SIZE, "[MDI_GPS_UART] mdi_gps_uart_read ret=%d")
    TRC_MSG(MDI_GPS_UART_TRC_OPEN_ALREADY_OPEN, "[MDI_GPS_UART] MDI_RES_GPS_UART_ERR_PORT_ALREADY_OPEN")
    TRC_MSG(MDI_GPS_UART_TRC_FIND_SLOT, "[MDI_GPS_UART] Find Slot = %d")
    TRC_MSG(MDI_GPS_UART_TRC_ON_BROAD_GPS, "[MDI_GPS_UART] THIS port is on broad GPS")
    TRC_MSG(MDI_GPS_UART_TRC_DUMP_DATA, "[MDI_GPS_UART] [DUMP] ret =%d")
    TRC_MSG(MDI_GPS_UART_TRC_DUMP_OK, "[MDI_GPS_UART]  [DUMP] OK ret =%d")
    TRC_MSG(MDI_GPS_UART_TRC_OPEN_OK, "[MDI_GPS_UART] OPEN OK")
    TRC_MSG(MDI_GPS_UART_TRC_OPEN_ERROR, "[MDI_GPS_UART] OPEN ERROR")
    TRC_MSG(MDI_GPS_UART_TRC_OPEN_RETURN_OK, "[MDI_GPS_UART] mdi_gps_uart_open return ok")
    TRC_MSG(MDI_GPS_UART_TRC_OPEN_RETURN_ERR, "[MDI_GPS_UART] mdi_gps_uart_open return error")
    
   //mmi_gis
    TRC_MSG(MMI_GIS_TRC_AUD_DISCONN_IND_CB, "[MMI_GIS] mmi_gis_gps_audio_disconnect_ind_callback")
    TRC_MSG(MMI_GIS_TRC_AUD_DISCONN_CNF_CB, "[MMI_GIS] mmi_gis_gps_audio_disconnect_cnf_callback")
    TRC_MSG(MMI_GIS_TRC_AUD_CONN_IND_CB, "[MMI_GIS] mmi_gis_gps_audio_connect_ind_callback")
    TRC_MSG(MMI_GIS_TRC_AUD_CONN_CNF_CB, "[MMI_GIS] mmi_gis_gps_audio_connect_cnf_callback")
    TRC_MSG(MMI_GIS_TRC_DISCONN_CNF_CB, "[MMI_GIS] mmi_gis_gps_disconnect_cnf_callback")
    TRC_MSG(MMI_GIS_TRC_DISCONN_IND_CB, "[MMI_GIS] mmi_gis_gps_disconnect_ind_callback")
    TRC_MSG(MMI_GIS_TRC_PLUGOUT_IND_CB, "[MMI_GIS] mmi_gis_gps_uart_plugout_ind_callback")
    TRC_MSG(MMI_GIS_TRC_READY_TO_WRITE_CB, "[MMI_GIS] mmi_gis_gps_uart_ready_to_write_ind_callback")
    TRC_MSG(MMI_GIS_TRC_READY_TO_READ_CB, "[MMI_GIS] mmi_gis_gps_uart_ready_to_read_ind_callback")
    TRC_MSG(MMI_GIS_TRC_OWNER_IND_CB, "[MMI_GIS] mmi_gis_gps_uart_owner_ind_callback")
    TRC_MSG(MMI_GIS_TRC_CONN_CNF_CB, "[MMI_GIS] mmi_gis_gps_connect_cnf_callback resalt = %d,server_chnl_num = %d,con_id=%d,port=%d")
    TRC_MSG(MMI_GIS_TRC_SEARCH_CNF_CB, "[MMI_GIS] mmi_gis_gps_sdp_search_cnf_callback result=%d")
    TRC_MSG(MMI_GIS_TRC_FUNC_CONN_REQ, "[MMI_GIS] mmi_bth_spp_connect_req(%d,%d,%d,%d) ret=%d")
    TRC_MSG(MMI_GIS_TRC_RET_SPP_ACCEPT, "[MMI_GIS] ACCEPT_SPP_CONNECT")
    TRC_MSG(MMI_GIS_TRC_FUNC_CHOOSE_PORT, "[MMI_GIS] choose port and number=%d")
    TRC_MSG(MMI_GIS_TRC_SDP_RESULT_ERR, "[MMI_GIS] sdp_search result error")
    TRC_MSG(MMI_GIS_TRC_RESULT_IND_CB, "[MMI_GIS] mmi_gis_gps_sdp_result_ind_callback srv_chnl_num = %d")
    TRC_MSG(MMI_GIS_TRC_CONN_STATE_TO_LOST, "[MMI_GIS] mmi_gis_gps_set_spp_conn_state_lost")
    TRC_MSG(MMI_GIS_TRC_FUNC_CLOSE_SPP, "[MMI_GIS] mmi_gis_gps_close_spp_conn")
    TRC_MSG(MMI_GIS_TRC_NOT_PAIRED, "[MMI_GIS] mmi_gis_gps_get_port_number return not paired")
    TRC_MSG(MMI_GIS_TRC_RETURN_NVRAM_PORT, "[MMI_GIS] mmi_gis_gps_get_port_number return g_gps_ctx.nvram.v_uart.v_port = %d")
    TRC_MSG(MMI_GIS_TRC_VPORT_PAIRED, "[MMI_GIS] mmi_gis_gps_get_port_number VPORT paired before")
    TRC_MSG(MMI_GIS_TRC_RETURN_ON_BROAD_PORT, "[MMI_GIS] mmi_gis_gps_get_port_number return on broad port")
    TRC_MSG(MMI_GIS_TRC_GET_PORT_NUM, "[MMI_GIS] mmi_gis_gps_get_port_number")
    TRC_MSG(MMI_GIS_TRC_PORT_CHOOSE_OVER, "[MMI_GIS] mmi_gis_gps_port_choose_over")
    TRC_MSG(MMI_GIS_TRC_SEARCH_BT_CB, "[MMI_GIS] mmi_gis_gps_setting_search_bt_device_callback result=%d, lap=%d,nap=%d,uap=%d")

    TRC_MSG(MMI_GIS_TRC_APP_DUMP_DATA, "[MMI_GIS] mmi_gis_gps_uart_app_dumpdata_callback %d")
    TRC_MSG(MMI_GIS_TRC_APP_UART_READ, "[MMI_GIS] mdi_gps_uart_read ret =%d read=%d")
    TRC_MSG(MMI_GIS_TRC_APP_CLOSE_UART, "[MMI_GIS] mmi_gps_app_close_uart app port_handle=%d")
    TRC_MSG(MMI_GIS_TRC_APP_CLOSE_UART_EXEC, "[MMI_GIS] mdi_gps_uart_close(%d)")
    TRC_MSG(MMI_GIS_TRC_APP_ENTER_APP_PORT, "[MMI_GIS] enter app port nubmer get port = %d")
    TRC_MSG(MMI_GIS_TRC_APP_CONN_CALLBACK, "[MMI_GIS] app conn callback get port = %d")
    TRC_MSG(MMI_GIS_TRC_APP_GPS_UART_OPEN, "[MMI_GIS] mdi_gps_uart_open = %d")
    TRC_MSG(MMI_GIS_TRC_APP_ERROR_HANDLE_0, "[MMI_GIS] error open handler g_uart_port <0 ")
    TRC_MSG(MMI_GIS_TRC_APP_PORT_ERROR, "[MMI_GIS] port error")
    
    
    /*GIS app trace*/
    TRC_MSG(MMI_GIS_FRM_ENTRY_APP, "[GIS] Enter GIS app")
    TRC_MSG(MMI_GIS_FRM_EXIT_APP, "[GIS] Exit GIS app")
    TRC_MSG(MMI_GIS_FRM_DEL_CALLBACK, "[GIS] GIS framework delete callback")
    TRC_MSG(MMI_GIS_FRM_STATE, "[GIS] GIS framework state: %d")
    TRC_MSG(MMI_GIS_FRM_CHANGE_STATE, "[GIS] GIS framework change state to: %d")
    TRC_MSG(MMI_GIS_FRM_MEM_POOL_SUCCESS_CALLBACK, "[GIS] Alloc ASM success callback")
    TRC_MSG(MMI_GIS_FRM_MEM_POOL_STOP_CALLBACK, "[GIS] Alloc ASM stop callback")
    TRC_MSG(MMI_GIS_MALLOC, "[GIS] GIS malloc: [size] %d, [Ptr] %d")
    TRC_MSG(MMI_GIS_FREE, "[GIS] GIS free: [Ptr] %d")
    TRC_MSG(MMI_GIS_FRM_SHOW_INPUT_EDITOR, "[GIS] GIS framework show input editor")
    TRC_MSG(MMI_GIS_ENTRY_INPUT_EDITOR, "[GIS] GIS entry input editor")
    TRC_MSG(MMI_GIS_EXIT_INPUT_EDITOR, "[GIS] GIS exit input editor")
    TRC_MSG(MMI_GIS_ENTRY_INPUT_EDITOR_OPTION, "[GIS] GIS entry input editor option")
    TRC_MSG(MMI_GIS_EXIT_INPUT_EDITOR_OPTION, "[GIS] GIS exit input editor option")
    TRC_MSG(MMI_GIS_INPUT_EDITOR_OPTION_DONE, "[GIS] GIS input editor option select [done]")
    TRC_MSG(MMI_GIS_INPUT_EDITOR_OPTION_CANCEL, "[GIS] GIS input editor option select [cancel]")
    TRC_MSG(MMI_GIS_FRM_RESUME_TO_OWN_SCREEN_INTERRUPT, "[GIS] GIS framework [resume] to own screen interrupt")
    TRC_MSG(MMI_GIS_FRM_PAUSE, "[GIS] GIS framework [pause]")
    TRC_MSG(MMI_GIS_ENTRY_INPUT_METHOD_SCREEN, "[GIS] GIS entry input method screen")
    TRC_MSG(MMI_GIS_EXIT_INPUT_METHOD_SCREEN, "[GIS] GIS exit input method screen")
    TRC_MSG(MMI_GIS_ENTRY_SYMBOL_TABLE_SCREEN, "[GIS] GIS entry input symbol table screen")
    TRC_MSG(MMI_GIS_EXIT_SYMBOL_TABLE_SCREEN, "[GIS] GIS exit input symbol table screen")
    
    TRC_MSG(MMI_GIS_ADP_START_ENGINE, "[GIS] Call adaptation layer API to [start] GIS engine ")
    TRC_MSG(MMI_GIS_ADP_STOP_ENGINE, "[GIS] Call adaptation layer API to [stop] GIS engine ")
    TRC_MSG(MMI_GIS_ADP_PAUSE_ENGINE, "[GIS] Call adaptation layer API to [pause] GIS engine ")
    TRC_MSG(MMI_GIS_ADP_RESUME_ENGINE, "[GIS] Call adaptation layer API to [resume] GIS engine ")
    TRC_MSG(MMI_GIS_ADP_MOVE_ENGINE_TO_BACKGROUND, "[GIS] Call adaptation layer API to move GIS engine to [background] run")
    TRC_MSG(MMI_GIS_ADP_MOVE_ENGINE_TO_FOREGROUND, "[GIS] Call adaptation layer API to move GIS engine to [foreground] run")
    TRC_MSG(MMI_GIS_ADP_RESUME_ENGINE_TO_BACKGROUND, "[GIS] Call adaptation layer API to [resume] GIS engine to background run")
    TRC_MSG(MMI_GIS_ADP_INPUT_EDITOR_DONE, "[GIS] Call adaptation layer API to notify input done")
    TRC_MSG(MMI_GIS_ADP_ENTRY_INPUT_EDITOR, "[GIS] Call adaptation layer API to entry input editor")
    
    TRC_MSG(MMI_GIS_TASK_AGENT_START_RENDER, "[GIS] GIS task agent start render. seq_num: %d")
    TRC_MSG(MMI_GIS_TASK_AGENT_RENDER_CNF_HDLR, "[GIS] GIS task agent render confim handler. seq_num: %d, result: %d")
    TRC_MSG(MMI_GIS_TASK_AGENT_STOP_RENDER, "[GIS] GIS task agent stop render")
    TRC_MSG(MMI_GIS_TASK_AGENT_START_SEARCH, "[GIS] GIS task agent start search. seq_num: %d")
    TRC_MSG(MMI_GIS_TASK_AGENT_SEARCH_CNF_HDLR, "[GIS] GIS task agent search confim handler. seq_num: %d, result: %d")
    TRC_MSG(MMI_GIS_TASK_AGENT_STOP_SEARCH, "[GIS] GIS task agent stop search")
    TRC_MSG(MMI_GIS_TASK_AGENT_SEND_MSG, "[GIS] GIS task agent send message. src_mod_id: %d, msg_id: %d, is_blocking: %d")   

    /* --------------------------------------------------------------- */
    /* ------------------------- MDI MOBILE TV ----------------------- */
    /* --------------------------------------------------------------- */
    TRC_MSG(MDI_MTV_ON_SERVICE_FOUND_IND,"[MDI_MTV] service fonud ind")
    TRC_MSG(MDI_MTV_ON_SEARCH_PROGRESS_IND,"[MDI_MTV] search progress ind")
    TRC_MSG(MDI_MTV_ON_COMPLETE_SAVING_IND,"[MDI_MTV] complete saving ind")
    TRC_MSG(MDI_MTV_ON_SERVICE_EVENT_IND,"[MDI_MTV] service event, service_id=%d, event=%d, param=%d")
    TRC_MSG(MDI_MTV_ON_RECORDER_EVENT_IND,"[MDI_MTV] recorder event, service_id=%d, event=%d, param=%d")
    TRC_MSG(MDI_MTV_ON_PLAYER_EVENT_IND,"[MDI_MTV] player event, service_id=%d, event=%d, param=%d")
    TRC_MSG(MDI_MTV_OPEN,"[MDI_MTV] open engine")
    TRC_MSG(MDI_MTV_OPEN_RESULT,"[MDI_MTV] open engine result=%d, context=%d")
    TRC_MSG(MDI_MTV_CLOSE,"[MDI_MTV] close engine")
    TRC_MSG(MDI_MTV_RESTORE_UNSAVED_RECORDING,"[MDI_MTV] restore unsaved recording")
    TRC_MSG(MDI_MTV_DISCARD_UNSAVED_RECORDING,"[MDI_MTV] discard unsaved recording")
    TRC_MSG(MDI_MTV_SCAN_SERVICE_ON_AIR,"[MDI_MTV] scan channel on air")
    TRC_MSG(MDI_MTV_SCAN_SERVICE_FROM_DATABASE,"[MDI_MTV] scan channel from database")
    TRC_MSG(MDI_MTV_ABORT_SCAN_SERVICE,"[MDI_MTV] abort scan service")
    TRC_MSG(MDI_MTV_START_SERVICE,"[MDI_MTV] start service, service_id=%d")
    TRC_MSG(MDI_MTV_STOP_SERVICE,"[MDI_MTV] stop service, service_id=%d")
    TRC_MSG(MDI_MTV_SERVICE_GET_STATUS,"[MDI_MTV] get service status")
    TRC_MSG(MDI_MTV_PLAYER_START,"[MDI_MTV] start play, service_id=%d")
    TRC_MSG(MDI_MTV_PLAYER_STOP,"[MDI_MTV] stop play, service_id=%d")
    TRC_MSG(MDI_MTV_PLAYER_PAUSE,"[MDI_MTV] pause play, service_id=%d")
    TRC_MSG(MDI_MTV_PLAYER_RESUME,"[MDI_MTV] resume play, service_id=%d")
    TRC_MSG(MDI_MTV_PLAYER_PLAY_PAUSE,"[MDI_MTV] play then pause, service_id=%d")
    TRC_MSG(MDI_MTV_PLAYER_GET_STATUS,"[MDI_MTV] get player status")
    TRC_MSG(MDI_MTV_RECORDER_START,"[MDI_MTV] start record, service_id=%d")
    TRC_MSG(MDI_MTV_RECORDER_STOP,"[MDI_MTV] stop record, service_id=%d")
    TRC_MSG(MDI_MTV_RECORDER_SAVE_RECORDING,"[MDI_MTV] recorder save recording, service_id=%d")
    TRC_MSG(MDI_MTV_RECORDER_DISCARD_RECORDING,"[MDI_MTV] recorder discard recording, service_id=%d")
    TRC_MSG(MDI_MTV_RECORDER_GET_STATUS,"[MDI_MTV] get recorder status")
    TRC_MSG(MDI_MTV_RECORDER_SEEK,"[MDI_MTV] seek recorder")
    TRC_MSG(MDI_MTV_UPDATE_BRIGHTNESS,"[MDI_MTV] update brightness")
    TRC_MSG(MDI_MTV_UPDATE_CONTRAST,"[MDI_MTV] update contrast")
    TRC_MSG(MDI_MTV_UPDATE_PARAM,"[MDI_MTV] update param")
    /* --------------------------------------------------------------- */
    /* ------------------------- MOBILE TV PLAYER -------------------- */
    /* --------------------------------------------------------------- */
    TRC_MSG(MMI_TRC_MTV_STATE_ALL, "[MTV] States(%Mmmi_mtv_player_kernel_state_enum,%Mmmi_mtv_player_player_state_enum,%Mmmi_mtv_player_recorder_state_enum)")
    TRC_MSG(MMI_TRC_MTV_KERNEL_ENTER_STATE, "[MTV] %Mmmi_mtv_player_module_enum enter from %Mmmi_mtv_player_kernel_state_enum to %Mmmi_mtv_player_kernel_state_enum")
    TRC_MSG(MMI_TRC_MTV_PLAYER_ENTER_STATE, "[MTV] %Mmmi_mtv_player_module_enum enter from %Mmmi_mtv_player_player_state_enum to %Mmmi_mtv_player_player_state_enum")
    TRC_MSG(MMI_TRC_MTV_RECORDER_ENTER_STATE, "[MTV] %Mmmi_mtv_player_module_enum enter from %Mmmi_mtv_player_recorder_state_enum to %Mmmi_mtv_player_recorder_state_enum")


   /* --------------------------------------------------------------- */
   /* ----------------------- MODULE NAME:JAVA ---------------------- */
   /* --------------------------------------------------------------- */

   TRC_MSG(MMI_JAVA_SEND_MIDS_GETLIST_REQ,     "*---[JavaAgencySrc.c] SendMIDSGetListReq---*")
   TRC_MSG(MMI_JAVA_RECV_MIDS_GETLIST_CNF,     "*---[JavaAgencySrc.c] RecvMIDSGetListCnf---*")

   TRC_MSG(MMI_JAVA_GET_JAVA_APP_MIDS_INDEX,   "*---[JavaAgencySrc.c] GetJavaAppMIDSIndex---*")


   TRC_MSG(MMI_JAVA_SEND_MID_GETLIST_REQ,     "*---[JavaAgencySrc.c] SendMIDGetListReq---*")
   TRC_MSG(MMI_JAVA_RECV_MID_GETLIST_CNF,     "*---[JavaAgencySrc.c] RecvMIDGetListCnf---*")

   TRC_MSG(MMI_JAVA_SEND_MID_START_REQ,        "*---[JavaAgencySrc.c] SendMIDStartReq---*")
   TRC_MSG(MMI_JAVA_RECV_MID_START_CNF,        "*---[JavaAgencySrc.c] RecvMIDStartCnf---*")
   TRC_MSG(MMI_JAVA_RECV_MID_STOP_IND,         "*---[JavaAgencySrc.c] RecvMIDStopInd---*")

   TRC_MSG(MMI_JAVA_SEND_MIDS_GETINFO_REQ,     "*---[JavaAgencySrc.c] SendMIDSGetInfoReq---*")
   TRC_MSG(MMI_JAVA_RECV_MIDS_GETINFO_CNF,     "*---[JavaAgencySrc.c] RecvMIDSGetInfoCnf---*")

   TRC_MSG(MMI_JAVA_SEND_MIDS_GET_SETTING_REQ, "*---[JavaAgencySrc.c] SendMIDSGetSettingReq---*")
   TRC_MSG(MMI_JAVA_RECV_MIDS_GET_SETTING_CNF, "*---[JavaAgencySrc.c] RecvMIDSGetSettingCnf---*")

   TRC_MSG(MMI_JAVA_SEND_MIDS_SET_SETTING_REQ, "*---[JavaAgencySrc.c] SendMIDSSetSettingReq---*")
   TRC_MSG(MMI_JAVA_RECV_MIDS_SET_SETTING_CNF, "*---[JavaAgencySrc.c] RecvMIDSSetSettingCnf---*")

   TRC_MSG(MMI_JAVA_MIDS_REMOVE_REQ,           "*---[JavaAgencySrc.c] SendMIDSDeleteReq---*")
   TRC_MSG(MMI_JAVA_MIDS_REMOVE_CONFIRM_IND,   "*---[JavaAgencySrc.c] RecvMIDSDeleteCnfInd---*")
   TRC_MSG(MMI_JAVA_MIDS_REMOVE_CONFIRM_RES,   "*---[JavaAgencySrc.c] SendMIDSDeleteConfirmRes---*")
   TRC_MSG(MMI_JAVA_MIDS_REMOVE_CNF,           "*---[JavaAgencySrc.c] RecvMIDSDeleteCnf---*")

   TRC_MSG(MMI_JAVA_GET_JAVA_APP_MID_INDEX,    "*---[JavaAgencySrc.c] GetJavaAppMIDIndex---*")

   TRC_MSG(MMI_JAVA_SEND_SET_MODE_REQ,         "*---[JavaAgencyEM.c] SendJavaSetModeReq---*")
   TRC_MSG(MMI_JAVA_RECV_SET_MODE_CNF,         "*---[JavaAgencyEM.c] RecvJavaSetModeCnf---*")

   TRC_MSG(MMI_JAVA_RECV_INSTALL_MIDS_IND,     "*---[JavaAgencyMidsInstall.c] RecvMIDSInstallInd---*")
   TRC_MSG(MMI_JAVA_SEND_INSTALL_MIDS_RES,     "*---[JavaAgencyMidsInstall.c] SendMIDSInstallInd---*")
   TRC_MSG(MMI_JAVA_RECV_INSTALL_CONFIRM_IND,  "*---[JavaAgencyMidsInstall.c] RecvMIDSInstallCnnfirmInd---*")
   TRC_MSG(MMI_JAVA_SEND_INSTALL_CONFIRM_RES,  "*---[JavaAgencyMidsInstall.c] SendMIDSInstallConfirmRes---*")
   TRC_MSG(MMI_JAVA_RECV_INSTALL_MIDS_CNF,     "*---[JavaAgencyMidsInstall.c] RecvMIDSInstallCnf---*")
   TRC_MSG(MMI_JAVA_SEND_INSTALL_MIDS_REQ,     "*---[JavaAgencyMidsInstall.c] SendMIDSInstallReq---*")

   TRC_MSG(MMI_JAVA_RECV_RESET_RMS_IND,        "*---[JavaAgencyRMS.c] RecvResetRMSInd---*")
   TRC_MSG(MMI_JAVA_SEND_RESET_RMS_RES,        "*---[JavaAgencyRMS.c] SendResetRMSRes---*")

   TRC_MSG(MMI_JAVA_SEND_MIDS_UPDATE_REQ,      "*---[JavaAgencyMidsInstall.c] SendMIDSUpdateReq---*")
   TRC_MSG(MMI_JAVA_RECV_MIDS_UPDATE_CNF,      "*---[JavaAgencyMidsInstall.c] RecvMIDSUpdateCnf---*")

    TRC_MSG(MMI_WAP_GET_FILE_AND_SAVE_IND,      "*---[JavaAgencyMidsInstall.c] RecvGetFileAndSaveRes---*")
   TRC_MSG(MMI_WAP_GET_FILE_AND_SAVE_RES,      "*---[JavaAgencyMidsInstall.c] SendGetFileAndSaveRes---*")

   TRC_MSG(MMI_JAVA_RECV_TIMEALARM_PUSH_IND,   "*---[JavaAgencyTimeAlarm.c] RecvTimeAlarmPushInd---*")
   TRC_MSG(MMI_JAVA_SEND_TIMEALARM_PUSH_RES,   "*---[JavaAgencyTimeAlarm.c] SendTimeAlarmPushRes---*")
   TRC_MSG(MMI_JAVA_RECV_TIMEALARM_PUSH_GET_SETTING_CNF, "*---[JavaAgencyTimeAlarm.c] RecvTimeAlarmPushGetSettingCnf---*")

   TRC_MSG(MMI_JAVA_SEND_ABORT_REQ,            "*---[JavaAgencyMidsInstall.c] SendJavaAbortReq---*")
   TRC_MSG(MMI_JAVA_RECV_ABORT_CNF,            "*---[JavaAgencyMidsInstall.c] RecvJavaAbortCnf---*")

   TRC_MSG(MMI_JAVA_LOCAL_INSTALL_CNF,      "*---[JavaAgencySrc.c] RecvJavaLocalInstallCnf---*")
   TRC_MSG(MMI_JAVA_LOCAL_INSTALL_REQ,      "*---[JavaAgencySrc.c] SendJavaLocalInstallReq---*")
   TRC_MSG(MMI_JAVA_AT_LOCAL_INSTALL_CNF,   "*---[JavaAgencySrc.c] RecvJavaATLocalInstallCnf---*")
   TRC_MSG(MMI_JAVA_AT_LOCAL_INSTALL_REQ,   "*---[JavaAgencySrc.c] RecvJavaATLocalInstallReq---*")

   TRC_MSG(MMI_JAVA_MIDS_INFO,                 "*---[JavaAgencySrc.c] mids_index=%d, mids_count=%d, mid_index=%d---*")
   TRC_MSG(MMI_JAVA_DOWNLOAD_INFO,             "*---[JavaAgencySrc.c] dnld_size=%d, total_size=%d, level=%d---*")
   TRC_MSG(MMI_JAVA_RECV_GET_CONFIRM_IND,           "*---[JavaAgencyUtil.c] send_mids_get_confirm_ind ---*")
   TRC_MSG(MMI_JAVA_SEND_GET_CONFIRM_RES,           "*---[JavaAgencyUtil.c] send_mids_get_confirm_res res = %d---*")
   TRC_MSG(MMI_JAVA_RECV_SHOW_PERCENTAGE_IND,  "*-- [JavaAgencyMidsInstall.c] mmi_java_recv_show_percentage_ind current = %d, total = %d ---*")

#endif /* _MMI_MEDIA_APP_TRC_H_ */

