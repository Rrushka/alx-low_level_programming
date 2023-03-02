#include "main.h"

/* task 2 */

/**
 * _strncpy - copies a string
 * @dest: string 1
 * @src: string 2
 * @n: 
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int length = 0;

	while (src[i++] != '\0')
	{
		length++;
	}

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
	}

	for (i = length; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
