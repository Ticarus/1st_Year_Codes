#include <stdio.h>
#include <stdlib.h>
void integerPower(int base,int exponent);

int main()
{
    int base,exponent;
    printf("Enter the base value: ");
    scanf("%d",&base);
    printf("Enter the exponent value: ");
    scanf("%d",&exponent);
    integerPower(base,exponent);
    return 0;
}

void integerPower(int base,int exponent)
{
    int answ,i;
    answ = 1;
    for (i = 1 ; i <= exponent ; i++)
    {
        answ *= base;
    }
    printf("%d",answ);
    return answ;
}
