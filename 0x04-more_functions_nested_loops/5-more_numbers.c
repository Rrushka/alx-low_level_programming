#include "main.h"

/* task 5 */

/**
 * more_numbers - print numbers from 0-14 x10
 * use _putchar 3 times
 */
void more_numbers(void)
{
	int r;
	int c;

	for (r = 0; r < 10; r++)
	{
	for (c = 0; c < 15; c++)
	{
	if (c > 9)
	{
		_putchar((c / 10) + 48);
		_putchar((c % 10) + 48);
	}
	}
	_putchar('\n');
	}
}
