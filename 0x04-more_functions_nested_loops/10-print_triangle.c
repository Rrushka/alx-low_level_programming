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
	int x;
	char h = '#';
	int y;

	if (size > 0)
	{
	for (x = 1; x <= size; x++)
	{
	for (space = size - x; space > 0; space--)
	{
		_putchar(' ');
	}
	for (y = 1; y <= x; y++)
	{
		_putchar(h);
	}
	}
	_putchar('\n');
	}
	_putchar('\n');
}
