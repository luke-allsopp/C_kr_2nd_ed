//example 1.8 - power function with call by value, only for n >= 0 and smol

#include	<stdio.h>

//testing power function
int	main (void)
{
	int i;
	
	for (i = 0; i < 10; ++i)
		printf("%d %d %d\n", i, power(2,i),power(-3,i));
	
	return 0;
	
}
//no i couter as before, use n instead, --n instead of ++i
int power(int base, int n)
{
	int p;
	
	for (p = 1; n > 0; --n)
		p = p * base;
	return p;
}