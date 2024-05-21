#include <stdio.h>
// nth - number summation

int sum(int n);

int main()
{
    int n;
    printf("Enter the value of n :");
    scanf("%d", &n);
    printf("sum is : %d", sum(n));
}
int sum(int n)
{
    if(n == 1){
        return 1;
    }
    int sumNm1 = sum(n - 1);//sum of 1 to n-1 
    int sumN = sumNm1 + n;
    return sumN;
}
