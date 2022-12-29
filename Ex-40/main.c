#include <stdio.h>
#include <stdlib.h>

// The program demonstrates passing an array to a function.

int main()
{
    char name[15] = "Michael Hatton";

    change(name);

    printf("Back in main(), the name is now %s.\n",name);

    return 0;  // Ends the program
}

/*********************************************************************************************************************************************************/

// Sometimes putting dividers like this is a nice break between your different functions.

change(char name[15])
{
    // Change the string stored at the address pointed to by name

    strcpy(name, "XXXXXXXXXXXXXX");

    return;  // Returns to main
}
