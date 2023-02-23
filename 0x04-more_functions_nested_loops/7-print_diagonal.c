#include "main.h"

/* task 6 */

/**
 * print_diagonal - prints a diagonal line across the screen
 * @n: the number of times \ is printed
 * end with a new line
 * if n < 0 just print \n
 * Return: 0
 */
void print_diagonal(int n)
{
	int space;

	if (n > 0)
	{
	for (space = 0; space < n; space++)
	{
		_putchar(' ');
	}
	_putchar('\\n');
	}
	_putchar('\n');
}
