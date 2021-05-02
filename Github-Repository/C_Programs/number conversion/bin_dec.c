#include<stdio.h>
#include<string.h>
long bin_dec(char binaryString[]);
int main()
{
	char binStr[50];
	long decNo;
	printf("enter the binary no\n");
	gets(binStr);
	decNo=bin_dec(binStr);
	if(decNo == -1)
	{
		printf("invalid no");
	}
	else
	{
		printf("decimal no is %ld",decNo);
	}
	return 0;

}
long bin_dec(char binaryString[])
{
	long dec = 0;
	int i=0,n;
	while(binaryString[i]!='\0')
	{
		n=binaryString[i]-48;
		if(n!=0 && n!=1)
			return -1;
		dec=(dec*2)+n;
		i++;
	}
	return (dec);
}

