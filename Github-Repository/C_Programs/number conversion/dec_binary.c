//convert decimal to binary

#include<stdio.h>
void dec_bin(int);
int main()
{
	int dec;
	
	printf("enter the decimal no to convert to binary \n");
	scanf("%d",&dec);
	dec_bin(dec);
}
void dec_bin(int n)
{
	int i,j,bin[10];
	while(n>0)
	{
		bin[i] = n%2;
		n = n/2;
		i++;
	}
	printf("binary no is \n");
	for(j=i-1;j>=0;j--)
	{
		printf("%d ",bin[j]);
	}

}

