#include "main.h"

/* task 6 */

/**
 * print_line - prints a line
 * @n: number of times '_' is printed
 * only _putchar to print
 * if n <= 0 print a new line (\n)
 */
void print_line(int n)
{
	int m = 0;

	if (n > 0)
	{
	while (m < n)
	{
		m++;
		_putchar('_');
	}
	}
	_putchar('\n');
}
