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

	n = 0;
	
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';

	return (dest);
}
