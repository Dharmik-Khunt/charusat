#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter side A:");
    scanf("%d",&a);
    printf("Enter side B:");
    scanf("%d",&b);
    printf("Enter side C:");
    scanf("%d",&c);

    if(a==b || b==c || a==c)
    {
        printf("Isosceles triangle");
    }
    else if(a==b && b==c && c==a)
    {
        printf("Equilateral triangle");
    }
    else if((a*a) + (b*b) == (c*c) && (c>a && c>b))
    {
        printf("Right angle triangle");
    }
    else if(a!=b && b!=c && c!=a)
    {
        printf("Scalene triangle");
    }
}