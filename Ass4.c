#include<stdio.h>
void main()
{
    int a,b,c,young;
    printf("Age of Ram:");
    scanf("%d",&a);
    printf("Age of Shyam:");
    scanf("%d",&b); 
    printf("Age of Ajay:");
    scanf("%d",&c);
    
    young = (a<b)?(a<c)?a:c:(b<c)?b:c;
    printf("Youngest is %d age",young);
}