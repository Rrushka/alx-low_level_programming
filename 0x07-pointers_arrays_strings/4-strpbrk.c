#include "main.h"

/* task 4 */

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: string
 * @accept: set of bytes 
 * Return: pointer to byte in s matching bytes in accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
	for (i = 0; accept[i] != '\0'; i++)
	{
	if (*s == accept[i])
		return (s);
	}
	s++;
	}
	return ('\0');
}
