#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kph,mph;
    printf("Input kilometers per hour: ");
    scanf("%f",&kph);
    mph = kph * 0.62;
    printf("%.2f miles per hour",mph);
    return 0;
}
