#include "main.h"

/* task 4 */

/**
 * print_most_numbers - prints numbers from 0-9
 * dont print 2 and 4
 * putchar only twice
 * Return: 0
 */
int print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{	
	if (n != 2 && n != 4)
		_putchar(n + 48);
	}
	_putchar('\n');
	return (0);
}
