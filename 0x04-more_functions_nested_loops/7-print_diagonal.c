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
	char slash = "\\";

	if (n > 0)
	{
	for (x = 0; x < n; x++)
	{
	for (y = 0; y < n; y++)
	{
	if (y == x)
	{
		_putchar(slash);
	}
	else
	{
		_putchar(' ');
	}
	}
	_putchar('\n');
	}
	}
}
