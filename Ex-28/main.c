#include <stdio.h>   // fgets() is here
#include <stdlib.h>
#include <string.h>  // To use gets()

int main()
{
    char input[81];  // Holds a string as long as 80 characters
    char *iptr = input;  // Also could have done char *iptr = &input[0]

    gets(iptr);  // Makes sure that iptr points to the string typed by the user

    /*
    // Use fgets() if you want to limit the number of characters accepted from the user. fgets() works like gets(), except that you specify a length argument.

    fgets(iptr, 81, stdin);  // Gets up to 80 chars and adds null zero

    /*
        The second value is the maximum number of characters you want to save from the user’s input.
    Always leave one for the string’s null zero. The pointer iptr can point to a string as long as 81
    characters. If the user enters a string less than 81 characters, iptr points to that string with no
    problem. However, if the user goes wild and enters a string 200 characters long, iptr points only to
    the first 80, followed by a null zero at the 81st position that fgets() added, and the rest of the user’s
    input is ignored.

        You can use fgets() to read strings from data files. The third value of fgets() can
    be a disk file pointer, use stdin as the third value you send to fgets() so that fgets() goes to the
    keyboard for input and not somewhere else.
    */

    printf("%s",iptr);

    return 0;
}
