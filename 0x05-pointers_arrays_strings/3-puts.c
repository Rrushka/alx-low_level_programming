#include "main.h"

/* task 3 */

/**
 * _puts - prints a string
 * @str: string
 */
void _puts(char *str)
{
	while (str)

		_putchar(str++);

	_putchar('\n');
}
