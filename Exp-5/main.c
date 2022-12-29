#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice,n1,n2,sum,subtraction,multiplication,division,modulus;
    printf("===============Simple Calculator===============\n");
    printf("Enter 1 for summation\nEnter 2 for subtraction\nEnter 3 for multiplication\nEnter 4 for division\n");
    scanf("%d",&choice);
    printf("Input two numbers:");
    scanf("%d%d",&n1,&n2);
    if(choice==1)
    {
        sum = n1 + n2;
        printf("%d + %d = %d",n1,n2,sum);
    }
    else if(choice==2)
    {
        subtraction = n1 - n2;
        printf("%d - %d = %d",n1,n2,subtraction);
    }
    else if(choice==3)
    {
        multiplication = n1 * n2;
        printf("%d x %d = %d",n1,n2,multiplication);
    }
    else if(choice==4)
    {
        division = n1 / n2;
        modulus = n1 % n2;
        printf("%d / %d = %d",n1,n2,division);
        if(modulus != 0)
        {
            printf("\nRemainder:%d",modulus);
        }
    }
    else
    {
        printf("Invalid input,try again");
    }
    return 0;
}
