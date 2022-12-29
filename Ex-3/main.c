#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 2, j = 5, n;
    n = (i++) * j;   //Brackets does not change the preceding of post increment they are still the last operation for C

    printf("%d",n);
    return 0;
}
