#include<stdio.h>
#include<string.h>
long int num_exp(int num,int exp);
void str_rev(char *bnstr,int len);
void swap(char *a,char *b);
int main()
{
	char bnstr[50];
	int j=1,k,n,i=0,len;
	long int sum=0,dec;
	printf("enter the binary no \n");

	scanf("%s",bnstr);
	printf("entered string is %s \n",bnstr);
	len=strlen(bnstr);
	
	str_rev(bnstr, len);
	//printf("Reverse string is %s \n",bnstr);

	while(bnstr[i]!='\0')
	{
		dec=num_exp(2,i);
		sum=sum+((dec)*(bnstr[i]-48));		
		//printf("decimal no is %d = %d * %d \n",sum,dec, bnstr[i]);
		i++;
	}
	printf("decimal no is %d \n",sum);
}

long int num_exp(int num,int exp)
{
	
	long int res=1;
	//printf("enter the no and exponent \n");

	while(exp>0)
	{
		res=res*num;
		exp--;

	}
	//printf("num_exp the result is %ld \n",res);
	return res;
}
	
void str_rev(char *bnstr,int len)
{
	int i,j;

	for(i=0 ; i<len/2 ; i++)
	{
		swap(&bnstr[i],&bnstr[len-i-1]);

	}
	
}
void swap(char *a,char *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;	

}
