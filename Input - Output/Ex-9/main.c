#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,sum,dif,prd;
    float quot;
    printf("Input two numbers separated by comma: ");
    scanf("%d, %d",&num1,&num2);
    sum = num1 + num2;
    dif = num1 - num2;
    prd = num1 * num2;
    quot = (float)num1 / (float)num2;
    printf("Sum:%d\nDifference:%d\nProduct:%d\nQuotient:%.2f",sum,dif,prd,quot);
    return 0;
}
