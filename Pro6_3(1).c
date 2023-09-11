#include<stdio.h>
int main()
{
    int a,b,c=0;

    for(a=1; a<=5; a++)
    {
        for(b=1; b<=a; b++)
        {
            if(b%2==0)
            {
                printf("%d ",c);
            }
            else
            {
                printf("%d ",c+1);
            }
        }
        printf("\n");
    }
}