#include <stdio.h>
#include <stdlib.h>
/* task 10 from advanced tasks */

/**
 * main -entry point
 * every combo of 2 digits but 10==01
 * Return: 0
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 9; x++)
	{
	for (y = x + 1; y < 10; y++)
	{
		putchar(48 + (x % 10));
		putchar(48 + (y % 10));
		putchar(',');
		putchar(' ');

		if (x == 8 && y == 9)
			continue;
	}
	}
	putchar('\n');
	return (0);
}
