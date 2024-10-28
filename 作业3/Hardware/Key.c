/**
 *使用GPIOB的Pin12,13口作为输入（上拉）
 *Key1->GPIO_Pin_12 : 左键
 *Key2->GPIO_Pin_13 : 右键
 **/

#include "stm32f10x.h"                  // Device header
#include "Delay.h"

//管脚定义
#define Key GPIO_Pin_12



void Key_Init(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_IPU;
	GPIO_InitStructure.GPIO_Pin=Key;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOB,&GPIO_InitStructure);
}


/**
 *@brief 取键值
 *@retval 1 -> 按下
 **/
uint8_t Key_GetNum(void)
{
	uint8_t Key_Num=0;
	if(GPIO_ReadInputDataBit(GPIOB,Key) == 0)
	{
		Delay_ms(20);
		while(GPIO_ReadInputDataBit(GPIOB,Key) == 0);	
		Delay_ms(20);
		Key_Num=1;
	}
	return Key_Num;
}
