#include<stdio.h>
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        j=1;
        while(j<=5-i)
        {
            printf(" ");
            j++;
        }
        j=1;
        while(j<=i)
        {
            printf("%d",i);
            j++;
        }
        printf("\n");
    }
    return 0;

}
