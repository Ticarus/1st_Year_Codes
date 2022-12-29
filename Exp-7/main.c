#include <stdio.h>
#include <stdlib.h>

// This program is a digital clock

int main()
{
    int h, m, s;
    int d = 1000;  // We add a delay of 1000 milliseconds and we will use it in the function sleep
    printf("Set time:(hh:mm:ss) \n");
    scanf("%d%d%d",&h,&m,&s);

    if(h > 24 || m > 60 || s > 60)
    {
        printf("ERROR!\n");
        exit(0);
    }

    while(1)  // This is an infinite loop and anything inside will repeat itself to infinity
    {
        s++;

        if(s > 59)
        {
            m++;
            s = 0;
        }

        if(m > 59)
        {
            h++;
            m = 0;
        }

        if(h > 23)
        {
            h = 0;
        }

        printf("%d:%d:%d",h,m,s);  // This prints the time in this format 00:00:00

        Sleep(d);  // The function Sleep() slows down the while loop (NOTE:If you don't type it uppercase it only executes the while loop once and gets stuck at 00:00:00)

        system("cls");  // This clears screen
    }

    return 0;
}
