#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,dis;
    double R1,R2,img;

    printf("Enter A:");
    scanf("%d",&a);
    printf("Enter B:");
    scanf("%d",&b);
    printf("Enter C:");
    scanf("%d",&c);

    dis =  (b*b - 4*a*c);

    switch(dis>0)
    {
        case 1:
        R1 = (-b + sqrt(dis)) / (2*a);
        R2 = (-b - sqrt(dis)) / (2*a);
        break;
        case 0:
    switch(dis<0)
    {
        case 1:
        R1 =  R2 = -b / (2*a);
        img = sqrt (-dis) / (2*a);
        break;

        case 0:
        R1 = R2 = -b / (2*a);
        break;
    }
}
    printf("\nRoot 1:%.2f",R1);
    printf("\nRoot 2:%.2f",R2);
    printf("\nImg:%.2f",img);

    return 0;
}