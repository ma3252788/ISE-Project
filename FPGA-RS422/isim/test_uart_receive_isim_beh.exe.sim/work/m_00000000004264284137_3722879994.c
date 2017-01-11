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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/workspace/RS_422/uart_send.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {8U, 0U};
static unsigned int ng7[] = {16U, 0U};
static int ng8[] = {1, 0};
static unsigned int ng9[] = {9U, 0U};
static int ng10[] = {6, 0};
static int ng11[] = {7, 0};
static unsigned int ng12[] = {10U, 0U};



static void Always_40_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 5288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 6104);
    *((int *)t2) = 1;
    t3 = (t0 + 5320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t5 = (t0 + 2048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(48, ng0);

LAB14:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2368U);
    t3 = *((char **)t2);
    t2 = (t0 + 4048);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 4048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4208);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(43, ng0);

LAB13:    xsi_set_current_line(44, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 4048);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

}

static void Always_54_1(char *t0)
{
    char t4[8];
    char t22[8];
    char t31[8];
    char t39[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    int t21;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;

LAB0:    t1 = (t0 + 5536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 6120);
    *((int *)t2) = 1;
    t3 = (t0 + 5568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(56, ng0);
    t5 = (t0 + 2048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(66, ng0);

LAB14:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 4368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB15:    t6 = ((char*)((ng1)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 5, t6, 5);
    if (t21 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng4)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t21 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng5)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t21 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng6)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t21 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng7)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t21 == 1)
        goto LAB24;

LAB25:
LAB27:
LAB26:    xsi_set_current_line(120, ng0);

LAB71:    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB28:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(57, ng0);

LAB13:    xsi_set_current_line(58, ng0);
    t19 = ((char*)((ng2)));
    t20 = (t0 + 3248);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(69, ng0);

LAB29:    xsi_set_current_line(70, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 3248);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB28;

LAB18:    xsi_set_current_line(78, ng0);

LAB30:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 4048);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    memset(t4, 0, 8);
    t13 = (t12 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (~(t7));
    t9 = *((unsigned int *)t12);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB34;

LAB32:    if (*((unsigned int *)t13) == 0)
        goto LAB31;

LAB33:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;

LAB34:    memset(t22, 0, 8);
    t20 = (t4 + 4);
    t14 = *((unsigned int *)t20);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t20) != 0)
        goto LAB37;

LAB38:    t24 = (t22 + 4);
    t25 = *((unsigned int *)t22);
    t26 = *((unsigned int *)t24);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB39;

LAB40:    memcpy(t39, t22, 8);

LAB41:    t71 = (t39 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(86, ng0);

LAB53:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB51:    goto LAB28;

LAB20:    xsi_set_current_line(91, ng0);

LAB54:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 3408);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t12 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (~(t7));
    t9 = *((unsigned int *)t12);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(99, ng0);

LAB59:    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB57:    goto LAB28;

LAB22:    xsi_set_current_line(104, ng0);

LAB60:    xsi_set_current_line(105, ng0);
    t3 = (t0 + 3888);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    memset(t4, 0, 8);
    t13 = (t12 + 4);
    t7 = *((unsigned int *)t12);
    t8 = *((unsigned int *)t13);
    t9 = (t7 | t8);
    if (t9 != 31U)
        goto LAB62;

LAB61:    if (*((unsigned int *)t13) == 0)
        goto LAB63;

LAB64:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;

LAB62:    t20 = (t4 + 4);
    t10 = *((unsigned int *)t20);
    t11 = (~(t10));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t11);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(110, ng0);

LAB69:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3888);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t6, 5, t12, 32);
    t13 = (t0 + 3888);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB67:    goto LAB28;

LAB24:    xsi_set_current_line(116, ng0);

LAB70:    xsi_set_current_line(117, ng0);
    t3 = ((char*)((ng1)));
    t6 = (t0 + 4368);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 5, 0LL);
    goto LAB28;

LAB31:    *((unsigned int *)t4) = 1;
    goto LAB34;

LAB35:    *((unsigned int *)t22) = 1;
    goto LAB38;

LAB37:    t23 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB38;

LAB39:    t28 = (t0 + 4208);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t31, 0, 8);
    t32 = (t30 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t30);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t32) != 0)
        goto LAB44;

LAB45:    t40 = *((unsigned int *)t22);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t43 = (t22 + 4);
    t44 = (t31 + 4);
    t45 = (t39 + 4);
    t46 = *((unsigned int *)t43);
    t47 = *((unsigned int *)t44);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB46;

LAB47:
LAB48:    goto LAB41;

LAB42:    *((unsigned int *)t31) = 1;
    goto LAB45;

LAB44:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB45;

