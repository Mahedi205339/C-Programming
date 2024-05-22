#include <stdio.h>

void printString(char arr[]);

int main()
{

    // char name[50];
    // scanf("%s",name);
    // printf("your name is %s",name);
    // return 0;

    // char str[100];
    // fgets(str, 100, stdin);
    //  fgets(string name , string size ,file )
    // fgets stops when n -1 char input or new line is entered;
    // puts(str);

    char *canChange = "Hello World";
    puts(canChange);
    canChange = "Hello Mahedi";
    puts(canChange);
}
void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        /* code */
        printf("%c", arr[i]);
    }
    printf("\n");
}