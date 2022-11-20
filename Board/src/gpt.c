#include "MIMXRT1052.h"
#include "fsl_gpt.h"
#include "gpt.h"

void gptTimer(void)
{
    gpt_config_t gptConfig;
    
    /* Set default config */
    GPT_GetDefaultConfig(&gptConfig);
    
    /* Initialize the GPT module. 
     * 1.Ungate the GPT Clock(CCM_CCGRn Register)
     * 2.Software Reset
     * 3.Config GPT CR Register(Run in STOP and WAIT Mode and do not run in Doze and Dubug Mode)
     * 4.Set Clock Source
     * 5.Set Clock Divider
     */
    GPT_Init(EXAMPLE_GPT, &gptConfig);
    
    /* Divide GPT clock source frequency by 3 inside GPT module */
    //GPT_SetClockDivider(EXAMPLE_GPT, 3);
    
    /* Get GPT clock frequency */
    //uint32_t gptFreq = EXAMPLE_GPT_CLK_FREQ / 3U;
    
    /* GPT  */
}
