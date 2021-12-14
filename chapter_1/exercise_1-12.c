/*exercise 1-12
print input into output 1 word per line
*/

#include <stdio.h>

#define IN  1 //inside a word
#define OUT 0 //outside a word

//count lines, words, and char in input
int main()
{
    char c;
    int state;
    
    state =  IN;

    while ((c = getchar()) != EOF) {
        
        if (c == ' ' || c == '\t' ||c == '\n'){
            state = OUT;
        }
        if (state == OUT){
            state = IN;
            putchar('\n');
        }
        else if (state = IN){
            putchar(c);
        }
    }
    printf("%d\n", c);
    
    return 0;
}