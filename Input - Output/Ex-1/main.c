#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp_c,temp_f;
    printf("Enter the temperature (Celsius): ");
    scanf("%f",&temp_c);
    temp_f = (temp_c * 1.8) + 32;
    printf("%.2f degrees Fahrenheit",temp_f);
    return 0;
}
