#include<reg51.h>
sbit Q1=P1^4;					//controlling seven segment display
sbit Q2=P1^5;
void delay(unsigned int);
void main()
{
										
	unsigned char seg[16]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F,0x77,0x7C,0x39,0x5E,0x79,0x71}; 		//lookup table
	
	while(1)
	{
		unsigned int i,j,k;
		for(i=0;i<=16;i++)
		{
			for(j=0;j<=16;j++)
			{
				for(k=0;k<1000;k++)
				{
					Q1=1;					//first segment ON 
					Q2=0;					//second segment OFF
					P3=seg[j];				//number display on first segment
					delay(1);
					Q1=0;					//second segment OFF
					Q2=1;					//first segment ON 
					P3=seg[i];				//number display on first segment
					delay(1);
				}
			}
		}
	}
}
void delay(unsigned int k)
{
	unsigned int x,y;
	for(x=0;x<k;x++)
	{
		for(y=0;y<50;y++);
	}
}