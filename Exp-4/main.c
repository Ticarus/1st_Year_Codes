#include <stdio.h>
#include <stdlib.h>

float neededFuel(float distance,float avg_fuelconsumption);
float totalCost(float fuel_needed,float fuel_cost);

int main()
{
    float fuel_needed,fuel_cost,avg_fuelconsumption,cost,distance;

    printf("==== =  = ==== =         |   ====   ====   ==== ===== \n");
    printf("=    =  = =    =        |   =    = =    = ==      =   \n");
    printf("===  =  = ==== =       |    =      =    =  ==     =   \n");
    printf("=    =  = =    =      |     =    = =    =   ==    =   \n");
    printf("=    ==== ==== ====  |       ====   ==== ====     =   \n");

    printf("\n\n\nInput your vehicle's average fuel consumption(L/100km):");
    scanf("%f",&avg_fuelconsumption);

    printf("\nInput the cost of fuel(L/$):");
    scanf("%f",&fuel_cost);

    printf("\nInput the distance of trip(in km):");
    scanf("%f",&distance);

    fuel_needed = neededFuel(distance, avg_fuelconsumption);
    cost = totalCost(fuel_needed, fuel_cost);

    printf("\n\n\n==========Summary==========\n");
    printf("Distance:%.2fkm\n",distance);
    printf("Fuel needed:%.2fL\n",fuel_needed);
    printf("Cost of fuel(L/$):%.2f$\n",fuel_cost);
    printf("Your vehicle's average fuel consumption(L/100km):%.2f\n",avg_fuelconsumption);
    printf("Total cost you have to spend for fuel:%.2f$",cost);

    printf("\n\n\nNOTE:Keep in mind that the values calculated are approximate!");

    return 0;
}

float neededFuel(float distance,float avg_fuelconsumption)
{
    float fuel_need;

    fuel_need = (distance/100) * avg_fuelconsumption;

    return fuel_need;
}

float totalCost(float fuel_needed,float fuel_cost)
{
    float total_cost;

    total_cost = fuel_needed * fuel_cost;

    return total_cost;
}
