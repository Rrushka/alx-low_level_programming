#include "main.h"

/* task 2 */

/**
 * _strncpy - copies a string
 * @dest: string 1
 * @src: string 2
 * @n: bytes copied from src
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int slength;

	slength = 0;
	while (src[i++])
	{
		slength++;
	}

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	for (i = slength; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
