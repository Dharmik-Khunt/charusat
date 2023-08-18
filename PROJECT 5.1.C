// This program is done by 23TCEIM1_DHARMIK
#include<stdio.h>
#include<conio.h>
void main()
{
	float item, ppi, Total_Price, cost;
	clrscr();

	printf("Enter the quantity:");
	scanf("%f",&item);
	printf("Enter the price per item:");
	scanf("%f",&ppi);

	Total_Price = item * ppi;

	if(item>1000)
	{
	      cost = Total_Price * 0.90;
	      printf("Final Amount:%f",cost);
	}

	printf("Final Amount:%f",Total_Price);

	printf("\n\n23TCEIM1_DHARMIK");
	getch();
}
