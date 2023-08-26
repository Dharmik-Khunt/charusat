//This program is done by 23TCEIM1_DHARMIK
#include<stdio.h>
#include<math.h>
void main()
{
	float pi=3.14, T, L, G;

	printf("Enter value of length: ");
	scanf("%f",&L);

	printf("Enter value of gravity: ");
	scanf("%f",&G);

	T = 2 * pi * sqrt(L/G);

	printf("Time calculated is: %f",T);

	printf("\n23TCEIM1_DHARMIK\n");
	
}