//this program is done by 23TCEIM1_DHARMIK
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2;
	clrscr();

	printf("********Before Swapping********");
	printf("\nEnter first num:");
	scanf("%d",&n1);
	printf("Enter second num:");
	scanf("%d",&n2);

	printf("\n\n********After Swapping********");

	n1 = n1 + n2;
	n2 = n1 - n2;
	n1 = n1 - n2;

	printf("\nFirst num become:%d",n1);
	printf("\nSecond num become:%d",n2);

	printf("\n\n23TCEIM1_DHARMIK\n");

	getch();


}