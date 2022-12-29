#include <stdio.h>
#include <stdlib.h>

int main()
{
    float weight1 , weight2 , quantity1, quantity2 , average;

    printf("Enter the first item's weight--> ");

    scanf("%f",&weight1);

    printf("Enter the first item's quantity--> ");

    scanf("%f",&quantity1);

    printf("Enter the second item's weight--> ");

    scanf("%f",&weight2);

    printf("Enter the second item's quantity--> ");

    scanf("%f",&quantity2);

    average = ((weight1 * quantity1) + (weight2 * quantity2)) / (quantity1 + quantity2);

    printf("Average value--> %.2f",average);

    return 0;
}
