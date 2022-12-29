#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,sum,product;

    float division;

    printf("Enter two integer numbers: ");

    scanf("%d %d",&n1,&n2);

    sum = n1 + n2;

    product = n1 * n2;

    division = (float)n1 / n2;

    printf("%d and %d numbers sum is %d, their product is %d and their division is %.2f",n1,n2,sum,product,division);

    return 0;
}
