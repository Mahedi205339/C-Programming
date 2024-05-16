#include <stdio.h>

int main()
{
    //  increment of float num
    // for (float i = 1; i <= 5; i++)
    // {
    //     /* code */
    //     printf("%f \n", i);
    // }

    // increment of character

    // for (char ch = 'a'; ch <= 'z'; ch++)
    // {
    //     /* code */
    //     printf(" %c \n", ch);
    // }

    // infinite loop

    // for (int i = 1; i++;)
    // {
    //     /* code */
    //     printf("hello world");
    // }

    // int n;
    // printf("enter number : ");
    // scanf("%d", &n);

    // int i = 1;
    // while (i <= n)
    // {

    //     printf("%d \n", i);
    //     i++;
    // }

    // for (i = 0; i <= n;i++)
    // {
    //     /* code */
    //     printf("%d \n", i);

    // }
    // do while loop

    // int i = 1;

    // do
    // {
    //     printf("%d \n", i);
    //     i++;

    // } while (i <= -5);

    // print the sum of first n natural numbers.

    // int n;
    // printf("enter number : ");
    // scanf(" %d", &n);
    // int sum = 0;
    // while (n >= 0)
    // {
    //     sum += n;
    //     n--;
    // }
    // printf("sum of the numbers %d", sum);

    // print the table of a number intput by user

    int n;
    printf("enter number : ");
    scanf(" %d", &n);
    int sum;
    for (int i = 1; i <= n; i++)
    {
        sum = i * n;
        printf("%d \n", sum);
    }

    return 0;
}