/*
 * user_oled.h
 *
 *  Created on: 2019��8��8��
 *      Author: Administrator
 */

#ifndef APP_INCLUDE_USER_OLED_H_
#define APP_INCLUDE_USER_OLED_H_

#include "c_types.h"
#define OLED_CMD  0	//
#define OLED_DATA 1	//
#define OLED_MODE 0
#define SIZE 16
#define XLevelL		0x02
#define XLevelH		0x10
#define Max_Column	128
#define Max_Row		64
#define	Brightness	0xFF
#define X_WIDTH 	128
#define Y_WIDTH 	64

void i2c_init(void);
void oled_wirte(u8 addr,u8 data);
u8 oled_read(u8 addr);
bool Write_IIC_Command(u8 IIC_Command);
bool Write_IIC_Data(unsigned char IIC_Data);
void OLED_WR_Byte(u8 dat,u8 cmd);
void OLED_Set_Pos(unsigned char x, unsigned char y);
void OLED_Display_On(void);
void OLED_Display_Off(void);
void OLED_Clear(void);
void OLED_On(void);
void OLED_ShowChar(u8 x,u8 y,u8 chr,u8 Char_Size);
u32 oled_pow(u8 m,u8 n);
void OLED_ShowNum(u8 x,u8 y,u32 num,u8 len,u8 size2);
void OLED_ShowString(u8 x,u8 y,u8 *chr,u8 Char_Size);
void OLED_ShowCHinese(u8 x,u8 y,u8 no);
void OLED_ShowQmtzdst(u8 x,u8 y,u8 no);
void OLED_DrawBMP(unsigned char x0, unsigned char y0,unsigned char x1, unsigned char y1,unsigned char BMP[]);
void OLED_Init(void);

#endif /* APP_INCLUDE_USER_OLED_H_ */
