#include <stdio.h>
#include <string.h>

void isCaps(char ch){

   printf("\nEnter The Character : ");
   scanf("%c", &ch);
 
   if (ch >= 'A' && ch <= 'Z')
      printf("Character is Upper Case Letters");
   else
      printf("Character is Not Upper Case Letters");
 

}

int sum_of_digit(int n)
{
    if (n == 0)
       return 0;
    return (n % 10 + sum_of_digit(n / 10));
}

int StringLength(char str[]){
   int i;
   for (i = 0; str[i] != '\0'; ++i);
   return i;
}

int strlen( char *s )
{
int l=0 ;
while (*s++)
   ++l;
return l;
}

int fibonacci(int n){
    int f;
    if (n <= 1) return n;
    f = fibonacci(n-2) + fibonacci(n-1);
    return f;
}


// void MirrorStr(char *string, char *mirror){

//    int l = strlen(string);

//    for (int i = l-1; 0 <= i; i--)
//    {
//       *mirror = *(string + i);
//       mirror = (mirror + 1);
//    }
// }


void reverseString(char* str)
{
    int l, i;
    char *begin_ptr, *end_ptr, ch;
  
    // Get the length of the string
    l = strlen(str);
  
    // Set the begin_ptr and end_ptr
    // initially to start of string
    begin_ptr = str;
    end_ptr = str;
  
    // Move the end_ptr to the last character
    for (i = 0; i < l - 1; i++)
        end_ptr++;
  
    // Swap the char from start and end
    // index using begin_ptr and end_ptr
    for (i = 0; i < l / 2; i++) {
  
        // swap character
        ch = *end_ptr;
        *end_ptr = *begin_ptr;
        *begin_ptr = ch;
  
        // update pointers positions
        begin_ptr++;
        end_ptr--;
    }
}

void MirrorStr(int *newArr, int *orgArr, int n){
   orgArr += n;
   while(n--){
      *newArr++ = *--orgArr;
   }
}


// Reverse an intger
int reversDigits(int num)
{
    int rev_num = 0;
    while (num > 0)
    {
        rev_num = rev_num*10 + num%10;
        num = num/10;
    }
    return rev_num;
}


// checks if 2 adjacent letters are duplicate ie programming => mm
int CountDup(char *s){
    int count = 0;
    
    while (*s != '\0')
    {
        count += (*s == *++s) ? 1 : 0;
    }
    
    return count;
}

// Returns t if palindrome
char isPalindromeInt(int a[], int n){
    int *fromStart = a; 

    if (n <= 0) return 'T';
    if (*fromStart != *(fromStart + n)) return 'F'; 

    isPalindromeInt(++fromStart, n-2);

}


// ===================================================
// Finds the longest word in a sentence 
int f(char *s)
{
int count = 0;
while (*s && *s++ != ' '){
        ++count;
}
return count;
}

void count(char *s){
    int longest = 0;
    while(*s != '\0'){

        if (*s != ' ')
        {
            int add = f(s);
            s = s+add;
            if (longest < add)
            {
                longest = add;
            }
        }
        ++s;
    }
    printf("%d\n", longest);
}
// =========================================================

// sum array recrusive
int sumArrayA(int a[], int n)
{
	if (n == 0)
		return 0;

	return a[0] + sumArray(a + 1, n - 1);
}

int sumArray(int a[], int n){
    --n;

    a[n-1] += a[n];
    if (n == 1) return a[n-1];

    sumArray(a, n);
}


// Reverse long
long reverse(long n) {
   static long r = 0;
   
   if (n == 0)
      return 0;
   
   r = r * 10;
   r = r + n % 10;
   reverse(n/10);
   return r;
}

int main(void){
   char s[] = "program";
   char r[] = { "\0" };

   printf("%s", r);

}

