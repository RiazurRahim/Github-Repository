#include<reg51.h>
sbit RS = P0^5;
sbit RW = P0^6;
sbit EN = P0^7;
sbit BUSY = P1^7;
sfr LCD_DATA = 0x90;

sbit SW = P2^4;

void LCD_COMMAND_WRITE(unsigned char);
void LCD_DATA_WRITE(unsigned int);
void LCD_BUSY();
void LCD_INIT();
void DELAY_10_MILLI(unsigned char);

unsigned char str[] = {"0123456789"};

void LCD_COMMAND_WRITE(unsigned char Command)
{
	LCD_BUSY();
	RS = 0;
	RW = 0;
	LCD_DATA = Command;
	EN = 1;
	DELAY_10_MILLI(100);
	EN = 0;
}
void LCD_DATA_WRITE(unsigned int ch)
{
	LCD_BUSY();
	RS = 1;
	RW = 0;
	LCD_DATA = ch;
	EN = 1;
	DELAY_10_MILLI(100);
	EN = 0;
}
void LCD_BUSY()
{
	RS = 0;
	RW = 1;
	BUSY = 1;
	while(BUSY == 1)
	{
		EN = 0;
		DELAY_10_MILLI(100);
		EN = 1;
	}
}
void LCD_INIT()
{
	unsigned char Command[] = {0x38,0x01,0x0E,0x06,0x80};//{0x38,0x0E,0x06,0x01,0x80};
	unsigned char i;
	for(i=0;i<4;i++)
	{
		LCD_COMMAND_WRITE(Command[i]);

	}
}
void main()
{
	unsigned int a;
	
	LCD_INIT();
	
		for(a=0;str[a]!='\0';a++)
		{
			LCD_DATA_WRITE(str[a]);
			//DELAY_10_MILLI(10);
						
		}
		LCD_COMMAND_WRITE(0x10);
		
		while(1)
		{
			if(SW==0)
			{
				DELAY_10_MILLI(5);
				while(SW==0);
				{
					LCD_COMMAND_WRITE(0X04);
					LCD_DATA_WRITE(0x1C);
				}
			}
		
	}
}
void DELAY_10_MILLI(unsigned char f)
{
		unsigned int i,j;
	
		for(i=0;i<f;i++)
		{
			for(j=0;j<60;j++);
		
		}
	
}