#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,pr1;

    printf("Input the first number(a)--> ");

    scanf("%f",&a);

    printf("Input the second number(b)--> ");

    scanf("%f",&b);

    printf("Input the third number(c)--> ");

    scanf("%f",&c);

    pr1 = (b*b) - (4*(a)*(c));

    if (pr1 > 0 && a != 0)
    {
        float x1,x2;

        pr1 = sqrt(pr1);

        x1 = (-b + pr1) / (2*a);

        x2 = (-b - pr1) / (2*a);

        printf("Root1 = %f\nRoot2 = %f",x1,x2);
    }
    else
    {
        printf("Impossible to find roots");
    }


    return 0;
}
