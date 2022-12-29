#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 , num2 , sum;

    printf("Enter the first integer--> ");

    scanf("%d",&num1);

    printf("Enter the second integer--> ");

    scanf("%d",&num2);

    sum = num1 + num2;

    printf("Sum of the above integers --> %d",sum);

    return 0;
}
