#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,sum=0;
    printf("Input number of terms:");
    scanf("%d",&n);
    printf("The odd numbers are:");
    for(i=1;i<=n*2;i++)
    {
        if(i % 2 != 0)
        {
            sum += i;
            printf("%d ",i);
        }
    }
    printf("\nThe sum of odd natural numbers up to %d terms: %d",n,sum);
    return 0;
}
