#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value1,value2,sum;
    printf("Sum Calculator\nNote:Only works with integers\n");
    printf("Enter value1: ");
    scanf("%d",&value1);
    printf("Enter value2: ");
    scanf("%d",&value2);
    sum = value1+value2;
    printf("Sum of %d and %d is %d",value1,value2,sum);
    return 0;
}
