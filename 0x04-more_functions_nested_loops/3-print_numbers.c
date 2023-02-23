#include "main.h"

/* task 3 */

/**
 * print_numbers - prints numbers from 0 to 9
 * Return: 0
 */
int print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(n + 48);
	}
	_putchar('\n');
	return (0);
}
