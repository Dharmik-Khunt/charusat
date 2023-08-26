// This program is done by 23TCEIM1_DHARMIK
#include<stdio.h>
void main()
{
	float item, ppi, Total_Price, cost;

	printf("Enter the quantity:");
	scanf("%f",&item);
	printf("Enter the price per item:");
	scanf("%f",&ppi);

	Total_Price = item * ppi;

	if(item>1000)
	{
	      cost = Total_Price * 0.90;
	      printf("Final Amount:%.0f",cost);
	}
    else{
	printf("\nFinal Amount:%.0f",Total_Price);
    }
	printf("\n23TCEIM1_DHARMIK");
}
