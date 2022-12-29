#include <stdio.h>
#include <stdlib.h>
void calculateCharge(int hours);

int main()
{
    int hours;
    printf("How many hours will your car be parked: ");
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
        int extraHours = hours - 3;
        charge = 2 + (extraHours * 0.5);
    }
    printf("Your parking charge is %.1f",charge);
    return charge;
}
