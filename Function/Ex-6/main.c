#include <stdio.h>
#include <stdlib.h>

int fact(int);

int main()
{
    int sum;
    sum = fact(1)/1 + fact(2)/2 + fact(3)/3 + fact(4)/4 + fact(5)/5;
    printf("Function:Find the sum of 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5:");
    printf("\n----------------------------------------------------------\n");
    printf("The sum of series is:%d",sum);
    return 0;
}

int fact(int n)
{
    int num=0,f=1;
    while(num<=n-1)
    {
        f = f + f * num;
        num++;
    }
    return f;
}