LAB46:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t39) = (t51 | t52);
    t53 = (t22 + 4);
    t54 = (t31 + 4);
    t55 = *((unsigned int *)t22);
    t56 = (~(t55));
    t57 = *((unsigned int *)t53);
    t58 = (~(t57));
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t54);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t67 & t65);
    t68 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB48;

LAB49:    xsi_set_current_line(80, ng0);

LAB52:    xsi_set_current_line(81, ng0);
    t77 = (t0 + 2208U);
    t78 = *((char **)t77);
    t77 = (t0 + 3728);
    xsi_vlogvar_wait_assign_value(t77, t78, 0, 0, 8, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB51;

LAB55:    xsi_set_current_line(93, ng0);

LAB58:    xsi_set_current_line(94, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2928);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB57;

LAB63:    *((unsigned int *)t4) = 1;
    goto LAB62;

LAB65:    xsi_set_current_line(106, ng0);

LAB68:    xsi_set_current_line(107, ng0);
    t23 = ((char*)((ng7)));
    t24 = (t0 + 4368);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 5, 0LL);
    goto LAB67;

}

static void Always_127_2(char *t0)
{
    char t4[8];
    char t41[8];
    char t42[8];
    char t44[8];
    char t47[8];
    char t76[8];
    char t89[8];
    char t90[8];
    char t91[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t43;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    unsigned int t98;
    int t99;
    char *t100;
    unsigned int t101;
    int t102;
    int t103;
    char *t104;
    unsigned int t105;
    int t106;
    int t107;
    unsigned int t108;
    int t109;
    unsigned int t110;
    unsigned int t111;
    int t112;
    int t113;

LAB0:    t1 = (t0 + 5784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 6136);
    *((int *)t2) = 1;
    t3 = (t0 + 5816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(128, ng0);

LAB5:    xsi_set_current_line(129, ng0);
    t5 = (t0 + 2048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(136, ng0);

LAB14:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 3248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(176, ng0);

LAB76:    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);

LAB17:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(130, ng0);

LAB13:    xsi_set_current_line(131, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2768);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB12;

LAB15:    xsi_set_current_line(138, ng0);

LAB18:    xsi_set_current_line(139, ng0);
    t12 = (t0 + 3088);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t21 = (t19 + 4);
    t22 = (t20 + 4);
    t14 = *((unsigned int *)t19);
    t15 = *((unsigned int *)t20);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t21);
    t18 = *((unsigned int *)t22);
    t23 = (t17 ^ t18);
    t24 = (t16 | t23);
    t25 = *((unsigned int *)t21);
    t26 = *((unsigned int *)t22);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB22;

LAB19:    if (t27 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t4) = 1;

LAB22:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t4);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 3088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t13);
    t18 = (t16 | t17);
    t23 = (~(t18));
    t24 = (t15 & t23);
    if (t24 != 0)
        goto LAB30;

LAB27:    if (t18 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t4) = 1;

LAB30:    t20 = (t4 + 4);
    t25 = *((unsigned int *)t20);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 3088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB36;

LAB35:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB36;

LAB39:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB38;

LAB37:    *((unsigned int *)t4) = 1;

LAB38:    memset(t41, 0, 8);
    t20 = (t4 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t20) != 0)
        goto LAB42;

LAB43:    t22 = (t41 + 4);
    t14 = *((unsigned int *)t41);
    t15 = *((unsigned int *)t22);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB44;

LAB45:    memcpy(t47, t41, 8);

LAB46:    t70 = (t47 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t47);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 3088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng12)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t13);
    t18 = (t16 | t17);
    t23 = (~(t18));
    t24 = (t15 & t23);
    if (t24 != 0)
        goto LAB70;

LAB67:    if (t18 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t4) = 1;

LAB70:    t20 = (t4 + 4);
    t25 = *((unsigned int *)t20);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(171, ng0);

LAB75:    xsi_set_current_line(172, ng0);
    t2 = (t0 + 3088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 4, t6, 32);
    t12 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 4, 0LL);

LAB73:
LAB61:
LAB33:
LAB25:    goto LAB17;

LAB21:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(140, ng0);

LAB26:    xsi_set_current_line(141, ng0);
    t37 = (t0 + 3728);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t40, t39, 0, 0, 8, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 3088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 4, t6, 32);
    t12 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB25;

LAB29:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(146, ng0);

LAB34:    xsi_set_current_line(147, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 2768);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 1, 0LL);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 3088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 4, t6, 32);
    t12 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 4, 0LL);
    goto LAB33;

LAB36:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB38;

LAB40:    *((unsigned int *)t41) = 1;
    goto LAB43;

LAB42:    t21 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB43;

