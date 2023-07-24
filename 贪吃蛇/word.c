#include "word.h"

unsigned char SchoolName[6][SCHOOLNAMEW*SCHOOLNAMEH/8] = {
/*--  文字:  湖  --*/
/*--  楷体26;  此字体下对应的点阵为：宽x高=36x35   --*/
/*--  宽度不是8的倍数，现调整为：宽度x高度=40x35  --*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xC0,0x00,0x00,0x00,
0x01,0xE0,0x00,0x00,0x00,0x01,0xE0,0x00,0x00,0x07,0x81,0xE0,0x00,0x00,0x03,0xE1,
0xC0,0x3E,0x00,0x03,0xE1,0xC7,0xFF,0x00,0x01,0xE1,0xC7,0xFF,0x00,0x00,0xC1,0xC7,
0x0F,0x00,0x00,0x03,0xFF,0x0E,0x00,0x00,0x03,0xFF,0x0E,0x00,0x3C,0x3F,0xF7,0x6E,
0x00,0x3E,0x3F,0x87,0xFE,0x00,0x1F,0x03,0x87,0xCE,0x00,0x0F,0x03,0x87,0x0E,0x00,
0x06,0x07,0x07,0x0E,0x00,0x01,0x87,0xF7,0x0E,0x00,0x01,0xFF,0xF7,0xFE,0x00,0x03,
0xFC,0xF7,0xEE,0x00,0x03,0xF0,0xE7,0x0E,0x00,0x07,0x71,0xEF,0x0E,0x00,0x07,0x39,
0xCE,0x0E,0x00,0x0F,0x3F,0xEE,0x0E,0x00,0x1E,0x3F,0x1E,0x0E,0x00,0x1E,0x38,0x1C,
0x0E,0x00,0x1E,0x38,0x3C,0x0E,0x00,0x1E,0x00,0x38,0x7E,0x00,0x0E,0x00,0x70,0x3E,
0x00,0x00,0x00,0xE0,0x1E,0x00,0x00,0x00,0xC0,0x1E,0x00,0x00,0x00,0x00,0x0C,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},

/*--  文字:  南  --*/
/*--  楷体26;  此字体下对应的点阵为：宽x高=36x35   --*/
/*--  宽度不是8的倍数，现调整为：宽度x高度=40x35  --*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x00,0x00,0x00,
0x00,0xF8,0x00,0x00,0x00,0x00,0xF0,0x00,0x00,0x00,0x00,0xF0,0x00,0x00,0x00,0x00,
0xE0,0x00,0x00,0x00,0x00,0xEF,0x00,0x00,0x00,0x01,0xFF,0x80,0x00,0x00,0x3F,0xFE,
0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x01,0xC0,0x20,0x00,0x00,0x01,0xC7,0xFC,
0x00,0x00,0x03,0xFF,0xFE,0x00,0x00,0x3F,0xF8,0x3E,0x00,0x0F,0xFE,0x78,0x3E,0x00,
0x0F,0x9E,0x78,0x1C,0x00,0x07,0x0E,0x70,0x1C,0x00,0x07,0x0E,0x7E,0x1C,0x00,0x07,
0x05,0xFE,0x1C,0x00,0x07,0x1F,0xF0,0x1C,0x00,0x07,0x1F,0xC0,0x1C,0x00,0x07,0x01,
0xDF,0x3C,0x00,0x07,0x01,0xFF,0x3C,0x00,0x07,0x3F,0xF8,0x3C,0x00,0x07,0x7F,0xC0,
0x3C,0x00,0x07,0x01,0xC0,0x3C,0x00,0x07,0x01,0xC0,0x3C,0x00,0x07,0x01,0xC3,0xFC,
0x00,0x07,0x01,0xC1,0xFC,0x00,0x03,0x01,0xC0,0xF8,0x00,0x00,0x01,0xC0,0x78,0x00,
0x00,0x00,0x00,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},

/*--  文字:  科  --*/
/*--  楷体26;  此字体下对应的点阵为：宽x高=36x35   --*/
/*--  宽度不是8的倍数，现调整为：宽度x高度=40x35  --*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x80,0x00,0x00,
0x04,0x01,0xE0,0x00,0x00,0x0F,0x01,0xF0,0x00,0x00,0x0F,0x80,0xE0,0x00,0x00,0x1F,
0x00,0xE0,0x00,0x00,0x7C,0x00,0xE0,0x00,0x00,0xF8,0x3E,0xE0,0x00,0x03,0xFC,0x1E,
0xE0,0x00,0x00,0x38,0x0E,0xE0,0x00,0x00,0x39,0x00,0xE0,0x00,0x00,0x3F,0x80,0xE0,
0x00,0x00,0xFF,0x7C,0xE0,0x00,0x3F,0xF8,0x3C,0xE0,0x00,0x7F,0xF8,0x1C,0xE0,0x00,
0x3C,0x78,0x00,0xEF,0xC0,0x00,0xFF,0x00,0xFF,0xE0,0x01,0xFF,0x3F,0xFE,0x00,0x01,
0xFB,0xFF,0xE0,0x00,0x03,0xB8,0xF0,0xE0,0x00,0x07,0x38,0x00,0xE0,0x00,0x0E,0x38,
0x00,0xE0,0x00,0x1C,0x38,0x00,0xE0,0x00,0x38,0x38,0x00,0xE0,0x00,0x60,0x38,0x00,
0xE0,0x00,0x00,0x38,0x00,0xE0,0x00,0x00,0x38,0x00,0xE0,0x00,0x00,0x38,0x00,0xE0,
0x00,0x00,0x38,0x00,0xE0,0x00,0x00,0x38,0x00,0xE0,0x00,0x00,0x00,0x00,0xE0,0x00,
0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00},

/*--  文字:  技  --*/
/*--  楷体26;  此字体下对应的点阵为：宽x高=36x35   --*/
/*--  宽度不是8的倍数，现调整为：宽度x高度=40x35  --*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x0C,0x00,0x00,0x00,
0x78,0x0F,0x00,0x00,0x00,0x7C,0x0F,0x80,0x00,0x00,0x78,0x07,0x80,0x00,0x00,0x78,
0x07,0x00,0x00,0x00,0x78,0x07,0x00,0x00,0x00,0x78,0x07,0x38,0x00,0x00,0x78,0x07,
0xF8,0x00,0x00,0x78,0x3F,0xF8,0x00,0x00,0x7F,0xFF,0xC0,0x00,0x0F,0xFE,0x7F,0x00,
0x00,0x0F,0xF8,0x0E,0x00,0x00,0x00,0x78,0x0E,0x00,0x00,0x00,0x78,0x0F,0xC0,0x00,
0x00,0x7E,0x0F,0xE0,0x00,0x00,0x7D,0xFF,0xF0,0x00,0x00,0x79,0xF9,0xE0,0x00,0x01,
0xF8,0x01,0xE0,0x00,0x07,0xF8,0xF1,0xC0,0x00,0x1F,0xF8,0x79,0xC0,0x00,0x3F,0x78,
0x3F,0xC0,0x00,0x3E,0x78,0x1F,0x80,0x00,0x1C,0x78,0x0F,0x80,0x00,0x00,0x78,0x0F,
0xC0,0x00,0x00,0x78,0x3F,0xE0,0x00,0x03,0xF8,0xFD,0xFC,0x00,0x01,0xFF,0xF0,0xFF,
0x00,0x00,0xF3,0x80,0x7F,0xC0,0x00,0x70,0x00,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},

/*--  文字:  学  --*/
/*--  楷体26;  此字体下对应的点阵为：宽x高=36x35   --*/
/*--  宽度不是8的倍数，现调整为：宽度x高度=40x35  --*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x00,0x00,0x00,0x03,0xC0,0x00,0x00,
0x01,0xC3,0xC0,0x00,0x00,0x79,0xE7,0x80,0x00,0x00,0x3D,0xE7,0x80,0x00,0x00,0x3C,
0xE7,0x00,0x00,0x00,0x1C,0xEE,0x00,0x00,0x00,0x1C,0x4E,0x18,0x00,0x00,0x00,0x1F,
0xFE,0x00,0x03,0x07,0xFF,0xFF,0x00,0x07,0xFF,0xE0,0x3F,0x80,0x07,0xF0,0x00,0x3F,
0x00,0x07,0x00,0x78,0x78,0x00,0x0F,0x0F,0xFC,0x60,0x00,0x0E,0x7F,0xBE,0x00,0x00,
0x0E,0x38,0x7C,0x00,0x00,0x0C,0x00,0x70,0x00,0x00,0x00,0x01,0xE0,0x00,0x00,0x00,
0x01,0xFF,0xFC,0x00,0x00,0x07,0xFF,0xFE,0x00,0x1F,0xFF,0xFC,0x3E,0x00,0x1F,0xFC,
0xF0,0x00,0x00,0x07,0x00,0x70,0x00,0x00,0x00,0x00,0x70,0x00,0x00,0x00,0x00,0x70,
0x00,0x00,0x00,0x00,0x70,0x00,0x00,0x00,0x00,0xF0,0x00,0x00,0x00,0x00,0xF0,0x00,
0x00,0x00,0x0E,0xF0,0x00,0x00,0x00,0x0F,0xF0,0x00,0x00,0x00,0x03,0xE0,0x00,0x00,
0x00,0x03,0xC0,0x00,0x00,0x00,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00},

/*--  文字:  院  --*/
/*--  楷体26;  此字体下对应的点阵为：宽x高=36x35   --*/
/*--  宽度不是8的倍数，现调整为：宽度x高度=40x35  --*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x7C,0x3E,0x00,0x00,0x0F,0xFC,
0x1E,0x00,0x00,0x0F,0xF8,0x06,0x70,0x00,0x07,0x71,0x03,0xFC,0x00,0x07,0x73,0xFF,
0xFE,0x00,0x07,0x73,0xF8,0x7E,0x00,0x07,0x73,0x80,0x70,0x00,0x07,0x77,0x80,0x00,
0x00,0x07,0x77,0x07,0x00,0x00,0x07,0x3B,0x3F,0x80,0x00,0x07,0xF9,0xFE,0x00,0x00,
0x07,0x78,0x00,0x00,0x00,0x07,0x38,0x07,0xE0,0x00,0x07,0x18,0x7F,0xE0,0x00,0x07,
0x07,0xFE,0x00,0x00,0x07,0x07,0xFF,0x00,0x00,0x07,0x00,0x7E,0x00,0x00,0x07,0x00,
0xFE,0x00,0x00,0x0F,0x01,0xEE,0x03,0x00,0x0F,0x01,0xCE,0x03,0x00,0x0F,0x03,0x8E,
0x03,0x00,0x0E,0x07,0x0E,0x03,0x00,0x0E,0x0E,0x0E,0x07,0x80,0x0E,0x1C,0x0F,0xFF,
0x80,0x0E,0x10,0x07,0xFF,0x00,0x00,0x00,0x01,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}
};

/*
   Lcd_DrawWord:在位置为(x0,y0)处显示宽为w,高为h,颜色为color的汉字	
*/
void Lcd_DrawWord(int x0,int y0,int w,int h,char *data,int color)
{
	int i,k;
	
	for(i = 0;i < w*h/8;i++)
	{
		for(k = 0;k < 8;k++)
		{
			if((data[i] << k) & 0x80)
			{
				Lcd_DrawPoint(x0+(i*8+k)%w,y0+i/(w/8),color);
			}
		}			
	}
}

/*
    Lcd_DisplaySchoolName:在屏幕上显示学校名
*/
void Lcd_DisplaySchoolName(void)
{
    Lcd_DrawWord(200,100,SCHOOLNAMEW,SCHOOLNAMEH,SchoolName[0],0XFFFF00);
    Lcd_DrawWord(250,100,SCHOOLNAMEW,SCHOOLNAMEH,SchoolName[1],0XFFFF00);
    Lcd_DrawWord(300,100,SCHOOLNAMEW,SCHOOLNAMEH,SchoolName[2],0XFFFF00);
    Lcd_DrawWord(350,100,SCHOOLNAMEW,SCHOOLNAMEH,SchoolName[3],0XFFFF00);
    Lcd_DrawWord(400,100,SCHOOLNAMEW,SCHOOLNAMEH,SchoolName[4],0XFFFF00);
    Lcd_DrawWord(450,100,SCHOOLNAMEW,SCHOOLNAMEH,SchoolName[5],0XFFFF00);
}

