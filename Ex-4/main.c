#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[5],i,j,cubes[5];
    for(i=1;i<=5;i++)
    {
        printf("Input number %d:",i);
        scanf("%d",&numbers[i-1]);
        cubes[i-1] = numbers[i-1]*numbers[i-1]*numbers[i-1];
    }
    for(j=1;j<=5;j++)
    {
        printf("Number %d is %d and cube of it is %d\n",j,numbers[j-1],cubes[j-1]);
    }
    return 0;
}
