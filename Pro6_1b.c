//This program is done by 23TCEIM1_DHARMIK
#include<stdio.h>
int main()
{
    int n,r, on, sum=0;

    printf("Enter the num:");
    scanf("%d",&n);

    on = n;
    while(n>0)
    {
        r = n % 10;
        sum = sum + (r*r*r);
        n = n / 10;
    }

    if(on == sum)
    {
        printf("It is armstrong num");
    }
    else
    {
        printf("It is not an armstrong num");
    }

    printf("\n23CEI058_DHARMIK");
}