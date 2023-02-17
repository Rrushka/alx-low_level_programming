#include <stdio.h>
#include <stdlib.h>
/* task 8 */

/**
 * main - start
 * print numbers and letters in hexadecimal
 * Return: 0
 */
int main(void)
{
	int n;
	char alpha;

	for (n = 0; n < 10; n++)
	{
		putchar(48 + n);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
