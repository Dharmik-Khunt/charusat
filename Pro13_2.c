#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,n1;
    char *p;

    printf("Enter Element : ");
    scanf("%d",&n);

    p=(char*)calloc(n,sizeof(char));

    printf("String to be entered is : %s",strcpy(p,"Institute "));

    printf("\nEnter second Element : ");
    scanf("%d",&n1);

    realloc(p,n1);

    printf("String received after reallocation of memory is : %s",strcat(p,"CSPIT"));

    printf("\n\n23dit064");
    printf("\nAryan Sangani");
}
