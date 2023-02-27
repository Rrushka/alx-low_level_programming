#include "main.h"

/* task 6 */

/**
 * puts2 - prints every character of a string followed by a new line
 * @str: string
 */
void puts2(char *str)
{
	int i;
	int j = 0;
	
	i = 0;
	while (str[i++])
	{
		j++;
	}
	for (i = 0; i < j; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

