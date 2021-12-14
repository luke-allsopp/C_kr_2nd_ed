/*exercise 1-10
-write input to output
- replace \t \b \\ for tabs, backspaces, backslashes.
*/

#include <stdio.h>
#define ESC_CHAR '\\'

int main()
{
    int c, j; //c to hold input, j to use as counter for tabs and shit
    
	while ((c = getchar()) != EOF) { //write input to c while input isnt eof
    
        j = 0;       //set counter to 0 at every loop, resetting after each special char looking for
        
		if (c == '\t') { 
			putchar(ESC_CHAR);
            putchar('t');
            j = 1;
		}
        
        if (c == '\b') { 
			putchar(ESC_CHAR); // this case is really fucking weird, no example i have seen actually writes the '\b'
            putchar('b');
            j = 1;
		}
        
        if (c == '\\') { 
			putchar(ESC_CHAR);
            putchar('\\');
            j = 1;
		}
        
        if ( j == 0) {
            putchar(c);
        }
    }    
}