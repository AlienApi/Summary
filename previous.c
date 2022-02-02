
#include <stdio.h>

// Pointers
// Recursion

// <type> fn_name(<type1> va1, <type2> var2, ...)

#define LEN 10

void inverseArray(int arr[], int n)
{
    if (n <= 1)
        return;

    int t = arr[0];
    arr[0] = arr[n - 1];
    arr[n - 1] = t;

    return inverseArray(arr + 1, n - 2);
}

int pascalValue(int line, int col)
{
    if (line == 1)
        return 1;
    if (col == 1)
        return 1;
    if (line == col)
        return 1;

    int val_1 = pascalValue(line - 1, col);
    int val_2 = pascalValue(line - 1, col - 1);

    return val_1 + val_2;
}

int *binary_search(int *left, int *right, int e)
{
    int *m;
    if (left > right)
        return NULL;

    // Note: this is the correct way to get the middle since ptr/2 is meaningless.
    //      C only allow to devide the difference between 2 pointers e.g.: (p-q)/2
    m = left + (right - left) / 2; // (left + right)/2

    // return *m == e ? m : binary_search(e < *m ? left : left = m + 1,   // left
    //                                    e > *m ? right : right = m - 1, // right
    //                                    e);

    // Simple fix: we do not assign valu to lft/right as we did above,
    //      just pass the relevant value to the function
    return *m == e ? m : binary_search(e < *m ? left : m + 1,  // left
                                       e > *m ? right : m - 1, // right
                                       e);
}

void fn(int *n)
{
    //..
    *n = 3;
    //..
}

//      ##*##
// .    #***#
//      *****

void fn1()
{
    for (int i = 0; i < LEN; i++)
    {
        // Note: j < LEN * 2 since this is two-sided triangle for 10 lines, we need 20 columns
        // If we wanted this kind:
        // *
        // * *
        // * * *
        // * * * *
        // We would use j < LEN
        for (int j = 0; j < LEN * 2; j++)
        {
            // Same here, at the begining we used LEN/2 but since,
            //      j is up to LEN *2, the middle is simply LEN
            printf("%c ", j > LEN - i && j < LEN + i ? '*' : ' ');
        }
        printf("\n");
    }
}

int main()
{
    int n = 0;

    // scanf("%d", &n);

    fn1();

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", pascalValue(i, j));
        }
        printf("\n");
    }

    return 0;
}