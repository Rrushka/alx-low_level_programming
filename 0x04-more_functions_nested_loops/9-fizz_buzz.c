#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/* task 9 */

/**
 * main -print numbers
 * 1-100 but not multiples of 3
 * Return:0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
	if ((n % 15) == 0)
	{
		printf("FizzBuzz");
	}
	else if ((n % 3) == 0)
	{
		printf("Fizz");
	}
	else if ((n % 5) == 0)
	{
		printf("Buzz");
	
	else
	{
		printf("%d", n);
	}
	if (n == 100)
	{
		continue;
	}
	printf(" ");
	}
	printf("\n");
	return (0);
}
