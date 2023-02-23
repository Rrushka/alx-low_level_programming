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
	int space;
	int x;

	if (n > 0)
	{
	for (x = 0; x < n; x++)
	{
	for (space = 0; space < n; space++)
	{
		_putchar(' ');
		_putchar('\\');
	}
	if (x == n - 1)
	{
		continue;
	}
	_putchar('\n');
	}
	}
}
