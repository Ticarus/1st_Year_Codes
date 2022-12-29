#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Input an integer: ");
    scanf("%d",&x);
    if(x<0)
    {
        printf("%d is a negative integer",x);
    }
    else
    {
        printf("%d is a positive integer",x);
    }
    return 0;
}
