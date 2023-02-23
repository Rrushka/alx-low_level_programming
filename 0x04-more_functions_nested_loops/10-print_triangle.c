#include "main.h"

/* task 10 */

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int space;
	int x; /* this x represents the # */

	if (size > 0)
	{
	for (x = size; x <= size; x++)
	{
	for (space = size - x; space > 0; space--)
	{
		_putchar(' ');
	}
	for (space = 0; space < x; space++)
	{
		_putchar('#');
	}
	if (size == x)
	{
		continue;
	}
	_putchar('\n');
	}
	}
	_putchar('\n');
}
