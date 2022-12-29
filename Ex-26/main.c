#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[5],j,pctr=0,nctr=0;

    printf("Enter the first number--> ");

    scanf("%d",&numbers[0]);

    printf("Enter the second number--> ");

    scanf("%d",&numbers[1]);

    printf("Enter the third number--> ");

    scanf("%d",&numbers[2]);

    printf("Enter the fourth number--> ");

    scanf("%d",&numbers[3]);

    printf("Enter the fifth number--> ");

    scanf("%d",&numbers[4]);

    for(j = 0;j < 5;j++)
    {
        if(numbers[j] > 0)
        {
            pctr++;
        }
        else if(numbers[j] < 0)
        {
            nctr++;
        }
    }
    printf("Number of positive numbers: %d\n",pctr);

    printf("Number of negative numbers: %d",nctr);

    return 0;
}
