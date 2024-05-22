#include <stdio.h>
#include <string.h>

int main()
{
    int len = 0;
    char string[100] = {0};
    char target = 'a';
    char dest = 'z';
    gets(string);
    scanf("%c %c", &target, &dest);

    for (int i = 0; string[i] != '\0'; i++)
        len++;

    for (int i = 0; i < len; i++)
        if (string[i] == target)
        {
            string[i] = dest;
        }

    strrev(string);
    printf("The magic string: ");
    puts(string);
    return 0;
}