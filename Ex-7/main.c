#include <stdio.h>
#include <stdlib.h>

int main()    //This code is to learn switch-case
{
    int choice,num1,num2,sum,sub,prod,div,rmdr;

    printf("||=====||Basic Calculator||=====||\n");
    printf("         1.Addition\n");
    printf("         2.Subtraction\n");
    printf("         3.Multiplication\n");
    printf("         4.Division\n");
    printf("         5.Exit\n");

    do
    {
        printf("Input your choice:");
        scanf("%d",&choice);

        if(choice > 0 && choice < 5)                  //This if statement ensures when user's choice input is 5 code does not ask for any number it directly exits
        {
            printf("Input the first number:");
            scanf("%d",&num1);
            printf("Input the second number:");
            scanf("%d",&num2);

        }

        switch(choice)
        {
            case(1): sum = num1 + num2;                        //Finds the multiplication
                     printf("%d + %d = %d\n",num1,num2,sum);
                     break;

            case(2): sub = num1 - num2;                        //Finds the subtraction
                     printf("%d - %d = %d\n",num1,num2,sub);
                     break;

            case(3): prod = num1 * num2;                      //Finds the multiplication
                     printf("%d x %d = %d\n",num1,num2,prod);
                     break;

            case(4): div = num1 / num2;                      //Finds the division and the remainder
                     rmdr = num1 % num2;
                     printf("%d / %d = %d\n",num1,num2,div);
                     printf("Remainder:%d\n",rmdr);
                     break;

            case(5): exit(0);  //Exits the program early

            default: printf("%d is not a valid choice.\n",choice);
                     printf("Try again.\n");
                     break;
        }

    }
    while((choice > 0) || (choice < 5));

    return 0;
}
