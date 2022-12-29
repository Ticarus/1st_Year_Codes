#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[10],i,sum=0;
    float avg;
    for(i=1;i<=10;i++)
    {
        printf("Input number %d:",i);
        scanf("%d",&numbers[i-1]);
        sum = sum + numbers[i-1];
    }
    avg = (float)sum/10;
    printf("The sum:%d\nThe average:%.2f",sum,avg);
    return 0;
}
