#include<stdio.h>
void main()
{
    int i=1,j;
    while(i<=5)
    {
        int j = 5;
        while(j>=i)
        {
            printf("%d ",j);
            j--;
        }
        i++;
        printf("\n");
    }
}