#include <stdio.h>
#include <string.h>

int countVowels(char str[]);

int main()
{
    char str[] = "Hello world";
    countVowels(str);
}

int countVowels(char str[])
{
    int count = 0;
    int consonant = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
        else{
            consonant ++;
        }
    }
    printf("total vowels : %d \n", count);
    printf("total vowels : %d \n", consonant);
}