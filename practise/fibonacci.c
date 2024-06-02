#include <stdio.h>

int fib(int n);

int main()
{

    printf("fibonacci is : %d", fib(4));
    return 0;
}

int fib(int n)
{

    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    int Nm1 = fib(n - 1);
    int Nm2 = fib(n - 2);
    int num = Nm1 + Nm2;
    // printf("%d", num);
    return num;

}