#include <stdio.h>
    
main()
{
    int a,b,c;
    printf("enter the number\n");
    scanf("%d",&a);
    b = a % 2 ;
    if(b == 0 )
    printf("\n given number %d is even",a);
    else
    printf("\n given number %d is odd",a);

}