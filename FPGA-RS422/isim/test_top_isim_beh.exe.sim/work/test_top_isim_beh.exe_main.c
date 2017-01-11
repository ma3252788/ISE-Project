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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003923094531_4122565971_init();
    work_m_00000000003034481280_1056947305_init();
    work_m_00000000003835314054_3737457731_init();
    work_m_00000000004264284137_3722879994_init();
    work_m_00000000002053119380_0156449476_init();
    work_m_00000000002161199836_3823007873_init();
    work_m_00000000002709448563_3512928209_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002709448563_3512928209");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
