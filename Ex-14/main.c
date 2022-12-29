#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,f=1;
    printf("==========Factorial Calculator==========\n");
    printf("Input an integer:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f *= i;
    }
    printf("The factorial of %d is %d",n,f);
    return 0;
}
