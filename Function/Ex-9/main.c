#include <stdio.h>
#include <stdlib.h>

int checkArmstrong(int n1);
int checkPerfect(int n1);

int main()
{
    int n1;
    printf("Function:Check if the number is Armstrong or Perfect\n");
    printf("----------------------------------------------------\n");
    printf("Input the number:");
    scanf("%d",&n1);
    if(checkArmstrong(n1))
    {
        printf("The number %d is an Armstrong number\n",n1);
    }
    else
    {
        printf("The number %d is not an Armstrong number\n",n1);
    }
    if(checkPerfect(n1))
    {
        printf("The number %d is a Perfect number\n",n1);
    }
    else
    {
        printf("The number %d is not a Perfect number\n",n1);
    }
    return 0;
}

int checkArmstrong(int n1)
{
    int sum,num,ld;
    sum = 0;
    num = n1;
    while(num!=0)
    {
        ld = num%10;
        sum += ld*ld*ld;
        num = num/10;
    }
    return(n1 == sum);
}

int checkPerfect(int n1)
{
    int sum,num,i;
    sum = 0;
    num = n1;
    for(i=1;i<num;i++)
    {
        if(num % i == 0)
        {
            sum += i;
        }
    }
    return(n1 == sum);
}

