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

	if (size > 0)
	{
	for (l = 1; l == size; l++)
	{
		_putchar('#');
		_putchar('\n');
	}
	}
	_putchar('\n');
}
	
