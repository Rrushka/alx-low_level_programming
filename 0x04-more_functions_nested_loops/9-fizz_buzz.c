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

	for(n = 0; n <= 100; n++)
	{
	if ((n % 3) == 0)
	{
		printf("Fizz ");
	}
	else if ((n % 5) == 0)
	{
		printf("Buzz ");
	}
	else if ((n % 3) == 0 && (n % 5) == 0)
	{
		printf("FizzBuzz ");
	}
	else
		printf("%d ", n);
	}
}
