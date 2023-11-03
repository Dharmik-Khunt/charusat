#include<stdio.h>
void main()
{
    int i,j,a;
    for(i=5; i>=1; i--)
    {
        for(j=1; j<=i-1; j++)
        {
            printf(" ");
        }
        for(j=5,a=1; j>=i; j--,a++)
        {
            printf("%d",a);
        }
        printf("\n");
    }
}