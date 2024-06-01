#include <stdio.h>
#include <string.h>

void checkChar(char str[], char ch);

int main()
{
    char str[100];
    char character;
    int i = 0;

    printf("type the sting :");
    gets(str);
    puts(str);

    char ch;
    printf("type the character :");
    scanf("%c", &ch);

    checkChar(str, ch);
}

void checkChar(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            /* code */
            printf("character is present!");
            break;
        }
    }
    printf("character is not present!");
}