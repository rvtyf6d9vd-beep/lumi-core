/*
 * dhrystone.c -- Dhrystone 2.2 benchmark, adapted for Lumi-Core bare-metal RISC-V
 *
 * Based on riscv-tests benchmarks/dhrystone (Version C, Version 2.2)
 * Merged: dhrystone_main.c + dhrystone.c into single compilation unit.
 * Adaptations:
 *   - #pragma GCC optimize("no-inline") to prevent statement removal
 *   - alloca() replaced with static buffers
 *   - printf via mini_libc (Linux write syscall in gem5 SE mode)
 *   - Timer via rdcycle, HZ=1000000000 (1GHz)
 *   - Linux exit syscall on completion
 *   - DMIPS/MHz output for performance measurement
 */

#pragma GCC optimize ("no-inline")

#include "dhrystone.h"

/* Forward declarations (K&R style compatibility) */
Enumeration Func_1(Capital_Letter, Capital_Letter);

/* Forward declarations for all Proc/Func functions */
int Proc_1(Rec_Pointer);
int Proc_2(One_Fifty *);
int Proc_3(Rec_Pointer *);
int Proc_4(void);
int Proc_5(void);
int Proc_6(Enumeration, Enumeration *);
int Proc_7(One_Fifty, One_Fifty, One_Fifty *);
int Proc_8(Arr_1_Dim, Arr_2_Dim, int, int);
Boolean Func_2(Str_30, Str_30);
Boolean Func_3(Enumeration);

/* Global Variables: */
Rec_Pointer     Ptr_Glob,
                Next_Ptr_Glob;
int             Int_Glob;
Boolean         Bool_Glob;
char            Ch_1_Glob,
                Ch_2_Glob;
int             Arr_1_Glob [50];
int             Arr_2_Glob [50] [50];

#ifndef REG
        Boolean Reg = false;
#define REG
#else
        Boolean Reg = true;
#undef REG
#define REG register
#endif

Boolean         Done;

long            Begin_Time,
                End_Time,
                User_Time;
long            Microseconds,
                Dhrystones_Per_Second;

/* Static buffers replacing alloca() */
static Rec_Type Rec_Glob_A, Rec_Glob_B;


