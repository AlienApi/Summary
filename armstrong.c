#include <stdio.h>

int digits(int n){
    int counter;
    for (counter= 0; n != 0; counter++)
    {
        n /= 10;
    }
    return counter;  
}

int power(int n, int e){

    if(n == 0) return 0;
    if(e == 0) return 1;

    int sum = 1;
    for (int i = 1; i <= e; i++)
    {
        sum *= n;
    }
    return sum;
}

int main(void){
    int input, e, sum;
    
    printf("Enter number> ");
    scanf("%d", &input);


    e = digits(input);
    int tempVar = input;


    do{
        int n = tempVar % 10;
        tempVar /= 10;
        sum += power(n, e);

    }while (tempVar != 0);


    (sum == input) ? printf("Armstrong") : printf("Not Armstrong");
    printf("\n");
    
    return 0;
}