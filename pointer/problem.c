#include <stdio.h>

void doWork(int a, int b ,int *sum , int *prod, int *avg);

int main(){
    int a , b;
    printf("Enter a & b :");
    scanf("%d  %d", &a, &b);
    int sum , prod, avg ;
    doWork(a ,b , &sum , &prod ,&avg);
    printf("sum = %d , product = %d , average = %d \n " , sum ,prod , avg );

    return 0;
}

void doWork(int a , int b, int *sum , int *prod, int *avg){
     *sum = a+ b;
     *prod = a*b;
     *avg = (a+b)/2;

}