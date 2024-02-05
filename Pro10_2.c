#include<stdio.h>

union library
{
    int accessionnumber;
    char title[15];
char authorname[25];
float price;
    int flag;

}b1;

void main()
{
    printf("Enter Accession number : ");
    scanf("%d",&b1.accessionnumber);
    printf("Accession number is : %d\n\n",b1.accessionnumber);
    printf("Enter Title of book : ");
    scanf("%s",b1.title);
    printf("Title of book is : %s\n\n",b1.title);
    printf("Enter Author name of book : ");
    scanf("%s",b1.authorname);
    printf("Author name of book is : %s\n\n",b1.authorname);
    printf("Enter Price of book : ");
    scanf("%f",&b1.price);
    printf("Price of book is : %f\n\n",b1.price);
    printf("Enter Flag of book : ");
    scanf("%d",&b1.flag);

    if(b1.flag==0)
        printf("Book is not issued\n");
    else
        printf("Book is issued\n");

    printf("23CE058_DHARMIK");
}
