/* This program is prepared by 23CE058_DHARMIK */
#include<stdio.h>
int main()
{
int matches=21;
int playerChoice,computerChoice;

printf("Rules: There are 21 match-sticks. You can pick 1, 2, 3, or 4 match-sticks.\n");
printf("Your turn: Pick 1, 2, 3, or 4 match-sticks: ");
scanf("%d", &playerChoice);
while (1)
    {

    printf("Your turn: Pick 1, 2, 3, or 4 match-sticks: ");
    scanf("%d", &playerChoice);
    if (playerChoice < 1 || playerChoice > 4)
    {
    printf("Invalid choice. Please pick 1, 2, 3, or 4 match-sticks.\n");
    continue;
    }
    matches -= playerChoice;
    if (matches <= 0)
    {
    printf("You picked the last match-stick. You lose!\n");
    break;
    }
    computerChoice = 5 - playerChoice;
    printf("Computer picks %d match-sticks.\n", computerChoice);
    matches -= computerChoice;
    if (matches <= 0)
     {
    printf("Computer picked the last match-stick. Computer wins!\n");
    break;
    }
    }
    printf("\n23CE058_DHARMIK");
    return 0;
}
