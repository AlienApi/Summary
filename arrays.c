/* [EX-10] | Find Subarray (using pointers) */

#include <stdio.h>

int *subArray(int *a, int n1, int *b, int n2){
    int i, verified, *r;

    for (i = 0; i <= n1-n2; i++) // loop through the MainArr 
    {
        if (*(i+a) == *b){ // if the current index equals to the first index of the SubArr
            r = &i; 
            
            for (verified = 1; verified < n2; ++verified){
                if (*(verified+a+i) != *(verified+b)) break; // verification process...
            }
            if (verified == n2) return r; /* Checking whether the verification
                                            process was successful if so return indx. */
            verified = 1; // otherwise we reset & continue.
        }   
    }
    verified = -1; // SubArr not found!
    r = &verified;
    
    return r; 
}


int main(void){
    int MainLimit, SubLimit;

    /* Main-array */
    scanf("%d", &MainLimit);
    if (!(MainLimit < 40 && 0 < MainLimit)) return 0;

    int MainArr[MainLimit];
    for (int i = 0; i < MainLimit; i++){
        scanf("%d", &MainArr[i]);
    }

    /* Sub-array */
    scanf("%d", &SubLimit);
    if (!(0 < SubLimit && SubLimit < MainLimit)) return 0;

    int SubArr[SubLimit];
    for (int i = 0; i < SubLimit; i++){
        scanf("%d", &SubArr[i]);
    }

    int *index = subArray(MainArr, MainLimit, SubArr, SubLimit);
    printf("%d", *index);

    return 0;
}

#include <stdio.h>

int subArray( int a[], int n1, int b[], int n2){
    int nextIndex = 0, counter = 0;
    
    for (int currIndex = 0; currIndex < n1; currIndex++)
    {
        if (a[currIndex] == b[nextIndex]){
            counter = currIndex;
            int temp = currIndex;
            for (int i = 0; i < n2; i++, nextIndex++, temp++)
            {
                if (a[temp] != b[nextIndex])
                {
                    counter = -1;
                    nextIndex = 0;
                    break;
                }
            }
            if (counter != -1) return counter;
            counter = 0;
            
        }
    }
    
    return -1;

}

int main()
{
    int limit1, limit2;

    // First array
    scanf("%d", &limit1);
    if (!(limit1 < 40 && 0 < limit1)) return 0;

    int array1[limit1];
    for (int i = 0; i < limit1; i++) 
    {
        scanf("%d", &array1[i]);
    }
    
    // Second array
    scanf("%d", &limit2);
    if (!(0 < limit2 && limit2 < limit1)) return 0;

    int array2[limit2];
    for (int i = 0; i < limit2; i++) 
    {
        scanf("%d", &array2[i]);
    }

    int output = subArray(array1, limit1, array2, limit2);
    printf("%d", output);
    return 0;

}


