#include<stdio.h>
int main()
{
    char a;
    int b;

    printf("Enter a character:");
    scanf("%c",&a);

    if(a>=97 && a<=122)
    {
        printf("Alpha\nAlpha Numeric\nLower\nHexanumber");
    }
    else if(a>=65 && a<=90)
    {
        printf("Is alpha\nAlphanumeric\nupper");
    }

    printf("\n\nEnter a digit:");
    scanf("%d",&b);
    printf("Digit\nAlpha Numeric\nHexanumber");
}