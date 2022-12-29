#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void calculateHypotenuse(float side1,float side2);

int main()
{
    float side1,side2;
    printf("Enter the first sides of the triangle: ");
    scanf("%f %f",&side1,&side2);
    calculateHypotenuse(side1,side2);
    return 0;
}

void calculateHypotenuse(float side1,float side2)
{
    float h;
    h = sqrt((pow(side1,2)+pow(side2,2)));
    printf("Hypotenuse of the triangle with side lengths of %.2f and %.2f is %.2f",side1,side2,h);
    return h;
}
