#include<stdio.h>
int main()
{
    int n,i=1,j,sum=0;
    printf("Enter the any value:");
    scanf("%d",&n);
    while(i<=n)
    {
        j=1;
        sum=0;
        while(j<=n)
        {
            if(i%j==0)
            {
               sum++;
            }
            j++;
        }
        if(sum==2)
        {
            printf("%d ",i);
        }
        i++;
    }
    return 0;
}