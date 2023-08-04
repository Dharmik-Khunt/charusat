#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float pi=3.14, Length, Gravity, Total_time;
	clrscr();

	printf("Enter the length(m): ");
	scanf("%f",&Length);

	printf("\nEnter value of gravity(m/s): ");
	scanf("%f",&Gravity);

	Total_time = 2 * pi * sqrt(Length/Gravity);
	printf("\nTotal time is: %.2f",Total_time);

	getch();

}