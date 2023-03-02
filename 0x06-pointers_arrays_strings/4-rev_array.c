#include "main.h"

/* task 4 */

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements being reversed
 */
void reverse_array(int *a, int n)
{
	int i;
	int store;

	for (i = n - 1; i >= (n / 2); i--)
	{
		store = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = store;
	}
}
