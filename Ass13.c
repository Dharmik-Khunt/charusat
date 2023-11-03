#include<stdio.h>
int main()
{
    int n,i,j,sum=0,rem;
    printf("Enter the any value:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=0;
        for(j=1; j<i; j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
                
            }

        }
        if(sum==i && i!=1)
                {
                    printf("%d ",i);
                }
    }
    return 0;
}