#include<stdio.h>
#include<string.h>
void main()
{
    char a[5][25],temp[25];
    int i,j;
    printf("enter name of students:\n");
    for(i=0;i<5;i++)
    {
        fgets(a[i],25,stdin);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(strcmp(a[i],a[j])>0)
            {
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
    }
    printf("\nstring in sequence:\n");
    for(i=0;i<5;i++)
    {
        printf("%s",a[i]);
    }
    printf("\n23CE058_DHARMIK");
}
