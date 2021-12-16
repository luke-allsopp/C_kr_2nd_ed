//example 1.7 - power function only for n >= 0 and smol

#include	<stdio.h>

//testing power function
int	main (void)
{
	int i;
	
	for (i = 0; i < 10; ++i)
		printf("%d %d %d\n", i, power(2,i),power(-3,i));
	
	return 0;
	
}

//power function; n >= 0
int power(int base, int n)
{
	int i, p;
	
	p = 1;
	for (i = 1; i <= n; ++i)
		p = p * base;
	return p;
}