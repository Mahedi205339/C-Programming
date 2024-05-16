#include <stdio.h>

int main()
{
    int n, first = 0, second = 1, next,i;

    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);
      printf("Fibonacci Series up to %d terms:\n", n);

    if (n >= 1)
    {
        printf(" %d", first);
    }
    if (n >= 2)
    {
        printf(", %d", second);
    }
    for (i = 2; i < n; i++)
    {
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
    }

    return 0;
}
