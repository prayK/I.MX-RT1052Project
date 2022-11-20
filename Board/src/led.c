#include "MIMXRT1052.h"
#include "led.h"

void ledGpioInit(void)
{
    /* Enable GPIO1 port clock */
    CCM->CCGR1 &= ~(3U << 26U);
    CCM->CCGR1 |= (1U << 26U);
    
    /* Configure MUX register */
    IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_09] = 0x05U;
    IOMUXC->SW_PAD_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_09] = 0X070B0U;
    
    /* Set GPIO direction */
    GPIO1->GDIR |= (0X01U << 9U);

    /* Set GPIO Voltage  */
    GPIO1->DR &= ~(0X01U << 9U);
}
