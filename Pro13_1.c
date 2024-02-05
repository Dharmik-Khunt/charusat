#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,*p,i,sum=0;
    float avg;

    printf("Enter Element : ");
    scanf("%d",&n);

    p=(int*)malloc(n*sizeof(int));

    printf("Enter value :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    printf("Entered value is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
        sum=sum+(*(p+i));
    }

    printf("\nTotal sum is : %d",sum);
    avg=sum/n;

    printf("\nAverage is %f",avg);
    free(p);
    printf("\n23CE058_DHARMIK");
}
