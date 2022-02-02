
#include <stdio.h>
#include <string.h>
 
void charFrequency(char *s){

    int Maxn;
    for (Maxn = 0; *(s+Maxn) != '\0'; Maxn++){
    }
    
    for(int i = 0; i <= Maxn; i++)  
    {
     	int freq=1;
        char *currCH = s + i;
    	if(*currCH){
		
 		    for(int currindex= i+1; currindex <= Maxn ;currindex++){
	    	
    	        if(*currCH == *(s + currindex)){
                    freq++;
                    *(s + currindex)='\0';
	     	    }
	        } 
	        printf("%c  %d\n", *currCH, freq);
       }
 	}

}

 
int main(void)
{
    char inputString[100];
 
    gets(inputString);
     
    charFrequency(inputString);
     
    return 0;
}

// =========Not my code========

void charFrequency(char *s)
{
	int i;
	int frequency[255] = { 0 };

	while (*s)
		++frequency[*s++];

	for (i = 0; i < 255; ++i)
		if (frequency[i])
			printf("%d - %c\n", frequency[i], i);
}


int main(void)
{
	char inputString[100];
	gets(inputString);

	charFrequency(inputString);
}