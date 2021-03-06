/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/sundar/Desktop/comporg/a3.1/SingleCycleCPU/rf.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};



static void Initial_14_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(15, ng0);

LAB2:    xsi_set_current_line(16, ng0);
    xsi_set_current_line(16, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2888);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(17, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 2728);
    t16 = (t0 + 2728);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2728);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2888);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(16, ng0);
    t1 = (t0 + 2888);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB7;

}

static void Always_19_1(char *t0)
{
    char t10[8];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(20, ng0);

LAB2:    xsi_set_current_line(21, ng0);
    t1 = (t0 + 1208U);
    t2 = *((char **)t1);
    t1 = (t2 + 4);
    t3 = *((unsigned int *)t1);
    t4 = (~(t3));
    t5 = *((unsigned int *)t2);
    t6 = (t5 & t4);
    t7 = (t6 != 0);
    if (t7 > 0)
        goto LAB3;

LAB4:    xsi_set_current_line(26, ng0);

LAB7:    xsi_set_current_line(27, ng0);
    t1 = (t0 + 2728);
    t2 = (t1 + 56U);
    t8 = *((char **)t2);
    t9 = (t0 + 2728);
    t11 = (t9 + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 2728);
    t14 = (t13 + 64U);
    t15 = *((char **)t14);
    t16 = (t0 + 1528U);
    t17 = *((char **)t16);
    xsi_vlog_generic_get_array_select_value(t10, 32, t8, t12, t15, 2, 1, t17, 6, 2);
    t16 = (t0 + 2408);
    xsi_vlogvar_assign_value(t16, t10, 0, 0, 32);
    xsi_set_current_line(28, ng0);
    t1 = (t0 + 2728);
    t2 = (t1 + 56U);
    t8 = *((char **)t2);
    t9 = (t0 + 2728);
    t11 = (t9 + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 2728);
    t14 = (t13 + 64U);
    t15 = *((char **)t14);
    t16 = (t0 + 1688U);
    t17 = *((char **)t16);
    xsi_vlog_generic_get_array_select_value(t10, 32, t8, t12, t15, 2, 1, t17, 6, 2);
    t16 = (t0 + 2568);
    xsi_vlogvar_assign_value(t16, t10, 0, 0, 32);

LAB5:    goto LAB5;

LAB3:    xsi_set_current_line(22, ng0);

LAB6:    xsi_set_current_line(23, ng0);
    t8 = ((char*)((ng1)));
    t9 = (t0 + 2408);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    xsi_set_current_line(23, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    goto LAB5;

LAB1:    return;
}

static void Always_31_2(char *t0)
{
    char t13[8];
    char t35[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    int t36;
    char *t37;
    int t38;
    int t39;
    int t40;
    int t41;

LAB0:    t1 = (t0 + 4296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 4616);
    *((int *)t2) = 1;
    t3 = (t0 + 4328);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(34, ng0);

LAB9:    xsi_set_current_line(35, ng0);
    t11 = (t0 + 1848U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t14 = (t12 + 4);
    t15 = (t11 + 4);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t11);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB13;

LAB10:    if (t25 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t13) = 1;

LAB13:    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    t4 = (t0 + 2728);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2728);
    t14 = (t12 + 64U);
    t15 = *((char **)t14);
    t28 = (t0 + 1848U);
    t29 = *((char **)t28);
    xsi_vlog_generic_convert_array_indices(t13, t35, t11, t15, 2, 1, t29, 6, 2);
    t28 = (t13 + 4);
    t6 = *((unsigned int *)t28);
    t36 = (!(t6));
    t37 = (t35 + 4);
    t7 = *((unsigned int *)t37);
    t38 = (!(t7));
    t39 = (t36 && t38);
    if (t39 == 1)
        goto LAB18;

LAB19:
LAB16:    goto LAB8;

LAB12:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(36, ng0);

LAB17:    goto LAB16;

LAB18:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t35);
    t40 = (t8 - t9);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t35), t41);
    goto LAB19;

}


extern void work_m_07609763700626613184_2347679131_init()
{
	static char *pe[] = {(void *)Initial_14_0,(void *)Always_19_1,(void *)Always_31_2};
	xsi_register_didat("work_m_07609763700626613184_2347679131", "isim/cpu_tb_isim_beh.exe.sim/work/m_07609763700626613184_2347679131.didat");
	xsi_register_executes(pe);
}
