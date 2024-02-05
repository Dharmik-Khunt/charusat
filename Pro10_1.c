#include<stdio.h>

struct book_detail
{
        char title[25];
        char authorname[50];
        float amount;

}b1;

void getdata(struct book_detail b1);

void main()
{

    printf("Enter Title of book : ");
    scanf("%s",&b1.title);
    printf("Enter Author name of book : ");
    scanf("%s",&b1.authorname);
    printf("Enter Amount of book : ");
    scanf("%f",&b1.amount);

    getdata(b1);

}

void getdata(struct book_detail b1)
{
    printf("\nTitle of book is %s.\n",b1.title);

    printf("Author name of book is %s.\n",b1.authorname);

    printf("Amount of book is %f.\n",b1.amount);

    printf("\n23CE058_DHARMIK");	
}
