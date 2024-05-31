#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char character;
    int i = 0;

    while (character != '\n')
    {
        scanf("%c", &character);
        str[i] = character;
        i++;
    }

    str[i] = '\0'; // %c does not take '\0' by itself;
    puts(str);
}