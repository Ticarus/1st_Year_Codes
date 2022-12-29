#include <stdio.h>
#include <stdlib.h>

int main()     //This code is to learn what break does
{
    int i;

    for(i=0;i<=10;i++)
    {
        printf("%d\n",i);

        if(i==4)
        {
            break;    //It gets you out of the loop
        }
    }
    printf("We are out of the loop.");   //Statements out of the loop is executed too

    return 0;
}
