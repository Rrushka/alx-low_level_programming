#include "main.h"

/* task 5 */

/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	char rev[];
	char *s[];
	int s = 0;
	int e = 0;

	while (*s[e] != '\0')
	{
		e++;
	}
	while (e > 0)
	{
		rev[s] = *s[e - 1];
		e--;
		s++;
	}
	rev[s] = '\0';
}
