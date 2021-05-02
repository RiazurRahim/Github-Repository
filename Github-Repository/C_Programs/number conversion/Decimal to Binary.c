#include<stdio.h>
int main()
{
	int num,sum=0,i,n;
	int rem,mul=1,count=0;
	float avg;
	printf("enter the no \n");
	scanf("%d",&n);
	for(num=n ; num>0 ; num=num/10)
	{
		rem=num%10;
		sum=sum+rem;
		printf("indvid %d \n",rem);
		mul=mul*rem;
		count++;

	}
	avg=(float)(sum)/(float)(count);
	printf("sum %d \n",sum);
	printf("mul %d \n",mul);
	printf("no of digits are %d \n",count);
	printf("average of digits is %f \n",avg);	
	
}
    