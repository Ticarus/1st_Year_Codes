#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

// The program takes the book info file from the Ex-33; also reads each line and outputs it to the screen.

int main()
{
    char fileLine[100];  // Will hold each line of input

    fptr = fopen("c:\\users\\ereng\\Documents\\BookInfo.txt","r");

    if(fptr != 0)
    {
        while(!feof(fptr))   //feof() returns a true condition if you just read the last line from the file.
        {
            fgets(fileLine, 100, fptr);

            if(!feof(fptr))
            {
                puts(fileLine);
            }
        }
    }
    else
    {
        printf("\nError opening file.\n");
    }

    fclose(fptr);

    return 0;
}
