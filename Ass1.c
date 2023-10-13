#include <stdio.h>
int main()
{
    float hard, carbon, tensile;
    int grade;
    printf("Enter the value of hardness of steel:");
    scanf("%f", &hard);
    printf("Enter the value of carbon content of steel:");
    scanf("%f", &carbon);
    printf("Enter the value of tensile strength of steel:");
    scanf("%f", &tensile);

    if ((hard > 50) && (carbon < 0.7) && (tensile > 5600))
    {
        grade = 10;
    }
    else

        if ((hard > 50) && (carbon < 0.7))
    {
        grade = 9;
    }
    else

        if ((carbon < 0.7) && (tensile > 5600))
    {
        grade = 8;
    }
    else

        if ((hard > 50) && (tensile > 5600))
    {
        grade = 7;
    }
    else

        if ((hard > 50) || (carbon < 0.7) || (tensile > 5600))
    {
        grade = 6;
    }
    else
    {
        grade = 5;
    }
    switch (grade)
    {
    case 10:
        printf("Grade is 10 \n");
        break;
    case 9:
        printf("Grade is 9 \n");
        break;
    case 8:
        printf("Grade is 8 \n");
        break;
    case 7:
        printf("Grade is 7 \n");
        break;
    case 6:
        printf("Grade is 6 \n");
        break;
    case 5:
        printf("Grade is 5 \n");
        break;
    default:
        printf("Invalid input\n");
    }

    return 0;
}
