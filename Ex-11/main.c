#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>    //Essential to use isalpha() and isdigit()

int main()
{
    char inChar;

    printf("Input a character or a digit:");
    scanf("%c",&inChar);


    if(isalpha(inChar))    //Returns 1 if inChar is a character if anything else returns 0
    {
        printf("Your input is a character\n");
    }

    if(isdigit(inChar))    //Returns 1 if inChar is a digit if anything else returns 0
    {
        printf("Your input is a digit\n");
    }

    return 0;
}
