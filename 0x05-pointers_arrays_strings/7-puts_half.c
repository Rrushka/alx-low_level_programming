#include "main.h"

/* task 7 */

/**
 * puts_half - prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int n; /* number of characters printed */
	int i; /* index of elements in the string */
	int j; /* the length of the string */

	i = 0;
	j = 0;

	while (str[i++])
	{
		j++;
	}
	if ((j % 2) == 0)
	{
		n = (j / 2);
	}
	else
	{
		n = (j - 1) / 2;
	}
	for (i = n; i < j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

