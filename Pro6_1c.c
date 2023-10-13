//This program is done by 23TCEIM1_DHARMIK
#include<stdio.h>
int main()
{
    int num,i,sum=0;

    printf("Enter the Number:");
    scanf("%d",&num);

    for(i=1; i<num; i++)
    {
        if(num%i==0)
        {
            printf("%d\n",i);
            sum = sum + i;
        }
    }

    if(num == sum)
    {
        printf("Num is perfect");
    }
    else
    {
        printf("Num is not perfect");
    }

    printf("\n23TCEIM1_DHARMIK");
}
