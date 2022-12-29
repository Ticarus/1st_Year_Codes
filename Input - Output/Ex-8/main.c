#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3,sum;
    printf("Input three numbers separated by comma: ");
    scanf("%d, %d, %d",&num1,&num2,&num3);
    sum = num1 + num2 + num3;
    printf("Sum is %d",sum);
    return 0;
}
