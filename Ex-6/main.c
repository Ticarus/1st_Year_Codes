#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    printf("Input an integer: ");
    scanf("%d",&m);
    if(m!=0)
    {
        if(m>0)
        {
            n = 1;
        }
        else
        {
            n = -1;
        }
    }
    else
    {
        n = 0;
    }
    printf("The value of m is:%d\n",m);
    printf("The value of n is:%d",n);
    return 0;
}
