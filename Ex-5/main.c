#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Input your age: ");
    scanf("%d",&age);
    if(age < 18)
    {
        printf("You're not eligible to vote");
    }
    else
    {
        printf("You're eligible to vote");
    }
    return 0;
}
