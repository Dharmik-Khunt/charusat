#include<stdio.h>
int main()
{
    int i=1,j;
    do
    {
        j=5;
        do
        {
            printf(" ");
            j--;
        }
        while(j>=i);
        j=1;
        do
        {
            printf("%d",j);
            j++;
        }
        while(j<=i);
        printf("\n");
        i++;
    }
    while(i<=5);
    return 0;
}