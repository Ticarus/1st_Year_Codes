#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;
    printf("Input three numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("1st Number:%d    2nd Number:%d    3rd Number:%d",num1,num2,num3);
    if(num1 > num2 && num1 > num3)
    {
        printf("1st Number is the greatest");
    }
    else if(num2 > num1 && num2 > num3)
    {
        printf("2nd Number is the greatest");
    }
    else if(num3 > num1 && num3 > num2)
    {
        printf("3rd Number is the greatest");
    }
    else if(num1 == num2 && num2 == num3)
    {
        printf("\nNumbers are the same");
    }


    return 0;
}
