#include<stdio.h>
void main()
{
    int a[5],temp,i,j;
    for(i=0; i<5; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
    
    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\n*****After Sorting*****\n");
    for(i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
}