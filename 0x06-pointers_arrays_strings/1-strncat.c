#include "main.h"

/* task 1 */

/**
 * _strncat - concatenates 2 strings using n bytes from src
 * @dest: string 1
 * @src: string 2
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int length;

	length = 0;

	while (dest[i++])
	{
		length++;
	}

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[length++] = src[i];
		i++;
	}
	return (dest);
}
