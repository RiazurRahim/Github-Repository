#include<stdio.h>
int dec_octa(int);
int main()
{
	int dec;
	
	printf("enter the decimal no to convert\n");
	scanf("%d",&dec);
	dec_octa(dec);
}
int dec_octa(int n)
{
	int i,j,oct[10];
	while(n>0)
	{
		oct[i] = n%8;
		n = n/8;
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d",oct[j]);
	}

}

