#include <stdio.h>
#include <stdlib.h>
#include <math.h>    //To get randomness functions and many other complex math functions I did not used
#include <time.h>    //To get the time functions
#include <string.h>  //To use string functions

void player(int d10);

int main()
{
    time_t t;   //Gets the time of the computer

    int d10;

    char ans;

    do
    {
       srand(time(&t));  //Seeds randomness with the computer's time

       d10 = (rand() % 10) + 1;  //Rolling a 10 sided dice

       player(d10); //The player function (Self NOTE:Be better at functions in C)

       puts("\n\nIf you want to run the program again input 'Y'");
       scanf(" %c",&ans);
       ans = toupper(ans);
       puts("\n");
    }
    while(ans == 'Y');

    return 0;
}

void player(int d10)
{
    int b_atk = 2;
    int b_def = 1;
    int b_hp = 100;

    int atk = b_atk * d10;
    int def = b_def * d10;

    printf("You rolled %d so your character's\n",d10);
    printf("ATK:%d\n",atk);
    printf("DEF:%d\n",def);
}

