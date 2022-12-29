#include <stdio.h>
#include <stdlib.h>
int sumFunction(int a,int b);

int main()
{
    int a,b,total;
    printf("Input first integer:");
    scanf("%d",&a);
    printf("Input second integer:");
    scanf("%d",&b);
    total = sumFunction(a,b);
    printf("The total:%d",total);
    return 0;
}

int sumFunction(int a,int b)
{
    int sum;
    sum = a + b;
    return sum;
}
