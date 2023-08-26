//This program is done by 23TCEIM1_DHARMIK
#include<stdio.h>
int main()
{
	int DA,HRA,MA,TA,PF,IT,GS,NS,salary;
	

	printf("Enter the basic salary:");
	scanf("%d",&salary);

	printf("\n********ALLOWANCES********");

	DA = salary*0.70;
	printf("\n\n1. DA of basic salary is: %d",DA);

	HRA = salary*0.07;
	printf("\n2. HRA basic salary is: %d",HRA);

	MA = salary*0.02;
	printf("\n3. MA of basic salary is: %d",MA);

	TA = salary*0.04;
	printf("\n4. TA of basic salary is: %d",TA);

	printf("\n\n********DEDUCTION********");
	PF = salary*0.12;
	printf("\n\n5. PF of basic salary is: %d",PF);

	printf("\n6. IT value: ");
	scanf("%d",&IT);

	GS = (salary) + (DA+HRA+MA+TA);
	printf("\nGross salary is: %d",GS);

	NS = GS - (PF+IT);
	printf("\nNet salary is: %d",NS);

	printf("\n\n23TCEIM1_DHARMIK\n");

	return 0;
}