#include<stdio.h>
#include<string.h>
long bin2dec(char binaryString[]);
int main()
{
	int i,n;
	char bnstr[50];
	long decNum;
	printf("enter the binary string \n");
	scanf("%s",bnstr);
	decNum = bin2dec(bnstr);
	if(decNum == -1)
		printf("invalid string \n");
	else
		printf("decimal number : %ld",decNum);
	return 0;
}
long bin2dec(char binaryString[])
{
	long dnum=0; 
	int i=0;
	int n;
	while(binaryString[i]!='\0')
	{
		n=binaryString[i]-48;
		if(n!=0 && n!=1)
			return -1;
		dnum=(dnum*2)+n;
		i++;
	}
	return(dnum);

}
