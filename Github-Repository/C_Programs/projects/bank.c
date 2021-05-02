#include<stdio.h>
#include<stdlib.h>
int TotalAmount=1000,Amount,Amo,Tr,TotalDeposit=0,TotalWith=0,TotalTr=0;
int list();
void Deposit();
void Withdraw();
void Transfer();
void CheckDetails();
void Last();
int acc;
char a[50];
int main()
{
	printf("enter your name\n");
	gets(a);
	printf("enter your account no\n");
	scanf("%d",&acc);
	while(1)
	{
		switch(list())
		{
			case 1 :
				Deposit();
				TotalDeposit+=Amount;
				break;
			case 2 :
				Withdraw();
				if (Amo<TotalAmount)
					TotalWith+=Amo;
				break;
			case 3 :
				Transfer();
				if (Tr<TotalAmount)
					TotalTr=TotalTr+Tr;
				break;
			case 4 :
				CheckDetails();
				break;
			case 5 :
				Last();
				exit(0);			
			default :
				printf("invalid option\n");
				
			
		}
	}
	return 0;
}
int list()
{
	int ch;
	printf("select the option\n 1.for Deposite\n 2.for Withdraw\n 3.for Transfer\n 4.Check Details\n 5.exit\n");
	scanf("%d",&ch);
	return(ch);
}
void Deposit()
{
	
	printf("enter the amount to deposite\n");
	scanf("%d",&Amount);
	TotalAmount=TotalAmount+Amount;
	printf("Deposited amount %d\n",Amount);
	printf("Total Amount is %d\n",TotalAmount);
	
}
void Withdraw()
{
	
	printf("enter the amount to withdraw\n");
	scanf("%d",&Amo);
	if(Amo<TotalAmount)
		TotalAmount-=Amo;
	else
		printf("insufficient balance\n");

	printf("withdraw amount is %d\n",Amo);
	printf("Total Amount is %d\n",TotalAmount);
	
}
void Transfer()
{
	
	printf("enter the amount to transfer\n");
	scanf("%d",&Tr);
	if(Tr<TotalAmount)
		TotalAmount=TotalAmount-Tr;
	else
		printf("insufficient balance\n");
	printf("Transfered amount is %d\n",Tr);
	printf("Total Amount is %d\n",TotalAmount);
	
}
void CheckDetails()
{
	printf("Total current Amount is %d\n",TotalAmount);
	printf("Total deposite Amount is %d\n",TotalDeposit);
	printf("Total withdraw Amount is %d\n",TotalWith);
	printf("Total transfered Amount is %d\n",TotalTr);

}
void Last()
{
	printf("your name is %s\n",a);
	printf("your acc no is %d\n",acc);
	printf("Total current Amount is %d\n",TotalAmount);
	printf("Total deposite Amount is %d\n",TotalDeposit);
	printf("Total withdraw Amount is %d\n",TotalWith);
	printf("Total transfered Amount is %d\n",TotalTr);
}

