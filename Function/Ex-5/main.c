#include <stdio.h>
#include <stdlib.h>

int tester(int a);

int main()
{
    int a,t;
    printf("Function:Even or odd tester:\n");
    printf("----------------------------\n");
    printf("Input an integer:");
    scanf("%d",&a);
    t = tester(a);
    if(t == 1)
    {
        printf("The entered number is even.");
    }
    else
    {
        printf("The entered number is odd.");
    }
    return 0;
}

int tester(int a)
{
    int s;
    if(a%2==0)
    {
        s = 1;
    }
    else
    {
        s = 0;
    }
    return s;
}
