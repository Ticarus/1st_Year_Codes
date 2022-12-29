#include <stdio.h>
#include <stdlib.h>

int main()
{
    float charge;
    int id,cnsmd;
    char name[20];
    printf("Input your customer ID: ");
    scanf("%d",&id);
    printf("Input your name: ");
    scanf("%s",&name);
    printf("Input unit consumed: ");
    scanf("%d",&cnsmd);
    if(cnsmd < 200)
    {
        charge = (float)cnsmd * 1.20;
    }
    else if(cnsmd >= 200 && cnsmd < 400)
    {
        charge = (float)cnsmd * 1.40;
    }
    else if(cnsmd >= 400 && cnsmd < 600)
    {
        charge = (float)cnsmd * 1.80;
    }
    else if(cnsmd >= 600)
    {
        charge = (float)cnsmd * 2.40;
    }

    printf("\n==========Electricity Bill==========\n");
    printf("Customer ID No:%d\n",id);
    printf("Customer Name:%s\n",name);
    printf("Unit Consumed:%d\n",cnsmd);
    printf("Charge Amount:%.2f",charge);
    return 0;
}
