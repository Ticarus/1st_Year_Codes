#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

//The program opens the existing book info file from the Ex-33, and adds a line to the end

int main()
{
    fptr = fopen("c:\\users\\ereng\\Documents\\BookInfo.txt","a");

    if(fptr == 0)
    {
        printf("Error opening th file!\n");
        exit (1);
    }

    // Adds the line at the end

    fprintf(fptr, "\nMore books to come!\n");

    fclose(fptr);  // Always close your files

    return 0;
}
