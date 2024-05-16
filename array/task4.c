#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    srand(time(NULL)); // Seed for random number generation
    int array[10];

    // Generating 10 random numbers between 1 and 100
    for (int i = 0; i < 10; i++) {
        array[i] = rand() % 100 + 1;
    }

    int iterations = 0;
    bool allPrimes = false;

    while (!allPrimes) {
        allPrimes = true;
        iterations++;

        // Printing array contents
        printf("Iteration %d: ", iterations);
        for (int i = 0; i < 10; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");

        // Checking and replacing non-prime numbers
        for (int i = 0; i < 10; i++) {
            if (!isPrime(array[i])) {
                array[i] = rand() % 100 + 1;
                allPrimes = false; // At least one non-prime found, need to continue iteration
            }
        }
    }

    // Printing final array contents
    printf("Final array after %d iterations: ", iterations);
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Total iterations needed: %d\n", iterations);

    return 0;
}
