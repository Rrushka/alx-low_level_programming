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
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (dest);
}
