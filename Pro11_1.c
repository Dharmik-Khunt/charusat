#include<stdio.h>

void main()
{
    int s[50],i,*p,distinction=0,firstclass=0,pass=0,fail=0;
    p=s;

    printf("Enter 10 Students CCP marks between 0 to 100 : \n");

    for(i=0;i<10;i++)
    {
        scanf("%d",(p+i));
    }

    printf("\n");

    for(i=0;i<10;i++)
    {
        printf("Student %d Marks is : %d \n",i+1,*(p+i));
    }

    for(i=0;i<10;i++)
    {
        if(*(p+i)>=70)
        {
            distinction++;
        }
        else if(*(p+i)>=60 && *(p+i)<70)
        {
            firstclass++;
        }
        else if(*(p+i)>=40 && *(p+i)<60)
        {
            pass++;
        }
        else if(*(p+i)<40)
        {
            fail++;
        }
    }

    printf("\nTotal Distinction Student is %d.\n",distinction);
    printf("Total Firstclass Student is %d.\n",firstclass);
    printf("Total Pass Student is %d.\n",pass);
    printf("Total Fail Student is %d.\n",fail);

    printf("23CE058_DHARMIK");
}  
