#include <stdio.h>

int main(){
    int n , oddNum = 0, evenNum = 0;
    printf("Enter value of n: ");
    scanf("%d",&n);
    int arr[n];
     int  i = 0;

    while (i<n)
    {
        scanf("%d",&arr[i]);
        i++;
    }
     i = 0;
    while (i<n)
    {
        if(arr[i] % 2 == 0){
            evenNum++;
            // printf("%d", arr[i]);
        }else{
            oddNum++ ;
        }
        i++;
    }
  printf("Total odd students :%d \n", oddNum);
  printf("Total odd students :%d \n",evenNum);


    return 0 ;

}
