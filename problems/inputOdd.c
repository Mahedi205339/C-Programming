#include <stdio.h>
int main(){
     int a;
    int b;

    printf("input two odd numbers ");
    scanf("%d %d", &a, &b);
    if (a % 2 == 0 && b % 2 == 0)
    {
        for (int i = a; i <= b; i += 2)

        {
            printf("%d \n", i);
        }
    }
    else
    {
        printf("please input two odd number");
    }
    return 0;
}
