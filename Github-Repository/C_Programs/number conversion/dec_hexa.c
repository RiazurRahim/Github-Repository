#include<stdio.h>
int dec_hexa(int);
int main()
{
	int dec;
	
	printf("enter the decimal no to convert \n");
	scanf("%d",&dec);
	dec_hexa(dec);
}
int dec_hexa(int n)
{
	int i,j,temp;
	char hx[100];
	while(n!=0)
	{
		temp = n%16;
		if(temp<10)
		{
			temp=temp+48;
		}
		else
		{
			temp=temp+55;
		}
		hx[i++]=temp;
		n = n/16;

	}
	for(j=i-1;j>=0;j--)
	{
		printf("%c",hx[j]);
	}
	return 0;
}

