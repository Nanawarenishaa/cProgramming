#include <stdio.h>

int main() {
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {10,23,56,67,78,23,56};
    int arr1Len = sizeof(arr1)/sizeof(arr1[0]);
     int arr2Len = sizeof(arr2)/sizeof(arr2[0]);
        int sum=0;
        printf(" Array 1:\n");
    for(int i = 0 ; i < arr1Len  ; i++ ){
        printf(" %d\n",arr1[i]);
        sum += arr1[i];
     
    }
    printf("sum of array 1:%d\n", sum );
    sum=0;
    int max = arr2[0];
    int min = max;
     printf(" Array 2:\n");
      for(int i = 0 ; i < arr2Len  ; i++ ){
        printf(" %d\n",arr2[i]);
        sum += arr2[i];

        if(max < arr2[i]){
            max=arr2[i];

        }
        if(min > arr2[i]){
            min = arr2[i];
        }
    }
    printf("sum of array 2:%d\n", sum );
    printf("Max in array: %d\n", max);
     printf("Max in array: %d\n", min);
  



    return 0;
}