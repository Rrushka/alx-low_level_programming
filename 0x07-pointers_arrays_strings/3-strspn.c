#include "main.h"

/* task 3 */

/**
 * _strspn - get the length of a prefix substring
 * @s: string
 * @accept: prefix 
 * Return: no. of bytes
 */
unsigned int *_strspn(char *s, char *accept)
{
	int i;
	int byte;

	byte = 0;

	while (*s != '\0')
	{
	for (i = 0; accept[i] != '\0'; i++)
	{
	if (*s == accept[i])
	{
		byte++;
		break;
	}
	else if (accept[i + 1] == '\0')
		return (byte);
	}
	s++;
	}
	return (byte);
}
