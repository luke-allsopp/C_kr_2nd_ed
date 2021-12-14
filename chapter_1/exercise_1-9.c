/*exercise 1-9
-write input to output
- replace multiple spaces in input with single space
*/

#include <stdio.h>

int main()
{
    char c, pc;

	pc = 0;
	while ((c = getchar()) != EOF)
        
	/* output c if it's not a blank OR if the previous c is not a blank */

		if (c != ' ' || pc != ' ') { 
			putchar(c);
			pc = c;
		}
}