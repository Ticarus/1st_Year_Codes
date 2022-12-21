#include <stdio.h>
#include <stdlib.h>
#include <string.h>   //To use puts() and gets()
#include <math.h>     //To use rand() and srand()
#include <time.h>     //To use time_t for srand()

int main()
{
    int dice1, dice2;
    int total1, total2;
    time_t t;     //Gets the time of the day in the computer
    char ans,i;

    srand(time(&t));      //Seeds the randomness(makes it more random dice roll, otherwise always the same numbers of dice will come)

    do
    {
        dice1 = (rand() % 5) + 1;   //Randomizes the first dice value (1 to 6)
        dice2 = (rand() % 5) + 1;   //Randomizes the second dice value (1 to 6)
        total1 = dice1 + dice2;

        do
        {
            printf("The first roll of dices are %d and %d total of %d\n",dice1, dice2, total1);  //Prints
            puts("What do you think the next roll will be?");
            puts("(H)igher, (L)ower, (S)ame?");
            puts("Enter H, L or S to reflect your guess.");
            scanf(" %c",&ans);   //Scans
            ans = toupper(ans);   //toupper() makes the input an uppercase letter if it is inputted as a lowercase letter
        }
        while((ans != 'H') && (ans != 'L') && (ans != 'S'));

        dice1 = (rand() % 5) + 1;
        dice2 = (rand() % 5) + 1;
        total2 = dice1 + dice2;

        printf("The second roll of dices are %d and %d total of %d\n",dice1, dice2, total2);

        if(ans == 'L')
        {
            if(total2 < total1)
            {
                puts("Congratulations! You guessed it right.");
                printf("%d is lower than %d\n",total2, total1);
            }
            else
            {
                printf("Sorry! %d is not lower than %d\n",total2, total1);
            }
        }
        else if(ans == 'H')
        {
            if(total2 > total1)
            {
                puts("Congratulations! You guessed it right.");
                printf("%d is higher than %d\n",total2, total1);
            }
            else
            {
                printf("Sorry! %d is not higher than %d\n",total2, total1);
            }
        }
        else if(ans == 'S')
        {
            if(total2 == total1)
            {
                puts("Congratulations! You guessed it right.");
                printf("%d is the same as %d\n",total2, total1);
            }
            else
            {
                printf("Sorry! %d is not the same as %d\n",total2, total1);
            }
        }

        puts("If you want to exit the game input Y, if you want to continue input anything else.");
        scanf(" %c",&i);
        i = toupper(i);
    }
    while(i != 'Y');

    return 0;
}
