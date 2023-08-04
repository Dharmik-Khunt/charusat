#include<stdio.h>
#include<conio.h>
void main()
{
	int yballs=10;
	clrscr();

	printf("********Count before execution********");

	printf("\n\nBalls are:%d",yballs);

	++yballs;
	--yballs;
	yballs++;
	yballs--;


	printf("\n\n********Count after execution********");
	printf("\n\nRemaining Balls are:%d",yballs);
	getch();
}