#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;

    // Input nine numbers
    printf("Enter nine numbers for the matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the matrix
    printf("\nThe matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
