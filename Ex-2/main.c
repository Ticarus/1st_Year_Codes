#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,sum=0;
    printf("Input the number of terms:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum = sum+i;
        printf("%d ",i);
    }
    printf("\nSum is:%d",sum);
    return 0;
}
