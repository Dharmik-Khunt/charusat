//This program is done by 23TCEIM1_DHARMIK
#include<stdio.h>
#include<math.h>
void main()
{
	float x1,x2,x3,y1,y2,y3,s1,s2,s3;

	printf("Enter (x1,y1) Points:");
	scanf("%d%d",&x1,&y1);
	printf("\nEnter (x2,y2) Points:");
	scanf("%d%d",&x2,&y2);
	printf("\nEnter (x3,y3) Points:");
	scanf("%d%d",&x3,&y3);

	s1 = fabs(x2-x1)/fabs(y2-y1);
	s2 = fabs(x3-x2)/fabs(y3-y2);
	s3 = fabs(x1-x2)/fabs(y1-y3);

	if(s1==s2 && s2==s3 && s1==s3)
	{
		printf("\nCollinear Points");
	}
	else
	{
		printf("\nNon-collinear points");

	}
	printf("\n\n23TCEIM1_DHARMIK");
	return 0;
}