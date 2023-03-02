#include "main.h"

/* task 0 */

/**
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int length;

	length = 0;

	while (dest[i++])
		length++;

	i = 0;

	while (src[i])
	{
		dest[length++] = src[i];
		i++;
	}
	return (dest);
}
