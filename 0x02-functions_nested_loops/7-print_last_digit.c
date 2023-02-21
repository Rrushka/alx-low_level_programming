#include "main.h"

/* task 7 */

/**
 * print_last_digit - start
 * last: the last digit
 * print absolute value of an integer
 * Return: 0
 */
int print_last_digit(int last)
{
	int n;
	last = n % 10;

	if (last < 0)
	{
		last *= -1;
	}
	_putchar(48 + last);
	return (last);
}
