#include <stdio.h>

int main()
{
    int number, lastDigit, secondLastDigit, product;

    scanf("%d", &number);
    lastDigit = number % 10;

    secondLastDigit = (number / 10) % 10;
    product = lastDigit * secondLastDigit;
    printf("%d\n", product);

    return 0;
}