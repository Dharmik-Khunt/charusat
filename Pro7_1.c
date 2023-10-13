#include<stdio.h>
void main()
{
    int i,a[25],odd=0,even=0,pos=0,neg=0;
    for(i=0; i<25; i++)
    {
        scanf("%d ",&a[i]);

        if(a[i]>0 || a[i]%2 ==0)
        {
            pos++;
            even++;
        }
        else if(a[i]<0 || a[i]%2 != 0)
        {
            odd++;
            neg++;
        }
    }
   
    printf("Positive:%d\n",pos);
    printf("Negative:%d\n",neg);
    printf("Even:%d\n",even);
    printf("Odd:%d\n",odd);
}