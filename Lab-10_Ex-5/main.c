#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[30],i,j;
    numbers[0]=1;
    numbers[1]=1;
    for(i=2;i<30;i++)
    {
        numbers[i] = numbers[i-1] + numbers[i-2];
    }
    for(j=0;j<30;j++)
    {
        printf("%d\n",numbers[j]);
    }

    return 0;
}
