#include "main.h"

/* task 5 */

/**
 * string_toupper - changes lower case letters in a string to upper case
 * @s: string
 * Return: s
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 32;
	}
	}
	return (s);
}
