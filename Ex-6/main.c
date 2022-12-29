#include <stdio.h>
#include <stdlib.h>

int main()     //This code is to learn what continue does
{
    int i;

    for(i=0;i<=10;i++)
    {
        if((i%2)==1)
        {
            printf("I'm rather odd...\n");

            continue;   //When this is executed the loop sequence restarts early
        }
        printf("Even up!\n");
    }
    return 0;
}
