#include "main.h"

/* task 7 */

/**
 * leet - encodes a string to 1337
 * @s: string
 * Return: s
 */
char *leet(char *s)
{
	int i;
	int j;
	char s2[8] = {'O', 'L', '2', 'E', 'A', '5', '6', 'T'};

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; j <= 7; j++)
	{
	if (s[i] == s2[j] || s[i] == s2[j] + 32)
		s[i] = ij + 48;
	}
	}
	return (s);
}
