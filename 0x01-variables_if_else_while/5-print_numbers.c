#include <stdio.h>
#include <stdlib.h>

/* task 5 - print numbers */

/**
 * main - start
 * print single digit numbers of base 10 starting at 0 followed by new line
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d\n", n);
	}
	return (0);
}
