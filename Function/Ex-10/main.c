#include <stdio.h>
#include <stdlib.h>

int checkPerfect(int n1);
void PerfectNumbers(int min,int max);

int main()
{
    int min,max;
    printf("Function:Find the perfect numbers in the given range\n");
    printf("----------------------------------------------------\n");
    printf("Input lowest search limit of perfect numbers:");
    scanf("%d",&min);
    printf("Input highest search limit of perfect numbers:");
    scanf("%d",&max);
    printf("the perfect numbers between %d to %d is:\n",min,max);
    PerfectNumbers(min, max);
    return 0;
}

int checkPerfect(int n1)
{
    int i,sum;
    sum = 0;
    for(i=1;i<n1;i++)
    {
        if(n1%i==0)
        {
            sum += i;
        }
    }
    if(sum == n1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void PerfectNumbers(int min,int max)
{
    while(min<=max)
    {
        if(checkPerfect(min))
        {
            printf(" %d  ",min);
        }
        min++;
    }
}
