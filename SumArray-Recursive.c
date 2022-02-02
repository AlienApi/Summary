// [EX-11] | Array Sum (using recursive)

#include <stdio.h>


int sumArray(int a[], int n){
    --n;

    a[n-1] += a[n];
    if (n == 1) return a[n-1];

    sumArray(a, n);
}

int main(void){

    int length;
    scanf("%d", &length);
    if (length < 0 || 20 < length) return 0;

    int array[length];
    for (int i = 0; i < length; ++i){
        scanf("%d", &array[i]);
    }
    

    printf("%d",sumArray(array, length));

    return 0;
}