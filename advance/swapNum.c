#include <stdio.h>
int main()
{
    int num, originalNum, firstDigit, lastDigit, swappedNum = 0, multiplier = 1;
    printf("Enter a number ");
    scanf("%d", &num);
    originalNum = num;
    // Extracting the Last digit
    lastDigit = num % 10;
    // Counting the last digit
    while (num >= 10)
    {
        num /= 10;
        multiplier *= 10;
    }
    // Extracting the first digit
    firstDigit = num;
    

    //Rebuilding the number with the first and last digits swapped 
    swappedNum = lastDigit *multiplier + (originalNum % multiplier);
    swappedNum = swappedNum - lastDigit ;
    swappedNum = swappedNum + firstDigit ;
    printf("Original number %d \n" , originalNum);
    printf("Number with first and last digits swapped %d: \n",swappedNum);
    return 0;
}