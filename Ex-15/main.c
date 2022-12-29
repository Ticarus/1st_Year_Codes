#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amount , twohundred s , hundreds , fifties , twenties , tens , fives;

    printf("Enter your money amount--> ");

    scanf("%d",&amount);

    twohundreds = amount / 200;

    hundreds = (amount % 200) / 100;

    fifties = ((amount % 200) % 100) / 50;

    twenties = (((amount % 200) % 100) % 50) / 20;

    tens = ((((amount % 200) % 100) % 50) % 20) / 10;

    fives = (((((amount % 200) % 100) % 50) % 20) % 10) / 5;

    printf("%d Note(s) of 200\n%d Note(s) of 100\n%d Note(s) of 50\n%d Note(s) of 20\n%d Note(s) of 10\n%d Note(s) of 5",twohundreds,hundreds,fifties,twenties,tens,fives);

    return 0;
}