int main (int argc, char** argv)
/*****/
{
        One_Fifty       Int_1_Loc;
  REG   One_Fifty       Int_2_Loc;
        One_Fifty       Int_3_Loc;
  REG   char            Ch_Index;
        Enumeration     Enum_Loc;
        Str_30          Str_1_Loc;
        Str_30          Str_2_Loc;
  REG   int             Run_Index;
  REG   int             Number_Of_Runs;

  (void)argc;
  (void)argv;

  /* Arguments */
  Number_Of_Runs = NUMBER_OF_RUNS;

  /* Initializations -- use static buffers instead of alloca() */
  Next_Ptr_Glob = &Rec_Glob_A;
  Ptr_Glob = &Rec_Glob_B;

  Ptr_Glob->Ptr_Comp                    = Next_Ptr_Glob;
  Ptr_Glob->Discr                       = Ident_1;
  Ptr_Glob->variant.var_1.Enum_Comp     = Ident_3;
  Ptr_Glob->variant.var_1.Int_Comp      = 40;
  strcpy (Ptr_Glob->variant.var_1.Str_Comp,
          "DHRYSTONE PROGRAM, SOME STRING");
  strcpy (Str_1_Loc, "DHRYSTONE PROGRAM, 1'ST STRING");

  Arr_2_Glob [8][7] = 10;

  printf ("\n");
  printf ("Dhrystone Benchmark, Version %s\n", Version);
  if (Reg)
  {
    printf ("Program compiled with 'register' attribute\n");
  }
  else
  {
    printf ("Program compiled without 'register' attribute\n");
  }
  printf ("Using %s, HZ=%lu\n", CLOCK_TYPE, (unsigned long)HZ);
  printf ("\n");

  Done = false;
  while (!Done) {
    printf ("Trying %d runs through Dhrystone:\n", Number_Of_Runs);

    /***************/
    /* Start timer */
    /***************/

    setStats(1);
    Start_Timer();

    for (Run_Index = 1; Run_Index <= Number_Of_Runs; ++Run_Index)
    {

      Proc_5();
      Proc_4();
      Int_1_Loc = 2;
      Int_2_Loc = 3;
      strcpy (Str_2_Loc, "DHRYSTONE PROGRAM, 2'ND STRING");
      Enum_Loc = Ident_2;
      Bool_Glob = ! Func_2 (Str_1_Loc, Str_2_Loc);
      while (Int_1_Loc < Int_2_Loc)
      {
        Int_3_Loc = 5 * Int_1_Loc - Int_2_Loc;
        Proc_7 (Int_1_Loc, Int_2_Loc, &Int_3_Loc);
        Int_1_Loc += 1;
      }
      Proc_8 (Arr_1_Glob, Arr_2_Glob, Int_1_Loc, Int_3_Loc);
      Proc_1 (Ptr_Glob);
      for (Ch_Index = 'A'; Ch_Index <= Ch_2_Glob; ++Ch_Index)
      {
        if (Enum_Loc == Func_1 (Ch_Index, 'C'))
        {
          Proc_6 (Ident_1, &Enum_Loc);
          strcpy (Str_2_Loc, "DHRYSTONE PROGRAM, 3'RD STRING");
          Int_2_Loc = Run_Index;
          Int_Glob = Run_Index;
        }
      }
      Int_2_Loc = Int_2_Loc * Int_1_Loc;
      Int_1_Loc = Int_2_Loc / Int_3_Loc;
      Int_2_Loc = 7 * (Int_2_Loc - Int_3_Loc) - Int_1_Loc;
      Proc_2 (&Int_1_Loc);

    } /* loop "for Run_Index" */

    /**************/
    /* Stop timer */
    /**************/

    Stop_Timer();
    setStats(0);

    User_Time = End_Time - Begin_Time;

    if (User_Time < Too_Small_Time)
    {
      printf ("Measured time too small to obtain meaningful results\n");
      Number_Of_Runs = Number_Of_Runs * 10;
      printf ("\n");
    } else Done = true;
  }

  printf ("Final values of the variables used in the benchmark:\n");
  printf ("\n");
  printf ("Int_Glob:            %d\n", Int_Glob);
  printf ("        should be:   %d\n", 5);
  printf ("Bool_Glob:           %d\n", Bool_Glob);
  printf ("        should be:   %d\n", 1);
  printf ("Ch_1_Glob:           %c\n", Ch_1_Glob);
  printf ("        should be:   %c\n", 'A');
  printf ("Ch_2_Glob:           %c\n", Ch_2_Glob);
  printf ("        should be:   %c\n", 'B');
  printf ("Arr_1_Glob[8]:       %d\n", Arr_1_Glob[8]);
  printf ("        should be:   %d\n", 7);
  printf ("Arr_2_Glob[8][7]:    %d\n", Arr_2_Glob[8][7]);
  printf ("        should be:   Number_Of_Runs + 10\n");
  printf ("Ptr_Glob->\n");
  printf ("  Ptr_Comp:          %lu\n", (unsigned long) Ptr_Glob->Ptr_Comp);
  printf ("        should be:   (implementation-dependent)\n");
  printf ("  Discr:             %d\n", Ptr_Glob->Discr);
  printf ("        should be:   %d\n", 0);
  printf ("  Enum_Comp:         %d\n", Ptr_Glob->variant.var_1.Enum_Comp);
  printf ("        should be:   %d\n", 2);
  printf ("  Int_Comp:          %d\n", Ptr_Glob->variant.var_1.Int_Comp);
  printf ("        should be:   %d\n", 17);
  printf ("  Str_Comp:          %s\n", Ptr_Glob->variant.var_1.Str_Comp);
  printf ("        should be:   DHRYSTONE PROGRAM, SOME STRING\n");
  printf ("Next_Ptr_Glob->\n");
  printf ("  Ptr_Comp:          %lu\n", (unsigned long) Next_Ptr_Glob->Ptr_Comp);
  printf ("        should be:   (implementation-dependent), same as above\n");
  printf ("  Discr:             %d\n", Next_Ptr_Glob->Discr);
  printf ("        should be:   %d\n", 0);
  printf ("  Enum_Comp:         %d\n", Next_Ptr_Glob->variant.var_1.Enum_Comp);
  printf ("        should be:   %d\n", 1);
  printf ("  Int_Comp:          %d\n", Next_Ptr_Glob->variant.var_1.Int_Comp);
  printf ("        should be:   %d\n", 18);
  printf ("  Str_Comp:          %s\n",
                                Next_Ptr_Glob->variant.var_1.Str_Comp);
  printf ("        should be:   DHRYSTONE PROGRAM, SOME STRING\n");
  printf ("Int_1_Loc:           %d\n", Int_1_Loc);
  printf ("        should be:   %d\n", 5);
  printf ("Int_2_Loc:           %d\n", Int_2_Loc);
  printf ("        should be:   %d\n", 13);
  printf ("Int_3_Loc:           %d\n", Int_3_Loc);
  printf ("        should be:   %d\n", 7);
  printf ("Enum_Loc:            %d\n", Enum_Loc);
  printf ("        should be:   %d\n", 1);
  printf ("Str_1_Loc:           %s\n", Str_1_Loc);
  printf ("        should be:   DHRYSTONE PROGRAM, 1'ST STRING\n");
  printf ("Str_2_Loc:           %s\n", Str_2_Loc);
  printf ("        should be:   DHRYSTONE PROGRAM, 2'ND STRING\n");
  printf ("\n");


  Microseconds = ((User_Time / Number_Of_Runs) * Mic_secs_Per_Second) / (long)HZ;
  Dhrystones_Per_Second = ((long)HZ * Number_Of_Runs) / User_Time;

  printf ("Microseconds for one run through Dhrystone: %ld\n", Microseconds);
  printf ("Dhrystones per Second:                      %ld\n", Dhrystones_Per_Second);
  printf ("\n");

  /* DMIPS/MHz calculation for Lumi-Core performance reporting
   * DMIPS = Dhrystones_Per_Second / 1757 (VAX 11/780 reference)
   * DMIPS/MHz = DMIPS / freq_MHz
   * At 1GHz (freq_MHz = 1000):
   *   DMIPS/MHz = Dhrystones_Per_Second / (1757 * 1000)
   *
   * RV32 overflow-safe calculation:
   *   User_Time is in CPU cycles (from rdcycle). At 1GHz, 1 cycle = 1ns.
   *   DMIPS/MHz * 100 = Number_Of_Runs * 10^8 / (1757 * User_Time)
   *   Split into: scaled_dps = N_Runs * 10000 / User_Time (fits RV32)
   *   Then: dmips_x100 = scaled_dps * 10000 / 1757
   */
  {
    unsigned long scaled_dps, dmips_mhz_x100;
    scaled_dps = ((unsigned long)Number_Of_Runs * 10000UL)
                 / (unsigned long)User_Time;
    dmips_mhz_x100 = (scaled_dps * 10000UL) / 1757UL;
    printf ("Dhrystone_DMIPS_per_MHz_x100 : %lu\n", dmips_mhz_x100);
    printf ("Dhrystone_sim_runs : %d\n", Number_Of_Runs);
    printf ("Dhrystone_sim_ticks : %ld\n", User_Time);
  }

  /* Exit simulation */
  write_tohost(0);

  return 0;
}


