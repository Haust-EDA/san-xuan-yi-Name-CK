#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "Key.h"

uint8_t counter=0;

void Init(void)
{
	OLED_Init();
	Key_Init();
}


void Show_Choice(uint8_t num)
{
	switch(num)
	{
		case 0:
			OLED_Clear();
			OLED_ShowChinese(0,0,"我靠");
			OLED_ShowString(16*2,0,"NB",OLED_8X16);
			OLED_Update();
			break;
		case 1:
			OLED_Clear();
			OLED_ShowChinese(0,0,"电协");
			OLED_ShowString(16*2,0,"NB",OLED_8X16);
			OLED_Update();
			break;
		case 2:
			OLED_Clear();
			OLED_ShowChinese(0,0,"老子最");
			OLED_ShowString(16*3,0,"NB",OLED_8X16);
			OLED_Update();
			break;
		case 3:
			OLED_Clear();
			OLED_ShowChinese(0,0,"耶耶耶");
			OLED_Update();
			break;
		default:
			break;
	}
}


int main(void)
{
	Init();
	
	while(1)
	{
		counter += Key_GetNum();
		if(counter==4)
			counter=0;
		Show_Choice(counter);
		
	}
}
