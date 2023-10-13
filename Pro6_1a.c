//This program is done by 23CE058_DHARMIK
#include <stdio.h>
#include<math.h>
int main()
{

  int choice;
  int n, i, count = 0;
  int r, on,length, sum=0, p;
  int num;

  printf("1. Prime Num \n2. Armstrong Num \n3. Perfect Num\n");
  scanf("%d",&choice);

  switch(choice)
  {
    case 1:
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n ; i++) 
    {
      if (n % i == 0) 
      {
        count++;
      }
    }

    if (count <= 2)
    {
      printf("%d is a prime number.", n);
    }
    else
    {
      printf("%d is not a prime number.", n);
    }
    break;

    case 2:
    
    printf("Enter the num:");
    scanf("%d",&n);
    printf("Enter the length:");
    scanf("%d",&length);

    on = n;
    while(on>0)
    {
        r = on % 10;
        p = pow(r,length);
        sum = sum + p;
        on = on / 10;
    }

    if(n == sum)
    {
        printf("It is armstrong num");
    }
    else
    {
        printf("It is not an armstrong num");
    }
    break;

    case 3:

    printf("Enter the Number:");
    scanf("%d",&num);

    for(i=1; i<num; i++)
    {
        if(num%i==0)
        {
            printf("%d\n",i);
            sum = sum + i;
        }
    }

    if(num == sum)
    {
        printf("Num is perfect");
    }
    else
    {
        printf("Num is not perfect");
    }
    break;

  }
  printf("\n23CE058_DHARMIK");
  return 0;
}