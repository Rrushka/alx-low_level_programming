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
	while (*dest != '\0')
		*dest++;

	while (*src != '\0')
	{
		*dest = *src;
		*dest++;
		*src++;
	}
	*dest = '\0';

	return (dest);
}
