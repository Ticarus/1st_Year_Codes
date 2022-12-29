#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;                              //for loops
    float cons_day_kwh[30];             //stores days' consumed energy
    float cost_per_kwh;                 //stores cost of energy per kwh
    float cons_month_total_kwh=0.0;     //stores total consumed energy that month
    float avg_cons_kwh_daily;           //stores average of daily consumption that month
    float total_cost;                   //stores total cost of the bill

    printf("==========Bill Calculator==========\n");
    printf("Input the cost per kwh:");
    scanf("%f",&cost_per_kwh);

    for(i=0;i<30;i++)           //gets 30 days consumed energy with a for loop
    {
        printf("\nInput day%d's energy consumed in kwh:",i+1);
        scanf("%f",&cons_day_kwh[i]);

        cons_month_total_kwh += cons_day_kwh[i];        //calculates total consumed energy in that 30 days(month)
    }

    avg_cons_kwh_daily = cons_month_total_kwh / 30;     //calculates average of daily consumption in that 30 days(month)

    total_cost = cons_month_total_kwh * cost_per_kwh;   //calculates total cost of the bill

    printf("\n\n====================Electric Bill====================\n");
    printf("*****************************************************\n\n");
    printf("         Cost per kwh:%.3f\n\n",cost_per_kwh);
    printf("         Total consumption:%.3f\n\n",cons_month_total_kwh);
    printf("         Average daily consumption:%.3f\n\n",avg_cons_kwh_daily);
    printf("         Total cost:%.3f\n\n",total_cost);
    printf("*****************************************************\n");
    printf("=====================================================\n\n");

    return 0;
}
