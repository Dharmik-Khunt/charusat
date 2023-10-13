#include<stdio.h>
int main()
{
    int u=0,l=0,num=0;
    char n;
    
    do
    {
        printf("Enter the character:\n");
        scanf("%c",&n);
        if(n>='A' && n<='Z' )
        {
            u=u+1;
        }
        else if(n>='a' && n<='z')
        {
            l=l+1;
        }
        else if(n>='0' && n<='9')
        {
            num=num+1;
        }
    } while (n!='*');
    printf("lower case no. is %d\n",l);
    printf("upper case no. is %d\n",u);
    printf("digits no. is %d\n",num);
    return 0;
}