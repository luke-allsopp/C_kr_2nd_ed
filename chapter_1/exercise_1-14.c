/*exercise 1-14
program to print a histogram of the frequency of characters in the input
*/

#include <stdio.h>

int main() 
{
	
	int i, c;
	i = c = 0;
	int freq[26];
	
	for(i = 0; i < 26; ++i)  //initializing the array?
		freq[i] = 0;
	
	while((c = getchar()) != EOF)  // taking input and counting the word length into the array
	{	
		if(c > 64 && c < 91)
		{
			++freq[c - 65];
		}
		else if (c > 96 && c < 123)
		{
			++freq[c - 97];
		}	
	}
	
	printf("the number of characters in input: \n");
	for (i = 0; i < 26; ++i) // loop to write histogram
		{
			printf("%c %4d ", (65 + i), freq[i]);
			while (freq[i] > 0) 
			{
				printf("*");
				--freq[i];
			}
			printf("\n");
		}

	return 0;
}