/* ======== Proc_1 through Proc_5 (from dhrystone_main.c) ======== */

int Proc_1 (Ptr_Val_Par)
/******************/

REG Rec_Pointer Ptr_Val_Par;
{
  REG Rec_Pointer Next_Record = Ptr_Val_Par->Ptr_Comp;

  structassign (*Ptr_Val_Par->Ptr_Comp, *Ptr_Glob);
  Ptr_Val_Par->variant.var_1.Int_Comp = 5;
  Next_Record->variant.var_1.Int_Comp
        = Ptr_Val_Par->variant.var_1.Int_Comp;
  Next_Record->Ptr_Comp = Ptr_Val_Par->Ptr_Comp;
  Proc_3 (&Next_Record->Ptr_Comp);
  if (Next_Record->Discr == Ident_1)
  {
    Next_Record->variant.var_1.Int_Comp = 6;
    Proc_6 (Ptr_Val_Par->variant.var_1.Enum_Comp,
           &Next_Record->variant.var_1.Enum_Comp);
    Next_Record->Ptr_Comp = Ptr_Glob->Ptr_Comp;
    Proc_7 (Next_Record->variant.var_1.Int_Comp, 10,
           &Next_Record->variant.var_1.Int_Comp);
  }
  else
    structassign (*Ptr_Val_Par, *Ptr_Val_Par->Ptr_Comp);
} /* Proc_1 */


int Proc_2 (Int_Par_Ref)
/******************/

One_Fifty   *Int_Par_Ref;
{
  One_Fifty  Int_Loc;
  Enumeration   Enum_Loc;

  Int_Loc = *Int_Par_Ref + 10;
  do
    if (Ch_1_Glob == 'A')
    {
      Int_Loc -= 1;
      *Int_Par_Ref = Int_Loc - Int_Glob;
      Enum_Loc = Ident_1;
    }
  while (Enum_Loc != Ident_1);
} /* Proc_2 */


int Proc_3 (Ptr_Ref_Par)
/******************/

Rec_Pointer *Ptr_Ref_Par;
{
  if (Ptr_Glob != Null)
    *Ptr_Ref_Par = Ptr_Glob->Ptr_Comp;
  Proc_7 (10, Int_Glob, &Ptr_Glob->variant.var_1.Int_Comp);
} /* Proc_3 */


int Proc_4 () /* without parameters */
/*******/
{
  Boolean Bool_Loc;

  Bool_Loc = Ch_1_Glob == 'A';
  Bool_Glob = Bool_Loc | Bool_Glob;
  Ch_2_Glob = 'B';
} /* Proc_4 */


int Proc_5 () /* without parameters */
/*******/
{
  Ch_1_Glob = 'A';
  Bool_Glob = false;
} /* Proc_5 */


