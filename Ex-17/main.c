#include <stdio.h>
#include <stdlib.h>

int main()
{
    int buy,sell,profit;
    printf("Input buy&sell prices: ");
    scanf("%d%d",&buy,&sell);
    profit = sell - buy;
    if(profit > 0)
    {
        printf("Profit:%d",profit);
    }
    else if(profit == 0)
    {
        printf("No profit");
    }
    else
    {
        printf("Loss:%d",profit);
    }
    return 0;
}
