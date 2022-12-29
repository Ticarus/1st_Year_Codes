#include <stdio.h>
#include <stdlib.h>

int prime(int);

int main()
{
    int n,a;
    printf("Function:Prime number check\n");
    printf("----------------------------\n");
    printf("Input the number you want to check:");
    scanf("%d",&n);
    a = prime(n);
    if(a == 1)
    {
        printf("The number %d is a prime number",n);
    }
    else if(a == 0)
    {
        printf("The number %d is not a prime number",n);
    }
    return 0;
}

int prime(int n)
{
    int a;
    if(n==2 || n==3 || n==5 || n==7 || n==11)
    {
        a = 1;
    }
    else if(n!=2)
    {
        if(n%2 != 0 && n%3 != 0 && n%5 != 0 && n%7 != 0 && n%11 != 0)
        {
            a = 1;
        }
        else
        {
            a = 0;
        }
    }
    return a;
}
