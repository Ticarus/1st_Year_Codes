#include <stdio.h>
#include <stdlib.h>
void calculateSum(int n);

int main()
{
    int num;
    printf("Input an integer: ");
    scanf("%d",&num);
    calculateSum(num);
    return 0;
}

void calculateSum(int n)
{
    int sum;
    sum = (n*(n+1))/2;
    printf("%d",sum);
}
