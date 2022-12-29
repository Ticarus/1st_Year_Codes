#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i,n,sum=0.0;
    printf("Input the number of terms:");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        printf("%.2f ",1/i);
        sum += 1/i;
    }
    printf("\nSum of series up to %.0f is %.2f",n,sum);
    return 0;
}
