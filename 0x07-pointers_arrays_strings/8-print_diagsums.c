#include "main.h"
#include <stdio.h>

/* task 7 */

/**
 * print_diagsums - prints the sum of 2 diagonals of a square matrix
 * @a: matrix 
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diag1;
	int diag2;

	for (i = 0; i < size; i++)
	{
		diag1 = diag1 + a[i];
		a = a + size;
	}

	for (i = 0; i < size; i++)
	{
		diag2 = diag2 + a[i];
		a = a - size;
	}
	printf("%d, %d\n", diag1, diag2);
}
