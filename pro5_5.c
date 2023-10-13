//This program is done by 23CE058_DHARMIK
 #include <stdio.h> 
#include <ctype.h> 
 void main ( ) 
 { 
        char character; 
        printf("Input:"); 
        character = getchar(); 
        
        if(isdigit(character))
        {
            printf("%c is a digit",character);
        }
        else if(character>=97 && character<=122)
        {
            printf("%c is a Lowercase character\n",character);
            character = toupper(character);
            putchar(character);
            
        } 
        else if(character>=65 && character<=90)
        {
            printf("%c is a Uppercase character\n",character);
            character = tolower(character);
            putchar(character);
        }

        if(isalpha(character))
        {
            printf("\nIt is alphabet");
            if(isupper(character))
            {
                printf("\n%c is a Uppercase character",character);
            }
            else
            {
                printf("\n%c is a Lowercase character",character);
            }
        }
        else if(ispunct(character))
        {
            printf("\nIt is a punctuation");
        }
        else if(isspace(character))
        {
            printf("is a white space");
        }

        printf("\n23CE058_DHARMIK");
 }