#include <stdio.h>
int main(){
    int n ,i=0;
    printf("Input the value of n : ");
    scanf("%d",&n);
    int arr[n];

    while (i<n)
    {
       scanf("%d",&arr[i]);
       i++;
    }
    i = n-1 ;
    while (i>= 0)
    {
       printf("%d ," , arr[i]);
       i-- ;

    }
    
    
}