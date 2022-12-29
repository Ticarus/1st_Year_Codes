#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,numbers[5],total=0;

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
        if((numbers[j]%2) != 0)
        {
            total += numbers[j];
        }
    }
    printf("Sum of all odd values--> %d",total);
    return 0;
}
