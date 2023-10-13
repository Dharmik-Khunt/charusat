#include<stdio.h>
int main()
{
    int a[5],b[5],c[10],i,j,t;
    printf("Enter the A value:");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the B value:");
    for(j=0; j<5; j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0,j=0; i<5; i++,j++)
    {
        c[i]=a[i];
    }
    for(i=5,j=0; i<=9; i++,j++)
    {
        c[i]=b[j];
    }
    for(i=0; i<=9; i++)
    {
        printf("%d ",c[i]);
    }
    for(j=0; j<9; j++)
    {
        for(i=0; i<9-j; i++)
        {
            if(c[i]>c[i+1])
            {
                t=c[i];
                c[i]=c[i+1];
                c[i+1]=t;
            }
        }
    }
    printf("\nsorting\n");
    for(i=0; i<=9; i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}