#include <stdio.h>
#include <stdlib.h>
int findMin(int n1,int n2,int n3);

int main()
{
    int num1,num2,num3;
    printf("Input three integers: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    findMin(num1,num2,num3);
    return 0;
}

int findMin(int n1,int n2,int n3)
{
    if(n1<=n2 && n1<=n3)
    {
        printf("%d is the minimum",n1);
    }
    else if(n2<=n3 && n2<=n1)
    {
        printf("%d is the minimum",n2);
    }
    else if(n3<=n2 && n3<=n1)
    {
        printf("%d is the minimum",n3);
    }
}
