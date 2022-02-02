// [EX-10] | Array Sort - (Bubble Sort) 

#include <string.h>
#include <stdio.h>

void swap( int *x, int *y ) {
    int t = *x ;
    *x = *y ;
    *y = t ;
}

void displayArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}


void bubbleSortDown(int arr[], int n){

    int i, len = n;
    while(n>1){
        for (i = 0; i < (n-1); i++)
        {
           if (arr[i] < arr[i+1]){
               swap(arr+i, arr+i+1);
           }
        }
    --n;
    }
    displayArray(arr, len);
}

int main(void){

    // Get array length
    int limit;
    scanf("%d",&limit);

    // Get the array itself
    int array[limit];

    for (int i = 0; i < limit; ++i){
        scanf("%d",&array[i]);
    }

    bubbleSortDown(array, limit);

    return 0;
}