#include <stdio.h>
#include <stdbool.h>
int main(){
    int n , roll ;
    bool isFail = false;
    printf("Input value of n :");
    scanf("%d", &n);
    int arr[n];
    int i = 0 ;
    while (i < n)
    {
        scanf("%d",&arr[i]);
        i++;
    }

    printf("Enter Bruce Wayne's roll :");
    scanf("%d" , &roll);

    i = 0;
    while (i<n)
    {
        if(arr[i] == roll){
            isFail = true ;
        }
        else{
            isFail= false ;
        }
        i++;
    }

    if(isFail){
        printf(" Bruce Wayne is on the list!");
    }else{
        printf("Bruce Wayne is not on the list !");
    }
    
    return 0;

}