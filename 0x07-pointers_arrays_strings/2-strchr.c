#include "main.h"

/* task 2 */

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character of interest
 * Return: pointer to character or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
	if (s[i] == c)
		return(s);
	}
	return ('\0');
}
