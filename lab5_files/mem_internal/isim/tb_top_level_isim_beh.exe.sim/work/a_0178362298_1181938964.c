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
static const char *ng0 = "/home/cccitron/mastersThesis/lab5_files/mem_internal/top_level.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1006216973935652998_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_1006216973935724872_1035706684(char *, char *, char *, char *, int );


static void work_a_0178362298_1181938964_p_0(char *t0)
{
    char t23[16];
    char t25[16];
    char t30[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t24;
    char *t26;
    char *t27;
    int t28;
    unsigned int t29;
    char *t31;
    int t32;
    unsigned char t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    static char *nl0[] = {&&LAB11, &&LAB11, &&LAB9, &&LAB10, &&LAB11, &&LAB11, &&LAB11, &&LAB11, &&LAB11};

LAB0:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1632U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5328);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(96, ng0);
    t4 = (t0 + 1192U);
    t8 = *((char **)t4);
    t9 = (7 - 7);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t4 = (t8 + t12);
    t13 = *((unsigned char *)t4);
    t14 = (char *)((nl0) + t13);
    goto **((char **)t14);

LAB5:    t4 = (t0 + 1672U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t2 = (t0 + 9008U);
    t5 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t23, t4, t2, 1);
    t8 = (t0 + 5520);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 3U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2632U);
    t4 = *((char **)t2);
    t2 = (t0 + 9072U);
    t5 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t23, t4, t2, 1);
    t8 = (t0 + 5584);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8U);
    xsi_driver_first_trans_fast(t8);
    goto LAB3;

LAB9:    xsi_set_current_line(98, ng0);
    t15 = (t0 + 9188);
    t17 = (t0 + 2152U);
    t18 = *((char **)t17);
    t19 = (5 - 5);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t17 = (t18 + t21);
    t24 = ((IEEE_P_2592010699) + 4000);
    t26 = (t25 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = 0;
    t27 = (t26 + 4U);
    *((int *)t27) = 1;
    t27 = (t26 + 8U);
    *((int *)t27) = 1;
    t28 = (1 - 0);
    t29 = (t28 * 1);
    t29 = (t29 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t29;
    t27 = (t30 + 0U);
    t31 = (t27 + 0U);
    *((int *)t31) = 5;
    t31 = (t27 + 4U);
    *((int *)t31) = 0;
    t31 = (t27 + 8U);
    *((int *)t31) = -1;
    t32 = (0 - 5);
    t29 = (t32 * -1);
    t29 = (t29 + 1);
    t31 = (t27 + 12U);
    *((unsigned int *)t31) = t29;
    t22 = xsi_base_array_concat(t22, t23, t24, (char)97, t15, t25, (char)97, t17, t30, (char)101);
    t29 = (2U + 6U);
    t33 = (8U != t29);
    if (t33 == 1)
        goto LAB12;

LAB13:    t31 = (t0 + 5456);
    t34 = (t31 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t22, 8U);
    xsi_driver_first_trans_fast_port(t31);
    goto LAB8;

LAB10:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2472U);
    t4 = *((char **)t2);
    t10 = (7 - 7);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t2 = (t4 + t12);
    t5 = (t0 + 5456);
    t8 = (t5 + 56U);
    t14 = *((char **)t8);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB8;

LAB11:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 9190);
    t5 = (t0 + 5456);
    t8 = (t5 + 56U);
    t14 = *((char **)t8);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB8;

LAB12:    xsi_size_not_matching(8U, t29, 0);
    goto LAB13;

}

static void work_a_0178362298_1181938964_p_1(char *t0)
{
    char t9[16];
    char t11[16];
    char t16[16];
    char *t1;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    char *t17;
    int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(110, ng0);

LAB3:    t1 = (t0 + 9198);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = (7 - 5);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t3 = (t4 + t7);
    t10 = ((IEEE_P_2592010699) + 4000);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 1;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (1 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t13 = (t16 + 0U);
    t17 = (t13 + 0U);
    *((int *)t17) = 5;
    t17 = (t13 + 4U);
    *((int *)t17) = 0;
    t17 = (t13 + 8U);
    *((int *)t17) = -1;
    t18 = (0 - 5);
    t15 = (t18 * -1);
    t15 = (t15 + 1);
    t17 = (t13 + 12U);
    *((unsigned int *)t17) = t15;
    t8 = xsi_base_array_concat(t8, t9, t10, (char)97, t1, t11, (char)97, t3, t16, (char)101);
    t15 = (2U + 6U);
    t19 = (8U != t15);
    if (t19 == 1)
        goto LAB5;

LAB6:    t17 = (t0 + 5648);
    t20 = (t17 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t8, 8U);
    xsi_driver_first_trans_fast(t17);

LAB2:    t24 = (t0 + 5344);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t15, 0);
    goto LAB6;

}

static void work_a_0178362298_1181938964_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    static char *nl0[] = {&&LAB4, &&LAB4, &&LAB4, &&LAB3, &&LAB4, &&LAB4, &&LAB4, &&LAB4, &&LAB4};

LAB0:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = (6 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (char *)((nl0) + t7);
    goto **((char **)t8);

LAB2:    t1 = (t0 + 5360);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(117, ng0);
    t9 = (t0 + 9200);
    t11 = (t0 + 5712);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t9, 1U);
    xsi_driver_first_trans_fast(t11);
    goto LAB2;

LAB4:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 9201);
    t8 = (t0 + 5712);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 1U);
    xsi_driver_first_trans_fast(t8);
    goto LAB2;

}

static void work_a_0178362298_1181938964_p_3(char *t0)
{
    char t9[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = (1 - 5);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = (3 - 5);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB5;

LAB6:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = (5 - 5);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB7;

LAB8:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 5776);
    t10 = (t1 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 6U);
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 5376);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(128, ng0);
    t10 = (t0 + 2152U);
    t11 = *((char **)t10);
    t10 = (t0 + 9024U);
    t12 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t9, t11, t10, 1);
    t13 = (t0 + 5776);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t12, 6U);
    xsi_driver_first_trans_fast(t13);
    goto LAB3;

LAB5:    xsi_set_current_line(130, ng0);
    t10 = (t0 + 2152U);
    t11 = *((char **)t10);
    t10 = (t0 + 9024U);
    t12 = ieee_p_1242562249_sub_1006216973935724872_1035706684(IEEE_P_1242562249, t9, t11, t10, 1);
    t13 = (t0 + 5776);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t12, 6U);
    xsi_driver_first_trans_fast(t13);
    goto LAB3;

LAB7:    xsi_set_current_line(132, ng0);
    t10 = (t0 + 9202);
    t12 = (t0 + 5776);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 6U);
    xsi_driver_first_trans_fast(t12);
    goto LAB3;

}


extern void work_a_0178362298_1181938964_init()
{
	static char *pe[] = {(void *)work_a_0178362298_1181938964_p_0,(void *)work_a_0178362298_1181938964_p_1,(void *)work_a_0178362298_1181938964_p_2,(void *)work_a_0178362298_1181938964_p_3};
	xsi_register_didat("work_a_0178362298_1181938964", "isim/tb_top_level_isim_beh.exe.sim/work/a_0178362298_1181938964.didat");
	xsi_register_executes(pe);
}