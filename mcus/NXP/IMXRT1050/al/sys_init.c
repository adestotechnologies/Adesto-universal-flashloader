#include "clock_config.h"
#include "fsl_common.h"

void sys_gen_init(void)
{
	// Enable clock for IOMUX Controller
	CLOCK_EnableClock(kCLOCK_Iomuxc);          /* iomuxc clock (iomuxc_clk_enable): 0x03u */

	// Configure clock tree (configure muxes to set various clock sources and initialize PLLs) 
    BOARD_BootClockRUN();
}
