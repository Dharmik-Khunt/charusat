#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,temp;
	clrscr();

	printf("********Before Swapping********");
	printf("\nEnter first num:");
	scanf("%d",&n1);
	printf("Enter second num:");
	scanf("%d",&n2);

	printf("\n\n********After Swapping********");

	temp = n1;
	n1 = n2;
	n2 = temp;

	printf("\nFirst num become:%d",n1);
	printf("\nSecond num become:%d",n2);

	getch();

}