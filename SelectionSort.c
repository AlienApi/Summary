// [EX-10] | Array Sort - (Selection Sort) 

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

int findMaxIndex(int arr[], int p, int lst){
    int store;
    int max = arr[store=p]; 
    while (++p <= lst){  
        
        if (max < arr[p]){ 
            max = arr[store=p]; 
        }
    }
   return store; 
}

void selectionSortDown(int arr[], int n){
    for (int i = 0; i < (n-1); ++i){ 
        int theNewMax = findMaxIndex(arr, i, n-1);
        swap(arr+i, arr+theNewMax);
    }
    displayArray(arr, n);
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
    
    selectionSortDown(array, limit);

    return 0;
}