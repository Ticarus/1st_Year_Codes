#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()         //To learn putchar()
{
    int i;
    char msg[] = "C is fun!";

    for(i=0;i<strlen(msg);i++)
    {
        putchar(msg[i]);   //Outputs a single character
    }

    putchar('\n');   //One line break after loop is done

    return 0;
}
