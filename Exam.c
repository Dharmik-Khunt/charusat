#include<stdio.h>
void main()
{
    int i=20,sum=0;
    while(i<=40)
    {
        if(i % 3 == 0)
        {
            sum = sum + i;
        }
        i++;
    }
    printf("Sum is:%d",sum);
    
}