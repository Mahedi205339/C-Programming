#include <stdio.h>

int numFactorial(int num);

int main()
{
    int num ;
    printf("Enter a number : ");
    scanf("%d" , &num);
    printf("factorial  is : %d ", numFactorial(num));
    return 0;
}

int numFactorial(int num)
{
    if (num == 1)
    {
        return 1;
    }

    int factNm1 = numFactorial(num - 1);
    int fact = factNm1 * num;
}