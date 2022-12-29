#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice,num1,num2,sum,sub,mult,div,mod;
    printf("=====Simple Calculator=====\n");
    printf("Input the two integers:");
    scanf("%d%d",&num1,&num2);
    printf("Input 1 for summation\n");
    printf("Input 2 for subtraction\n");
    printf("Input 3 for multiplication\n");
    printf("Input 4 for division\n");
    printf("Input your choice:");
    scanf("%d",&choice);
    if(choice >= 1 && choice <= 4)
    {
        if(choice == 1)
        {
            sum = num1 + num2;
            printf("The sum of %d and %d is %d",num1,num2,sum);
        }
        else if(choice == 2)
        {
            sub = num1 - num2;
            printf("The subtraction of %d and %d is %d",num1,num2,sub);
        }
        else if(choice == 3)
        {
            mult = num1 * num2;
            printf("The multiplication  of %d and %d is %d",num1,num2,mult);
        }
        else if(choice == 4)
        {
            div = (float)num1 / (float)num2;
            mod = num1 % num2;
            printf("The division of %d and %d is %d",num1,num2,div);
            if(mod != 0)
            {
                printf("\nThe remainder of this division is %d",mod);
            }
        }

    }
    else
    {
        printf("Invalid choice input\nTry again");
    }
    return 0;
}
