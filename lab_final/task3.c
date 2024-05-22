#include <stdio.h>
int sum = 0;
int remaining = 0;
int reverse(int num);

int main()
{
    int num = 0;
    scanf("%d", &num);

    int result = reverse(num);
    printf("Reverse of %d = %d", num, result);
    return 0;
}

int reverse(int num)
{
    if (num)
    {
        remaining = num % 10;
        sum = sum * 10 + remaining;
        reverse(num / 10);
    }
    else
    {

        return sum;
    }
}