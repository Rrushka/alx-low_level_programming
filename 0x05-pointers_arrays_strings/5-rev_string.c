#include "main.h"

/* task 5 */

/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	char rev;
	int i = 0;
	int j = 0;

	while (s[i++])
	{
		j++;
	}
	for (i = j - 1; i >= j / 2; i--)
	{
		rev = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = rev;
	}
}
