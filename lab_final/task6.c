#include <stdio.h>

int main()
{
    char str[100];
    int alphabet = 0, digit = 0, specialChar = 0;

    gets(str);
    int i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            alphabet++;
        else if (str[i] >= '0' && str[i] <= '9')
            digit++;
        else
            specialChar++;
        i++;
    }
    printf("Alphabets = %d\n", alphabet);
    printf("Digits = %d\n", digit);
    printf("Special characters = %d", specialChar);
    return 0;
}