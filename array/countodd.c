#include <stdio.h>

int countOdd(int arr[], int n);

int main()

{

    int arr[] = {1, 3, 45, 6, 456, 35, 34, 33, 45};
    printf("%d", countOdd(arr, 9));

    return 0;
}

int countOdd(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
}