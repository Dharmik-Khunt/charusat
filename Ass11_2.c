#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0; i<5; i++)
    {
        for(j=5; j>=i;j--)
        {
            printf("  ");
        }
        for(j=0;j<=i;j++)
        {
            printf(" %c  ",i+65);
        }
        printf("\n");
    }
    return 0;
}