#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base,height,area;


    printf("Enter the base and height of triangle: ",base,height);

    scanf("%f %f",&base,&height);

    area = ((float)1/(float)2)*base*height;

    printf("Triangle with base %.1f and height %.1f area is %.1f ",base,height,area);

    return 0;
}
