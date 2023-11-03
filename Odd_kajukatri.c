#include<stdio.h>
void main()
{
    int i,j;
    for(i=1; i<=7; i+=2)
    {
        for(j=7; j>=i; j--)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=5; i>=1; i-=2)
    {
        for(j=7; j>=i; j--)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}