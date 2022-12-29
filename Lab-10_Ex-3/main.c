#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[10],i,j,k;
    int sum = 0;
    printf("Enter 10 integers \n");
    for(i=0;i<10;i++)
    {
        printf("");
        scanf("%d",&numbers[i]);
    }
    for(j=0;j<10;j++)
    {
        sum += numbers[j];
    }
    printf("Sum:%d",sum);
    return 0;
}
