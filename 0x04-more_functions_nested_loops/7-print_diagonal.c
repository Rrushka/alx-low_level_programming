#include "main.h"

/* task 7 */

/**
 * print_diagonal - prints a diagonal line across the screen
 * @n: the number of times \ is printed
 * end with a new line
 * if n < 0 just print \n
 */
void print_diagonal(int n)
{
	int x;
	int y;
	char slash = '\\';

	if (n > 0)
	{
	for (y = 0; y < n; y++)
	{
	for (x = 0; x < y; x++)
	{
		_putchar(' ');
		_putchar(slash);
	}
	if (y == n - 1)
	{
		continue;
	}
	_putchar('\n');
	}
	}
	_putchar('\n');
}
