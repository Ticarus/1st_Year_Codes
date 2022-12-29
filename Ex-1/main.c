#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum=0;
    for(i=0;i<=10;i++)
    {
        sum += i;

        printf("%d ",i);
    }
    printf("\nSum is:%d",sum);
    return 0;
}
