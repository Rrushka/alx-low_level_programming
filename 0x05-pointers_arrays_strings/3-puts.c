#include "main.h"

/* task 3 */

/**
 * _puts - prints a string
 * @str: string
 */
void _puts(char *str)
{
	do
	{
		_putchar(*str);
	}
	while(*str)
	{
		*str++;
	}
	_putchar('\n');
}
