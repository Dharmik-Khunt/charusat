#include<stdio.h>
int bin(int n);
void main()
{
    int n,ans;
    printf("Enter positive number : ");
    scanf("%d",&n);

    ans=bin(n);
    printf("Binary number is : %d",ans);

    printf("\n23CE058_DHARMIK");
}
int bin(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return (n%2)+10*bin(n/2);
    }
}
