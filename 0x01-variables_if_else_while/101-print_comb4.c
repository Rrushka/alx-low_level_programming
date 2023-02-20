#include <stdio.h>
#include <stdlib.h>
/* task 11 of advanced tasks */

/**
 * main - entry point
 * combination of 3 digits
 * Return: 0
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x < 8; x++)
	{
	for (y = x + 1; y < 9; y++)
	{
	for (z = y + 1; y < 10; y++)
	{
		putchar(48 + (x % 10));
		putchar(48 + (y % 10));
		putchar(48 + (z % 10));

		if (x == 7 && y == 8 && z == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}

