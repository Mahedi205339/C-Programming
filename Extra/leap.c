#include <stdio.h>
int main(){
  int num , reminder,reverseNum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0){
        reminder = num % 10;
        reverseNum = reverseNum *10+ reminder ;
        num /= 10;
    };

    // Printing the reversed number
     printf("Reversed number: %d\n", reverseNum);


}

