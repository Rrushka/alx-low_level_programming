#include "main.h"

/* task 1 */

/**
 * print_alphabet - entry
 * print alphabet using only 2 putchar
 * Return: 0
 */
void print_alphabet(void)
{
	char aTOz;

	for (aTOz = 'a'; aTOz <= 'z'; aTOz++)
	{
		_putchar(aTOz);
	}
	_putchar('\n');
	return (0);
}
