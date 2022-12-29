/* This program asks a user for a username and a password. It tests
whether their password has an uppercase letter, lowercase letter,
and a digit. If it does, the program congratulates their selection.
If not, it suggests they might want to consider a password with more
variety for the sake of security. */
// stdio.h is needed for printf() and scanf()
// string.h is needed for strlen()
// ctype.h is needed for isdigit, isupper, and islower

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i,hasUpper,hasLower,hasDigit;
    char user[25],password[25];

    hasUpper = hasLower = hasDigit = 0;

    printf("Enter your user name:");
    scanf(" %s",&user);

    printf("Enter your password:");
    scanf(" %s",&password);

    //This loop goes through each character of the password and test whether it is a digit, uppercase letter then lowercase letter.

    for(i=0;i<strlen(password);i++)
    {
        if(isdigit(password[i]))
        {
            hasDigit = 1;

            continue;
        }

        if(isupper(password[i]))
        {
            hasUpper = 1;

            continue;
        }

        if(islower(password[i]))
        {
            hasLower = 1;
        }
    }

    //The if portion will only execute if all three variables below are 1, and the variables will only equal 1 if the appropriate character were each found

    if((hasDigit) && (hasUpper) && (hasLower))
    {
            printf("Excellent work %s\n",user);
            printf("Your password has  uppercase and a lowercase letters and a number.\n");
    }
    else
    {
            printf("You should reconsider a new password %s\n",user);
            printf("One that uses upper and lowercase letters and a number.");
    }

    return 0;
}
