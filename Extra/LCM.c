#include <stdio.h>

// Function to find the greatest common divisor (GCD) of two numbers
int gcd(int a, int b) {
    if (b == 0){
          return a;
    }

    return gcd(b, a % b);
}

// Function to find the least common multiple (LCM) of two numbers
int lcm(int a, int b) {
    // Using the formula: LCM(a, b) = (a * b) / GCD(a, b)
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    // Input the two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate and print the LCM
    printf("LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2));

    return 0;
}
