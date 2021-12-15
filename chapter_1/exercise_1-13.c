/*exercise 1-13
program to print a histogram of the lengths of words in the input
*/

#include <stdio.h>
#define	IN			1 	//inside a word
#define	OUT			0 	//outside a word
#define MAXWORDLEN	11	//maximum word length for simplicity, any larger words - chuck out.

int main() 
{
	
	int i, j, nw, state, c;
	int wordlen[MAXWORDLEN];
	state = IN;
	i = j = nw = c = 0;
	
	
	for(i = 0; i < MAXWORDLEN; ++i)  //initializing the array?
		wordlen[i] = 0;
	
	 while((c = getchar()) != EOF)  // taking input and counting the word length into the array
    {
      ++nw;

      if(c == ' ' || c == '\t' || c == '\n')
		{
		  state = OUT;
		  --nw;
		}

      if(state == OUT)
		{
		  if(nw != 0 && nw <= MAXWORDLEN)
			++wordlen[nw];
			  
		  state = IN;
		  nw = 0;
		}
    }
	
	for (i = 1; i < MAXWORDLEN; ++i) // loop to write histogram
		{
		  printf("%2d| ", i);
		  
		  for (j = 0; j < wordlen[i]; ++j)
			  putchar('*');

		  putchar('\n');
		}

	return 0;
}