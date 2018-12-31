#include "stm32f10x.h"
#include "12864.h"
#include "delay.h"

	 int i=55;
	 float j=314.11234134;
 int main(void)
 {	

			SystemInit(); //72MHz
			delay_init();
			Lcd_Init();
	 		LCD12864_Write_SuperString(1,0,"LCD12864液晶模块");
			delay_us(10000);
			LCD12864_Write_SuperString(2,0,"ST7290串行口驱动");
			delay_us(10000);
			LCD12864_Write_Numberf(3,0,j);
      delay_us(10000);
			LCD12864_Write_Numberd(4,0,i);
	 		delay_us(10000);
//			LCD12864_Clear(); //清屏
//			delay_us(10000);
//			LCD12864_Write_Numberd(3,0,i);

			while(1)
			{
			  GPIO_ResetBits(GPIOA,GPIO_Pin_0);
			  delay_ms(1000);
			  GPIO_SetBits(GPIOA,GPIO_Pin_0);	
				delay_ms(1000);
			}
 
}
