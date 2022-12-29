#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius,fahrenheit;
    printf("Enter the temperature degree in celsius: ");
    scanf("%f",&celsius);
    fahrenheit = celsius*1.8+32;
    printf("%.1f celsius is %.1f fahrenheit",celsius,fahrenheit);
    return 0;
}
