//struct program

#include<stdio.h>
void main()
{
	struct str_name //structure is initialized inside the main
	{
		char c;
		int i[5];
		char d;
		int j;
	}A1;
	struct str_name A2;
	
	int m,n,a,b;
	m=sizeof(A1);
	n=sizeof(A2);
	printf("the size of variable total A1-->%d\n",m);
	printf("the size of variable total A2-->%d\n",n);
	

	for(a=0;a<=5;a++)	//address of variable A1
	{
		printf("add of array member integer A1.i[] is %d\n",&A1.i[a]);
	}

	printf("add of charecter A1.c-->\t%d\n",&A1.c);
	printf("add of charecter A1.d-->\t%d\n",&A1.d);
	printf("add of integer A1.j-->\t%d\n",&A1.j);


	for(a=0;a<=5;a++)	//value of variable A1
	{
		printf("value of array member integer A2.i[] is %d\n",A1.i[a]);
	}

	printf("value of charecter A1.c-->%d\n",A1.c);
	printf("value of charecter A1.d-->%d\n",A1.d);
	printf("value of intger A1.j-->%d\n",A1.j);
	
}
