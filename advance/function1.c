#include <stdio.h>
void hello();
void bonjour();
int main()
{
    printf("enter f for french & a for American :");
    char ch;
    scanf("%c", &ch);
    if (ch == 'f')
    {
        bonjour();
    }
    else if (ch == 'a')
    {
        hello();
    }
    else{
        printf("please enter a or f");
    }
    
}
void hello()
{
    printf("Hello Brother \n");
}
void bonjour()
{
    printf("Bonjour \n");
}