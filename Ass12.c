#include<stdio.h>
void main()
{
    int n,i,j,count=0;
    printf("Enter N:");
    scanf("%d",&n);
    
    for(i=1; i<=n; i++)
    {
        printf("%d ",i);
        
        for(j=1; j<=n; j++)
        {
            if(j%i==0)
            {
                count++;
            }
        }
        if(count<=2)
        {
            printf("%d is prime",j);
        }
    }
   
}