#include<stdio.h>

int main()
{
    int n,i,j;
    printf("enter a no\n");
    scanf("%d",&n);
    
    for(i=2;i<=n-1;i++)
        if(n%i==0)
        break;
    if(i==n)
        printf("no is prime \n");
    else
        printf("no is not prime \n");
}