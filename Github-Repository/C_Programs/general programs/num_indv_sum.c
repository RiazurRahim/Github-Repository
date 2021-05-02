//individual sum of number

#include<stdio.h>
int main()
{
	int num,sum=0,i,n;
	int rem,mul=1,count=0;
	float avg;
	printf("enter the no \n");
	scanf("%d",&n);
	for(num=n ; num>0 ; num)
	{
		rem=num%10;
		sum=sum+rem;
		printf("\n indvid no is %d \n",rem);
		num=num/10;
		mul=mul*rem;
		count++;

	}
	avg=(float)(sum)/(float)(count);
	printf("\n sum %d \n",sum);
	printf("\n mul %d \n",mul);
	printf("\n no of digits are %d \n",count);
	printf("\n average of digits is %f \n",avg);	
	
}
