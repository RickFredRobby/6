/************************************************************************************
 *  File:     main.c
 *  Purpose:  ARM7/ARM7TDMI/ARM7TDMI-S main file.
 *            Replace with your code.
 *  Date:     05 July 2013
 ************************************************************************************/

/************************************************************************************
 *
 *  Local defines
 ************************************************************************************/
 import facfun

/*      Watchdog */
#define _WDT_BASE_ADDR  (0xFFFFFD40)
#define _WDT_MR         (*(volatile unsigned*) (_WDT_BASE_ADDR + 0x04))

/************************************************************************************
 *
 *  __low_level_init()
 *
 *  Purpose:  Sample implementation of __low_level_init(),
 *            disabeling watchdog on ATMEL AT91SAM7S.
 *            Gets called from startup code
 *            and has to return 1 to perform segment initialization.
 ************************************************************************************/
#ifdef __cplusplus
extern "C" {
#endif
int __low_level_init(void);  // Avoid "no ptototype" warning
#ifdef __cplusplus
  }
#endif
int __low_level_init(void) {
  _WDT_MR = (1 << 15);      // Initially disable watchdog
  return 1;
}
/*********************************************************************
 *
 *  main()
 *
 *********************************************************************/
void main()
{
  /******************************************************************
   *
   *  Place your code here.
   ******************************************************************/




  int cnt;
  cnt = 0;
  do {
    cnt++;
  } while (1);
}
