#include<stdio.h>
int main()
{
    int a,b,c;
    char ch;
    printf("Enter A:");
    scanf("%d",&a);
    printf("Enter B:");
    scanf("%d",&b);
    printf("Enter sign(+,-) ");
     scanf("%c",&ch);
    c=0;

    switch(ch)
    {
        case '+':
        c=a+b;
        break;

        case '-':
        c=a-b;
        break;
    }

    printf("\nAns is:%d",c);
}