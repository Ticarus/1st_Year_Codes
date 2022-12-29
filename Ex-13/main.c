#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp;
    printf("Input the temperature: ");
    scanf("%d",&temp);
    if(temp < 0)
    {
        printf("Freezing cold");
    }
    else if(temp >= 0 && temp < 10)
    {
        printf("Very cold");
    }
    else if(temp >=10 && temp < 20)
    {
        printf("Cold");
    }
    else if(temp >= 20 && temp < 30)
    {
        printf("Normal");
    }
    else if(temp >= 30 && temp < 35)
    {
        printf("Hot");
    }
    else if(temp >= 35 && temp < 40)
    {
        printf("Very hot");
    }
    else if(temp >= 40)
    {
        printf("Boiling hot");
    }
    return 0;
}
