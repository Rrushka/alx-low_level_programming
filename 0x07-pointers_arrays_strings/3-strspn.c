#include "main.h"

/* task 3 */

/**
 * _strspn - get the length of a prefix substring
 * @s: string
 * @accept: prefix
 * Return: no. of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int x; /* number of bytes */

	x = 0;

	while (*s != '\0')
	{
	for (i = 0; accept[i] != '\0'; i++)
	{
	if (*s == accept[i])
	{
		x++;
		break;
	}
	else if (accept[i + 1] == '\0')
		return (x);
	}
	s++;
	}
	return (x);
}
