#include <stdio.h>
#include <stdlib.h>
void calculateCharge(int hours);

int main()
{
    int hours;
    printf("How many hours are you going to park your car: ");
    scanf("%d",&hours);
    calculateCharge(hours);
    return 0;
}

void calculateCharge(int hours)
{
    float charge;
    if (hours <= 3)
    {
        charge = 2;
    }
    else if (hours > 3)
    {
        charge = 2 + ((hours - 3) * 0.5);
    }
    printf("Parking charge is %f",charge);
    return charge;
}

