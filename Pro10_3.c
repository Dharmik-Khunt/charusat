#include<stdio.h>

struct employeedetails
{
        int age;
        char name[15];
        char address[30];

        struct salary
        {
            float bs;

        }c1;

}b1;

void main()
{
    printf("Enter Your Age : "); scanf("%d",&b1.age);
    printf("Enter Your Name : "); scanf("%s",&b1.name);
    printf("Enter Your Address : "); scanf("%s",&b1.address);
    printf("Enter Your Salary : "); scanf("%f",&b1.c1.bs);

    printf("\nYour Age is : %d",b1.age);
    printf("\nYour Name is : %s",b1.name);
    printf("\nYour Address is : %s",b1.address);
    printf("\nYour Salary is : %f\n",b1.c1.bs);
    printf("Process Finished.\n");

    printf("23CE058_DHARMIK");
}
