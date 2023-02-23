#include "main.h"

/* task 3 */

/**
 * print_numbers - prints numbers from 0 to 9
 */
int print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		_putchar((n % 10) + 48);
	}
	_putchar('\n');
}
