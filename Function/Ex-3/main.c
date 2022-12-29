#include <stdio.h>
#include <stdlib.h>

int sqrt(int a)
{
    int s;
    s = a*a;
    return s;
}

int main()
{
    int a;
    printf("Input an integer:");
    scanf("%d",&a);
    printf("The square root of %d is %d",a,sqrt(a));
    return 0;
}
