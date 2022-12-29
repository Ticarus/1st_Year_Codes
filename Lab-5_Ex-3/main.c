#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2,num3;

    printf("Enter three numbers: ");

    scanf("%f %f %f",&num1,&num2,&num3);

    if( num1 > num2 && num1 > num3)
    {
        printf("%.2f is the maximum",num1);
    }
    else if( num2 > num1 && num2 > num3)
    {
        printf("%.2f is the maximum",num2);
    }
    else if( num3 > num1 && num3 > num1)
    {
        printf("%.2f is the maximum",num3);
    }
    return 0;
}
