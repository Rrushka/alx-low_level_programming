#include "main.h"

/* task 0 */

/**
 * meset - fills memory with a constant byte
 * @s: pointer
 * @b: character
 * @n: no. of bytes
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0, i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
