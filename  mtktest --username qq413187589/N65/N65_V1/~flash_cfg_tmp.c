#line 1 "make\~flash_cfg.c"
#line 1 "custom\system\UNIRISE25_GEMINI_BB\custom_MemoryDevice.h"
 


































 




















    




 











 












 























 


























 




























 





























#line 2 "make\~flash_cfg.c"
#line 1 "custom\system\UNIRISE25_GEMINI_BB\custom_EMI.h"
 


































 


































#line 1 "custom\system\UNIRISE25_GEMINI_BB\flash_opt.h"
 


































 


































































































































#line 72 "custom\system\UNIRISE25_GEMINI_BB\custom_EMI.h"

 





const ExtMemoryType_T   EMI_CSConfiguration[4] =
{
   NOR_FLASH,
   RAM,
   UNUSED,
   UNUSED

};


 




const kal_uint32  EMI_EXTSRAM_SIZE = ((32)<<20)>> 3;

 































 




































const kal_uint32   EMI_SettingOnCS[4] =
{
   0x40514648,
   0x40514808,
   0,
   0
};














 





 








 





 





 













 static const  FlashRegionInfo RegionInfo[] =
{
   {0x10000, 31},
   {0x2000, 8},
   EndRegionInfo  
};



 






 


kal_uint32 PAGE_BUFFER_SIZE = 0;

 







 




















 



















#line 3 "make\~flash_cfg.c"
int allocated_fat_space =  0x00200000 ; 
int partition_sectors =  768 ; 