//exercise 1-15 - example 1-2 using a function

#include	<stdio.h>

//celsius to fahrenheit function
float ctf(float c)
{
	float f;
	f = (c * 1.8) + 32.0;
	return f;
}

int	main (void)
{
	double i;
	
	printf("  C || F\n");
	for (i = -40.0; i <= 300.0; i+=10.0)
		printf("%3.0f || %6.1f\n", i, ctf(i));
	
	return 0;
	
}

