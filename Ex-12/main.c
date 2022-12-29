#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>     //Essential to use isupper() and islower()
#include <string.h>

int main()
{
    char inLetter;

    printf("Input a letter:");
    scanf("%c",&inLetter);

    if(isupper(inLetter))    //Returns 1 if the input letter is uppercase otherwise returns 0
    {
        printf("The letter you input is an uppercase");
    }

    if(islower(inLetter))    //Returns 1 if the input letter is lowercase otherwise returns 1
    {
        printf("The letter you input is a lowercase");
    }

    return 0;
}
