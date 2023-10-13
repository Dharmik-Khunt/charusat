#include<stdio.h>
void main()
{
    int num,sum=0,i,r;
    printf("Enter num:");
    scanf("%d",&num);

    for(i=1; num!=0; i++)
    {
        r = num % 10;
        sum = sum + r;
        num = num / 10;
    }
    printf("Sum is:%d",sum);
}