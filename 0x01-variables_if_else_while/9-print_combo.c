#include <stdio.h>
#include <stdlib.h>

/* this is task 9 */

/**
 * main - start
 * print all combinations of single digit numbers
 * 4 putchar maximum
 * separate numbers by , followed by space
 * print numbers in ascending order
 *Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(48 + n);
	if (n < 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}

