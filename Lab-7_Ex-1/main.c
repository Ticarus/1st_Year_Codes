#include <stdio.h>
#include <stdlib.h>

void aveTwo(float n1,float n2,float avg);

int main()
{
    float num1,num2,avg;
    printf("Input two numbers:\n");
    scanf("%f %f",&num1,&num2);
    aveTwo(num1,num2,avg);
    return 0;
}

void aveTwo(float n1,float n2,float avg)
{
    avg = (n1+n2)/2;
    printf("Average--> %.1f \n",avg);
}
