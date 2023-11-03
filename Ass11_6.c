#include <stdio.h>
void main()
{  
int alpha=1;
int i,j,k,m;    
 
    for(i=1; i<=4; i++)    
    {   
        for(j=4; j>=i; j--)
        {    
            printf("  ");  
        }
        for(k=1; k<=i; k++)
        {    
            printf("%d ",alpha++);
        }
        alpha--;   
        for(m=1; m<i; m++)
        {        
            printf("%d ",--alpha);
        }    
        printf("\n");       
    }    
}