#include<stdio.h>
void main()
{
    int i,j,rows,space;
    printf("Enter number of rows");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(space=1;space<=(rows-i);space++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");

    }
    
}