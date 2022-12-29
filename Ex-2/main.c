#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Input an integer: ");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("%d is an even integer",x);
    }
    else
    {
        printf("%d is an odd integer",x);
    }
    return 0;
}
