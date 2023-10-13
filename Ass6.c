#include<stdio.h>
void main()
{
    int num,i,r,L,rev=0;
    printf("Enter num:");
    scanf("%d",&num);
    
    L:if(num!=0)
    {
        r = num  % 10;
        rev = (rev*10) + r;
        num = num / 10;
        goto L;
    }
    printf("Reverse is:%d",rev);
}