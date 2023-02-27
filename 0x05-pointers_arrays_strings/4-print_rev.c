#include "main.h"

/* task 4 */

/**
 * print_rev - prints a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int i;
	int j;
	
	j = 0;

	while (s[i++])

		j++;

	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	
	}
	_putchar('\n');
}
