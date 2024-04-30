/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
extern void execute_166(char*, char *);
extern void execute_167(char*, char *);
extern void execute_164(char*, char *);
extern void execute_165(char*, char *);
extern void execute_16(char*, char *);
extern void execute_159(char*, char *);
extern void execute_160(char*, char *);
extern void execute_161(char*, char *);
extern void execute_20(char*, char *);
extern void execute_29(char*, char *);
extern void execute_31(char*, char *);
extern void execute_32(char*, char *);
extern void execute_33(char*, char *);
extern void execute_34(char*, char *);
extern void execute_39(char*, char *);
extern void execute_40(char*, char *);
extern void execute_41(char*, char *);
extern void execute_42(char*, char *);
extern void execute_43(char*, char *);
extern void execute_44(char*, char *);
extern void execute_45(char*, char *);
extern void execute_36(char*, char *);
extern void execute_47(char*, char *);
extern void execute_60(char*, char *);
extern void execute_61(char*, char *);
extern void execute_62(char*, char *);
extern void execute_63(char*, char *);
extern void execute_51(char*, char *);
extern void execute_52(char*, char *);
extern void execute_53(char*, char *);
extern void execute_54(char*, char *);
extern void execute_65(char*, char *);
extern void execute_81(char*, char *);
extern void execute_85(char*, char *);
extern void execute_86(char*, char *);
extern void execute_87(char*, char *);
extern void execute_88(char*, char *);
extern void execute_126(char*, char *);
extern void execute_127(char*, char *);
extern void execute_128(char*, char *);
extern void execute_97(char*, char *);
extern void execute_98(char*, char *);
extern void execute_92(char*, char *);
extern void execute_93(char*, char *);
extern void execute_163(char*, char *);
extern void transaction_0(char*, char*, unsigned, unsigned, unsigned);
extern void vhdl_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_9(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_52(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_53(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[50] = {(funcp)execute_166, (funcp)execute_167, (funcp)execute_164, (funcp)execute_165, (funcp)execute_16, (funcp)execute_159, (funcp)execute_160, (funcp)execute_161, (funcp)execute_20, (funcp)execute_29, (funcp)execute_31, (funcp)execute_32, (funcp)execute_33, (funcp)execute_34, (funcp)execute_39, (funcp)execute_40, (funcp)execute_41, (funcp)execute_42, (funcp)execute_43, (funcp)execute_44, (funcp)execute_45, (funcp)execute_36, (funcp)execute_47, (funcp)execute_60, (funcp)execute_61, (funcp)execute_62, (funcp)execute_63, (funcp)execute_51, (funcp)execute_52, (funcp)execute_53, (funcp)execute_54, (funcp)execute_65, (funcp)execute_81, (funcp)execute_85, (funcp)execute_86, (funcp)execute_87, (funcp)execute_88, (funcp)execute_126, (funcp)execute_127, (funcp)execute_128, (funcp)execute_97, (funcp)execute_98, (funcp)execute_92, (funcp)execute_93, (funcp)execute_163, (funcp)transaction_0, (funcp)vhdl_transfunc_eventcallback, (funcp)transaction_9, (funcp)transaction_52, (funcp)transaction_53};
const int NumRelocateId= 50;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/TB_OurProcessor_behav/xsim.reloc",  (void **)funcTab, 50);
	iki_vhdl_file_variable_register(dp + 24288);
	iki_vhdl_file_variable_register(dp + 24344);


	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/TB_OurProcessor_behav/xsim.reloc");
}

void simulate(char *dp)
{
	iki_schedule_processes_at_time_zero(dp, "xsim.dir/TB_OurProcessor_behav/xsim.reloc");
	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net
	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern void implicit_HDL_SCinstatiate();

extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/TB_OurProcessor_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/TB_OurProcessor_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/TB_OurProcessor_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
