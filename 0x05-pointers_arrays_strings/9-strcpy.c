#include "main.h"

/* task 9 */

/**
 * _strcpy - copies a string pointed to by * to dest
 * @src: string being referenced to
 * @dest: copy string to this 
 * Return: pointer to @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
