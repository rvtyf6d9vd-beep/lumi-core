// See LICENSE for license details.
// Adapted for Lumi-Core bare-metal RISC-V platform (gem5 SE mode).

#ifndef _DHRYSTONE_H
#define _DHRYSTONE_H

/****************** "DHRYSTONE" Benchmark Program ***************************/
#define Version "C, Version 2.2"

/* Include bare-metal adaptation BEFORE type definitions.
 * This provides printf, strcpy, strcmp, read_csr, setStats
 * as macros/functions, replacing the need for stdio.h and string.h. */
#include "lumi_dhry_port.h"

/* Compiler and system dependent definitions: */

/* variables for time measurement: */

#ifdef TIME

#define CLOCK_TYPE "time()"
#undef HZ
#define HZ	(1) /* time() returns time in seconds */
extern long     time(); /* see library function "time"  */
#define Too_Small_Time 2 /* Measurements should last at least 2 seconds */
#define Start_Timer() Begin_Time = time ( (long *) 0)
#define Stop_Timer()  End_Time   = time ( (long *) 0)

#else

#ifdef MSC_CLOCK /* Use Microsoft C hi-res clock */

#undef HZ
#undef TIMES
#include <time.h>
#define HZ	CLK_TCK
#define CLOCK_TYPE "MSC clock()"
extern clock_t	clock();
#define Too_Small_Time (2*HZ)
#define Start_Timer() Begin_Time = clock()
#define Stop_Timer()  End_Time   = clock()

#elif defined(__riscv)

#define HZ 1000000000UL  /* 1GHz simulation: ticks per second */
#define Too_Small_Time 1
#define CLOCK_TYPE "rdcycle()"
#define Start_Timer() Begin_Time = read_csr(mcycle)
#define Stop_Timer() End_Time = read_csr(mcycle)

#else
                /* Use times(2) time function unless    */
                /* explicitly defined otherwise         */
#define CLOCK_TYPE "times()"
#include <sys/types.h>
#include <sys/times.h>
#ifndef HZ	/* Added by SP 900619 */
#include <sys/param.h> /* If your system doesn't have this, use -DHZ=xxx */
#else
	*** You must define HZ!!! ***
#endif /* HZ */
#ifndef PASS2
struct tms      time_info;
#endif
/*extern  int     times ();*/
                /* see library function "times" */
#define Too_Small_Time (2*HZ)
                /* Measurements should last at least about 2 seconds */
#define Start_Timer() times(&time_info); Begin_Time=(long)time_info.tms_utime
#define Stop_Timer()  times(&time_info); End_Time = (long)time_info.tms_utime

#endif /* MSC_CLOCK */
#endif /* TIME */


#define Mic_secs_Per_Second     1000000
#ifndef NUMBER_OF_RUNS
#define NUMBER_OF_RUNS		500 /* Default number of runs */
#endif

#ifdef  NOSTRUCTASSIGN
#define structassign(d, s)      memcpy(&(d), &(s), sizeof(d))
#else
#define structassign(d, s)      d = s
#endif

#ifdef  NOENUM
#define Ident_1 0
#define Ident_2 1
#define Ident_3 2
#define Ident_4 3
#define Ident_5 4
  typedef int   Enumeration;
#else
  typedef       enum    {Ident_1, Ident_2, Ident_3, Ident_4, Ident_5}
                Enumeration;
#endif
        /* for boolean and enumeration types in Ada, Pascal */

/* General definitions: */

#define Null 0 
                /* Value of a Null pointer */
#define true  1
#define false 0

typedef int     One_Thirty;
typedef int     One_Fifty;
typedef char    Capital_Letter;
typedef int     Boolean;
typedef char    Str_30 [31];
typedef int     Arr_1_Dim [50];
typedef int     Arr_2_Dim [50] [50];

typedef struct record 
    {
    struct record *Ptr_Comp;
    Enumeration    Discr;
    union {
          struct {
                  Enumeration Enum_Comp;
                  int         Int_Comp;
                  char        Str_Comp [31];
                  } var_1;
          struct {
                  Enumeration E_Comp_2;
                  char        Str_2_Comp [31];
                  } var_2;
          struct {
                  char        Ch_1_Comp;
                  char        Ch_2_Comp;
                  } var_3;
          } variant;
      } Rec_Type, *Rec_Pointer;

#endif
