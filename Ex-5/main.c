#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,mult[10];
    printf("Input an integer:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        mult[i-1] = n * i;
        printf("%d x %d = %d\n",n,i,mult[i-1]);
    }
    return 0;
}
