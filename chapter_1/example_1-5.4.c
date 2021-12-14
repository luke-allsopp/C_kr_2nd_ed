/*example 1.5.4
word counting (example of unix program wc)*/

#include <stdio.h>

#define IN  1 //inside a word
#define OUT 0 //outside a word

//count lines, words, and char in input
main()
{
    int c, nl, nw, nc, state;
    
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("lines:%d, words:%d, char:%d\n", nl, nw, nc);
    
}