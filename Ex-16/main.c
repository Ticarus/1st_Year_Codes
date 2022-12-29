#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chr;
    printf("Input an alphabet: ");
    scanf("%c",&chr);
    if(chr == 'a' || chr == 'A' || chr == 'e' || chr == 'E' || chr == 'u' || chr == 'U' || chr == 'i' || chr == 'I' || chr == 'o' || chr == 'O')
    {
        printf("The alphabet is a vowel");
    }
    else if((chr >= 'a' && chr <= 'z') || (chr >= 'A' && chr <= 'Z'))
    {
        printf("The alphabet is a consonant");
    }
    else
    {
        printf("The character is not an alphabet");
    }
    return 0;
}
