//fabnocci series

# include <stdio.h>

int main()
{
	int i,n;
	long int pre_sum = 0, curr_sum = 1, next_sum = 1;
	printf("enter the no to print fabnoci series \n");
	scanf("%d",&n);

	printf("entered no is %d \n",n);
	if(n>0)
	printf("%d ",curr_sum);

	for(i=1;i<n;i++)
	{
		next_sum = pre_sum + curr_sum;
		printf("%ld ",next_sum);
		pre_sum = curr_sum;
		curr_sum = next_sum;
	}
}
