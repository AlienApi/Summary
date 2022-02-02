// [EX-10] | Array Sort - (Insertion Sort)  

#include <string.h>
#include <stdio.h>

void displayArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}
void shiftArray(int *s, int *e){
    for ( ; s <= e; e--){
        *(e+1) = *e;
    }
}

int findInsPoint(int arr[], int t, int p){
    for (int i = 0; i <= p; i++){
        if (t > arr[i]){
            return i;
        }
    }
    return p+1;
}


void insertionSortDown(int arr[], int n){
    for (int p = 0; p < (n-1); p++)
    {
        int temp = arr[p+1];
        int Insertion = findInsPoint(arr, temp, p);
        shiftArray(arr + Insertion, arr + p);
        arr[Insertion] = temp;
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

    insertionSortDown(array, limit);

    return 0;
}