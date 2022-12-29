#include <stdio.h>
#include <stdlib.h>

int main()
{
    int distance;

    float fuel , average_consumption;

    printf("Enter the total distance taken(in km)--> ");

    scanf("%d",&distance);

    printf("Enter the fuel spent(in litres)--> ");

    scanf("%f",&fuel);

    average_consumption = distance / fuel;

    printf("Average consumption(km/L)--> %.2f ",average_consumption);

    return 0;
}
