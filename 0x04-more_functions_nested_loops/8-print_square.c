#include "main.h"

/* task 8 */

/**
 * print_square - prints a square
 * only use _putchar
 * @size: is the size of the square
 * size <= 0 print new line
 * use # to print square
 * Return: 0
 */
void print_square(int size)
{
	int l;
	int b;

	if (size > 0)
	{
	for (l = 0; l < size; l++)
	{
	for (b = 0; b < size; b++)
	{
		_putchar('#');
	}
	if (l == size - 1)
	{
		continue;
	}
	_putchar('\n');
	}
	}
	_putchar('\n');
}

