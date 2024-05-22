#include<stdio.h>
#include<string.h>

int countLength(char arr[]);

int main (){
   char name[100];
   fgets(name,100,stdin);

   printf("length is : %d",countLength(name));

   return 0;

   //if we use string library
   strlen(name); //this function for count the length of a sting.but the length is now assigned in integer form;
   //strcpy(newstr, oldstr); this function is for copy the string;



}


int countLength(char arr[]){

    int count = 0;

    for(int i =0;arr[i]!='\0';i++){
        count++;
    }

    return count-1;
}
