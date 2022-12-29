#include <stdio.h>
#include <stdlib.h>

int main()
{
    float height,weight,BMI;
    printf("Enter your height: ");
    scanf("%f",&height);
    printf("Enter your weight: ");
    scanf("%f",&weight);
    BMI=weight / (height*height);
    printf("Your height is %.1f, your weight is %.1f, your BMI is %.1f",height,weight,BMI);
    return 0;
}
