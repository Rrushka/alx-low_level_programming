#include "main.h"

/* task 8 */

/**
 * jack_bauer - start
 * print every minute of the day of jack bauer
 */
void jack_bauer(void)
{
	int h;
	int min;

	for (h = 0; h <= 23; h++)
	{
	for (min = 0; min <= 59; min++)
	{
		_putchar((h / 10) + 48);
		_putchar((h % 10) + 48);
		_putchar(':');
		_putchar((min / 10) + 48);
		_putchar((min % 10) + 48);
		_putchar('\n');
	}
	}
}
