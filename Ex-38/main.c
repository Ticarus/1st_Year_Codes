#include <stdio.h>
#include <stdlib.h>

// This program is a simple demonstration of the difference between global variables and local variables.

int g1 = 10;

int main()
{
    float l1 = 9.0;

    printf("%d %.2f\n", g1, l1);  // Prints the 1st global and first local variable

    prAgain();  // Calls our first function

    return 0;
}

float g2 = 19.0;

prAgain()
{
    int l2 = 5;

    // Can't print l1 it is local to main
    printf("%d %2.f %d\n", l2, g2, g1);

    return;
}
