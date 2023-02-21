#include "main.h"
/* task 2 */

/**
 * use 2 putchar to print alphabet x10
 */
void print_alphabet_x10(void)
{
	char alpha10;
	int n = 0;

	while (n < 10)
	{
	for (alpha10 = 'a'; alpha10 <= 'z'; alpha10++)
	{
		_putchar(alpha10);
	}
	_putchar('\n');
	n++;
	}
}
