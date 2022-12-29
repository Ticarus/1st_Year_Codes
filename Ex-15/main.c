/* This program asks a user for their hometown and the two-letter
abbreviation of their home state. It then uses string concatenation
to build a new string with both town and state and prints it using
puts. */
// stdio.h is needed for puts() and gets()
// string.h is needed for strcat()


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char city[15];
    char st[3];
    char full_Location[18] = "";

    puts("What town do you live in?");    //Outputs the string on screen
    gets(city);   //Gets an input for the city as a string

    puts("What state do you live in (2-letter abbreviation)");
    gets(st);

    //Concatenates the strings
    strcat(full_Location, city);
    strcat(full_Location, ", ");      //Adds a comma and space between the city and the state abbreviation
    strcat(full_Location, st);

    puts("\nYou live in ");
    puts(full_Location);

    return 0;
}
