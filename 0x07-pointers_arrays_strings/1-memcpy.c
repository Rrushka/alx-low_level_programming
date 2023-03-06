#include "main.h"

/* task 1 */

/**
 * memcpy - copies memory area
 * @dest: pointer
 * @src: source
 * @n: no. of bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
