#include <stdio.h>

void checkFactorialNoArgsNoReturn()

{
    int num, i, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) 
    {
        fact=fact*1;
    }

    if (fact == num) 
        {
        printf("%d is a factorial number.\n");
        }   
    else 
        {
        printf("%d is not a factorial number.\n");
        }
}

int main() 
{
    checkFactorialNoArgsNoReturn();
    return 0;
}
