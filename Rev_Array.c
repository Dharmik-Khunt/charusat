#include<stdio.h>
void main()
{
    int a[5],i;
    for(i=0; i<5; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n*****New Array*****\n");
    for(i=4; i>=0; i--)
    {
        printf("%d ",a[i]);
    }
}