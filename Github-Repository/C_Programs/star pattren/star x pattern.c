#include<stdio.h>
int main()
{
    int i,j,row,column;
    printf("enter the no of rows\n");
    scanf("%d",&row);
    printf("enter the no of column\n");
    scanf("%d",&column);
    for(i=1; i<row; i++)
    {
        for(j=1; j<column; j++)
        {
            if((j==i)||(j==row-i))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}