//This program is done by 23TCEIM1_DHARMIK
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float pi=3.14, T, L, G;
	clrscr();

	printf("Enter value of length: ");
	scanf("%f",&L);

	printf("\nEnter value of gravity: ");
	scanf("%f",&G);

	T = 2 * pi * sqrt(L/G);

	printf("\nTime calculated is: %f",T);

	printf("\n\n23TCEIM1_DHARMIK\n");
	getch();
}