#include<stdio.h>
void main()
{
    int num,i,r,rev=0,temp;
    printf("Enter num:");
    scanf("%d",&num);
    
    temp = num;
    while(num!=0)
    {
        r = num  % 10;
        rev = (rev*10) + r;
        num = num / 10;
    }

    if(temp == rev)
    {
        printf("Num is palidrome");
    }
    else
    {
        printf("Num is not palidrome");
    }
   
}