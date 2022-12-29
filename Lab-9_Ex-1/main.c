#include <stdio.h>
#include <stdlib.h>
int factorial(int n);
float calculateSeries(int n);

int main()
{
    int n;
    printf("Input an integer: ");
    scanf("%d",&n);
    float series = calculateSeries(n);
    printf("Series sum is %f ",series);
    return 0;
}

int factorial(int n)
{
    int i;
    int fct = 1;
    for(i=1;i<=n;i++)
    {
        fct = fct * i;
    }
    return fct;
}

float calculateSeries(int n)
{
    float series = 0;
    int i;
    for(i=1;i<=n;i++)
    {
        series += ((float)(factorial(i))/(float)(i));
        printf("%d!/%d = %f\n",i,i,((float)(factorial(i))/(float)(i)));
    }
    return series;
}
