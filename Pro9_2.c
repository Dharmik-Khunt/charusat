#include<stdio.h>
#include<math.h>
int istriangle(float a,float b,float c);
float area(float a,float b,float c);

void main()
{
    float a,b,c,A,i;
    printf("Enter value of a,b,c : \n");
    printf("a = "); scanf("%f",&a);
    printf("b = "); scanf("%f",&b);
    printf("c = "); scanf("%f",&c);

    i=istriangle(a,b,c);

    if(i)
    {
        A=area(a,b,c);
        printf("It is Triangle & area is %f\n",A);
    }
    else
    {
        printf("\n\nIt is not Triangle\n");
    }

    printf("23CE058_DHARMIK");

}
    int istriangle(float a,float b,float c)
    {
        if(a+b > c)
            return 1;

        else if(b+c > a)
            return 1;

        else if(c+a > b)
            return 1;

        else
            return 0;
    }

    float area(float a,float b,float c)
    {
        float A,s;
        s=(a+b+c)/2;
        A=sqrt(s*(s-a)*(s-b)*(s-c));
        return A;
    }
