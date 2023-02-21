#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/* task 11 */

/**
 * print_to_98 - print numbers from n to 98
 * n - start counting from this number
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("%d\n", n);
	}
	else
	{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	printf("%d\n", n);
	}
}
