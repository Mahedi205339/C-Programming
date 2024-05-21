#include <stdio.h>

void fib(int n);

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series up to %d terms:\n", n);
    fib(n);
    return 0;
}

void fib(int n)
{
    int fibNm1 = 0, fibNm2 = 1, fibN = 0;
    if (n >= 1)
        printf("%d ", fibNm1);
    if (n >= 2)
        printf("%d ", fibNm2);
    for (int i = 3; i <= n; i++)
    {
        fibN = fibNm1 + fibNm2;
        printf("%d ", fibN);
        fibNm1 = fibNm2;
        fibNm2 = fibN;
    }
}
