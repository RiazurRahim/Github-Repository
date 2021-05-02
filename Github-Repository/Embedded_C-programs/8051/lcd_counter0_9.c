#include <reg51.h>
sbit RS = P0^0;
sbit RW = P0^1;
sbit EN = P0^2;
sbit BUSY = P1^7;
sfr LCD_DATA = 0x90;

sbit SW1 = P2^0;
sbit SW2 = P2^1;
sbit BUZZER = P2^6;
 
void delay_1ms(unsigned int);
void LCD_COMMAND_WRITE(unsigned char);
void LCD_DATA_WRITE(unsigned int);
void LCD_BUSY();
void LCD_INIT();

unsigned char str[] = {"0123456789"};

void LCD_COMMAND_WRITE(unsigned char Command)
{
	LCD_BUSY();
	RS = 0;
	RW = 0;
	LCD_DATA = Command;
	EN = 1;
	delay_1ms(100);
	EN = 0;
}
void LCD_DATA_WRITE(unsigned int ch)
{
	LCD_BUSY();
	RS = 1;
	RW = 0;
	LCD_DATA = ch;
	EN = 1;
	delay_1ms(100);
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
		delay_1ms(100);
		EN = 1;
	}
}
void LCD_INIT()
{
	unsigned char Command[] = {0x38,0x0E,0x01,0x80};
	unsigned char i;
	for(i=0;i<5;i++)
	{
		LCD_COMMAND_WRITE(Command[i]);

	}
}
void delay_1ms(unsigned int k)
{
	unsigned int i,j;
	for ( i = 0; i < k; i++ )
	{
		for ( j = 0; j < 1000; j++ );
	}
}

void main()
{
	unsigned int i,k;
	
	
	BUZZER = 0;
	i = 0;
	
	while(1)
	{
		
		
		SW1 = 1;
		if( SW1 == 0 )
		{
			if( i >= 9)
			{
				BUZZER = 1;
				delay_1ms(100);
				BUZZER = 0;
			}
			else
			{
				
				LCD_COMMAND_WRITE(0x80);
				for(k=i;k<=9;k++)
				{
				
				LCD_DATA_WRITE(str[k]);
				delay_1ms(100);
				
				}
				
			}
			while(1);
			
		}
		SW2 = 1;
		if( SW2 == 0 )
		{
			if( i <= 0 )
			{
				BUZZER = 1;
				delay_1ms(100);
				BUZZER = 0;
			}
			else
			{
				
				LCD_COMMAND_WRITE(0x80);
				for(k=i;k<=9;k++)
				{
				
					LCD_DATA_WRITE(str[k]);
					delay_1ms(100);
				}				
				
			}
			while(1);
			
		}
	}
}

