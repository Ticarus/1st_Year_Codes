#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()             //To learn getchar()
{
    int i;
    char msg[25];

    printf("Type up to 25 characters and the press Enter\n");

    for(i=0;i<25;i++)
    {
        msg[i] = getchar();  //Takes a single character input

        if(msg[i] == '\n')
        {
            i--;

            break;
        }
    }

    putchar('\n');

    for(;i>=0;i--)             //continues with the value of i left by the first for loop
    {
        putchar(msg[i]);
    }

    putchar('\n');

    return 0;
}
