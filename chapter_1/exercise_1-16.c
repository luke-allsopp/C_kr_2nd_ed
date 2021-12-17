//exercise 1-16 - print longest line entered to input with correct long line printing

#include	<stdio.h>
#define		MAXLINE		1000//max lines in input
#define		MAXCHAR		98

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int	main ()
{
	int len, max;				//ints for current, max line length
	char line[MAXLINE];			//current input line
	char longest[MAXLINE];		//longest line save location
	
	max = 0;
	while ((len = get_line(line, MAXLINE)) > 0 )
		if (len > max)	{
			max = len;
			copy(longest, line);
		}
	if (max > 0)
		if (max > MAXCHAR)	{
			printf("\n\nStorage limit exceeded by : %d", max - MAXCHAR);
            printf("\nString length : %d", max);
            printf("\n%s", longest);
		}
		else
			printf("%s", longest);	//returns longest line if there was one only.
	
	printf("\n");
	return 0;
		
}

/*get_line function:
read a line into s, return its length
needed to be changed from getline to get_line as stdio.h defines a function getline already (2008)
*/
int get_line(char s[], int lim)
{
	int c, i;
	
	for (i = 0; i < lim -1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n')	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/*copy function: 
copy 'from' into 'to'; assume 'to' is big enough to hold*/
void copy(char to[], char from[])
{
	int i;
	
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}