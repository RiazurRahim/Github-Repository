//count zeros and ones in decimal number by converting it to binary

#include<stdio.h>
#include<string.h>

int main()
{
	int ones = 0,zeros = 0, dec_no, rem[50];
	int num,i=0,j;

/*	
//Method 1
	printf("enter decimal no \n");
	scanf("%d",&dec_no);
	printf("\n");
	num = dec_no;

	while(dec_no>0)
	{
		rem[i] = dec_no%2;
		dec_no = dec_no/2;
		i++;
		
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d\t",rem[j]);

		if(rem[j] == 1)
		{
			ones++;
		}	
		else
		{
		zeros++;
		}
		
	}
	
	printf("\nno of digit in binary are %d \n", (ones + zeros));
	printf("total zeros %d \n",zeros);
	printf("total ones is %d \n", ones);
*/       

//Method 2
	ones = 0;
	zeros = 0;
	printf("enter decimal no \n");
	scanf("%d",&dec_no);
	printf("\n");
	num = dec_no;

	while(num>0)
	{
		rem[i] = num & 1;
		num = num >> 1;
	//	printf("%d\t",rem);
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d\t",rem[j]);
		if(rem[j] == 1)
		{
			ones++;
		}	
		else
		{
			zeros++;
		}
	}
	printf("\n\nno of digit in binary are %d \n\n", (ones + zeros));
	printf("total zeros %d \n\n",zeros);
	printf("total ones is %d\n\n", ones);

}
