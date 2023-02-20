#include <stdio.h>
#include <stdlib.h>
/* task 12 of advanced tasks */

/**
 * main - entry
 * every possible combo of 2 digits in ascending order
 * Return: 0
 */
int main(void)
{
	int x, y;

	for (x = 0; x <= 98; x++)
	{
	for (y = x + 1; y <= 99; y++)
	{
		putchar(48 + (x / 10));
		putchar(48 + (x % 10));
		putchar(' ');
		putchar(48 + (y / 10));
		putchar(48 + (y % 10));
		putchar(',');
		putchar(' ');

		if (x == 98 && y == 99)
			continue;
	}
	}
	putchar('\n');
	return (0);
}
