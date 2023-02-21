#include "main.h"

/* task 5 */

/**
 * print_sign - start
 * n: number
 * print + - or 0 depending on sign of a number
 * Return: -1 1 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
