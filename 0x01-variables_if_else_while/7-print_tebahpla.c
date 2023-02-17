#include <stdio.h>
#include <stdlib.h>
/*this is a comment for task 7 */

/**
 * main - start
 * print alphabet in reverse with putchar
 * Return: 0
 */
int main(void)
{
	char zTOa = 'z';

	while (zTOa >= 'a')
	{
		putchar(zTOa);
		zTOa--;
	}
	putchar('\n');
	return (0);
}
