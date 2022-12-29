#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[] = "Eren Gecer";
    int age = 20;
    float pi = 3.14;

    //The sizeof() is used to find the number of memory locations it takes to store values of any data types.
    printf("The size of name is %d\n",sizeof(name));
    printf("The size of age is %d\n",sizeof(age));
    printf("The size of pi is %d\n",sizeof(pi));
    printf("The length of name is %d\n",strlen(name));
    //The strlen() is used to find the number of bytes but not including null zero.

    return 0;
}
