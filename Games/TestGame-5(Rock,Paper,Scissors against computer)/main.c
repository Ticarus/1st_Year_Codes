#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char p_choice;
char c_choice;

void printGreeting();
char playerMove();
char computerMove();
char checkWinner();

int main()
{
    printGreeting();

    playerMove();

    computerMove();

    checkWinner();

    return 0;
}

void printGreeting()
{
    printf("=========================\n");
    printf("= Rock, Paper, Scissors =\n");
    printf("=========================\n");
    printf("Rock beats scissors\n");
    printf("Scissors beats paper\n");
    printf("Paper beats rock\n");
    printf("Input R for (R)ock\n");
    printf("Input S for (S)cissors\n");
    printf("Input P for (P)aper\n");
    printf("Have fun!\n");
}

char playerMove()
{
    char choice;

    do
    {
        printf("Input your choice: ");
        scanf("%c",&choice);

        choice = toupper(choice);

        if(choice == 'R' || choice == 'S' || choice == 'P')
        {
            p_choice = choice;
            break;
        }
        else
        {
            printf("Invalid input!\n");
        }

    }while(choice != 'R' || choice != 'S' || choice != 'P');
}

char computerMove()
{
    int intchoice;

    // Creates a seed based on current time
    srand(time(0));

    intchoice = rand() % 3;

    if(intchoice == 0)
    {
        c_choice = 'R';
    }
    else if(intchoice == 1)
    {
        c_choice = 'S';
    }
    else if(intchoice == 2)
    {
        c_choice = 'P';
    }
    else
    {
        printf("=ERROR=");
    }
}

char checkWinner()
{
    // Checks for player's winning conditions
    if(p_choice == 'R' && c_choice == 'S')
    {
        printf("YOU WON!\n");
        printf("Computer's choice: %c\n",c_choice);
    }
    else if(p_choice == 'S' && c_choice == 'P')
    {
        printf("YOU WON!\n");
        printf("Computer's choice: %c\n",c_choice);
    }
    else if(p_choice == 'P' && c_choice == 'R')
    {
        printf("YOU WON!\n");
        printf("Computer's choice: %c\n",c_choice);
    }
    // Checks if it is a draw condition
    if(p_choice == c_choice)
    {
        printf("IT'S A DRAW!\n");
        printf("Computer's choice: %c\n",c_choice);
    }
    // Checks computer's winning conditions
    if(p_choice == 'R' && c_choice == 'P')
    {
        printf("YOU LOST!\n");
        printf("Computer's choice: %c\n",c_choice);
    }
    else if(p_choice == 'S' && c_choice == 'R')
    {
        printf("YOU LOST!\n");
        printf("Computer's choice: %c\n",c_choice);
    }
    else if(p_choice == 'P' && c_choice == 'S')
    {
        printf("YOU LOST!\n");
        printf("Computer's choice: %c\n",c_choice);
    }
}
