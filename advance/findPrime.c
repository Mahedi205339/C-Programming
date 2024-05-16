// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter the number :");
//     scanf("%d", &num);

//     for (int i = 2; i * i <= num; i++)
//     {
//         if (num % i == 0)
//         {
//            return printf("This num is not a prime number");

//         }
//         else
//         {
//           return  printf("This num is a Prime number");
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("This is not a prime number\n");
        return 0;
    }

    int is_prime = 1; // Assuming the number is prime initially

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            is_prime = 0; // Found a factor, so the number is not prime
            break; // Exit the loop since we found a factor
        }
    }

    if (is_prime) {
        printf("This number is a prime number\n");
    } else {
        printf("This number is not a prime number\n");
    }

    return 0;
}
