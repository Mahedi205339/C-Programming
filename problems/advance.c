#include <stdio.h>

// function & Recursion

//  function: function is a block of code that perform particular task

// declaration/prototype
void printHello();
void printGoodbye();

int main()
{
    printHello(); // function call
    printHello();
    printGoodbye();
    return 0;
}
// function defintion
void printHello()
{
    printf("Hello world \n");
}
void printGoodbye()
{
    printf("Goodbye world \n");
}
