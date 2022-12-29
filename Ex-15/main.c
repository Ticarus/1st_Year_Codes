#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,sum=0;
    printf("Input number of terms:");
    scanf("%d",&n);
    printf("The even numbers are: ");
    for(i=1;i<=n*2;i++)
    {
        if(i % 2 != 1)
        {
            printf("%d ",i);
            sum += i;
        }

    }
    printf("\nThe sum of even natural numbers up to %d terms:%d",n,sum);
    return 0;
}
