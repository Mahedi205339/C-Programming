#include<stdio.h>
int main (){
    char str[10];
    char str2[10];
    int length = 0;
    int palindrome = 1;
    printf("Input string :");
    gets(str);

    for(int i = 0; str[i] != '\0';i++){
        length++ ;
    }
    printf("%d",length);

    printf("Reverse string: ");
    for (int i = 0;i < length; i++){
        str2[i] =str[length - i - 1] ;
        
    }
    printf("\n %s", str2);

        for(int i = 0; i < length; i++){
            if(str[i] != str2[i]){
                palindrome = 0;
                break;
            }
        }
    printf("\n");
    if(palindrome){
        printf("The given string is a palindrome");
    }else{
        printf("The give string is not a palindrome");
    }

}