// This program is done by 23TCEIM1_DHARMIK
#include<stdio.h>
#include<conio.h>
void main()
{
	int yballs=10, pballs=20, calculate;
	clrscr();

	printf("********Count before execution********");

	printf("\n\nYellow Balls: %d",yballs);
	printf("\nPink Balls: %d",pballs);

	calculate = ++yballs + yballs++ + --yballs + ++pballs - --pballs - --pballs;

	printf("\n\n********Count after execution********");

	printf("\n\nYellow Balls: %d",yballs);
	printf("\nPink Balls: %d",pballs);

	printf("\nTotal calculation is: %d",calculate);

	printf("\n\n23TCEIM1_DHARMIK");

	getch();

}