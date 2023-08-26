// This program is done by 23TCEIM1_DHARMIK
#include<stdio.h>
void main()
{
	int yballs=10, pballs=20, calculate;

	printf("********Count before execution********");

	printf("\nYellow Balls: %d",yballs);
	printf("\nPink Balls: %d",pballs);

	calculate = ++yballs + yballs++ + --yballs + ++pballs - --pballs - --pballs;

	printf("\n********Count after execution********");

	printf("\nYellow Balls: %d",yballs);
	printf("\nPink Balls: %d",pballs);

	printf("\nTotal calculation is: %d",calculate);

	printf("\n23TCEIM1_DHARMIK");
}