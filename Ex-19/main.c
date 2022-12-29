#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,sum=0,t=9;
    printf("Input the number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum +=t;
        printf("%d   ",t);
        t = t*10+9;
    }
    printf("\nThe sum of the series = %d",sum);
    return 0;
}
