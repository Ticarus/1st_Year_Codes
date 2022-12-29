#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main()
{

    int dice1, dice2;
    int total1, total2;
    time_t t;
    char ans;

    //Remember that this is needed to make sure each random number is generated differently

    srand(time(&t));

    //This would give you a number between 0 and 5, so the + 1 makes it to 1 to 6

    dice1 = (rand() % 5) + 1;
    dice2 = (rand() % 5) + 1;
    total1 = dice1 + dice2;

    printf("First roll of the dice was %d and %d, for a total of %d.\n\n\n",dice1, dice2, total1);

    do
    {
        puts("What do you think the next roll will be (H)igher, (L)ower, (S)ame?\n");
        puts("Enter H, L or S to reflect your guess.");

        scanf(" %c",&ans);
        ans = toupper(ans);
    }
    while((ans != 'H') && (ans != 'L') && (ans != 'S'));

    //Roll the dice a second time to get your second total

    dice1 = (rand() % 5) + 1;
    dice2 = (rand() % 5) + 1;
    total2 = dice1 + dice2;

    //Display the second total for user

    printf("\nThe second roll was %d and %d, for a total of %d.\n\n",dice1, dice2, total2);

    //Now compare the two dice totals against the user's guess and tell them if they were right or not.

    if(ans == 'L')
    {
        if(total2 < total1)
        {
            printf("Good job! You were right!\n");
            printf("%d is lower than %d",total2, total1);
        }
        else
        {
            printf("Sorry! %d is not lower than %d\n\n",total2, total1);
        }
    }

    if(ans == 'H')
    {
        if(total2 > total1)
        {
            printf("Good job! You were right!\n");
            printf("%d is higher than %d",total2, total1);
        }
        else
        {
            printf("Sorry! %d is not higher than %d\n\n",total2, total1);
        }
    }

    if(ans == 'S')
    {
        if(total2 == total1)
        {
            printf("Good job! You were right!\n");
            printf("%d is  same as %d",total2, total1);
        }
        else
        {
            printf("Sorry! %d is not same as %d\n\n",total2, total1);
        }
    }

    return 0;
}
