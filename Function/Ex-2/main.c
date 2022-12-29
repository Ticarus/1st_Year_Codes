#include <stdio.h>
#include <stdlib.h>
int mult(int a,int b);

int main()
{
    int a,b,product;
    printf("Enter two integers separated by a comma:");
    scanf("%d,%d",&a,&b);
    product = mult(a,b);
    printf("The multiplication:%d",product);
    return 0;
}

int mult(int a,int b)
{
    int s;
    s = a*b;
    return s;
}
