//This program is done by 23TCEIM1_DHARMIK
#include<stdio.h>
int main()
{
	long int tp=80000;
	double nom,now,lm,lw,tl,ilm,ilw;
	

	printf("1. Total Population is: %ld",tp);

	nom = tp * 0.52;
	printf("\n2. Num of men is: %.0f",nom);

	now = tp * 0.48;
	printf("\n3. Num of women is: %.0f",now);

	lm = tp * 0.35;
	printf("\n4. Num of literate men is: %.0f",lm);

	lw = tp * 0.13;
	printf("\n5. Num of literate women is: %.0f",lw);

	tl = lm + lw;
	printf("\n6. Total literate: %.0f",tl);

	ilm = nom - lm;
	printf("\n7. Illetrate men is: %.0f",ilm);

	ilw = now - lw;
	printf("\n8. Illetrate women is: %.0f",ilw);

	printf("\n23TCEIM1_DHARMIK\n");

	
	return 0;
}