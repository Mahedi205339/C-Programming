
#include <stdio.h>

int main()
{
    float a;

    printf("input the pH value  ");
    scanf("%f", &a);
    if (a < 0 || a > 14)
    {
        printf("please input valid pH value ");
    }
    else
    {
        if (a < 7)
        {
            printf("this liquid is acidic");
        }
        else if (a = 7)
        {
            printf("this liquid is neutral"); /* code */
        }
        else
        {
            printf("this liquid is basic");
        }
    }
    return 0;
}

// #include <stdio.h>

// int main() {
//     float a;

//     printf("input the pH value: ");
//     scanf("%f", &a);

//     if (a < 0 || a > 14) {
//         printf("please input a valid pH value");
//     } else {
//         if (a <= 7) {
//             printf("this liquid is acidic");
//         } else {
//             printf("this liquid is basic");
//         }
//     }

//     return 0;
// }
