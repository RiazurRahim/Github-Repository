# include <stdio.h>

int main()
{
    int i=1,j,k,n,sum=0;
    
    printf("enter how many no have to print\n");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",2*i);  //for even no
   //   printf("%d\n",2*i-1);//for odd no
        sum=sum+i;
        
        i++;
    }
    printf("sum is %d\n",sum);
       
}