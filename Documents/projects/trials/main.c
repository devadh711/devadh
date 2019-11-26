
#include<stdio.h>
	#include"lpc17xx.h"
	void delay()
	{
		int j;
		for(int i=0;i<=3000;i++)
		 j++;
	}
	
	
	int main()
	{
			int start,stop,duration;
			LPC_GPIO0->FIODIR = 0xF;
			SysTick->CTRL=0x00;
			SysTick->LOAD=0xffffffff;
			SysTick->VAL=0;
			SysTick->CTRL=0X05;
	
			while(1)
			{
				start = SysTick->VAL;
				
			LPC_GPIO0->FIOSET=0xF;
				delay();
			LPC_GPIO0->FIOCLR=0xF;
			delay();
				
			stop = SysTick->VAL;
			if(SysTick->LOAD < 0x0000000f)
			SysTick->LOAD=0xffffffff;
		
		duration = stop-start;
		
			printf("duration is %d \n",duration);
		}
		
		return 0;
	}
