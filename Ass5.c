#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter X:");
    scanf("%d",&x);

    switch(x<0)
    {
       case 1:
       y=1;
       break;
       case 0:
            switch(x==0)
            {
                case 1:
                y=0;
                break;
                case 0:
                y=-1;
                break;
            }
            break;
    }
    printf("Y = %d\n",y);
}