/* ======== Proc_6 through Proc_8, Func_1 through Func_3 (from dhrystone.c) ======== */

extern  int     Int_Glob;
extern  char    Ch_1_Glob;


int Proc_6 (Enum_Val_Par, Enum_Ref_Par)
/*********************************/

Enumeration  Enum_Val_Par;
Enumeration *Enum_Ref_Par;
{
  *Enum_Ref_Par = Enum_Val_Par;
  if (! Func_3 (Enum_Val_Par))
    *Enum_Ref_Par = Ident_4;
  switch (Enum_Val_Par)
  {
    case Ident_1:
      *Enum_Ref_Par = Ident_1;
      break;
    case Ident_2:
      if (Int_Glob > 100)
      *Enum_Ref_Par = Ident_1;
      else *Enum_Ref_Par = Ident_4;
      break;
    case Ident_3: /* executed */
      *Enum_Ref_Par = Ident_2;
      break;
    case Ident_4: break;
    case Ident_5:
      *Enum_Ref_Par = Ident_3;
      break;
  } /* switch */
} /* Proc_6 */


int Proc_7 (Int_1_Par_Val, Int_2_Par_Val, Int_Par_Ref)
/**********************************************/

One_Fifty       Int_1_Par_Val;
One_Fifty       Int_2_Par_Val;
One_Fifty      *Int_Par_Ref;
{
  One_Fifty Int_Loc;

  Int_Loc = Int_1_Par_Val + 2;
  *Int_Par_Ref = Int_2_Par_Val + Int_Loc;
} /* Proc_7 */


int Proc_8 (Arr_1_Par_Ref, Arr_2_Par_Ref, Int_1_Par_Val, Int_2_Par_Val)
/*********************************************************************/

Arr_1_Dim       Arr_1_Par_Ref;
Arr_2_Dim       Arr_2_Par_Ref;
int             Int_1_Par_Val;
int             Int_2_Par_Val;
{
  REG One_Fifty Int_Index;
  REG One_Fifty Int_Loc;

  Int_Loc = Int_1_Par_Val + 5;
  Arr_1_Par_Ref [Int_Loc] = Int_2_Par_Val;
  Arr_1_Par_Ref [Int_Loc+1] = Arr_1_Par_Ref [Int_Loc];
  Arr_1_Par_Ref [Int_Loc+30] = Int_Loc;
  for (Int_Index = Int_Loc; Int_Index <= Int_Loc+1; ++Int_Index)
    Arr_2_Par_Ref [Int_Loc] [Int_Index] = Int_Loc;
  Arr_2_Par_Ref [Int_Loc] [Int_Loc-1] += 1;
  Arr_2_Par_Ref [Int_Loc+20] [Int_Loc] = Arr_1_Par_Ref [Int_Loc];
  Int_Glob = 5;
} /* Proc_8 */


Enumeration Func_1 (Ch_1_Par_Val, Ch_2_Par_Val)
/*************************************************/

Capital_Letter   Ch_1_Par_Val;
Capital_Letter   Ch_2_Par_Val;
{
  Capital_Letter        Ch_1_Loc;
  Capital_Letter        Ch_2_Loc;

  Ch_1_Loc = Ch_1_Par_Val;
  Ch_2_Loc = Ch_1_Loc;
  if (Ch_2_Loc != Ch_2_Par_Val)
    return (Ident_1);
  else
  {
    Ch_1_Glob = Ch_1_Loc;
    return (Ident_2);
   }
} /* Func_1 */


Boolean Func_2 (Str_1_Par_Ref, Str_2_Par_Ref)
/*************************************************/

Str_30  Str_1_Par_Ref;
Str_30  Str_2_Par_Ref;
{
  REG One_Thirty        Int_Loc;
      Capital_Letter    Ch_Loc;

  Int_Loc = 2;
  while (Int_Loc <= 2)
    if (Func_1 (Str_1_Par_Ref[Int_Loc],
                Str_2_Par_Ref[Int_Loc+1]) == Ident_1)
    {
      Ch_Loc = 'A';
      Int_Loc += 1;
    }
  if (Ch_Loc >= 'W' && Ch_Loc < 'Z')
    Int_Loc = 7;
  if (Ch_Loc == 'R')
    return (true);
  else
  {
    if (strcmp (Str_1_Par_Ref, Str_2_Par_Ref) > 0)
    {
      Int_Loc += 7;
      Int_Glob = Int_Loc;
      return (true);
    }
    else
      return (false);
  }
} /* Func_2 */


Boolean Func_3 (Enum_Par_Val)
/***************************/

Enumeration Enum_Par_Val;
{
  Enumeration Enum_Loc;

  Enum_Loc = Enum_Par_Val;
  if (Enum_Loc == Ident_3)
    return (true);
  else
    return (false);
} /* Func_3 */
