#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/* task 8 */

/**
 * print_array - prints n elements of an array
 * @a: array
 * @n: number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

	if (i == n - 1)
	{
		break;
	}
	printf(", ");
	}
	printf("\n");
}