LAB44:    t30 = (t0 + 3088);
    t31 = (t30 + 56U);
    t37 = *((char **)t31);
    t38 = ((char*)((ng9)));
    memset(t42, 0, 8);
    t39 = (t37 + 4);
    if (*((unsigned int *)t39) != 0)
        goto LAB48;

LAB47:    t40 = (t38 + 4);
    if (*((unsigned int *)t40) != 0)
        goto LAB48;

LAB51:    if (*((unsigned int *)t37) > *((unsigned int *)t38))
        goto LAB50;

LAB49:    *((unsigned int *)t42) = 1;

LAB50:    memset(t44, 0, 8);
    t45 = (t42 + 4);
    t17 = *((unsigned int *)t45);
    t18 = (~(t17));
    t23 = *((unsigned int *)t42);
    t24 = (t23 & t18);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t45) != 0)
        goto LAB54;

LAB55:    t26 = *((unsigned int *)t41);
    t27 = *((unsigned int *)t44);
    t28 = (t26 & t27);
    *((unsigned int *)t47) = t28;
    t48 = (t41 + 4);
    t49 = (t44 + 4);
    t50 = (t47 + 4);
    t29 = *((unsigned int *)t48);
    t32 = *((unsigned int *)t49);
    t33 = (t29 | t32);
    *((unsigned int *)t50) = t33;
    t34 = *((unsigned int *)t50);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB56;

LAB57:
LAB58:    goto LAB46;

LAB48:    t43 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB50;

LAB52:    *((unsigned int *)t44) = 1;
    goto LAB55;

LAB54:    t46 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB55;

LAB56:    t36 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t50);
    *((unsigned int *)t47) = (t36 | t51);
    t52 = (t41 + 4);
    t53 = (t44 + 4);
    t54 = *((unsigned int *)t41);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t44);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t66 & t64);
    t67 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t67 & t65);
    t68 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t68 & t64);
    t69 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t69 & t65);
    goto LAB58;

LAB59:    xsi_set_current_line(151, ng0);

LAB62:    xsi_set_current_line(159, ng0);
    t77 = (t0 + 3568);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    memset(t76, 0, 8);
    t80 = (t76 + 4);
    t81 = (t79 + 4);
    t82 = *((unsigned int *)t79);
    t83 = (t82 >> 1);
    *((unsigned int *)t76) = t83;
    t84 = *((unsigned int *)t81);
    t85 = (t84 >> 1);
    *((unsigned int *)t80) = t85;
    t86 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t86 & 127U);
    t87 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t87 & 127U);
    t88 = (t0 + 3568);
    t92 = (t0 + 3568);
    t93 = (t92 + 72U);
    t94 = *((char **)t93);
    t95 = ((char*)((ng10)));
    t96 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t89, t90, t91, ((int*)(t94)), 2, t95, 32, 1, t96, 32, 1);
    t97 = (t89 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (!(t98));
    t100 = (t90 + 4);
    t101 = *((unsigned int *)t100);
    t102 = (!(t101));
    t103 = (t99 && t102);
    t104 = (t91 + 4);
    t105 = *((unsigned int *)t104);
    t106 = (!(t105));
    t107 = (t103 && t106);
    if (t107 == 1)
        goto LAB63;

LAB64:    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3568);
    t5 = (t0 + 3568);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t4, t12, 2, t13, 32, 1);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t19);
    t62 = (!(t7));
    if (t62 == 1)
        goto LAB65;

LAB66:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 3568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 0);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    t13 = (t0 + 2768);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(162, ng0);
    t2 = (t0 + 3088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 4, t6, 32);
    t12 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 4, 0LL);
    goto LAB61;

LAB63:    t108 = *((unsigned int *)t91);
    t109 = (t108 + 0);
    t110 = *((unsigned int *)t89);
    t111 = *((unsigned int *)t90);
    t112 = (t110 - t111);
    t113 = (t112 + 1);
    xsi_vlogvar_wait_assign_value(t88, t76, t109, *((unsigned int *)t90), t113, 0LL);
    goto LAB64;

LAB65:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB66;

LAB69:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB70;

LAB71:    xsi_set_current_line(165, ng0);

LAB74:    xsi_set_current_line(166, ng0);
    t21 = ((char*)((ng1)));
    t22 = (t0 + 2768);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 1, 0LL);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(168, ng0);
    t2 = (t0 + 3088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 4, t6, 32);
    t12 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 4, 0LL);
    goto LAB73;

}


extern void work_m_00000000004264284137_3722879994_init()
{
	static char *pe[] = {(void *)Always_40_0,(void *)Always_54_1,(void *)Always_127_2};
	xsi_register_didat("work_m_00000000004264284137_3722879994", "isim/test_uart_receive_isim_beh.exe.sim/work/m_00000000004264284137_3722879994.didat");
	xsi_register_executes(pe);
}
