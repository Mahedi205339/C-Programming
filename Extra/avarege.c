#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Before swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    // Swap the numbers without using a third variable
    num1 = num1 + num2; // Add both numbers and store the result in num1
    num2 = num1 - num2; // Subtract num2 from the sum stored in num1 and store it in num2
    num1 = num1 - num2; // Subtract num2 from the new value of num1 and store it in num1

    printf("After swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}
