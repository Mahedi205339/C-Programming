#include <stdio.h>
int main(){
    int age = 54 ;
    int *ptr = &age;
    int **pptr = &ptr;
   printf("%d", **pptr);
   return 0;
}
