#include "main.h"

/* task 2 */

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int strLength;

	strLength = 0;

	while (*s++)
	{
		strLength++;
	}
	return (strLength);
}
