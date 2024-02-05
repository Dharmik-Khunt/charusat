/* This program is prepared by 23CE058_DHARMIK*/
#include<stdio.h>
#include<string.h>

int main() {
    char str1[100], str2[100];
    int choice;
    printf("Choose an operation:\n");
    printf("1. Length of a string\n");
    printf("2. Reverse string\n");
    printf("3. Compare two strings\n");
    printf("4. Copy one string into another string\n");
    printf("5. Concatenate two strings\n");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            {

                printf("Enter string 1: ");
                scanf("%s",&str1);
                int length = 0;
                while (str1[length] != '\0') {
                    length++;
                }
                printf("Length of the string: %d\n", length);
            }
            break;

        case 2:
            {

                printf("Enter string 1: ");
                scanf("%s",&str1);
                int length = 0;
                while (str1[length] != '\0') {
                    length++;
                }
                printf("Reversed string: ");
                for (int i = length - 1; i >= 0; i--) {
                    printf("%c", str1[i]);
                }
                printf("\n");
            }
            break;

        case 3:
            {
                printf("Enter string 1: ");
                scanf("%s",&str1);
                printf("Enter string 2: ");
                scanf("%s",&str2);
                int i = 0;
                while (str1[i] == str2[i]) {
                    if (str1[i] == '\0') {
                        printf("The strings are equal.\n");
                        break;
                    }
                    i++;
                }
                if (str1[i] != str2[i]) {
                    printf("The strings are not equal.\n");
                }
            }
            break;

        case 4:
            {
                printf("Enter string 1: ");
                scanf("%s",&str1);
                printf("Enter string 2: ");
                scanf("%s",&str2);
                int i = 0;
                while (str2[i] != '\0') {
                    str1[i] = str2[i];
                    i++;
                }
                str1[i] = '\0';
                printf("String copied successfully.\n");
            }
            break;

        case 5:
            {
                printf("Enter string 1: ");
                scanf("%s",&str1);
                printf("Enter string 2: ");
                scanf("%s",&str2);
                int i = 0;
                while (str1[i] != '\0') {
                    i++;
                }
                int j = 0;
                while (str2[j] != '\0') {
                    str1[i] = str2[j];
                    i++;
                    j++;
                }
                str1[i] = '\0';
                printf("Concatenated string: %s\n", str1);
            }
            break;

        default:
            printf("Invalid choice\n");
    }
    printf("23CE058_DHARMIK");

    return 0;
}
