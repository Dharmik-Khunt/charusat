#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter marks of A:");
    scanf("%d",&a);
    printf("Enter marks of B:");
    scanf("%d",&b);

    if((a>=55) && (b>=45))
    {
        printf("PASS");
    }
    else if((a<55 && a>=45) && b>=55)
    {
        printf("PASS");
    }
    else if((b<45) && (a>=65))
    {
        printf("reappear in examination in B");
    }
    else
    {
        printf("FAIL");
    }
}