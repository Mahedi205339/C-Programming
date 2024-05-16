#include <stdio.h>

void swap(int a , int b);
void _swap(int *a , int *b);

int main(){
    int a = 4 , b= 6;
    _swap(&a , &b);
     printf("a = %d & b = %d \n" , a, b);
    return 0;
}

void swap(int a , int b){
    int t = a;
    a=b;
    b=t;
    printf("a = %d & b = %d \n" , a, b);
}
void _swap(int *a, int *b){
  int t = *a;
  *a = *b;
  *b = t;
  printf("a= %d & b= %d \n",*a ,*b);
}