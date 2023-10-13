#include<stdio.h>
int main()
{
    int a,b;

    for(a=1; a<=7; a+=2)
    {
        for(b=7; b>=a; b--)
        {
            printf(" ");
        }
        for(b=1; b<=a; b++)
        {
            printf("* ");
        }
        printf("\n");
    }
}