#include "main.h"

/* task 1 */

/**
 * main - entry
 * print alphabet using only 2 putchar
 * Return: 0
 */
int main(void)
{
	char aTOz;

	for (aTOz = 'a'; aTOz <= 'z'; aTOz++)
	{
		_putchar(aTOz);
	}
	print_alphabet();
	_putchar('\n');
	return (0);
}
