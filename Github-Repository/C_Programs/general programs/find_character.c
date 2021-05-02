//find the character is alphabet or number

#include<stdio.h>

int main()
{
	char a;
	printf("enter the character\n");
	
	scanf("%c",&a);

	if((a>=48)&&(a<=57))
	{
		printf("%c is number\n",a);
	}
	else if((a>=65)&&(a<=90))
	{
		printf("%c is upper case alphabet\n",a);
	}
	else if((a>=97)&&(a<=122))
	{
		printf("%c is lower case alphabet\n",a);
	}
	else
		("invalid option\n");
	return 0;
}
