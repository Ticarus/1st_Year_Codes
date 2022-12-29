#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    printf("Enter two integers separated by a comma: ");
    scanf("%d,%d",&num1,&num2);
    if(num1==num2)
    {
        printf("%d and %d are equal",num1,num2);
    }
    else
    {
        printf("%d and %d are not equal",num1,num2);
    }
    return 0;
}
