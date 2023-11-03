#include<stdio.h>
int main()
{
    char a[30],b[30];
    int i,j;

    printf("First name:");
    scanf("%s",&a);
    printf("surname:");
    scanf("%s",&b);

    for(i=0; a[i]!='\0'; i++)
    {}
    for(j=0; a[j]!='\0'; j++)
    {
      a[i]=b[j];
      i++;
    }
    a[i]='\0';
    printf("Full name is: %s",a);
}