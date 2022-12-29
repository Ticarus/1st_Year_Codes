#include <stdio.h>
#include <stdlib.h>
void factorialN(int n);

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    factorialN(num);
    return 0;
}

void factorialN(int n)
{
    int fct=1;
    int j;
    if(n<0)
    {
        printf("Invalid value");
    }
    else
    {
        for(j = 1 ; j <= n ; j++)
        {
          fct*=j;
        }
        printf("Factorial of %d is %d",n,fct);
    }
}
