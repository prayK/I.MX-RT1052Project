#ifndef __GPT_H_
#define __GPT_H_

#define EXAMPLE_GPT GPT1

/* Get source clock for GPT driver (GPT prescaler = 0) */
#define EXAMPLE_GPT_CLK_FREQ CLOCK_GetFreq(kCLOCK_PerClk)

void gptTimer(void);

#endif
