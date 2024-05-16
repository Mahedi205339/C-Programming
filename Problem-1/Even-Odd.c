#include<stdio.h>

//Function to count the numbers of even and odd numbers
void countEven(int arr[], int n , int *evenCount, int *oddCount){
    for(int i = 0;i<n;i++){
        *evenCount = 0;
        *oddCount = 0;
        for(int i = 0;i<n;i++){
            if(arr[i] % 2 == 0)
            (evenCount)++;
            else
            (*oddCount)++;

        }

    }
}

int main(){
    int numFriends;
    printf("Enter the number of friends: ");
    scanf("%d",&numFriends);
    int rollNumbers[numFriends];
    printf("Enter the roll number of %d friends: ", numFriends);
     for(int i = 0; i< numFriends;i++){
        scanf("%d",&rollNumbers[i]);
     }

    int evenCount , oddCount ;
    
}
