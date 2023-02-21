#include "main.h"

/* task 9 */

/**
 * times_table - print 9x table
 */
void times_table(void)
{
	int x;
	int y;
	int z;

	for (n = 0; n <= 9; n++)
	{
		_putchar(48);
	
	for (y = 1; y <= 9; y++)
	{
		_putchar(',');
		_putchar(' ');
	}

	z = x * y;

	if (z <= 9)
	{
		_putchar(' ');
	}
	else
	{
		_putchar((z / 10) + 48);
		_putchar((z % 10) + 48);
	}
	_putchar('\n');
	}
}
